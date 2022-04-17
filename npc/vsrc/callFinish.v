import "DPI-C" function int finish();

module callFinish(
	input clk,
	input rst,
	input wire[3:0] call_Finish
);

always @(*) begin
	if(call_Finish == 4'b1110)
		finish();
end

endmodule
