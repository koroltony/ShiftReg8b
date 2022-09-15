module FFregisterff (input wire a, clk, res, output reg qout);
    always @(posedge clk or posedge res) begin
        if (res == 1'b1)
            qout<=1'b0;
        else 
            qout <=a;
    end
endmodule

module FFregister (input a, clk, res, output reg qout, output reg [7:0] outbit);
    wire [6:0] qin;
    //series out after 8 clock cycles
    FFregisterff bit1 (.a(a), .clk(clk), .res(res), .qout(qin[0]));
    FFregisterff bit2 (.a(qin[0]), .clk(clk), .res(res), .qout(qin[1]));
    FFregisterff bit3 (.a(qin[1]), .clk(clk), .res(res), .qout(qin[2]));
    FFregisterff bit4 (.a(qin[2]), .clk(clk), .res(res), .qout(qin[3]));
    FFregisterff bit5 (.a(qin[3]), .clk(clk), .res(res), .qout(qin[4]));
    FFregisterff bit6 (.a(qin[4]), .clk(clk), .res(res), .qout(qin[5]));
    FFregisterff bit7 (.a(qin[5]), .clk(clk), .res(res), .qout(qin[6]));
    FFregisterff bit8 (.a(qin[6]), .clk(clk), .res(res), .qout(qout));
    //parallel out
    always @(qout) begin
        outbit[0] = qin[0];
        outbit[1] = qin[1];
        outbit[2] = qin[2];
        outbit[3] = qin[3];
        outbit[4] = qin[4];
        outbit[5] = qin[5];
        outbit[6] = qin[6];
        outbit[7] = qout;
    end
endmodule 
