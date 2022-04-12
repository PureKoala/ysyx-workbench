import "DPI-C" function void finish();

module callFinish(
	input clk,
	input rst,
	input wire[3:0] call_Finish
);
reg[3:0] call;
always @(posedge clk) begin
	if (rst == 1'b1)
		call <= call_Finish;
	else if(call_Finish == 4'b1110)
		finish();
end

endmodule

module IF_STAGE(
  input         clock,
  input         reset,
  output [31:0] io_InstAddr,
  input         io_ExtoIf_jumpSym,
  input  [63:0] io_ExtoIf_jumpAddr
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc; // @[IF_STAGE.scala 16:19]
  wire [31:0] _T_1 = pc + 32'h4; // @[IF_STAGE.scala 17:21]
  wire [63:0] _T_2 = io_ExtoIf_jumpSym ? io_ExtoIf_jumpAddr : {{32'd0}, _T_1}; // @[Mux.scala 98:16]
  assign io_InstAddr = pc; // @[IF_STAGE.scala 21:15]
  always @(posedge clock) begin
    if (reset) begin // @[IF_STAGE.scala 16:19]
      pc <= 32'h80000000; // @[IF_STAGE.scala 16:19]
    end else begin
      pc <= _T_2[31:0]; // @[IF_STAGE.scala 17:6]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc = _RAND_0[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Id_Stage(
  input  [31:0] io_inst,
  input  [31:0] io_inst_addr,
  output [4:0]  io_reg_read_rs1_addr,
  input  [63:0] io_reg_read_rs1_data,
  output [4:0]  io_reg_read_rs2_addr,
  input  [63:0] io_reg_read_rs2_data,
  output [3:0]  io_toEx_alu_op,
  output        io_toEx_withW,
  output        io_toEx_mem_wr,
  output        io_toEx_mem_rd,
  output        io_toEx_reg_wr,
  output [2:0]  io_toEx_mask_type,
  output [63:0] io_toEx_mem_data,
  output [4:0]  io_toEx_rd_o,
  output [2:0]  io_toEx_cmp_op,
  output [63:0] io_toEx_cmp_op1,
  output [63:0] io_toEx_cmp_op2,
  output [63:0] io_toEx_op1,
  output [63:0] io_toEx_op2,
  output [31:0] io_toEx_inst_addr,
  output [3:0]  io_aluop
);
  wire [4:0] rd = io_inst[11:7]; // @[Id_Stage.scala 43:19]
  wire [11:0] imm_itype = io_inst[31:20]; // @[Id_Stage.scala 47:26]
  wire [19:0] imm_utype = io_inst[31:12]; // @[Id_Stage.scala 48:26]
  wire  hi_hi = io_inst[31]; // @[Id_Stage.scala 49:30]
  wire  hi_lo = io_inst[7]; // @[Id_Stage.scala 49:42]
  wire [5:0] lo_hi = io_inst[30:25]; // @[Id_Stage.scala 49:53]
  wire [3:0] lo_lo = io_inst[11:8]; // @[Id_Stage.scala 49:68]
  wire [11:0] imm_btype = {hi_hi,hi_lo,lo_hi,lo_lo}; // @[Cat.scala 30:58]
  wire [6:0] hi_1 = io_inst[31:25]; // @[Id_Stage.scala 50:30]
  wire [11:0] imm_stype = {hi_1,rd}; // @[Cat.scala 30:58]
  wire [7:0] hi_lo_1 = io_inst[19:12]; // @[Id_Stage.scala 51:42]
  wire  lo_hi_1 = io_inst[20]; // @[Id_Stage.scala 51:57]
  wire [9:0] lo_lo_1 = io_inst[30:21]; // @[Id_Stage.scala 51:69]
  wire [31:0] hi_hi_2 = imm_utype[11] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] imm_utype_sext = {hi_hi_2,imm_utype,12'h0}; // @[Cat.scala 30:58]
  wire [39:0] hi_4 = {hi_hi,hi_lo_1,lo_hi_1,lo_lo_1,hi_hi,hi_lo_1,lo_hi_1,lo_lo_1}; // @[Cat.scala 30:58]
  wire [79:0] hi_hi_3 = {hi_hi,hi_lo_1,lo_hi_1,lo_lo_1,hi_hi,hi_lo_1,lo_hi_1,lo_lo_1,hi_4}; // @[Cat.scala 30:58]
  wire [159:0] hi_lo_2 = {hi_hi,hi_lo_1,lo_hi_1,lo_lo_1,hi_hi,hi_lo_1,lo_hi_1,lo_lo_1,hi_4,hi_hi_3}; // @[Cat.scala 30:58]
  wire [239:0] hi_6 = {hi_hi,hi_lo_1,lo_hi_1,lo_lo_1,hi_hi,hi_lo_1,lo_hi_1,lo_lo_1,hi_4,hi_lo_2}; // @[Cat.scala 30:58]
  wire [900:0] imm_jtype_sext = {hi_6,hi_lo_2,hi_lo_2,hi_lo_2,hi_lo_2,hi_hi,hi_lo_1,lo_hi_1,lo_lo_1,1'h0}; // @[Cat.scala 30:58]
  wire [51:0] hi_8 = imm_itype[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 72:12]
  wire [63:0] imm_itype_sext = {hi_8,imm_itype}; // @[Cat.scala 30:58]
  wire [50:0] hi_hi_5 = imm_btype[11] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 72:12]
  wire [63:0] imm_btype_sext = {hi_hi_5,hi_hi,hi_lo,lo_hi,lo_lo,1'h0}; // @[Cat.scala 30:58]
  wire [51:0] hi_10 = imm_stype[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 72:12]
  wire [63:0] imm_stype_sext = {hi_10,hi_1,rd}; // @[Cat.scala 30:58]
  wire [31:0] _T_8 = io_inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _T_9 = 32'h13 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_11 = 32'h7013 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_13 = 32'h6013 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_15 = 32'h4013 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_17 = 32'h2013 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_19 = 32'h3013 == _T_8; // @[Lookup.scala 31:38]
  wire [31:0] _T_20 = io_inst & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _T_21 = 32'h1013 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_23 = 32'h5013 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_25 = 32'h40005013 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_27 = 32'h1b == _T_8; // @[Lookup.scala 31:38]
  wire [31:0] _T_28 = io_inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _T_29 = 32'h101b == _T_28; // @[Lookup.scala 31:38]
  wire  _T_31 = 32'h501b == _T_28; // @[Lookup.scala 31:38]
  wire  _T_33 = 32'h4000501b == _T_28; // @[Lookup.scala 31:38]
  wire  _T_35 = 32'h33 == _T_28; // @[Lookup.scala 31:38]
  wire  _T_37 = 32'h40000033 == _T_28; // @[Lookup.scala 31:38]
  wire  _T_39 = 32'h7033 == _T_28; // @[Lookup.scala 31:38]
  wire  _T_41 = 32'h6033 == _T_28; // @[Lookup.scala 31:38]
  wire  _T_43 = 32'h4033 == _T_28; // @[Lookup.scala 31:38]
  wire  _T_45 = 32'h2033 == _T_28; // @[Lookup.scala 31:38]
  wire  _T_47 = 32'h3033 == _T_28; // @[Lookup.scala 31:38]
  wire  _T_49 = 32'h1033 == _T_28; // @[Lookup.scala 31:38]
  wire  _T_51 = 32'h5033 == _T_28; // @[Lookup.scala 31:38]
  wire  _T_53 = 32'h40005033 == _T_28; // @[Lookup.scala 31:38]
  wire  _T_55 = 32'h3b == _T_28; // @[Lookup.scala 31:38]
  wire  _T_57 = 32'h4000003b == _T_28; // @[Lookup.scala 31:38]
  wire  _T_59 = 32'h103b == _T_28; // @[Lookup.scala 31:38]
  wire  _T_61 = 32'h503b == _T_28; // @[Lookup.scala 31:38]
  wire  _T_63 = 32'h4000503b == _T_28; // @[Lookup.scala 31:38]
  wire  _T_65 = 32'h3 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_67 = 32'h1003 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_69 = 32'h2003 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_71 = 32'h3003 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_73 = 32'h4003 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_75 = 32'h5003 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_77 = 32'h6003 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_79 = 32'h23 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_81 = 32'h1023 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_83 = 32'h2023 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_85 = 32'h3023 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_87 = 32'h63 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_89 = 32'h1063 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_91 = 32'h5063 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_93 = 32'h7063 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_95 = 32'h4063 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_97 = 32'h6063 == _T_8; // @[Lookup.scala 31:38]
  wire [31:0] _T_98 = io_inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _T_99 = 32'h6f == _T_98; // @[Lookup.scala 31:38]
  wire  _T_101 = 32'h67 == _T_8; // @[Lookup.scala 31:38]
  wire  _T_103 = 32'h17 == _T_98; // @[Lookup.scala 31:38]
  wire  _T_105 = 32'h37 == _T_98; // @[Lookup.scala 31:38]
  wire  _T_107 = 32'h100073 == io_inst; // @[Lookup.scala 31:38]
  wire [3:0] _T_108 = _T_107 ? 4'he : 4'h0; // @[Lookup.scala 33:37]
  wire [3:0] _T_109 = _T_105 ? 4'ha : _T_108; // @[Lookup.scala 33:37]
  wire [3:0] _T_110 = _T_103 ? 4'h0 : _T_109; // @[Lookup.scala 33:37]
  wire [3:0] _T_111 = _T_101 ? 4'hd : _T_110; // @[Lookup.scala 33:37]
  wire [3:0] _T_112 = _T_99 ? 4'hc : _T_111; // @[Lookup.scala 33:37]
  wire [3:0] _T_113 = _T_97 ? 4'h0 : _T_112; // @[Lookup.scala 33:37]
  wire [3:0] _T_114 = _T_95 ? 4'h0 : _T_113; // @[Lookup.scala 33:37]
  wire [3:0] _T_115 = _T_93 ? 4'h0 : _T_114; // @[Lookup.scala 33:37]
  wire [3:0] _T_116 = _T_91 ? 4'h0 : _T_115; // @[Lookup.scala 33:37]
  wire [3:0] _T_117 = _T_89 ? 4'h0 : _T_116; // @[Lookup.scala 33:37]
  wire [3:0] _T_118 = _T_87 ? 4'h0 : _T_117; // @[Lookup.scala 33:37]
  wire [3:0] _T_119 = _T_85 ? 4'h0 : _T_118; // @[Lookup.scala 33:37]
  wire [3:0] _T_120 = _T_83 ? 4'h0 : _T_119; // @[Lookup.scala 33:37]
  wire [3:0] _T_121 = _T_81 ? 4'h0 : _T_120; // @[Lookup.scala 33:37]
  wire [3:0] _T_122 = _T_79 ? 4'h0 : _T_121; // @[Lookup.scala 33:37]
  wire [3:0] _T_123 = _T_77 ? 4'h0 : _T_122; // @[Lookup.scala 33:37]
  wire [3:0] _T_124 = _T_75 ? 4'h0 : _T_123; // @[Lookup.scala 33:37]
  wire [3:0] _T_125 = _T_73 ? 4'h0 : _T_124; // @[Lookup.scala 33:37]
  wire [3:0] _T_126 = _T_71 ? 4'h0 : _T_125; // @[Lookup.scala 33:37]
  wire [3:0] _T_127 = _T_69 ? 4'h0 : _T_126; // @[Lookup.scala 33:37]
  wire [3:0] _T_128 = _T_67 ? 4'h0 : _T_127; // @[Lookup.scala 33:37]
  wire [3:0] _T_129 = _T_65 ? 4'h0 : _T_128; // @[Lookup.scala 33:37]
  wire [3:0] _T_130 = _T_63 ? 4'h4 : _T_129; // @[Lookup.scala 33:37]
  wire [3:0] _T_131 = _T_61 ? 4'h3 : _T_130; // @[Lookup.scala 33:37]
  wire [3:0] _T_132 = _T_59 ? 4'h2 : _T_131; // @[Lookup.scala 33:37]
  wire [3:0] _T_133 = _T_57 ? 4'h1 : _T_132; // @[Lookup.scala 33:37]
  wire [3:0] _T_134 = _T_55 ? 4'h0 : _T_133; // @[Lookup.scala 33:37]
  wire [3:0] _T_135 = _T_53 ? 4'h4 : _T_134; // @[Lookup.scala 33:37]
  wire [3:0] _T_136 = _T_51 ? 4'h3 : _T_135; // @[Lookup.scala 33:37]
  wire [3:0] _T_137 = _T_49 ? 4'h2 : _T_136; // @[Lookup.scala 33:37]
  wire [3:0] _T_138 = _T_47 ? 4'h9 : _T_137; // @[Lookup.scala 33:37]
  wire [3:0] _T_139 = _T_45 ? 4'h8 : _T_138; // @[Lookup.scala 33:37]
  wire [3:0] _T_140 = _T_43 ? 4'h7 : _T_139; // @[Lookup.scala 33:37]
  wire [3:0] _T_141 = _T_41 ? 4'h6 : _T_140; // @[Lookup.scala 33:37]
  wire [3:0] _T_142 = _T_39 ? 4'h5 : _T_141; // @[Lookup.scala 33:37]
  wire [3:0] _T_143 = _T_37 ? 4'h1 : _T_142; // @[Lookup.scala 33:37]
  wire [3:0] _T_144 = _T_35 ? 4'h0 : _T_143; // @[Lookup.scala 33:37]
  wire [3:0] _T_145 = _T_33 ? 4'h4 : _T_144; // @[Lookup.scala 33:37]
  wire [3:0] _T_146 = _T_31 ? 4'h3 : _T_145; // @[Lookup.scala 33:37]
  wire [3:0] _T_147 = _T_29 ? 4'h2 : _T_146; // @[Lookup.scala 33:37]
  wire [3:0] _T_148 = _T_27 ? 4'h0 : _T_147; // @[Lookup.scala 33:37]
  wire [3:0] _T_149 = _T_25 ? 4'h4 : _T_148; // @[Lookup.scala 33:37]
  wire [3:0] _T_150 = _T_23 ? 4'h3 : _T_149; // @[Lookup.scala 33:37]
  wire [3:0] _T_151 = _T_21 ? 4'h2 : _T_150; // @[Lookup.scala 33:37]
  wire [3:0] _T_152 = _T_19 ? 4'h9 : _T_151; // @[Lookup.scala 33:37]
  wire [3:0] _T_153 = _T_17 ? 4'h8 : _T_152; // @[Lookup.scala 33:37]
  wire [3:0] _T_154 = _T_15 ? 4'h7 : _T_153; // @[Lookup.scala 33:37]
  wire [3:0] _T_155 = _T_13 ? 4'h6 : _T_154; // @[Lookup.scala 33:37]
  wire [3:0] _T_156 = _T_11 ? 4'h5 : _T_155; // @[Lookup.scala 33:37]
  wire  _T_179 = _T_63 ? 1'h0 : _T_65 | (_T_67 | (_T_69 | (_T_71 | (_T_73 | (_T_75 | _T_77))))); // @[Lookup.scala 33:37]
  wire  _T_180 = _T_61 ? 1'h0 : _T_179; // @[Lookup.scala 33:37]
  wire  _T_181 = _T_59 ? 1'h0 : _T_180; // @[Lookup.scala 33:37]
  wire  _T_182 = _T_57 ? 1'h0 : _T_181; // @[Lookup.scala 33:37]
  wire  _T_183 = _T_55 ? 1'h0 : _T_182; // @[Lookup.scala 33:37]
  wire  _T_184 = _T_53 ? 1'h0 : _T_183; // @[Lookup.scala 33:37]
  wire  _T_185 = _T_51 ? 1'h0 : _T_184; // @[Lookup.scala 33:37]
  wire  _T_186 = _T_49 ? 1'h0 : _T_185; // @[Lookup.scala 33:37]
  wire  _T_187 = _T_47 ? 1'h0 : _T_186; // @[Lookup.scala 33:37]
  wire  _T_188 = _T_45 ? 1'h0 : _T_187; // @[Lookup.scala 33:37]
  wire  _T_189 = _T_43 ? 1'h0 : _T_188; // @[Lookup.scala 33:37]
  wire  _T_190 = _T_41 ? 1'h0 : _T_189; // @[Lookup.scala 33:37]
  wire  _T_191 = _T_39 ? 1'h0 : _T_190; // @[Lookup.scala 33:37]
  wire  _T_192 = _T_37 ? 1'h0 : _T_191; // @[Lookup.scala 33:37]
  wire  _T_193 = _T_35 ? 1'h0 : _T_192; // @[Lookup.scala 33:37]
  wire  _T_194 = _T_33 ? 1'h0 : _T_193; // @[Lookup.scala 33:37]
  wire  _T_195 = _T_31 ? 1'h0 : _T_194; // @[Lookup.scala 33:37]
  wire  _T_196 = _T_29 ? 1'h0 : _T_195; // @[Lookup.scala 33:37]
  wire  _T_197 = _T_27 ? 1'h0 : _T_196; // @[Lookup.scala 33:37]
  wire  _T_198 = _T_25 ? 1'h0 : _T_197; // @[Lookup.scala 33:37]
  wire  _T_199 = _T_23 ? 1'h0 : _T_198; // @[Lookup.scala 33:37]
  wire  _T_200 = _T_21 ? 1'h0 : _T_199; // @[Lookup.scala 33:37]
  wire  _T_201 = _T_19 ? 1'h0 : _T_200; // @[Lookup.scala 33:37]
  wire  _T_202 = _T_17 ? 1'h0 : _T_201; // @[Lookup.scala 33:37]
  wire  _T_203 = _T_15 ? 1'h0 : _T_202; // @[Lookup.scala 33:37]
  wire  _T_204 = _T_13 ? 1'h0 : _T_203; // @[Lookup.scala 33:37]
  wire  _T_205 = _T_11 ? 1'h0 : _T_204; // @[Lookup.scala 33:37]
  wire  _T_221 = _T_77 ? 1'h0 : _T_79 | (_T_81 | (_T_83 | _T_85)); // @[Lookup.scala 33:37]
  wire  _T_222 = _T_75 ? 1'h0 : _T_221; // @[Lookup.scala 33:37]
  wire  _T_223 = _T_73 ? 1'h0 : _T_222; // @[Lookup.scala 33:37]
  wire  _T_224 = _T_71 ? 1'h0 : _T_223; // @[Lookup.scala 33:37]
  wire  _T_225 = _T_69 ? 1'h0 : _T_224; // @[Lookup.scala 33:37]
  wire  _T_226 = _T_67 ? 1'h0 : _T_225; // @[Lookup.scala 33:37]
  wire  _T_227 = _T_65 ? 1'h0 : _T_226; // @[Lookup.scala 33:37]
  wire  _T_228 = _T_63 ? 1'h0 : _T_227; // @[Lookup.scala 33:37]
  wire  _T_229 = _T_61 ? 1'h0 : _T_228; // @[Lookup.scala 33:37]
  wire  _T_230 = _T_59 ? 1'h0 : _T_229; // @[Lookup.scala 33:37]
  wire  _T_231 = _T_57 ? 1'h0 : _T_230; // @[Lookup.scala 33:37]
  wire  _T_232 = _T_55 ? 1'h0 : _T_231; // @[Lookup.scala 33:37]
  wire  _T_233 = _T_53 ? 1'h0 : _T_232; // @[Lookup.scala 33:37]
  wire  _T_234 = _T_51 ? 1'h0 : _T_233; // @[Lookup.scala 33:37]
  wire  _T_235 = _T_49 ? 1'h0 : _T_234; // @[Lookup.scala 33:37]
  wire  _T_236 = _T_47 ? 1'h0 : _T_235; // @[Lookup.scala 33:37]
  wire  _T_237 = _T_45 ? 1'h0 : _T_236; // @[Lookup.scala 33:37]
  wire  _T_238 = _T_43 ? 1'h0 : _T_237; // @[Lookup.scala 33:37]
  wire  _T_239 = _T_41 ? 1'h0 : _T_238; // @[Lookup.scala 33:37]
  wire  _T_240 = _T_39 ? 1'h0 : _T_239; // @[Lookup.scala 33:37]
  wire  _T_241 = _T_37 ? 1'h0 : _T_240; // @[Lookup.scala 33:37]
  wire  _T_242 = _T_35 ? 1'h0 : _T_241; // @[Lookup.scala 33:37]
  wire  _T_243 = _T_33 ? 1'h0 : _T_242; // @[Lookup.scala 33:37]
  wire  _T_244 = _T_31 ? 1'h0 : _T_243; // @[Lookup.scala 33:37]
  wire  _T_245 = _T_29 ? 1'h0 : _T_244; // @[Lookup.scala 33:37]
  wire  _T_246 = _T_27 ? 1'h0 : _T_245; // @[Lookup.scala 33:37]
  wire  _T_247 = _T_25 ? 1'h0 : _T_246; // @[Lookup.scala 33:37]
  wire  _T_248 = _T_23 ? 1'h0 : _T_247; // @[Lookup.scala 33:37]
  wire  _T_249 = _T_21 ? 1'h0 : _T_248; // @[Lookup.scala 33:37]
  wire  _T_250 = _T_19 ? 1'h0 : _T_249; // @[Lookup.scala 33:37]
  wire  _T_251 = _T_17 ? 1'h0 : _T_250; // @[Lookup.scala 33:37]
  wire  _T_252 = _T_15 ? 1'h0 : _T_251; // @[Lookup.scala 33:37]
  wire  _T_253 = _T_13 ? 1'h0 : _T_252; // @[Lookup.scala 33:37]
  wire  _T_254 = _T_11 ? 1'h0 : _T_253; // @[Lookup.scala 33:37]
  wire [2:0] _T_266 = _T_85 ? 3'h7 : 3'h0; // @[Lookup.scala 33:37]
  wire [2:0] _T_267 = _T_83 ? 3'h5 : _T_266; // @[Lookup.scala 33:37]
  wire [2:0] _T_268 = _T_81 ? 3'h3 : _T_267; // @[Lookup.scala 33:37]
  wire [2:0] _T_269 = _T_79 ? 3'h1 : _T_268; // @[Lookup.scala 33:37]
  wire [2:0] _T_270 = _T_77 ? 3'h6 : _T_269; // @[Lookup.scala 33:37]
  wire [2:0] _T_271 = _T_75 ? 3'h4 : _T_270; // @[Lookup.scala 33:37]
  wire [2:0] _T_272 = _T_73 ? 3'h2 : _T_271; // @[Lookup.scala 33:37]
  wire [2:0] _T_273 = _T_71 ? 3'h7 : _T_272; // @[Lookup.scala 33:37]
  wire [2:0] _T_274 = _T_69 ? 3'h5 : _T_273; // @[Lookup.scala 33:37]
  wire [2:0] _T_275 = _T_67 ? 3'h3 : _T_274; // @[Lookup.scala 33:37]
  wire [2:0] _T_276 = _T_65 ? 3'h1 : _T_275; // @[Lookup.scala 33:37]
  wire [2:0] _T_277 = _T_63 ? 3'h0 : _T_276; // @[Lookup.scala 33:37]
  wire [2:0] _T_278 = _T_61 ? 3'h0 : _T_277; // @[Lookup.scala 33:37]
  wire [2:0] _T_279 = _T_59 ? 3'h0 : _T_278; // @[Lookup.scala 33:37]
  wire [2:0] _T_280 = _T_57 ? 3'h0 : _T_279; // @[Lookup.scala 33:37]
  wire [2:0] _T_281 = _T_55 ? 3'h0 : _T_280; // @[Lookup.scala 33:37]
  wire [2:0] _T_282 = _T_53 ? 3'h0 : _T_281; // @[Lookup.scala 33:37]
  wire [2:0] _T_283 = _T_51 ? 3'h0 : _T_282; // @[Lookup.scala 33:37]
  wire [2:0] _T_284 = _T_49 ? 3'h0 : _T_283; // @[Lookup.scala 33:37]
  wire [2:0] _T_285 = _T_47 ? 3'h0 : _T_284; // @[Lookup.scala 33:37]
  wire [2:0] _T_286 = _T_45 ? 3'h0 : _T_285; // @[Lookup.scala 33:37]
  wire [2:0] _T_287 = _T_43 ? 3'h0 : _T_286; // @[Lookup.scala 33:37]
  wire [2:0] _T_288 = _T_41 ? 3'h0 : _T_287; // @[Lookup.scala 33:37]
  wire [2:0] _T_289 = _T_39 ? 3'h0 : _T_288; // @[Lookup.scala 33:37]
  wire [2:0] _T_290 = _T_37 ? 3'h0 : _T_289; // @[Lookup.scala 33:37]
  wire [2:0] _T_291 = _T_35 ? 3'h0 : _T_290; // @[Lookup.scala 33:37]
  wire [2:0] _T_292 = _T_33 ? 3'h0 : _T_291; // @[Lookup.scala 33:37]
  wire [2:0] _T_293 = _T_31 ? 3'h0 : _T_292; // @[Lookup.scala 33:37]
  wire [2:0] _T_294 = _T_29 ? 3'h0 : _T_293; // @[Lookup.scala 33:37]
  wire [2:0] _T_295 = _T_27 ? 3'h0 : _T_294; // @[Lookup.scala 33:37]
  wire [2:0] _T_296 = _T_25 ? 3'h0 : _T_295; // @[Lookup.scala 33:37]
  wire [2:0] _T_297 = _T_23 ? 3'h0 : _T_296; // @[Lookup.scala 33:37]
  wire [2:0] _T_298 = _T_21 ? 3'h0 : _T_297; // @[Lookup.scala 33:37]
  wire [2:0] _T_299 = _T_19 ? 3'h0 : _T_298; // @[Lookup.scala 33:37]
  wire [2:0] _T_300 = _T_17 ? 3'h0 : _T_299; // @[Lookup.scala 33:37]
  wire [2:0] _T_301 = _T_15 ? 3'h0 : _T_300; // @[Lookup.scala 33:37]
  wire [2:0] _T_302 = _T_13 ? 3'h0 : _T_301; // @[Lookup.scala 33:37]
  wire [2:0] _T_303 = _T_11 ? 3'h0 : _T_302; // @[Lookup.scala 33:37]
  wire  _T_309 = _T_97 ? 1'h0 : _T_99 | (_T_101 | (_T_103 | _T_105)); // @[Lookup.scala 33:37]
  wire  _T_310 = _T_95 ? 1'h0 : _T_309; // @[Lookup.scala 33:37]
  wire  _T_311 = _T_93 ? 1'h0 : _T_310; // @[Lookup.scala 33:37]
  wire  _T_312 = _T_91 ? 1'h0 : _T_311; // @[Lookup.scala 33:37]
  wire  _T_313 = _T_89 ? 1'h0 : _T_312; // @[Lookup.scala 33:37]
  wire  _T_314 = _T_87 ? 1'h0 : _T_313; // @[Lookup.scala 33:37]
  wire  _T_315 = _T_85 ? 1'h0 : _T_314; // @[Lookup.scala 33:37]
  wire  _T_316 = _T_83 ? 1'h0 : _T_315; // @[Lookup.scala 33:37]
  wire  _T_317 = _T_81 ? 1'h0 : _T_316; // @[Lookup.scala 33:37]
  wire  _T_318 = _T_79 ? 1'h0 : _T_317; // @[Lookup.scala 33:37]
  wire  _T_348 = _T_19 | (_T_21 | (_T_23 | (_T_25 | (_T_27 | (_T_29 | (_T_31 | (_T_33 | (_T_35 | (_T_37 | (_T_39 | (
    _T_41 | (_T_43 | (_T_45 | (_T_47 | (_T_49 | (_T_51 | (_T_53 | (_T_55 | (_T_57 | (_T_59 | (_T_61 | (_T_63 | (_T_65 |
    (_T_67 | (_T_69 | (_T_71 | (_T_73 | (_T_75 | (_T_77 | _T_318))))))))))))))))))))))))))))); // @[Lookup.scala 33:37]
  wire [63:0] _T_364 = _T_85 ? io_reg_read_rs2_data : 64'h1bf52; // @[Lookup.scala 33:37]
  wire [63:0] _T_365 = _T_83 ? io_reg_read_rs2_data : _T_364; // @[Lookup.scala 33:37]
  wire [63:0] _T_366 = _T_81 ? io_reg_read_rs2_data : _T_365; // @[Lookup.scala 33:37]
  wire [63:0] _T_367 = _T_79 ? io_reg_read_rs2_data : _T_366; // @[Lookup.scala 33:37]
  wire [63:0] _T_368 = _T_77 ? 64'h1bf52 : _T_367; // @[Lookup.scala 33:37]
  wire [63:0] _T_369 = _T_75 ? 64'h1bf52 : _T_368; // @[Lookup.scala 33:37]
  wire [63:0] _T_370 = _T_73 ? 64'h1bf52 : _T_369; // @[Lookup.scala 33:37]
  wire [63:0] _T_371 = _T_71 ? 64'h1bf52 : _T_370; // @[Lookup.scala 33:37]
  wire [63:0] _T_372 = _T_69 ? 64'h1bf52 : _T_371; // @[Lookup.scala 33:37]
  wire [63:0] _T_373 = _T_67 ? 64'h1bf52 : _T_372; // @[Lookup.scala 33:37]
  wire [63:0] _T_374 = _T_65 ? 64'h1bf52 : _T_373; // @[Lookup.scala 33:37]
  wire [63:0] _T_375 = _T_63 ? 64'h1bf52 : _T_374; // @[Lookup.scala 33:37]
  wire [63:0] _T_376 = _T_61 ? 64'h1bf52 : _T_375; // @[Lookup.scala 33:37]
  wire [63:0] _T_377 = _T_59 ? 64'h1bf52 : _T_376; // @[Lookup.scala 33:37]
  wire [63:0] _T_378 = _T_57 ? 64'h1bf52 : _T_377; // @[Lookup.scala 33:37]
  wire [63:0] _T_379 = _T_55 ? 64'h1bf52 : _T_378; // @[Lookup.scala 33:37]
  wire [63:0] _T_380 = _T_53 ? 64'h1bf52 : _T_379; // @[Lookup.scala 33:37]
  wire [63:0] _T_381 = _T_51 ? 64'h1bf52 : _T_380; // @[Lookup.scala 33:37]
  wire [63:0] _T_382 = _T_49 ? 64'h1bf52 : _T_381; // @[Lookup.scala 33:37]
  wire [63:0] _T_383 = _T_47 ? 64'h1bf52 : _T_382; // @[Lookup.scala 33:37]
  wire [63:0] _T_384 = _T_45 ? 64'h1bf52 : _T_383; // @[Lookup.scala 33:37]
  wire [63:0] _T_385 = _T_43 ? 64'h1bf52 : _T_384; // @[Lookup.scala 33:37]
  wire [63:0] _T_386 = _T_41 ? 64'h1bf52 : _T_385; // @[Lookup.scala 33:37]
  wire [63:0] _T_387 = _T_39 ? 64'h1bf52 : _T_386; // @[Lookup.scala 33:37]
  wire [63:0] _T_388 = _T_37 ? 64'h1bf52 : _T_387; // @[Lookup.scala 33:37]
  wire [63:0] _T_389 = _T_35 ? 64'h1bf52 : _T_388; // @[Lookup.scala 33:37]
  wire [63:0] _T_390 = _T_33 ? 64'h1bf52 : _T_389; // @[Lookup.scala 33:37]
  wire [63:0] _T_391 = _T_31 ? 64'h1bf52 : _T_390; // @[Lookup.scala 33:37]
  wire [63:0] _T_392 = _T_29 ? 64'h1bf52 : _T_391; // @[Lookup.scala 33:37]
  wire [63:0] _T_393 = _T_27 ? 64'h1bf52 : _T_392; // @[Lookup.scala 33:37]
  wire [63:0] _T_394 = _T_25 ? 64'h1bf52 : _T_393; // @[Lookup.scala 33:37]
  wire [63:0] _T_395 = _T_23 ? 64'h1bf52 : _T_394; // @[Lookup.scala 33:37]
  wire [63:0] _T_396 = _T_21 ? 64'h1bf52 : _T_395; // @[Lookup.scala 33:37]
  wire [63:0] _T_397 = _T_19 ? 64'h1bf52 : _T_396; // @[Lookup.scala 33:37]
  wire [63:0] _T_398 = _T_17 ? 64'h1bf52 : _T_397; // @[Lookup.scala 33:37]
  wire [63:0] _T_399 = _T_15 ? 64'h1bf52 : _T_398; // @[Lookup.scala 33:37]
  wire [63:0] _T_400 = _T_13 ? 64'h1bf52 : _T_399; // @[Lookup.scala 33:37]
  wire [63:0] _T_401 = _T_11 ? 64'h1bf52 : _T_400; // @[Lookup.scala 33:37]
  wire [63:0] _T_403 = _T_105 ? imm_utype_sext : 64'h1bf52; // @[Lookup.scala 33:37]
  wire [63:0] _T_404 = _T_103 ? {{32'd0}, io_inst_addr} : _T_403; // @[Lookup.scala 33:37]
  wire [63:0] _T_405 = _T_101 ? io_reg_read_rs1_data : _T_404; // @[Lookup.scala 33:37]
  wire [63:0] _T_406 = _T_99 ? 64'h4 : _T_405; // @[Lookup.scala 33:37]
  wire [63:0] _T_407 = _T_97 ? {{32'd0}, io_inst_addr} : _T_406; // @[Lookup.scala 33:37]
  wire [63:0] _T_408 = _T_95 ? {{32'd0}, io_inst_addr} : _T_407; // @[Lookup.scala 33:37]
  wire [63:0] _T_409 = _T_93 ? {{32'd0}, io_inst_addr} : _T_408; // @[Lookup.scala 33:37]
  wire [63:0] _T_410 = _T_91 ? {{32'd0}, io_inst_addr} : _T_409; // @[Lookup.scala 33:37]
  wire [63:0] _T_411 = _T_89 ? {{32'd0}, io_inst_addr} : _T_410; // @[Lookup.scala 33:37]
  wire [63:0] _T_412 = _T_87 ? {{32'd0}, io_inst_addr} : _T_411; // @[Lookup.scala 33:37]
  wire [63:0] _T_413 = _T_85 ? io_reg_read_rs1_data : _T_412; // @[Lookup.scala 33:37]
  wire [63:0] _T_414 = _T_83 ? io_reg_read_rs1_data : _T_413; // @[Lookup.scala 33:37]
  wire [63:0] _T_415 = _T_81 ? io_reg_read_rs1_data : _T_414; // @[Lookup.scala 33:37]
  wire [63:0] _T_416 = _T_79 ? io_reg_read_rs1_data : _T_415; // @[Lookup.scala 33:37]
  wire [63:0] _T_417 = _T_77 ? io_reg_read_rs1_data : _T_416; // @[Lookup.scala 33:37]
  wire [63:0] _T_418 = _T_75 ? io_reg_read_rs1_data : _T_417; // @[Lookup.scala 33:37]
  wire [63:0] _T_419 = _T_73 ? io_reg_read_rs1_data : _T_418; // @[Lookup.scala 33:37]
  wire [63:0] _T_420 = _T_71 ? io_reg_read_rs1_data : _T_419; // @[Lookup.scala 33:37]
  wire [63:0] _T_421 = _T_69 ? io_reg_read_rs1_data : _T_420; // @[Lookup.scala 33:37]
  wire [63:0] _T_422 = _T_67 ? io_reg_read_rs1_data : _T_421; // @[Lookup.scala 33:37]
  wire [63:0] _T_423 = _T_65 ? io_reg_read_rs1_data : _T_422; // @[Lookup.scala 33:37]
  wire [63:0] _T_424 = _T_63 ? io_reg_read_rs1_data : _T_423; // @[Lookup.scala 33:37]
  wire [63:0] _T_425 = _T_61 ? io_reg_read_rs1_data : _T_424; // @[Lookup.scala 33:37]
  wire [63:0] _T_426 = _T_59 ? io_reg_read_rs1_data : _T_425; // @[Lookup.scala 33:37]
  wire [63:0] _T_427 = _T_57 ? io_reg_read_rs1_data : _T_426; // @[Lookup.scala 33:37]
  wire [63:0] _T_428 = _T_55 ? io_reg_read_rs1_data : _T_427; // @[Lookup.scala 33:37]
  wire [63:0] _T_429 = _T_53 ? io_reg_read_rs1_data : _T_428; // @[Lookup.scala 33:37]
  wire [63:0] _T_430 = _T_51 ? io_reg_read_rs1_data : _T_429; // @[Lookup.scala 33:37]
  wire [63:0] _T_431 = _T_49 ? io_reg_read_rs1_data : _T_430; // @[Lookup.scala 33:37]
  wire [63:0] _T_432 = _T_47 ? io_reg_read_rs1_data : _T_431; // @[Lookup.scala 33:37]
  wire [63:0] _T_433 = _T_45 ? io_reg_read_rs1_data : _T_432; // @[Lookup.scala 33:37]
  wire [63:0] _T_434 = _T_43 ? io_reg_read_rs1_data : _T_433; // @[Lookup.scala 33:37]
  wire [63:0] _T_435 = _T_41 ? io_reg_read_rs1_data : _T_434; // @[Lookup.scala 33:37]
  wire [63:0] _T_436 = _T_39 ? io_reg_read_rs1_data : _T_435; // @[Lookup.scala 33:37]
  wire [63:0] _T_437 = _T_37 ? io_reg_read_rs1_data : _T_436; // @[Lookup.scala 33:37]
  wire [63:0] _T_438 = _T_35 ? io_reg_read_rs1_data : _T_437; // @[Lookup.scala 33:37]
  wire [63:0] _T_439 = _T_33 ? io_reg_read_rs1_data : _T_438; // @[Lookup.scala 33:37]
  wire [63:0] _T_440 = _T_31 ? io_reg_read_rs1_data : _T_439; // @[Lookup.scala 33:37]
  wire [63:0] _T_441 = _T_29 ? io_reg_read_rs1_data : _T_440; // @[Lookup.scala 33:37]
  wire [63:0] _T_442 = _T_27 ? io_reg_read_rs1_data : _T_441; // @[Lookup.scala 33:37]
  wire [63:0] _T_443 = _T_25 ? io_reg_read_rs1_data : _T_442; // @[Lookup.scala 33:37]
  wire [63:0] _T_444 = _T_23 ? io_reg_read_rs1_data : _T_443; // @[Lookup.scala 33:37]
  wire [63:0] _T_445 = _T_21 ? io_reg_read_rs1_data : _T_444; // @[Lookup.scala 33:37]
  wire [63:0] _T_446 = _T_19 ? io_reg_read_rs1_data : _T_445; // @[Lookup.scala 33:37]
  wire [63:0] _T_447 = _T_17 ? io_reg_read_rs1_data : _T_446; // @[Lookup.scala 33:37]
  wire [63:0] _T_448 = _T_15 ? io_reg_read_rs1_data : _T_447; // @[Lookup.scala 33:37]
  wire [63:0] _T_449 = _T_13 ? io_reg_read_rs1_data : _T_448; // @[Lookup.scala 33:37]
  wire [63:0] _T_450 = _T_11 ? io_reg_read_rs1_data : _T_449; // @[Lookup.scala 33:37]
  wire [63:0] _T_453 = _T_103 ? imm_utype_sext : 64'h1bf52; // @[Lookup.scala 33:37]
  wire [63:0] _T_454 = _T_101 ? imm_itype_sext : _T_453; // @[Lookup.scala 33:37]
  wire [900:0] _T_455 = _T_99 ? imm_jtype_sext : {{837'd0}, _T_454}; // @[Lookup.scala 33:37]
  wire [900:0] _T_456 = _T_97 ? {{837'd0}, imm_btype_sext} : _T_455; // @[Lookup.scala 33:37]
  wire [900:0] _T_457 = _T_95 ? {{837'd0}, imm_btype_sext} : _T_456; // @[Lookup.scala 33:37]
  wire [900:0] _T_458 = _T_93 ? {{837'd0}, imm_btype_sext} : _T_457; // @[Lookup.scala 33:37]
  wire [900:0] _T_459 = _T_91 ? {{837'd0}, imm_btype_sext} : _T_458; // @[Lookup.scala 33:37]
  wire [900:0] _T_460 = _T_89 ? {{837'd0}, imm_btype_sext} : _T_459; // @[Lookup.scala 33:37]
  wire [900:0] _T_461 = _T_87 ? {{837'd0}, imm_btype_sext} : _T_460; // @[Lookup.scala 33:37]
  wire [900:0] _T_462 = _T_85 ? {{837'd0}, imm_stype_sext} : _T_461; // @[Lookup.scala 33:37]
  wire [900:0] _T_463 = _T_83 ? {{837'd0}, imm_stype_sext} : _T_462; // @[Lookup.scala 33:37]
  wire [900:0] _T_464 = _T_81 ? {{837'd0}, imm_stype_sext} : _T_463; // @[Lookup.scala 33:37]
  wire [900:0] _T_465 = _T_79 ? {{837'd0}, imm_stype_sext} : _T_464; // @[Lookup.scala 33:37]
  wire [900:0] _T_466 = _T_77 ? {{837'd0}, imm_itype_sext} : _T_465; // @[Lookup.scala 33:37]
  wire [900:0] _T_467 = _T_75 ? {{837'd0}, imm_itype_sext} : _T_466; // @[Lookup.scala 33:37]
  wire [900:0] _T_468 = _T_73 ? {{837'd0}, imm_itype_sext} : _T_467; // @[Lookup.scala 33:37]
  wire [900:0] _T_469 = _T_71 ? {{837'd0}, imm_itype_sext} : _T_468; // @[Lookup.scala 33:37]
  wire [900:0] _T_470 = _T_69 ? {{837'd0}, imm_itype_sext} : _T_469; // @[Lookup.scala 33:37]
  wire [900:0] _T_471 = _T_67 ? {{837'd0}, imm_itype_sext} : _T_470; // @[Lookup.scala 33:37]
  wire [900:0] _T_472 = _T_65 ? {{837'd0}, imm_itype_sext} : _T_471; // @[Lookup.scala 33:37]
  wire [900:0] _T_473 = _T_63 ? {{837'd0}, io_reg_read_rs2_data} : _T_472; // @[Lookup.scala 33:37]
  wire [900:0] _T_474 = _T_61 ? {{837'd0}, io_reg_read_rs2_data} : _T_473; // @[Lookup.scala 33:37]
  wire [900:0] _T_475 = _T_59 ? {{837'd0}, io_reg_read_rs2_data} : _T_474; // @[Lookup.scala 33:37]
  wire [900:0] _T_476 = _T_57 ? {{837'd0}, io_reg_read_rs2_data} : _T_475; // @[Lookup.scala 33:37]
  wire [900:0] _T_477 = _T_55 ? {{837'd0}, io_reg_read_rs2_data} : _T_476; // @[Lookup.scala 33:37]
  wire [900:0] _T_478 = _T_53 ? {{837'd0}, io_reg_read_rs2_data} : _T_477; // @[Lookup.scala 33:37]
  wire [900:0] _T_479 = _T_51 ? {{837'd0}, io_reg_read_rs2_data} : _T_478; // @[Lookup.scala 33:37]
  wire [900:0] _T_480 = _T_49 ? {{837'd0}, io_reg_read_rs2_data} : _T_479; // @[Lookup.scala 33:37]
  wire [900:0] _T_481 = _T_47 ? {{837'd0}, io_reg_read_rs2_data} : _T_480; // @[Lookup.scala 33:37]
  wire [900:0] _T_482 = _T_45 ? {{837'd0}, io_reg_read_rs2_data} : _T_481; // @[Lookup.scala 33:37]
  wire [900:0] _T_483 = _T_43 ? {{837'd0}, io_reg_read_rs2_data} : _T_482; // @[Lookup.scala 33:37]
  wire [900:0] _T_484 = _T_41 ? {{837'd0}, io_reg_read_rs2_data} : _T_483; // @[Lookup.scala 33:37]
  wire [900:0] _T_485 = _T_39 ? {{837'd0}, io_reg_read_rs2_data} : _T_484; // @[Lookup.scala 33:37]
  wire [900:0] _T_486 = _T_37 ? {{837'd0}, io_reg_read_rs2_data} : _T_485; // @[Lookup.scala 33:37]
  wire [900:0] _T_487 = _T_35 ? {{837'd0}, io_reg_read_rs2_data} : _T_486; // @[Lookup.scala 33:37]
  wire [900:0] _T_488 = _T_33 ? {{837'd0}, imm_itype_sext} : _T_487; // @[Lookup.scala 33:37]
  wire [900:0] _T_489 = _T_31 ? {{837'd0}, imm_itype_sext} : _T_488; // @[Lookup.scala 33:37]
  wire [900:0] _T_490 = _T_29 ? {{837'd0}, imm_itype_sext} : _T_489; // @[Lookup.scala 33:37]
  wire [900:0] _T_491 = _T_27 ? {{837'd0}, imm_itype_sext} : _T_490; // @[Lookup.scala 33:37]
  wire [900:0] _T_492 = _T_25 ? {{837'd0}, imm_itype_sext} : _T_491; // @[Lookup.scala 33:37]
  wire [900:0] _T_493 = _T_23 ? {{837'd0}, imm_itype_sext} : _T_492; // @[Lookup.scala 33:37]
  wire [900:0] _T_494 = _T_21 ? {{837'd0}, imm_itype_sext} : _T_493; // @[Lookup.scala 33:37]
  wire [900:0] _T_495 = _T_19 ? {{837'd0}, imm_itype_sext} : _T_494; // @[Lookup.scala 33:37]
  wire [900:0] _T_496 = _T_17 ? {{837'd0}, imm_itype_sext} : _T_495; // @[Lookup.scala 33:37]
  wire [900:0] _T_497 = _T_15 ? {{837'd0}, imm_itype_sext} : _T_496; // @[Lookup.scala 33:37]
  wire [900:0] _T_498 = _T_13 ? {{837'd0}, imm_itype_sext} : _T_497; // @[Lookup.scala 33:37]
  wire [900:0] _T_499 = _T_11 ? {{837'd0}, imm_itype_sext} : _T_498; // @[Lookup.scala 33:37]
  wire [900:0] decodeValue_7 = _T_9 ? {{837'd0}, imm_itype_sext} : _T_499; // @[Lookup.scala 33:37]
  wire [2:0] _T_505 = _T_97 ? 3'h5 : 3'h0; // @[Lookup.scala 33:37]
  wire [2:0] _T_506 = _T_95 ? 3'h4 : _T_505; // @[Lookup.scala 33:37]
  wire [2:0] _T_507 = _T_93 ? 3'h3 : _T_506; // @[Lookup.scala 33:37]
  wire [2:0] _T_508 = _T_91 ? 3'h2 : _T_507; // @[Lookup.scala 33:37]
  wire [2:0] _T_509 = _T_89 ? 3'h6 : _T_508; // @[Lookup.scala 33:37]
  wire [2:0] _T_510 = _T_87 ? 3'h1 : _T_509; // @[Lookup.scala 33:37]
  wire [2:0] _T_511 = _T_85 ? 3'h0 : _T_510; // @[Lookup.scala 33:37]
  wire [2:0] _T_512 = _T_83 ? 3'h0 : _T_511; // @[Lookup.scala 33:37]
  wire [2:0] _T_513 = _T_81 ? 3'h0 : _T_512; // @[Lookup.scala 33:37]
  wire [2:0] _T_514 = _T_79 ? 3'h0 : _T_513; // @[Lookup.scala 33:37]
  wire [2:0] _T_515 = _T_77 ? 3'h0 : _T_514; // @[Lookup.scala 33:37]
  wire [2:0] _T_516 = _T_75 ? 3'h0 : _T_515; // @[Lookup.scala 33:37]
  wire [2:0] _T_517 = _T_73 ? 3'h0 : _T_516; // @[Lookup.scala 33:37]
  wire [2:0] _T_518 = _T_71 ? 3'h0 : _T_517; // @[Lookup.scala 33:37]
  wire [2:0] _T_519 = _T_69 ? 3'h0 : _T_518; // @[Lookup.scala 33:37]
  wire [2:0] _T_520 = _T_67 ? 3'h0 : _T_519; // @[Lookup.scala 33:37]
  wire [2:0] _T_521 = _T_65 ? 3'h0 : _T_520; // @[Lookup.scala 33:37]
  wire [2:0] _T_522 = _T_63 ? 3'h0 : _T_521; // @[Lookup.scala 33:37]
  wire [2:0] _T_523 = _T_61 ? 3'h0 : _T_522; // @[Lookup.scala 33:37]
  wire [2:0] _T_524 = _T_59 ? 3'h0 : _T_523; // @[Lookup.scala 33:37]
  wire [2:0] _T_525 = _T_57 ? 3'h0 : _T_524; // @[Lookup.scala 33:37]
  wire [2:0] _T_526 = _T_55 ? 3'h0 : _T_525; // @[Lookup.scala 33:37]
  wire [2:0] _T_527 = _T_53 ? 3'h0 : _T_526; // @[Lookup.scala 33:37]
  wire [2:0] _T_528 = _T_51 ? 3'h0 : _T_527; // @[Lookup.scala 33:37]
  wire [2:0] _T_529 = _T_49 ? 3'h0 : _T_528; // @[Lookup.scala 33:37]
  wire [2:0] _T_530 = _T_47 ? 3'h0 : _T_529; // @[Lookup.scala 33:37]
  wire [2:0] _T_531 = _T_45 ? 3'h0 : _T_530; // @[Lookup.scala 33:37]
  wire [2:0] _T_532 = _T_43 ? 3'h0 : _T_531; // @[Lookup.scala 33:37]
  wire [2:0] _T_533 = _T_41 ? 3'h0 : _T_532; // @[Lookup.scala 33:37]
  wire [2:0] _T_534 = _T_39 ? 3'h0 : _T_533; // @[Lookup.scala 33:37]
  wire [2:0] _T_535 = _T_37 ? 3'h0 : _T_534; // @[Lookup.scala 33:37]
  wire [2:0] _T_536 = _T_35 ? 3'h0 : _T_535; // @[Lookup.scala 33:37]
  wire [2:0] _T_537 = _T_33 ? 3'h0 : _T_536; // @[Lookup.scala 33:37]
  wire [2:0] _T_538 = _T_31 ? 3'h0 : _T_537; // @[Lookup.scala 33:37]
  wire [2:0] _T_539 = _T_29 ? 3'h0 : _T_538; // @[Lookup.scala 33:37]
  wire [2:0] _T_540 = _T_27 ? 3'h0 : _T_539; // @[Lookup.scala 33:37]
  wire [2:0] _T_541 = _T_25 ? 3'h0 : _T_540; // @[Lookup.scala 33:37]
  wire [2:0] _T_542 = _T_23 ? 3'h0 : _T_541; // @[Lookup.scala 33:37]
  wire [2:0] _T_543 = _T_21 ? 3'h0 : _T_542; // @[Lookup.scala 33:37]
  wire [2:0] _T_544 = _T_19 ? 3'h0 : _T_543; // @[Lookup.scala 33:37]
  wire [2:0] _T_545 = _T_17 ? 3'h0 : _T_544; // @[Lookup.scala 33:37]
  wire [2:0] _T_546 = _T_15 ? 3'h0 : _T_545; // @[Lookup.scala 33:37]
  wire [2:0] _T_547 = _T_13 ? 3'h0 : _T_546; // @[Lookup.scala 33:37]
  wire [2:0] _T_548 = _T_11 ? 3'h0 : _T_547; // @[Lookup.scala 33:37]
  wire [63:0] _T_554 = _T_97 ? io_reg_read_rs1_data : 64'h1bf52; // @[Lookup.scala 33:37]
  wire [63:0] _T_555 = _T_95 ? io_reg_read_rs1_data : _T_554; // @[Lookup.scala 33:37]
  wire [63:0] _T_556 = _T_93 ? io_reg_read_rs1_data : _T_555; // @[Lookup.scala 33:37]
  wire [63:0] _T_557 = _T_91 ? io_reg_read_rs1_data : _T_556; // @[Lookup.scala 33:37]
  wire [63:0] _T_558 = _T_89 ? io_reg_read_rs1_data : _T_557; // @[Lookup.scala 33:37]
  wire [63:0] _T_559 = _T_87 ? io_reg_read_rs1_data : _T_558; // @[Lookup.scala 33:37]
  wire [63:0] _T_560 = _T_85 ? 64'h1bf52 : _T_559; // @[Lookup.scala 33:37]
  wire [63:0] _T_561 = _T_83 ? 64'h1bf52 : _T_560; // @[Lookup.scala 33:37]
  wire [63:0] _T_562 = _T_81 ? 64'h1bf52 : _T_561; // @[Lookup.scala 33:37]
  wire [63:0] _T_563 = _T_79 ? 64'h1bf52 : _T_562; // @[Lookup.scala 33:37]
  wire [63:0] _T_564 = _T_77 ? 64'h1bf52 : _T_563; // @[Lookup.scala 33:37]
  wire [63:0] _T_565 = _T_75 ? 64'h1bf52 : _T_564; // @[Lookup.scala 33:37]
  wire [63:0] _T_566 = _T_73 ? 64'h1bf52 : _T_565; // @[Lookup.scala 33:37]
  wire [63:0] _T_567 = _T_71 ? 64'h1bf52 : _T_566; // @[Lookup.scala 33:37]
  wire [63:0] _T_568 = _T_69 ? 64'h1bf52 : _T_567; // @[Lookup.scala 33:37]
  wire [63:0] _T_569 = _T_67 ? 64'h1bf52 : _T_568; // @[Lookup.scala 33:37]
  wire [63:0] _T_570 = _T_65 ? 64'h1bf52 : _T_569; // @[Lookup.scala 33:37]
  wire [63:0] _T_571 = _T_63 ? 64'h1bf52 : _T_570; // @[Lookup.scala 33:37]
  wire [63:0] _T_572 = _T_61 ? 64'h1bf52 : _T_571; // @[Lookup.scala 33:37]
  wire [63:0] _T_573 = _T_59 ? 64'h1bf52 : _T_572; // @[Lookup.scala 33:37]
  wire [63:0] _T_574 = _T_57 ? 64'h1bf52 : _T_573; // @[Lookup.scala 33:37]
  wire [63:0] _T_575 = _T_55 ? 64'h1bf52 : _T_574; // @[Lookup.scala 33:37]
  wire [63:0] _T_576 = _T_53 ? 64'h1bf52 : _T_575; // @[Lookup.scala 33:37]
  wire [63:0] _T_577 = _T_51 ? 64'h1bf52 : _T_576; // @[Lookup.scala 33:37]
  wire [63:0] _T_578 = _T_49 ? 64'h1bf52 : _T_577; // @[Lookup.scala 33:37]
  wire [63:0] _T_579 = _T_47 ? 64'h1bf52 : _T_578; // @[Lookup.scala 33:37]
  wire [63:0] _T_580 = _T_45 ? 64'h1bf52 : _T_579; // @[Lookup.scala 33:37]
  wire [63:0] _T_581 = _T_43 ? 64'h1bf52 : _T_580; // @[Lookup.scala 33:37]
  wire [63:0] _T_582 = _T_41 ? 64'h1bf52 : _T_581; // @[Lookup.scala 33:37]
  wire [63:0] _T_583 = _T_39 ? 64'h1bf52 : _T_582; // @[Lookup.scala 33:37]
  wire [63:0] _T_584 = _T_37 ? 64'h1bf52 : _T_583; // @[Lookup.scala 33:37]
  wire [63:0] _T_585 = _T_35 ? 64'h1bf52 : _T_584; // @[Lookup.scala 33:37]
  wire [63:0] _T_586 = _T_33 ? 64'h1bf52 : _T_585; // @[Lookup.scala 33:37]
  wire [63:0] _T_587 = _T_31 ? 64'h1bf52 : _T_586; // @[Lookup.scala 33:37]
  wire [63:0] _T_588 = _T_29 ? 64'h1bf52 : _T_587; // @[Lookup.scala 33:37]
  wire [63:0] _T_589 = _T_27 ? 64'h1bf52 : _T_588; // @[Lookup.scala 33:37]
  wire [63:0] _T_590 = _T_25 ? 64'h1bf52 : _T_589; // @[Lookup.scala 33:37]
  wire [63:0] _T_591 = _T_23 ? 64'h1bf52 : _T_590; // @[Lookup.scala 33:37]
  wire [63:0] _T_592 = _T_21 ? 64'h1bf52 : _T_591; // @[Lookup.scala 33:37]
  wire [63:0] _T_593 = _T_19 ? 64'h1bf52 : _T_592; // @[Lookup.scala 33:37]
  wire [63:0] _T_594 = _T_17 ? 64'h1bf52 : _T_593; // @[Lookup.scala 33:37]
  wire [63:0] _T_595 = _T_15 ? 64'h1bf52 : _T_594; // @[Lookup.scala 33:37]
  wire [63:0] _T_596 = _T_13 ? 64'h1bf52 : _T_595; // @[Lookup.scala 33:37]
  wire [63:0] _T_597 = _T_11 ? 64'h1bf52 : _T_596; // @[Lookup.scala 33:37]
  wire [63:0] _T_603 = _T_97 ? io_reg_read_rs2_data : 64'h1bf52; // @[Lookup.scala 33:37]
  wire [63:0] _T_604 = _T_95 ? io_reg_read_rs2_data : _T_603; // @[Lookup.scala 33:37]
  wire [63:0] _T_605 = _T_93 ? io_reg_read_rs2_data : _T_604; // @[Lookup.scala 33:37]
  wire [63:0] _T_606 = _T_91 ? io_reg_read_rs2_data : _T_605; // @[Lookup.scala 33:37]
  wire [63:0] _T_607 = _T_89 ? io_reg_read_rs2_data : _T_606; // @[Lookup.scala 33:37]
  wire [63:0] _T_608 = _T_87 ? io_reg_read_rs2_data : _T_607; // @[Lookup.scala 33:37]
  wire [63:0] _T_609 = _T_85 ? 64'h1bf52 : _T_608; // @[Lookup.scala 33:37]
  wire [63:0] _T_610 = _T_83 ? 64'h1bf52 : _T_609; // @[Lookup.scala 33:37]
  wire [63:0] _T_611 = _T_81 ? 64'h1bf52 : _T_610; // @[Lookup.scala 33:37]
  wire [63:0] _T_612 = _T_79 ? 64'h1bf52 : _T_611; // @[Lookup.scala 33:37]
  wire [63:0] _T_613 = _T_77 ? 64'h1bf52 : _T_612; // @[Lookup.scala 33:37]
  wire [63:0] _T_614 = _T_75 ? 64'h1bf52 : _T_613; // @[Lookup.scala 33:37]
  wire [63:0] _T_615 = _T_73 ? 64'h1bf52 : _T_614; // @[Lookup.scala 33:37]
  wire [63:0] _T_616 = _T_71 ? 64'h1bf52 : _T_615; // @[Lookup.scala 33:37]
  wire [63:0] _T_617 = _T_69 ? 64'h1bf52 : _T_616; // @[Lookup.scala 33:37]
  wire [63:0] _T_618 = _T_67 ? 64'h1bf52 : _T_617; // @[Lookup.scala 33:37]
  wire [63:0] _T_619 = _T_65 ? 64'h1bf52 : _T_618; // @[Lookup.scala 33:37]
  wire [63:0] _T_620 = _T_63 ? 64'h1bf52 : _T_619; // @[Lookup.scala 33:37]
  wire [63:0] _T_621 = _T_61 ? 64'h1bf52 : _T_620; // @[Lookup.scala 33:37]
  wire [63:0] _T_622 = _T_59 ? 64'h1bf52 : _T_621; // @[Lookup.scala 33:37]
  wire [63:0] _T_623 = _T_57 ? 64'h1bf52 : _T_622; // @[Lookup.scala 33:37]
  wire [63:0] _T_624 = _T_55 ? 64'h1bf52 : _T_623; // @[Lookup.scala 33:37]
  wire [63:0] _T_625 = _T_53 ? 64'h1bf52 : _T_624; // @[Lookup.scala 33:37]
  wire [63:0] _T_626 = _T_51 ? 64'h1bf52 : _T_625; // @[Lookup.scala 33:37]
  wire [63:0] _T_627 = _T_49 ? 64'h1bf52 : _T_626; // @[Lookup.scala 33:37]
  wire [63:0] _T_628 = _T_47 ? 64'h1bf52 : _T_627; // @[Lookup.scala 33:37]
  wire [63:0] _T_629 = _T_45 ? 64'h1bf52 : _T_628; // @[Lookup.scala 33:37]
  wire [63:0] _T_630 = _T_43 ? 64'h1bf52 : _T_629; // @[Lookup.scala 33:37]
  wire [63:0] _T_631 = _T_41 ? 64'h1bf52 : _T_630; // @[Lookup.scala 33:37]
  wire [63:0] _T_632 = _T_39 ? 64'h1bf52 : _T_631; // @[Lookup.scala 33:37]
  wire [63:0] _T_633 = _T_37 ? 64'h1bf52 : _T_632; // @[Lookup.scala 33:37]
  wire [63:0] _T_634 = _T_35 ? 64'h1bf52 : _T_633; // @[Lookup.scala 33:37]
  wire [63:0] _T_635 = _T_33 ? 64'h1bf52 : _T_634; // @[Lookup.scala 33:37]
  wire [63:0] _T_636 = _T_31 ? 64'h1bf52 : _T_635; // @[Lookup.scala 33:37]
  wire [63:0] _T_637 = _T_29 ? 64'h1bf52 : _T_636; // @[Lookup.scala 33:37]
  wire [63:0] _T_638 = _T_27 ? 64'h1bf52 : _T_637; // @[Lookup.scala 33:37]
  wire [63:0] _T_639 = _T_25 ? 64'h1bf52 : _T_638; // @[Lookup.scala 33:37]
  wire [63:0] _T_640 = _T_23 ? 64'h1bf52 : _T_639; // @[Lookup.scala 33:37]
  wire [63:0] _T_641 = _T_21 ? 64'h1bf52 : _T_640; // @[Lookup.scala 33:37]
  wire [63:0] _T_642 = _T_19 ? 64'h1bf52 : _T_641; // @[Lookup.scala 33:37]
  wire [63:0] _T_643 = _T_17 ? 64'h1bf52 : _T_642; // @[Lookup.scala 33:37]
  wire [63:0] _T_644 = _T_15 ? 64'h1bf52 : _T_643; // @[Lookup.scala 33:37]
  wire [63:0] _T_645 = _T_13 ? 64'h1bf52 : _T_644; // @[Lookup.scala 33:37]
  wire [63:0] _T_646 = _T_11 ? 64'h1bf52 : _T_645; // @[Lookup.scala 33:37]
  wire  _T_674 = _T_53 ? 1'h0 : _T_55 | (_T_57 | (_T_59 | (_T_61 | _T_63))); // @[Lookup.scala 33:37]
  wire  _T_675 = _T_51 ? 1'h0 : _T_674; // @[Lookup.scala 33:37]
  wire  _T_676 = _T_49 ? 1'h0 : _T_675; // @[Lookup.scala 33:37]
  wire  _T_677 = _T_47 ? 1'h0 : _T_676; // @[Lookup.scala 33:37]
  wire  _T_678 = _T_45 ? 1'h0 : _T_677; // @[Lookup.scala 33:37]
  wire  _T_679 = _T_43 ? 1'h0 : _T_678; // @[Lookup.scala 33:37]
  wire  _T_680 = _T_41 ? 1'h0 : _T_679; // @[Lookup.scala 33:37]
  wire  _T_681 = _T_39 ? 1'h0 : _T_680; // @[Lookup.scala 33:37]
  wire  _T_682 = _T_37 ? 1'h0 : _T_681; // @[Lookup.scala 33:37]
  wire  _T_683 = _T_35 ? 1'h0 : _T_682; // @[Lookup.scala 33:37]
  wire  _T_688 = _T_25 ? 1'h0 : _T_27 | (_T_29 | (_T_31 | (_T_33 | _T_683))); // @[Lookup.scala 33:37]
  wire  _T_689 = _T_23 ? 1'h0 : _T_688; // @[Lookup.scala 33:37]
  wire  _T_690 = _T_21 ? 1'h0 : _T_689; // @[Lookup.scala 33:37]
  wire  _T_691 = _T_19 ? 1'h0 : _T_690; // @[Lookup.scala 33:37]
  wire  _T_692 = _T_17 ? 1'h0 : _T_691; // @[Lookup.scala 33:37]
  wire  _T_693 = _T_15 ? 1'h0 : _T_692; // @[Lookup.scala 33:37]
  wire  _T_694 = _T_13 ? 1'h0 : _T_693; // @[Lookup.scala 33:37]
  wire  _T_695 = _T_11 ? 1'h0 : _T_694; // @[Lookup.scala 33:37]
  assign io_reg_read_rs1_addr = io_inst[19:15]; // @[Id_Stage.scala 44:20]
  assign io_reg_read_rs2_addr = io_inst[24:20]; // @[Id_Stage.scala 45:20]
  assign io_toEx_alu_op = _T_9 ? 4'h0 : _T_156; // @[Lookup.scala 33:37]
  assign io_toEx_withW = _T_9 ? 1'h0 : _T_695; // @[Lookup.scala 33:37]
  assign io_toEx_mem_wr = _T_9 ? 1'h0 : _T_254; // @[Lookup.scala 33:37]
  assign io_toEx_mem_rd = _T_9 ? 1'h0 : _T_205; // @[Lookup.scala 33:37]
  assign io_toEx_reg_wr = _T_9 | (_T_11 | (_T_13 | (_T_15 | (_T_17 | _T_348)))); // @[Lookup.scala 33:37]
  assign io_toEx_mask_type = _T_9 ? 3'h0 : _T_303; // @[Lookup.scala 33:37]
  assign io_toEx_mem_data = _T_9 ? 64'h1bf52 : _T_401; // @[Lookup.scala 33:37]
  assign io_toEx_rd_o = io_inst[11:7]; // @[Id_Stage.scala 43:19]
  assign io_toEx_cmp_op = _T_9 ? 3'h0 : _T_548; // @[Lookup.scala 33:37]
  assign io_toEx_cmp_op1 = _T_9 ? 64'h1bf52 : _T_597; // @[Lookup.scala 33:37]
  assign io_toEx_cmp_op2 = _T_9 ? 64'h1bf52 : _T_646; // @[Lookup.scala 33:37]
  assign io_toEx_op1 = _T_9 ? io_reg_read_rs1_data : _T_450; // @[Lookup.scala 33:37]
  assign io_toEx_op2 = decodeValue_7[63:0]; // @[Id_Stage.scala 148:15]
  assign io_toEx_inst_addr = io_inst_addr; // @[Id_Stage.scala 155:21]
  assign io_aluop = _T_9 ? 4'h0 : _T_156; // @[Lookup.scala 33:37]
endmodule
module Ex_Stage(
  input  [3:0]  io_toEx_alu_op,
  input         io_toEx_withW,
  input         io_toEx_mem_wr,
  input         io_toEx_mem_rd,
  input         io_toEx_reg_wr,
  input  [2:0]  io_toEx_mask_type,
  input  [63:0] io_toEx_mem_data,
  input  [4:0]  io_toEx_rd_o,
  input  [2:0]  io_toEx_cmp_op,
  input  [63:0] io_toEx_cmp_op1,
  input  [63:0] io_toEx_cmp_op2,
  input  [63:0] io_toEx_op1,
  input  [63:0] io_toEx_op2,
  input  [31:0] io_toEx_inst_addr,
  output        io_toMem_mem_wr,
  output        io_toMem_mem_rd,
  output        io_toMem_reg_wr,
  output [2:0]  io_toMem_mask_type,
  output [63:0] io_toMem_mem_mask,
  output [63:0] io_toMem_mem_data,
  output [4:0]  io_toMem_rd_o,
  output [63:0] io_toMem_calRes,
  output        io_toIf_jumpSym,
  output [63:0] io_toIf_jumpAddr
);
  wire [5:0] alu_shamt = io_toEx_op2[5:0]; // @[Ex_Stage.scala 54:30]
  wire [63:0] _T_1 = io_toEx_op1 + io_toEx_op2; // @[Ex_Stage.scala 55:52]
  wire [63:0] _T_5 = io_toEx_op1 - io_toEx_op2; // @[Ex_Stage.scala 58:31]
  wire [63:0] _T_6 = io_toEx_op1 & io_toEx_op2; // @[Ex_Stage.scala 59:31]
  wire [63:0] _T_7 = io_toEx_op1 | io_toEx_op2; // @[Ex_Stage.scala 60:30]
  wire [63:0] _T_8 = io_toEx_op1 ^ io_toEx_op2; // @[Ex_Stage.scala 61:31]
  wire  _T_11 = $signed(io_toEx_op1) < $signed(io_toEx_op2); // @[Ex_Stage.scala 62:40]
  wire  _T_12 = io_toEx_op1 < io_toEx_op2; // @[Ex_Stage.scala 63:32]
  wire [126:0] _GEN_1 = {{63'd0}, io_toEx_op1}; // @[Ex_Stage.scala 64:31]
  wire [126:0] _T_13 = _GEN_1 << alu_shamt; // @[Ex_Stage.scala 64:31]
  wire [63:0] _T_14 = io_toEx_op1 >> alu_shamt; // @[Ex_Stage.scala 65:31]
  wire [63:0] _T_17 = $signed(io_toEx_op1) >>> alu_shamt; // @[Ex_Stage.scala 66:60]
  wire [63:0] _GEN_2 = {{32'd0}, io_toEx_inst_addr}; // @[Ex_Stage.scala 69:29]
  wire [63:0] _T_19 = io_toEx_op1 + _GEN_2; // @[Ex_Stage.scala 69:29]
  wire [63:0] _T_21 = 64'h4 + _GEN_2; // @[Ex_Stage.scala 70:28]
  wire [63:0] _T_23 = 4'h0 == io_toEx_alu_op ? _T_1 : _T_1; // @[Mux.scala 80:57]
  wire [63:0] _T_25 = 4'h1 == io_toEx_alu_op ? _T_5 : _T_23; // @[Mux.scala 80:57]
  wire [63:0] _T_27 = 4'h5 == io_toEx_alu_op ? _T_6 : _T_25; // @[Mux.scala 80:57]
  wire [63:0] _T_29 = 4'h6 == io_toEx_alu_op ? _T_7 : _T_27; // @[Mux.scala 80:57]
  wire [63:0] _T_31 = 4'h7 == io_toEx_alu_op ? _T_8 : _T_29; // @[Mux.scala 80:57]
  wire [63:0] _T_33 = 4'h8 == io_toEx_alu_op ? {{63'd0}, _T_11} : _T_31; // @[Mux.scala 80:57]
  wire [63:0] _T_35 = 4'h9 == io_toEx_alu_op ? {{63'd0}, _T_12} : _T_33; // @[Mux.scala 80:57]
  wire [126:0] _T_37 = 4'h2 == io_toEx_alu_op ? _T_13 : {{63'd0}, _T_35}; // @[Mux.scala 80:57]
  wire [126:0] _T_39 = 4'h3 == io_toEx_alu_op ? {{63'd0}, _T_14} : _T_37; // @[Mux.scala 80:57]
  wire [126:0] _T_41 = 4'h4 == io_toEx_alu_op ? {{63'd0}, _T_17} : _T_39; // @[Mux.scala 80:57]
  wire [126:0] _T_43 = 4'ha == io_toEx_alu_op ? {{63'd0}, io_toEx_op1} : _T_41; // @[Mux.scala 80:57]
  wire [126:0] _T_45 = 4'hb == io_toEx_alu_op ? {{63'd0}, io_toEx_op2} : _T_43; // @[Mux.scala 80:57]
  wire [126:0] _T_47 = 4'hc == io_toEx_alu_op ? {{63'd0}, _T_19} : _T_45; // @[Mux.scala 80:57]
  wire [126:0] _T_49 = 4'hd == io_toEx_alu_op ? {{63'd0}, _T_21} : _T_47; // @[Mux.scala 80:57]
  wire [63:0] calRes = _T_49[63:0];
  wire [31:0] hi = calRes[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [31:0] lo = calRes[31:0]; // @[Ex_Stage.scala 75:71]
  wire [63:0] _T_52 = {hi,lo}; // @[Cat.scala 30:58]
  wire [15:0] _T_56 = 3'h1 == calRes[2:0] ? 16'hff00 : 16'hff; // @[Mux.scala 80:57]
  wire [23:0] _T_58 = 3'h2 == calRes[2:0] ? 24'hff0000 : {{8'd0}, _T_56}; // @[Mux.scala 80:57]
  wire [31:0] _T_60 = 3'h3 == calRes[2:0] ? 32'hff000000 : {{8'd0}, _T_58}; // @[Mux.scala 80:57]
  wire [39:0] _T_62 = 3'h4 == calRes[2:0] ? 40'hff00000000 : {{8'd0}, _T_60}; // @[Mux.scala 80:57]
  wire [47:0] _T_64 = 3'h5 == calRes[2:0] ? 48'hff0000000000 : {{8'd0}, _T_62}; // @[Mux.scala 80:57]
  wire [55:0] _T_66 = 3'h6 == calRes[2:0] ? 56'hff000000000000 : {{8'd0}, _T_64}; // @[Mux.scala 80:57]
  wire [63:0] _T_68 = 3'h7 == calRes[2:0] ? 64'hff00000000000000 : {{8'd0}, _T_66}; // @[Mux.scala 80:57]
  wire [63:0] _T_71 = 3'h0 == calRes[2:0] ? 64'hffff : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _T_73 = 3'h2 == calRes[2:0] ? 64'hffffff00 : _T_71; // @[Mux.scala 80:57]
  wire [63:0] _T_75 = 3'h4 == calRes[2:0] ? 64'hffff00000000 : _T_73; // @[Mux.scala 80:57]
  wire [63:0] _T_77 = 3'h6 == calRes[2:0] ? 64'hffff000000000000 : _T_75; // @[Mux.scala 80:57]
  wire [63:0] _T_80 = 3'h0 == calRes[2:0] ? 64'hffffffff : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _T_82 = 3'h4 == calRes[2:0] ? 64'hffffffff00000000 : _T_80; // @[Mux.scala 80:57]
  wire [63:0] _T_84 = 3'h1 == io_toEx_mask_type ? _T_68 : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _T_86 = 3'h3 == io_toEx_mask_type ? _T_77 : _T_84; // @[Mux.scala 80:57]
  wire [63:0] _T_88 = 3'h5 == io_toEx_mask_type ? _T_82 : _T_86; // @[Mux.scala 80:57]
  wire [63:0] _T_90 = 3'h7 == io_toEx_mask_type ? 64'hffffffffffffffff : _T_88; // @[Mux.scala 80:57]
  wire  _T_91 = io_toEx_cmp_op1 == io_toEx_cmp_op2; // @[Ex_Stage.scala 111:34]
  wire  _T_93 = io_toEx_cmp_op1 != io_toEx_cmp_op2; // @[Ex_Stage.scala 112:35]
  wire  _T_97 = $signed(io_toEx_cmp_op1) >= $signed(io_toEx_cmp_op2); // @[Ex_Stage.scala 113:43]
  wire  _T_99 = io_toEx_cmp_op1 >= io_toEx_cmp_op2; // @[Ex_Stage.scala 114:44]
  wire  _T_103 = $signed(io_toEx_cmp_op1) < $signed(io_toEx_cmp_op2); // @[Ex_Stage.scala 115:43]
  wire  _T_105 = io_toEx_cmp_op1 < io_toEx_cmp_op2; // @[Ex_Stage.scala 116:44]
  wire  _T_110 = 3'h6 == io_toEx_cmp_op ? _T_93 : 3'h1 == io_toEx_cmp_op & _T_91; // @[Mux.scala 80:57]
  wire  _T_112 = 3'h2 == io_toEx_cmp_op ? _T_97 : _T_110; // @[Mux.scala 80:57]
  wire  _T_114 = 3'h3 == io_toEx_cmp_op ? _T_99 : _T_112; // @[Mux.scala 80:57]
  wire  _T_116 = 3'h4 == io_toEx_cmp_op ? _T_103 : _T_114; // @[Mux.scala 80:57]
  wire  branchEna = 3'h5 == io_toEx_cmp_op ? _T_105 : _T_116; // @[Mux.scala 80:57]
  wire  _T_119 = io_toEx_alu_op == 4'hc; // @[Ex_Stage.scala 119:35]
  wire  _T_120 = io_toEx_alu_op == 4'hd; // @[Ex_Stage.scala 119:64]
  wire [63:0] _T_126 = io_toEx_op2 + _GEN_2; // @[Ex_Stage.scala 123:50]
  wire [63:0] _T_130 = _T_1 & 64'hfffffffffffffffe; // @[Ex_Stage.scala 124:67]
  wire [63:0] _T_132 = branchEna ? calRes : 64'h1bf52; // @[Mux.scala 98:16]
  wire [63:0] _T_133 = _T_120 ? _T_130 : _T_132; // @[Mux.scala 98:16]
  assign io_toMem_mem_wr = io_toEx_mem_wr; // @[Ex_Stage.scala 46:19]
  assign io_toMem_mem_rd = io_toEx_mem_rd; // @[Ex_Stage.scala 45:19]
  assign io_toMem_reg_wr = io_toEx_reg_wr; // @[Ex_Stage.scala 47:19]
  assign io_toMem_mask_type = io_toEx_mask_type; // @[Ex_Stage.scala 51:22]
  assign io_toMem_mem_mask = io_toEx_mem_wr ? _T_90 : 64'h0; // @[Ex_Stage.scala 78:23 Ex_Stage.scala 79:13]
  assign io_toMem_mem_data = io_toEx_mem_data; // @[Ex_Stage.scala 48:21]
  assign io_toMem_rd_o = io_toEx_rd_o; // @[Ex_Stage.scala 49:17]
  assign io_toMem_calRes = io_toEx_withW ? _T_52 : calRes; // @[Ex_Stage.scala 75:25]
  assign io_toIf_jumpSym = io_toEx_alu_op == 4'hc | io_toEx_alu_op == 4'hd | branchEna; // @[Ex_Stage.scala 119:76]
  assign io_toIf_jumpAddr = _T_119 ? _T_126 : _T_133; // @[Mux.scala 98:16]
endmodule
module Mem_Stage(
  input         clock,
  input         io_toMem_mem_wr,
  input         io_toMem_mem_rd,
  input         io_toMem_reg_wr,
  input  [2:0]  io_toMem_mask_type,
  input  [63:0] io_toMem_mem_mask,
  input  [63:0] io_toMem_mem_data,
  input  [4:0]  io_toMem_rd_o,
  input  [63:0] io_toMem_calRes,
  output [63:0] io_toWb_exRes,
  output [63:0] io_toWb_memRes,
  output [2:0]  io_toWb_mask_type,
  output        io_toWb_reg_wr,
  output        io_toWb_mem_rd,
  output [4:0]  io_toWb_rd_o
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [63:0] regMem [0:1023]; // @[Mem_Stage.scala 32:19]
  wire [63:0] regMem_MPORT_data; // @[Mem_Stage.scala 32:19]
  wire [9:0] regMem_MPORT_addr; // @[Mem_Stage.scala 32:19]
  wire [63:0] regMem_MPORT_2_data; // @[Mem_Stage.scala 32:19]
  wire [9:0] regMem_MPORT_2_addr; // @[Mem_Stage.scala 32:19]
  wire [63:0] regMem_MPORT_1_data; // @[Mem_Stage.scala 32:19]
  wire [9:0] regMem_MPORT_1_addr; // @[Mem_Stage.scala 32:19]
  wire  regMem_MPORT_1_mask; // @[Mem_Stage.scala 32:19]
  wire  regMem_MPORT_1_en; // @[Mem_Stage.scala 32:19]
  assign regMem_MPORT_addr = io_toMem_calRes[9:0];
  assign regMem_MPORT_data = regMem[regMem_MPORT_addr]; // @[Mem_Stage.scala 32:19]
  assign regMem_MPORT_2_addr = io_toMem_calRes[9:0];
  assign regMem_MPORT_2_data = regMem[regMem_MPORT_2_addr]; // @[Mem_Stage.scala 32:19]
  assign regMem_MPORT_1_data = io_toMem_mem_data & io_toMem_mem_mask;
  assign regMem_MPORT_1_addr = io_toMem_calRes[9:0];
  assign regMem_MPORT_1_mask = 1'h1;
  assign regMem_MPORT_1_en = io_toMem_mem_rd ? 1'h0 : io_toMem_mem_wr;
  assign io_toWb_exRes = io_toMem_calRes; // @[Mem_Stage.scala 28:17]
  assign io_toWb_memRes = io_toMem_mem_rd ? regMem_MPORT_2_data : 64'h0; // @[Mem_Stage.scala 40:24]
  assign io_toWb_mask_type = io_toMem_mask_type; // @[Mem_Stage.scala 30:21]
  assign io_toWb_reg_wr = io_toMem_reg_wr; // @[Mem_Stage.scala 26:18]
  assign io_toWb_mem_rd = io_toMem_mem_rd; // @[Mem_Stage.scala 27:18]
  assign io_toWb_rd_o = io_toMem_rd_o; // @[Mem_Stage.scala 29:16]
  always @(posedge clock) begin
    if(regMem_MPORT_1_en & regMem_MPORT_1_mask) begin
      regMem[regMem_MPORT_1_addr] <= regMem_MPORT_1_data; // @[Mem_Stage.scala 32:19]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    regMem[initvar] = _RAND_0[63:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Wb_Stage(
  input  [63:0] io_toWb_exRes,
  input  [63:0] io_toWb_memRes,
  input  [2:0]  io_toWb_mask_type,
  input         io_toWb_reg_wr,
  input         io_toWb_mem_rd,
  input  [4:0]  io_toWb_rd_o,
  output [4:0]  io_regwrite_rd_addr,
  output        io_regwrite_reg_wr,
  output [63:0] io_regwrite_rd_data
);
  wire [55:0] hi = io_toWb_memRes[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 72:12]
  wire [7:0] lo = io_toWb_memRes[7:0]; // @[Wb_Stage.scala 25:61]
  wire [63:0] _T_2 = {hi,lo}; // @[Cat.scala 30:58]
  wire [63:0] _T_3 = {56'h0,lo}; // @[Cat.scala 30:58]
  wire [47:0] hi_2 = io_toWb_memRes[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 72:12]
  wire [15:0] lo_2 = io_toWb_memRes[15:0]; // @[Wb_Stage.scala 27:62]
  wire [63:0] _T_6 = {hi_2,lo_2}; // @[Cat.scala 30:58]
  wire [63:0] _T_7 = {48'h0,lo_2}; // @[Cat.scala 30:58]
  wire [31:0] hi_4 = io_toWb_memRes[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [31:0] lo_4 = io_toWb_memRes[31:0]; // @[Wb_Stage.scala 29:62]
  wire [63:0] _T_10 = {hi_4,lo_4}; // @[Cat.scala 30:58]
  wire [63:0] _T_11 = {32'h0,lo_4}; // @[Cat.scala 30:58]
  wire [63:0] _T_13 = 3'h1 == io_toWb_mask_type ? _T_2 : io_toWb_memRes; // @[Mux.scala 80:57]
  wire [63:0] _T_15 = 3'h2 == io_toWb_mask_type ? _T_3 : _T_13; // @[Mux.scala 80:57]
  wire [63:0] _T_17 = 3'h3 == io_toWb_mask_type ? _T_6 : _T_15; // @[Mux.scala 80:57]
  wire [63:0] _T_19 = 3'h4 == io_toWb_mask_type ? _T_7 : _T_17; // @[Mux.scala 80:57]
  wire [63:0] _T_21 = 3'h5 == io_toWb_mask_type ? _T_10 : _T_19; // @[Mux.scala 80:57]
  wire [63:0] mem_data_masked = 3'h6 == io_toWb_mask_type ? _T_11 : _T_21; // @[Mux.scala 80:57]
  assign io_regwrite_rd_addr = io_toWb_rd_o; // @[Wb_Stage.scala 34:23]
  assign io_regwrite_reg_wr = io_toWb_reg_wr; // @[Wb_Stage.scala 35:22]
  assign io_regwrite_rd_data = io_toWb_mem_rd ? mem_data_masked : io_toWb_exRes; // @[Wb_Stage.scala 36:29]
endmodule
module RegFile(
  input         clock,
  input  [4:0]  io_reg_read_rs1_addr,
  output [63:0] io_reg_read_rs1_data,
  input  [4:0]  io_reg_read_rs2_addr,
  output [63:0] io_reg_read_rs2_data,
  input  [4:0]  io_reg_write_rd_addr,
  input         io_reg_write_reg_wr,
  input  [63:0] io_reg_write_rd_data
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [63:0] regFile [0:31]; // @[RegFile.scala 23:20]
  wire [63:0] regFile_MPORT_data; // @[RegFile.scala 23:20]
  wire [4:0] regFile_MPORT_addr; // @[RegFile.scala 23:20]
  wire [63:0] regFile_MPORT_1_data; // @[RegFile.scala 23:20]
  wire [4:0] regFile_MPORT_1_addr; // @[RegFile.scala 23:20]
  wire [63:0] regFile_MPORT_2_data; // @[RegFile.scala 23:20]
  wire [4:0] regFile_MPORT_2_addr; // @[RegFile.scala 23:20]
  wire  regFile_MPORT_2_mask; // @[RegFile.scala 23:20]
  wire  regFile_MPORT_2_en; // @[RegFile.scala 23:20]
  wire  _T_4 = io_reg_write_rd_addr != 5'h0; // @[RegFile.scala 29:63]
  assign regFile_MPORT_addr = io_reg_read_rs1_addr;
  assign regFile_MPORT_data = regFile[regFile_MPORT_addr]; // @[RegFile.scala 23:20]
  assign regFile_MPORT_1_addr = io_reg_read_rs2_addr;
  assign regFile_MPORT_1_data = regFile[regFile_MPORT_1_addr]; // @[RegFile.scala 23:20]
  assign regFile_MPORT_2_data = _T_4 ? io_reg_write_rd_data : 64'h0;
  assign regFile_MPORT_2_addr = io_reg_write_rd_addr;
  assign regFile_MPORT_2_mask = 1'h1;
  assign regFile_MPORT_2_en = io_reg_write_reg_wr;
  assign io_reg_read_rs1_data = io_reg_read_rs1_addr != 5'h0 ? regFile_MPORT_data : 64'h0; // @[RegFile.scala 25:30]
  assign io_reg_read_rs2_data = io_reg_read_rs2_addr != 5'h0 ? regFile_MPORT_1_data : 64'h0; // @[RegFile.scala 26:30]
  always @(posedge clock) begin
    if(regFile_MPORT_2_en & regFile_MPORT_2_mask) begin
      regFile[regFile_MPORT_2_addr] <= regFile_MPORT_2_data; // @[RegFile.scala 23:20]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    regFile[initvar] = _RAND_0[63:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module top(
  input         clock,
  input         reset,
  output [31:0] io_inst_addr,
  input  [31:0] io_inst,
  output [3:0]  io_aluop
);
  wire  ifio_clock; // @[Top.scala 25:20]
  wire  ifio_reset; // @[Top.scala 25:20]
  wire [31:0] ifio_io_InstAddr; // @[Top.scala 25:20]
  wire  ifio_io_ExtoIf_jumpSym; // @[Top.scala 25:20]
  wire [63:0] ifio_io_ExtoIf_jumpAddr; // @[Top.scala 25:20]
  wire [31:0] idio_io_inst; // @[Top.scala 26:20]
  wire [31:0] idio_io_inst_addr; // @[Top.scala 26:20]
  wire [4:0] idio_io_reg_read_rs1_addr; // @[Top.scala 26:20]
  wire [63:0] idio_io_reg_read_rs1_data; // @[Top.scala 26:20]
  wire [4:0] idio_io_reg_read_rs2_addr; // @[Top.scala 26:20]
  wire [63:0] idio_io_reg_read_rs2_data; // @[Top.scala 26:20]
  wire [3:0] idio_io_toEx_alu_op; // @[Top.scala 26:20]
  wire  idio_io_toEx_withW; // @[Top.scala 26:20]
  wire  idio_io_toEx_mem_wr; // @[Top.scala 26:20]
  wire  idio_io_toEx_mem_rd; // @[Top.scala 26:20]
  wire  idio_io_toEx_reg_wr; // @[Top.scala 26:20]
  wire [2:0] idio_io_toEx_mask_type; // @[Top.scala 26:20]
  wire [63:0] idio_io_toEx_mem_data; // @[Top.scala 26:20]
  wire [4:0] idio_io_toEx_rd_o; // @[Top.scala 26:20]
  wire [2:0] idio_io_toEx_cmp_op; // @[Top.scala 26:20]
  wire [63:0] idio_io_toEx_cmp_op1; // @[Top.scala 26:20]
  wire [63:0] idio_io_toEx_cmp_op2; // @[Top.scala 26:20]
  wire [63:0] idio_io_toEx_op1; // @[Top.scala 26:20]
  wire [63:0] idio_io_toEx_op2; // @[Top.scala 26:20]
  wire [31:0] idio_io_toEx_inst_addr; // @[Top.scala 26:20]
  wire [3:0] idio_io_aluop; // @[Top.scala 26:20]
  wire [3:0] exio_io_toEx_alu_op; // @[Top.scala 27:20]
  wire  exio_io_toEx_withW; // @[Top.scala 27:20]
  wire  exio_io_toEx_mem_wr; // @[Top.scala 27:20]
  wire  exio_io_toEx_mem_rd; // @[Top.scala 27:20]
  wire  exio_io_toEx_reg_wr; // @[Top.scala 27:20]
  wire [2:0] exio_io_toEx_mask_type; // @[Top.scala 27:20]
  wire [63:0] exio_io_toEx_mem_data; // @[Top.scala 27:20]
  wire [4:0] exio_io_toEx_rd_o; // @[Top.scala 27:20]
  wire [2:0] exio_io_toEx_cmp_op; // @[Top.scala 27:20]
  wire [63:0] exio_io_toEx_cmp_op1; // @[Top.scala 27:20]
  wire [63:0] exio_io_toEx_cmp_op2; // @[Top.scala 27:20]
  wire [63:0] exio_io_toEx_op1; // @[Top.scala 27:20]
  wire [63:0] exio_io_toEx_op2; // @[Top.scala 27:20]
  wire [31:0] exio_io_toEx_inst_addr; // @[Top.scala 27:20]
  wire  exio_io_toMem_mem_wr; // @[Top.scala 27:20]
  wire  exio_io_toMem_mem_rd; // @[Top.scala 27:20]
  wire  exio_io_toMem_reg_wr; // @[Top.scala 27:20]
  wire [2:0] exio_io_toMem_mask_type; // @[Top.scala 27:20]
  wire [63:0] exio_io_toMem_mem_mask; // @[Top.scala 27:20]
  wire [63:0] exio_io_toMem_mem_data; // @[Top.scala 27:20]
  wire [4:0] exio_io_toMem_rd_o; // @[Top.scala 27:20]
  wire [63:0] exio_io_toMem_calRes; // @[Top.scala 27:20]
  wire  exio_io_toIf_jumpSym; // @[Top.scala 27:20]
  wire [63:0] exio_io_toIf_jumpAddr; // @[Top.scala 27:20]
  wire  memio_clock; // @[Top.scala 28:21]
  wire  memio_io_toMem_mem_wr; // @[Top.scala 28:21]
  wire  memio_io_toMem_mem_rd; // @[Top.scala 28:21]
  wire  memio_io_toMem_reg_wr; // @[Top.scala 28:21]
  wire [2:0] memio_io_toMem_mask_type; // @[Top.scala 28:21]
  wire [63:0] memio_io_toMem_mem_mask; // @[Top.scala 28:21]
  wire [63:0] memio_io_toMem_mem_data; // @[Top.scala 28:21]
  wire [4:0] memio_io_toMem_rd_o; // @[Top.scala 28:21]
  wire [63:0] memio_io_toMem_calRes; // @[Top.scala 28:21]
  wire [63:0] memio_io_toWb_exRes; // @[Top.scala 28:21]
  wire [63:0] memio_io_toWb_memRes; // @[Top.scala 28:21]
  wire [2:0] memio_io_toWb_mask_type; // @[Top.scala 28:21]
  wire  memio_io_toWb_reg_wr; // @[Top.scala 28:21]
  wire  memio_io_toWb_mem_rd; // @[Top.scala 28:21]
  wire [4:0] memio_io_toWb_rd_o; // @[Top.scala 28:21]
  wire [63:0] wbio_io_toWb_exRes; // @[Top.scala 29:20]
  wire [63:0] wbio_io_toWb_memRes; // @[Top.scala 29:20]
  wire [2:0] wbio_io_toWb_mask_type; // @[Top.scala 29:20]
  wire  wbio_io_toWb_reg_wr; // @[Top.scala 29:20]
  wire  wbio_io_toWb_mem_rd; // @[Top.scala 29:20]
  wire [4:0] wbio_io_toWb_rd_o; // @[Top.scala 29:20]
  wire [4:0] wbio_io_regwrite_rd_addr; // @[Top.scala 29:20]
  wire  wbio_io_regwrite_reg_wr; // @[Top.scala 29:20]
  wire [63:0] wbio_io_regwrite_rd_data; // @[Top.scala 29:20]
  wire  regio_clock; // @[Top.scala 30:21]
  wire [4:0] regio_io_reg_read_rs1_addr; // @[Top.scala 30:21]
  wire [63:0] regio_io_reg_read_rs1_data; // @[Top.scala 30:21]
  wire [4:0] regio_io_reg_read_rs2_addr; // @[Top.scala 30:21]
  wire [63:0] regio_io_reg_read_rs2_data; // @[Top.scala 30:21]
  wire [4:0] regio_io_reg_write_rd_addr; // @[Top.scala 30:21]
  wire  regio_io_reg_write_reg_wr; // @[Top.scala 30:21]
  wire [63:0] regio_io_reg_write_rd_data; // @[Top.scala 30:21]
  wire  bb_clk; // @[Top.scala 34:18]
  wire  bb_rst; // @[Top.scala 34:18]
  wire [3:0] bb_call_Finish; // @[Top.scala 34:18]
  IF_STAGE ifio ( // @[Top.scala 25:20]
    .clock(ifio_clock),
    .reset(ifio_reset),
    .io_InstAddr(ifio_io_InstAddr),
    .io_ExtoIf_jumpSym(ifio_io_ExtoIf_jumpSym),
    .io_ExtoIf_jumpAddr(ifio_io_ExtoIf_jumpAddr)
  );
  Id_Stage idio ( // @[Top.scala 26:20]
    .io_inst(idio_io_inst),
    .io_inst_addr(idio_io_inst_addr),
    .io_reg_read_rs1_addr(idio_io_reg_read_rs1_addr),
    .io_reg_read_rs1_data(idio_io_reg_read_rs1_data),
    .io_reg_read_rs2_addr(idio_io_reg_read_rs2_addr),
    .io_reg_read_rs2_data(idio_io_reg_read_rs2_data),
    .io_toEx_alu_op(idio_io_toEx_alu_op),
    .io_toEx_withW(idio_io_toEx_withW),
    .io_toEx_mem_wr(idio_io_toEx_mem_wr),
    .io_toEx_mem_rd(idio_io_toEx_mem_rd),
    .io_toEx_reg_wr(idio_io_toEx_reg_wr),
    .io_toEx_mask_type(idio_io_toEx_mask_type),
    .io_toEx_mem_data(idio_io_toEx_mem_data),
    .io_toEx_rd_o(idio_io_toEx_rd_o),
    .io_toEx_cmp_op(idio_io_toEx_cmp_op),
    .io_toEx_cmp_op1(idio_io_toEx_cmp_op1),
    .io_toEx_cmp_op2(idio_io_toEx_cmp_op2),
    .io_toEx_op1(idio_io_toEx_op1),
    .io_toEx_op2(idio_io_toEx_op2),
    .io_toEx_inst_addr(idio_io_toEx_inst_addr),
    .io_aluop(idio_io_aluop)
  );
  Ex_Stage exio ( // @[Top.scala 27:20]
    .io_toEx_alu_op(exio_io_toEx_alu_op),
    .io_toEx_withW(exio_io_toEx_withW),
    .io_toEx_mem_wr(exio_io_toEx_mem_wr),
    .io_toEx_mem_rd(exio_io_toEx_mem_rd),
    .io_toEx_reg_wr(exio_io_toEx_reg_wr),
    .io_toEx_mask_type(exio_io_toEx_mask_type),
    .io_toEx_mem_data(exio_io_toEx_mem_data),
    .io_toEx_rd_o(exio_io_toEx_rd_o),
    .io_toEx_cmp_op(exio_io_toEx_cmp_op),
    .io_toEx_cmp_op1(exio_io_toEx_cmp_op1),
    .io_toEx_cmp_op2(exio_io_toEx_cmp_op2),
    .io_toEx_op1(exio_io_toEx_op1),
    .io_toEx_op2(exio_io_toEx_op2),
    .io_toEx_inst_addr(exio_io_toEx_inst_addr),
    .io_toMem_mem_wr(exio_io_toMem_mem_wr),
    .io_toMem_mem_rd(exio_io_toMem_mem_rd),
    .io_toMem_reg_wr(exio_io_toMem_reg_wr),
    .io_toMem_mask_type(exio_io_toMem_mask_type),
    .io_toMem_mem_mask(exio_io_toMem_mem_mask),
    .io_toMem_mem_data(exio_io_toMem_mem_data),
    .io_toMem_rd_o(exio_io_toMem_rd_o),
    .io_toMem_calRes(exio_io_toMem_calRes),
    .io_toIf_jumpSym(exio_io_toIf_jumpSym),
    .io_toIf_jumpAddr(exio_io_toIf_jumpAddr)
  );
  Mem_Stage memio ( // @[Top.scala 28:21]
    .clock(memio_clock),
    .io_toMem_mem_wr(memio_io_toMem_mem_wr),
    .io_toMem_mem_rd(memio_io_toMem_mem_rd),
    .io_toMem_reg_wr(memio_io_toMem_reg_wr),
    .io_toMem_mask_type(memio_io_toMem_mask_type),
    .io_toMem_mem_mask(memio_io_toMem_mem_mask),
    .io_toMem_mem_data(memio_io_toMem_mem_data),
    .io_toMem_rd_o(memio_io_toMem_rd_o),
    .io_toMem_calRes(memio_io_toMem_calRes),
    .io_toWb_exRes(memio_io_toWb_exRes),
    .io_toWb_memRes(memio_io_toWb_memRes),
    .io_toWb_mask_type(memio_io_toWb_mask_type),
    .io_toWb_reg_wr(memio_io_toWb_reg_wr),
    .io_toWb_mem_rd(memio_io_toWb_mem_rd),
    .io_toWb_rd_o(memio_io_toWb_rd_o)
  );
  Wb_Stage wbio ( // @[Top.scala 29:20]
    .io_toWb_exRes(wbio_io_toWb_exRes),
    .io_toWb_memRes(wbio_io_toWb_memRes),
    .io_toWb_mask_type(wbio_io_toWb_mask_type),
    .io_toWb_reg_wr(wbio_io_toWb_reg_wr),
    .io_toWb_mem_rd(wbio_io_toWb_mem_rd),
    .io_toWb_rd_o(wbio_io_toWb_rd_o),
    .io_regwrite_rd_addr(wbio_io_regwrite_rd_addr),
    .io_regwrite_reg_wr(wbio_io_regwrite_reg_wr),
    .io_regwrite_rd_data(wbio_io_regwrite_rd_data)
  );
  RegFile regio ( // @[Top.scala 30:21]
    .clock(regio_clock),
    .io_reg_read_rs1_addr(regio_io_reg_read_rs1_addr),
    .io_reg_read_rs1_data(regio_io_reg_read_rs1_data),
    .io_reg_read_rs2_addr(regio_io_reg_read_rs2_addr),
    .io_reg_read_rs2_data(regio_io_reg_read_rs2_data),
    .io_reg_write_rd_addr(regio_io_reg_write_rd_addr),
    .io_reg_write_reg_wr(regio_io_reg_write_reg_wr),
    .io_reg_write_rd_data(regio_io_reg_write_rd_data)
  );
  callFinish bb ( // @[Top.scala 34:18]
    .clk(bb_clk),
    .rst(bb_rst),
    .call_Finish(bb_call_Finish)
  );
  assign io_inst_addr = ifio_io_InstAddr; // @[Top.scala 41:16]
  assign io_aluop = idio_io_aluop; // @[Top.scala 39:12]
  assign ifio_clock = clock;
  assign ifio_reset = reset;
  assign ifio_io_ExtoIf_jumpSym = exio_io_toIf_jumpSym; // @[Top.scala 42:18]
  assign ifio_io_ExtoIf_jumpAddr = exio_io_toIf_jumpAddr; // @[Top.scala 42:18]
  assign idio_io_inst = io_inst; // @[Top.scala 44:16]
  assign idio_io_inst_addr = ifio_io_InstAddr; // @[Top.scala 45:21]
  assign idio_io_reg_read_rs1_data = regio_io_reg_read_rs1_data; // @[Top.scala 52:20]
  assign idio_io_reg_read_rs2_data = regio_io_reg_read_rs2_data; // @[Top.scala 52:20]
  assign exio_io_toEx_alu_op = idio_io_toEx_alu_op; // @[Top.scala 46:16]
  assign exio_io_toEx_withW = idio_io_toEx_withW; // @[Top.scala 46:16]
  assign exio_io_toEx_mem_wr = idio_io_toEx_mem_wr; // @[Top.scala 46:16]
  assign exio_io_toEx_mem_rd = idio_io_toEx_mem_rd; // @[Top.scala 46:16]
  assign exio_io_toEx_reg_wr = idio_io_toEx_reg_wr; // @[Top.scala 46:16]
  assign exio_io_toEx_mask_type = idio_io_toEx_mask_type; // @[Top.scala 46:16]
  assign exio_io_toEx_mem_data = idio_io_toEx_mem_data; // @[Top.scala 46:16]
  assign exio_io_toEx_rd_o = idio_io_toEx_rd_o; // @[Top.scala 46:16]
  assign exio_io_toEx_cmp_op = idio_io_toEx_cmp_op; // @[Top.scala 46:16]
  assign exio_io_toEx_cmp_op1 = idio_io_toEx_cmp_op1; // @[Top.scala 46:16]
  assign exio_io_toEx_cmp_op2 = idio_io_toEx_cmp_op2; // @[Top.scala 46:16]
  assign exio_io_toEx_op1 = idio_io_toEx_op1; // @[Top.scala 46:16]
  assign exio_io_toEx_op2 = idio_io_toEx_op2; // @[Top.scala 46:16]
  assign exio_io_toEx_inst_addr = idio_io_toEx_inst_addr; // @[Top.scala 46:16]
  assign memio_clock = clock;
  assign memio_io_toMem_mem_wr = exio_io_toMem_mem_wr; // @[Top.scala 48:18]
  assign memio_io_toMem_mem_rd = exio_io_toMem_mem_rd; // @[Top.scala 48:18]
  assign memio_io_toMem_reg_wr = exio_io_toMem_reg_wr; // @[Top.scala 48:18]
  assign memio_io_toMem_mask_type = exio_io_toMem_mask_type; // @[Top.scala 48:18]
  assign memio_io_toMem_mem_mask = exio_io_toMem_mem_mask; // @[Top.scala 48:18]
  assign memio_io_toMem_mem_data = exio_io_toMem_mem_data; // @[Top.scala 48:18]
  assign memio_io_toMem_rd_o = exio_io_toMem_rd_o; // @[Top.scala 48:18]
  assign memio_io_toMem_calRes = exio_io_toMem_calRes; // @[Top.scala 48:18]
  assign wbio_io_toWb_exRes = memio_io_toWb_exRes; // @[Top.scala 50:16]
  assign wbio_io_toWb_memRes = memio_io_toWb_memRes; // @[Top.scala 50:16]
  assign wbio_io_toWb_mask_type = memio_io_toWb_mask_type; // @[Top.scala 50:16]
  assign wbio_io_toWb_reg_wr = memio_io_toWb_reg_wr; // @[Top.scala 50:16]
  assign wbio_io_toWb_mem_rd = memio_io_toWb_mem_rd; // @[Top.scala 50:16]
  assign wbio_io_toWb_rd_o = memio_io_toWb_rd_o; // @[Top.scala 50:16]
  assign regio_clock = clock;
  assign regio_io_reg_read_rs1_addr = idio_io_reg_read_rs1_addr; // @[Top.scala 52:20]
  assign regio_io_reg_read_rs2_addr = idio_io_reg_read_rs2_addr; // @[Top.scala 52:20]
  assign regio_io_reg_write_rd_addr = wbio_io_regwrite_rd_addr; // @[Top.scala 53:22]
  assign regio_io_reg_write_reg_wr = wbio_io_regwrite_reg_wr; // @[Top.scala 53:22]
  assign regio_io_reg_write_rd_data = wbio_io_regwrite_rd_data; // @[Top.scala 53:22]
  assign bb_clk = clock; // @[Top.scala 36:13]
  assign bb_rst = reset; // @[Top.scala 37:13]
  assign bb_call_Finish = idio_io_aluop; // @[Top.scala 35:21]
endmodule
