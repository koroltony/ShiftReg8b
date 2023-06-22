#include "FFregister.h"
#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <stdio.h>


//Cpp testbench for verilator

FFregister *top = NULL;
vluint64_t main_time = 0;

double sc_time_stamp () {
    return main_time;
}

int main(int argc, char** argv, char** env){
    top = new FFregister;

    //Code to create .vcd waveform

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    top->trace(m_trace, 5);
    m_trace->open("FFregister.vcd");

    top->clk = 0;
    top->a = 0;
    top->res = 0;
    top->dir = 0;

    printf("  time clock a dir res qout outbit\r\n");

//simple testbench input

while (!Verilated::gotFinish()){
    //set clock frequency as needed
    top->clk = main_time % 2;
    if (main_time == 23){
        top->res = 1; 
    }
    else if (main_time < 15){
        top->a = 1;
        top->res = 0;
        top->dir = 1;
    }
    else if (main_time < 30){
        top->a = 0;
        top->res = 0;
        top->dir = 0;
    }
    else {
        top->a = 0;
    }

    top->eval();
    m_trace->dump(main_time);

    //output printed results as needed 

    printf("%5ld   %d    %d  %d   %d   %d   %3d\r\n",main_time,top->clk,top->a,top->dir,top->res,top->qout,top->outbit);

    if (main_time >= 30){
        break;
    }
        main_time++;
}
    m_trace->close();
    delete top;
    exit(0);
}