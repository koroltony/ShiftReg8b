/* verilator lint_off DECLFILENAME */

//d flip flop module (not top, so need the lint_off DECLFILENAME wrapper)
module FFregisterff (input wire a, clk, res, output reg qout);
    always @(posedge clk or posedge res) begin
        if (res == 1'b1)
            qout<=1'b0;
        else 
            qout <=a;
    end
endmodule

//top module, 8 bit bidirectional SIPO shift register
module FFregister (input a, clk, res, input dir, output reg qout, output reg [7:0] outbit);

  reg [7:0] qin = 8'b0;

  always @(posedge clk or posedge res) begin
    if (res)
      qin <= 8'b0;
    else begin
      if (dir) begin // Right shift
        qin <= {qin[6:0], a};
        qout <= qin[7];
      end else begin // Left shift
        qin <= {a, qin[7:1]};
        qout <= qin[0];
      end
    end
  end

  always @(qin) begin
    outbit = qin;
  end

endmodule 

/* verilator lint_on DECLFILENAME */
