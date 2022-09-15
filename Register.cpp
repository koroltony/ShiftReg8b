#include "FFregister.h"
#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <stdio.h>

FFregister *top = NULL;
vluint64_t main_time = 0;

double sc_time_stamp () {
    return main_time;
}

int main(int argc, char** argv, char** env){
    top = new FFregister;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    top->trace(m_trace, 5);
    m_trace->open("FFregister.vcd");

    top->clk = 0;
    top->a = 0;
    top->res = 0;

    printf("  time clock a res qout outbit\r\n");


while (!Verilated::gotFinish()){
    top->clk = main_time % 2;
    if ((main_time == 1)||(main_time==17)){
        top->a = 1;
        top->res = 0;
    }
    //checks asynchronous reset
    else if ((main_time==12)){
        top->res = 1;
    }
    else {
        top->a = 0;
    }
    top->eval();
    m_trace->dump(main_time);
//if outbit multiplies by 2 each cycle, the shift register is working correctly
    printf("%5ld   %d    %d  %d   %d   %3d\r\n",main_time,top->clk,top->a,top->res,top->qout,top->outbit);

    if (main_time >= 32){
        break;
    }
        main_time++;
}
    m_trace->close();
    delete top;
    exit(0);
}