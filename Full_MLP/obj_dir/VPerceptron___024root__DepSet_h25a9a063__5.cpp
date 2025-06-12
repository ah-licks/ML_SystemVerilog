// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron__Syms.h"
#include "VPerceptron___024root.h"

VL_INLINE_OPT void VPerceptron___024root___nba_sequent__TOP__2(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___nba_sequent__TOP__2\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vfunc_sfp_mul__34__Vfuncout;
    __Vfunc_sfp_mul__34__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__34__a;
    __Vfunc_sfp_mul__34__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__34__b;
    __Vfunc_sfp_mul__34__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__34__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__34__tmp);
    IData/*31:0*/ __Vfunc_sfp_div__81__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_sfp_div__84__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__92__Vfuncout;
    __Vfunc_sfp_mul__92__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__92__a;
    __Vfunc_sfp_mul__92__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__92__b;
    __Vfunc_sfp_mul__92__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__92__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__92__tmp);
    IData/*31:0*/ __Vfunc_sfp_div__139__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_sfp_div__142__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__150__Vfuncout;
    __Vfunc_sfp_mul__150__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__150__a;
    __Vfunc_sfp_mul__150__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__150__b;
    __Vfunc_sfp_mul__150__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__150__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__150__tmp);
    IData/*31:0*/ __Vfunc_sfp_div__197__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_sfp_div__200__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__208__Vfuncout;
    __Vfunc_sfp_mul__208__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__208__a;
    __Vfunc_sfp_mul__208__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__208__b;
    __Vfunc_sfp_mul__208__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__208__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__208__tmp);
    IData/*31:0*/ __Vfunc_sfp_div__255__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_sfp_div__258__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__266__Vfuncout;
    __Vfunc_sfp_mul__266__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__266__a;
    __Vfunc_sfp_mul__266__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__266__b;
    __Vfunc_sfp_mul__266__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__266__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__266__tmp);
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_22;
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_25;
    VlWide<4>/*127:0*/ __Vtemp_26;
    VlWide<4>/*127:0*/ __Vtemp_27;
    VlWide<4>/*127:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_30;
    VlWide<4>/*127:0*/ __Vtemp_31;
    VlWide<4>/*127:0*/ __Vtemp_33;
    VlWide<4>/*127:0*/ __Vtemp_34;
    VlWide<4>/*127:0*/ __Vtemp_35;
    VlWide<4>/*127:0*/ __Vtemp_37;
    VlWide<4>/*127:0*/ __Vtemp_38;
    VlWide<4>/*127:0*/ __Vtemp_39;
    VlWide<4>/*127:0*/ __Vtemp_41;
    VlWide<4>/*127:0*/ __Vtemp_42;
    VlWide<4>/*127:0*/ __Vtemp_43;
    VlWide<4>/*127:0*/ __Vtemp_45;
    VlWide<4>/*127:0*/ __Vtemp_46;
    VlWide<4>/*127:0*/ __Vtemp_47;
    VlWide<4>/*127:0*/ __Vtemp_49;
    VlWide<4>/*127:0*/ __Vtemp_50;
    VlWide<4>/*127:0*/ __Vtemp_51;
    VlWide<4>/*127:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_55;
    VlWide<4>/*127:0*/ __Vtemp_57;
    VlWide<4>/*127:0*/ __Vtemp_58;
    VlWide<4>/*127:0*/ __Vtemp_59;
    VlWide<4>/*127:0*/ __Vtemp_61;
    VlWide<4>/*127:0*/ __Vtemp_62;
    VlWide<4>/*127:0*/ __Vtemp_63;
    VlWide<4>/*127:0*/ __Vtemp_65;
    VlWide<4>/*127:0*/ __Vtemp_66;
    VlWide<4>/*127:0*/ __Vtemp_67;
    VlWide<4>/*127:0*/ __Vtemp_69;
    VlWide<4>/*127:0*/ __Vtemp_70;
    VlWide<4>/*127:0*/ __Vtemp_71;
    VlWide<4>/*127:0*/ __Vtemp_73;
    VlWide<4>/*127:0*/ __Vtemp_74;
    VlWide<4>/*127:0*/ __Vtemp_75;
    VlWide<4>/*127:0*/ __Vtemp_77;
    VlWide<4>/*127:0*/ __Vtemp_78;
    VlWide<4>/*127:0*/ __Vtemp_79;
    VlWide<4>/*127:0*/ __Vtemp_81;
    VlWide<4>/*127:0*/ __Vtemp_82;
    VlWide<4>/*127:0*/ __Vtemp_83;
    VlWide<4>/*127:0*/ __Vtemp_85;
    VlWide<4>/*127:0*/ __Vtemp_86;
    VlWide<4>/*127:0*/ __Vtemp_87;
    VlWide<4>/*127:0*/ __Vtemp_89;
    VlWide<4>/*127:0*/ __Vtemp_90;
    VlWide<4>/*127:0*/ __Vtemp_91;
    VlWide<4>/*127:0*/ __Vtemp_93;
    VlWide<4>/*127:0*/ __Vtemp_94;
    VlWide<4>/*127:0*/ __Vtemp_95;
    VlWide<4>/*127:0*/ __Vtemp_97;
    VlWide<4>/*127:0*/ __Vtemp_98;
    VlWide<4>/*127:0*/ __Vtemp_99;
    VlWide<4>/*127:0*/ __Vtemp_101;
    VlWide<4>/*127:0*/ __Vtemp_102;
    VlWide<4>/*127:0*/ __Vtemp_103;
    VlWide<4>/*127:0*/ __Vtemp_105;
    VlWide<4>/*127:0*/ __Vtemp_106;
    VlWide<4>/*127:0*/ __Vtemp_107;
    VlWide<4>/*127:0*/ __Vtemp_109;
    VlWide<4>/*127:0*/ __Vtemp_110;
    VlWide<4>/*127:0*/ __Vtemp_111;
    VlWide<4>/*127:0*/ __Vtemp_113;
    VlWide<4>/*127:0*/ __Vtemp_114;
    VlWide<4>/*127:0*/ __Vtemp_115;
    VlWide<4>/*127:0*/ __Vtemp_117;
    VlWide<4>/*127:0*/ __Vtemp_118;
    VlWide<4>/*127:0*/ __Vtemp_119;
    VlWide<4>/*127:0*/ __Vtemp_121;
    VlWide<4>/*127:0*/ __Vtemp_122;
    VlWide<4>/*127:0*/ __Vtemp_123;
    VlWide<4>/*127:0*/ __Vtemp_125;
    VlWide<4>/*127:0*/ __Vtemp_126;
    VlWide<4>/*127:0*/ __Vtemp_127;
    VlWide<4>/*127:0*/ __Vtemp_129;
    VlWide<4>/*127:0*/ __Vtemp_130;
    VlWide<4>/*127:0*/ __Vtemp_131;
    VlWide<4>/*127:0*/ __Vtemp_133;
    VlWide<4>/*127:0*/ __Vtemp_134;
    VlWide<4>/*127:0*/ __Vtemp_135;
    VlWide<4>/*127:0*/ __Vtemp_137;
    VlWide<4>/*127:0*/ __Vtemp_138;
    VlWide<4>/*127:0*/ __Vtemp_139;
    VlWide<4>/*127:0*/ __Vtemp_141;
    VlWide<4>/*127:0*/ __Vtemp_142;
    VlWide<4>/*127:0*/ __Vtemp_143;
    VlWide<4>/*127:0*/ __Vtemp_145;
    VlWide<4>/*127:0*/ __Vtemp_146;
    VlWide<4>/*127:0*/ __Vtemp_147;
    VlWide<4>/*127:0*/ __Vtemp_149;
    VlWide<4>/*127:0*/ __Vtemp_150;
    VlWide<4>/*127:0*/ __Vtemp_151;
    VlWide<4>/*127:0*/ __Vtemp_153;
    VlWide<4>/*127:0*/ __Vtemp_154;
    VlWide<4>/*127:0*/ __Vtemp_155;
    VlWide<4>/*127:0*/ __Vtemp_157;
    VlWide<4>/*127:0*/ __Vtemp_158;
    VlWide<4>/*127:0*/ __Vtemp_159;
    VlWide<4>/*127:0*/ __Vtemp_161;
    VlWide<4>/*127:0*/ __Vtemp_162;
    VlWide<4>/*127:0*/ __Vtemp_163;
    VlWide<4>/*127:0*/ __Vtemp_165;
    VlWide<4>/*127:0*/ __Vtemp_166;
    VlWide<4>/*127:0*/ __Vtemp_167;
    VlWide<4>/*127:0*/ __Vtemp_169;
    VlWide<4>/*127:0*/ __Vtemp_170;
    VlWide<4>/*127:0*/ __Vtemp_171;
    VlWide<4>/*127:0*/ __Vtemp_173;
    VlWide<4>/*127:0*/ __Vtemp_174;
    VlWide<4>/*127:0*/ __Vtemp_175;
    VlWide<4>/*127:0*/ __Vtemp_177;
    VlWide<4>/*127:0*/ __Vtemp_178;
    VlWide<4>/*127:0*/ __Vtemp_179;
    VlWide<4>/*127:0*/ __Vtemp_181;
    VlWide<4>/*127:0*/ __Vtemp_182;
    VlWide<4>/*127:0*/ __Vtemp_183;
    VlWide<4>/*127:0*/ __Vtemp_185;
    VlWide<4>/*127:0*/ __Vtemp_186;
    VlWide<4>/*127:0*/ __Vtemp_187;
    VlWide<4>/*127:0*/ __Vtemp_189;
    VlWide<4>/*127:0*/ __Vtemp_190;
    VlWide<4>/*127:0*/ __Vtemp_191;
    VlWide<4>/*127:0*/ __Vtemp_193;
    VlWide<4>/*127:0*/ __Vtemp_194;
    VlWide<4>/*127:0*/ __Vtemp_195;
    VlWide<4>/*127:0*/ __Vtemp_197;
    VlWide<4>/*127:0*/ __Vtemp_198;
    VlWide<4>/*127:0*/ __Vtemp_199;
    VlWide<4>/*127:0*/ __Vtemp_201;
    VlWide<4>/*127:0*/ __Vtemp_202;
    VlWide<4>/*127:0*/ __Vtemp_203;
    VlWide<4>/*127:0*/ __Vtemp_205;
    VlWide<4>/*127:0*/ __Vtemp_206;
    VlWide<4>/*127:0*/ __Vtemp_207;
    VlWide<4>/*127:0*/ __Vtemp_209;
    VlWide<4>/*127:0*/ __Vtemp_210;
    VlWide<4>/*127:0*/ __Vtemp_211;
    VlWide<4>/*127:0*/ __Vtemp_213;
    VlWide<4>/*127:0*/ __Vtemp_214;
    VlWide<4>/*127:0*/ __Vtemp_215;
    VlWide<4>/*127:0*/ __Vtemp_217;
    VlWide<4>/*127:0*/ __Vtemp_218;
    VlWide<4>/*127:0*/ __Vtemp_219;
    VlWide<4>/*127:0*/ __Vtemp_221;
    VlWide<4>/*127:0*/ __Vtemp_222;
    VlWide<4>/*127:0*/ __Vtemp_223;
    VlWide<4>/*127:0*/ __Vtemp_225;
    VlWide<4>/*127:0*/ __Vtemp_226;
    VlWide<4>/*127:0*/ __Vtemp_227;
    VlWide<4>/*127:0*/ __Vtemp_229;
    VlWide<4>/*127:0*/ __Vtemp_230;
    VlWide<4>/*127:0*/ __Vtemp_231;
    VlWide<4>/*127:0*/ __Vtemp_233;
    VlWide<4>/*127:0*/ __Vtemp_234;
    VlWide<4>/*127:0*/ __Vtemp_235;
    VlWide<4>/*127:0*/ __Vtemp_237;
    VlWide<4>/*127:0*/ __Vtemp_238;
    VlWide<4>/*127:0*/ __Vtemp_239;
    VlWide<4>/*127:0*/ __Vtemp_241;
    VlWide<4>/*127:0*/ __Vtemp_242;
    VlWide<4>/*127:0*/ __Vtemp_243;
    VlWide<4>/*127:0*/ __Vtemp_245;
    VlWide<4>/*127:0*/ __Vtemp_246;
    VlWide<4>/*127:0*/ __Vtemp_247;
    VlWide<4>/*127:0*/ __Vtemp_249;
    VlWide<4>/*127:0*/ __Vtemp_250;
    VlWide<4>/*127:0*/ __Vtemp_251;
    VlWide<4>/*127:0*/ __Vtemp_253;
    VlWide<4>/*127:0*/ __Vtemp_254;
    VlWide<4>/*127:0*/ __Vtemp_255;
    VlWide<4>/*127:0*/ __Vtemp_257;
    VlWide<4>/*127:0*/ __Vtemp_258;
    VlWide<4>/*127:0*/ __Vtemp_259;
    VlWide<4>/*127:0*/ __Vtemp_261;
    VlWide<4>/*127:0*/ __Vtemp_262;
    VlWide<4>/*127:0*/ __Vtemp_263;
    VlWide<4>/*127:0*/ __Vtemp_265;
    VlWide<4>/*127:0*/ __Vtemp_266;
    VlWide<4>/*127:0*/ __Vtemp_267;
    VlWide<4>/*127:0*/ __Vtemp_269;
    VlWide<4>/*127:0*/ __Vtemp_270;
    VlWide<4>/*127:0*/ __Vtemp_271;
    VlWide<4>/*127:0*/ __Vtemp_273;
    VlWide<4>/*127:0*/ __Vtemp_275;
    VlWide<4>/*127:0*/ __Vtemp_277;
    VlWide<4>/*127:0*/ __Vtemp_278;
    VlWide<4>/*127:0*/ __Vtemp_279;
    VlWide<4>/*127:0*/ __Vtemp_281;
    VlWide<4>/*127:0*/ __Vtemp_282;
    VlWide<4>/*127:0*/ __Vtemp_283;
    VlWide<4>/*127:0*/ __Vtemp_285;
    VlWide<4>/*127:0*/ __Vtemp_286;
    VlWide<4>/*127:0*/ __Vtemp_287;
    VlWide<4>/*127:0*/ __Vtemp_289;
    VlWide<4>/*127:0*/ __Vtemp_290;
    VlWide<4>/*127:0*/ __Vtemp_291;
    VlWide<4>/*127:0*/ __Vtemp_293;
    VlWide<4>/*127:0*/ __Vtemp_294;
    VlWide<4>/*127:0*/ __Vtemp_295;
    VlWide<4>/*127:0*/ __Vtemp_297;
    VlWide<4>/*127:0*/ __Vtemp_298;
    VlWide<4>/*127:0*/ __Vtemp_299;
    VlWide<4>/*127:0*/ __Vtemp_301;
    VlWide<4>/*127:0*/ __Vtemp_302;
    VlWide<4>/*127:0*/ __Vtemp_303;
    VlWide<4>/*127:0*/ __Vtemp_305;
    VlWide<4>/*127:0*/ __Vtemp_306;
    VlWide<4>/*127:0*/ __Vtemp_307;
    VlWide<4>/*127:0*/ __Vtemp_309;
    VlWide<4>/*127:0*/ __Vtemp_310;
    VlWide<4>/*127:0*/ __Vtemp_311;
    VlWide<4>/*127:0*/ __Vtemp_313;
    VlWide<4>/*127:0*/ __Vtemp_314;
    VlWide<4>/*127:0*/ __Vtemp_315;
    VlWide<4>/*127:0*/ __Vtemp_317;
    VlWide<4>/*127:0*/ __Vtemp_318;
    VlWide<4>/*127:0*/ __Vtemp_319;
    VlWide<4>/*127:0*/ __Vtemp_321;
    VlWide<4>/*127:0*/ __Vtemp_322;
    VlWide<4>/*127:0*/ __Vtemp_323;
    VlWide<4>/*127:0*/ __Vtemp_325;
    VlWide<4>/*127:0*/ __Vtemp_326;
    VlWide<4>/*127:0*/ __Vtemp_327;
    VlWide<4>/*127:0*/ __Vtemp_329;
    VlWide<4>/*127:0*/ __Vtemp_330;
    VlWide<4>/*127:0*/ __Vtemp_331;
    VlWide<4>/*127:0*/ __Vtemp_333;
    VlWide<4>/*127:0*/ __Vtemp_334;
    VlWide<4>/*127:0*/ __Vtemp_335;
    VlWide<4>/*127:0*/ __Vtemp_337;
    VlWide<4>/*127:0*/ __Vtemp_338;
    VlWide<4>/*127:0*/ __Vtemp_339;
    VlWide<4>/*127:0*/ __Vtemp_341;
    VlWide<4>/*127:0*/ __Vtemp_342;
    VlWide<4>/*127:0*/ __Vtemp_343;
    VlWide<4>/*127:0*/ __Vtemp_345;
    VlWide<4>/*127:0*/ __Vtemp_346;
    VlWide<4>/*127:0*/ __Vtemp_347;
    VlWide<4>/*127:0*/ __Vtemp_349;
    VlWide<4>/*127:0*/ __Vtemp_350;
    VlWide<4>/*127:0*/ __Vtemp_351;
    VlWide<4>/*127:0*/ __Vtemp_353;
    VlWide<4>/*127:0*/ __Vtemp_354;
    VlWide<4>/*127:0*/ __Vtemp_355;
    VlWide<4>/*127:0*/ __Vtemp_357;
    VlWide<4>/*127:0*/ __Vtemp_358;
    VlWide<4>/*127:0*/ __Vtemp_359;
    VlWide<4>/*127:0*/ __Vtemp_361;
    VlWide<4>/*127:0*/ __Vtemp_362;
    VlWide<4>/*127:0*/ __Vtemp_363;
    VlWide<4>/*127:0*/ __Vtemp_365;
    VlWide<4>/*127:0*/ __Vtemp_366;
    VlWide<4>/*127:0*/ __Vtemp_367;
    VlWide<4>/*127:0*/ __Vtemp_369;
    VlWide<4>/*127:0*/ __Vtemp_370;
    VlWide<4>/*127:0*/ __Vtemp_371;
    VlWide<4>/*127:0*/ __Vtemp_373;
    VlWide<4>/*127:0*/ __Vtemp_374;
    VlWide<4>/*127:0*/ __Vtemp_375;
    VlWide<4>/*127:0*/ __Vtemp_377;
    VlWide<4>/*127:0*/ __Vtemp_378;
    VlWide<4>/*127:0*/ __Vtemp_379;
    VlWide<4>/*127:0*/ __Vtemp_381;
    VlWide<4>/*127:0*/ __Vtemp_382;
    VlWide<4>/*127:0*/ __Vtemp_383;
    VlWide<4>/*127:0*/ __Vtemp_385;
    VlWide<4>/*127:0*/ __Vtemp_386;
    VlWide<4>/*127:0*/ __Vtemp_387;
    VlWide<4>/*127:0*/ __Vtemp_389;
    VlWide<4>/*127:0*/ __Vtemp_390;
    VlWide<4>/*127:0*/ __Vtemp_391;
    VlWide<4>/*127:0*/ __Vtemp_393;
    VlWide<4>/*127:0*/ __Vtemp_394;
    VlWide<4>/*127:0*/ __Vtemp_395;
    VlWide<4>/*127:0*/ __Vtemp_397;
    VlWide<4>/*127:0*/ __Vtemp_398;
    VlWide<4>/*127:0*/ __Vtemp_399;
    VlWide<4>/*127:0*/ __Vtemp_401;
    VlWide<4>/*127:0*/ __Vtemp_402;
    VlWide<4>/*127:0*/ __Vtemp_403;
    VlWide<4>/*127:0*/ __Vtemp_405;
    VlWide<4>/*127:0*/ __Vtemp_406;
    VlWide<4>/*127:0*/ __Vtemp_407;
    VlWide<4>/*127:0*/ __Vtemp_409;
    VlWide<4>/*127:0*/ __Vtemp_410;
    VlWide<4>/*127:0*/ __Vtemp_411;
    VlWide<4>/*127:0*/ __Vtemp_413;
    VlWide<4>/*127:0*/ __Vtemp_414;
    VlWide<4>/*127:0*/ __Vtemp_415;
    VlWide<4>/*127:0*/ __Vtemp_417;
    VlWide<4>/*127:0*/ __Vtemp_418;
    VlWide<4>/*127:0*/ __Vtemp_419;
    VlWide<4>/*127:0*/ __Vtemp_421;
    VlWide<4>/*127:0*/ __Vtemp_422;
    VlWide<4>/*127:0*/ __Vtemp_423;
    VlWide<4>/*127:0*/ __Vtemp_425;
    VlWide<4>/*127:0*/ __Vtemp_426;
    VlWide<4>/*127:0*/ __Vtemp_427;
    VlWide<4>/*127:0*/ __Vtemp_429;
    VlWide<4>/*127:0*/ __Vtemp_430;
    VlWide<4>/*127:0*/ __Vtemp_431;
    VlWide<4>/*127:0*/ __Vtemp_433;
    VlWide<4>/*127:0*/ __Vtemp_434;
    VlWide<4>/*127:0*/ __Vtemp_435;
    VlWide<4>/*127:0*/ __Vtemp_437;
    VlWide<4>/*127:0*/ __Vtemp_438;
    VlWide<4>/*127:0*/ __Vtemp_439;
    VlWide<4>/*127:0*/ __Vtemp_441;
    VlWide<4>/*127:0*/ __Vtemp_442;
    VlWide<4>/*127:0*/ __Vtemp_443;
    VlWide<4>/*127:0*/ __Vtemp_445;
    VlWide<4>/*127:0*/ __Vtemp_446;
    VlWide<4>/*127:0*/ __Vtemp_447;
    VlWide<4>/*127:0*/ __Vtemp_449;
    VlWide<4>/*127:0*/ __Vtemp_450;
    VlWide<4>/*127:0*/ __Vtemp_451;
    VlWide<4>/*127:0*/ __Vtemp_453;
    VlWide<4>/*127:0*/ __Vtemp_454;
    VlWide<4>/*127:0*/ __Vtemp_455;
    VlWide<4>/*127:0*/ __Vtemp_457;
    VlWide<4>/*127:0*/ __Vtemp_458;
    VlWide<4>/*127:0*/ __Vtemp_459;
    VlWide<4>/*127:0*/ __Vtemp_461;
    VlWide<4>/*127:0*/ __Vtemp_462;
    VlWide<4>/*127:0*/ __Vtemp_463;
    VlWide<4>/*127:0*/ __Vtemp_465;
    VlWide<4>/*127:0*/ __Vtemp_466;
    VlWide<4>/*127:0*/ __Vtemp_467;
    VlWide<4>/*127:0*/ __Vtemp_469;
    VlWide<4>/*127:0*/ __Vtemp_470;
    VlWide<4>/*127:0*/ __Vtemp_471;
    VlWide<4>/*127:0*/ __Vtemp_473;
    VlWide<4>/*127:0*/ __Vtemp_474;
    VlWide<4>/*127:0*/ __Vtemp_475;
    VlWide<4>/*127:0*/ __Vtemp_477;
    VlWide<4>/*127:0*/ __Vtemp_478;
    VlWide<4>/*127:0*/ __Vtemp_479;
    VlWide<4>/*127:0*/ __Vtemp_481;
    VlWide<4>/*127:0*/ __Vtemp_482;
    VlWide<4>/*127:0*/ __Vtemp_483;
    VlWide<4>/*127:0*/ __Vtemp_485;
    VlWide<4>/*127:0*/ __Vtemp_486;
    VlWide<4>/*127:0*/ __Vtemp_487;
    VlWide<4>/*127:0*/ __Vtemp_489;
    VlWide<4>/*127:0*/ __Vtemp_490;
    VlWide<4>/*127:0*/ __Vtemp_491;
    VlWide<4>/*127:0*/ __Vtemp_493;
    VlWide<4>/*127:0*/ __Vtemp_494;
    VlWide<4>/*127:0*/ __Vtemp_495;
    VlWide<4>/*127:0*/ __Vtemp_497;
    VlWide<4>/*127:0*/ __Vtemp_498;
    VlWide<4>/*127:0*/ __Vtemp_499;
    VlWide<4>/*127:0*/ __Vtemp_501;
    VlWide<4>/*127:0*/ __Vtemp_502;
    VlWide<4>/*127:0*/ __Vtemp_503;
    VlWide<4>/*127:0*/ __Vtemp_505;
    VlWide<4>/*127:0*/ __Vtemp_506;
    VlWide<4>/*127:0*/ __Vtemp_507;
    VlWide<4>/*127:0*/ __Vtemp_509;
    VlWide<4>/*127:0*/ __Vtemp_510;
    VlWide<4>/*127:0*/ __Vtemp_511;
    VlWide<4>/*127:0*/ __Vtemp_513;
    VlWide<4>/*127:0*/ __Vtemp_514;
    VlWide<4>/*127:0*/ __Vtemp_515;
    VlWide<4>/*127:0*/ __Vtemp_517;
    VlWide<4>/*127:0*/ __Vtemp_518;
    VlWide<4>/*127:0*/ __Vtemp_519;
    VlWide<4>/*127:0*/ __Vtemp_521;
    VlWide<4>/*127:0*/ __Vtemp_522;
    VlWide<4>/*127:0*/ __Vtemp_523;
    VlWide<4>/*127:0*/ __Vtemp_525;
    VlWide<4>/*127:0*/ __Vtemp_526;
    VlWide<4>/*127:0*/ __Vtemp_527;
    VlWide<4>/*127:0*/ __Vtemp_529;
    VlWide<4>/*127:0*/ __Vtemp_530;
    VlWide<4>/*127:0*/ __Vtemp_531;
    VlWide<4>/*127:0*/ __Vtemp_532;
    VlWide<4>/*127:0*/ __Vtemp_534;
    VlWide<4>/*127:0*/ __Vtemp_535;
    VlWide<4>/*127:0*/ __Vtemp_536;
    VlWide<4>/*127:0*/ __Vtemp_537;
    VlWide<4>/*127:0*/ __Vtemp_538;
    VlWide<4>/*127:0*/ __Vtemp_539;
    VlWide<4>/*127:0*/ __Vtemp_540;
    VlWide<4>/*127:0*/ __Vtemp_541;
    VlWide<4>/*127:0*/ __Vtemp_542;
    VlWide<4>/*127:0*/ __Vtemp_543;
    VlWide<4>/*127:0*/ __Vtemp_544;
    VlWide<4>/*127:0*/ __Vtemp_545;
    VlWide<4>/*127:0*/ __Vtemp_546;
    VlWide<4>/*127:0*/ __Vtemp_547;
    VlWide<4>/*127:0*/ __Vtemp_548;
    VlWide<4>/*127:0*/ __Vtemp_549;
    VlWide<4>/*127:0*/ __Vtemp_550;
    VlWide<4>/*127:0*/ __Vtemp_551;
    VlWide<4>/*127:0*/ __Vtemp_552;
    VlWide<4>/*127:0*/ __Vtemp_553;
    VlWide<4>/*127:0*/ __Vtemp_554;
    VlWide<4>/*127:0*/ __Vtemp_555;
    VlWide<4>/*127:0*/ __Vtemp_556;
    VlWide<4>/*127:0*/ __Vtemp_557;
    VlWide<4>/*127:0*/ __Vtemp_558;
    VlWide<4>/*127:0*/ __Vtemp_559;
    VlWide<4>/*127:0*/ __Vtemp_560;
    VlWide<4>/*127:0*/ __Vtemp_561;
    VlWide<4>/*127:0*/ __Vtemp_563;
    VlWide<4>/*127:0*/ __Vtemp_564;
    VlWide<4>/*127:0*/ __Vtemp_565;
    VlWide<4>/*127:0*/ __Vtemp_567;
    VlWide<4>/*127:0*/ __Vtemp_568;
    VlWide<4>/*127:0*/ __Vtemp_569;
    VlWide<4>/*127:0*/ __Vtemp_571;
    VlWide<4>/*127:0*/ __Vtemp_572;
    VlWide<4>/*127:0*/ __Vtemp_573;
    VlWide<4>/*127:0*/ __Vtemp_575;
    VlWide<4>/*127:0*/ __Vtemp_576;
    VlWide<4>/*127:0*/ __Vtemp_577;
    VlWide<4>/*127:0*/ __Vtemp_579;
    VlWide<4>/*127:0*/ __Vtemp_580;
    VlWide<4>/*127:0*/ __Vtemp_581;
    VlWide<4>/*127:0*/ __Vtemp_583;
    VlWide<4>/*127:0*/ __Vtemp_584;
    VlWide<4>/*127:0*/ __Vtemp_585;
    VlWide<4>/*127:0*/ __Vtemp_587;
    VlWide<4>/*127:0*/ __Vtemp_588;
    VlWide<4>/*127:0*/ __Vtemp_589;
    VlWide<4>/*127:0*/ __Vtemp_591;
    VlWide<4>/*127:0*/ __Vtemp_592;
    VlWide<4>/*127:0*/ __Vtemp_593;
    VlWide<4>/*127:0*/ __Vtemp_595;
    VlWide<4>/*127:0*/ __Vtemp_596;
    VlWide<4>/*127:0*/ __Vtemp_597;
    VlWide<4>/*127:0*/ __Vtemp_599;
    VlWide<4>/*127:0*/ __Vtemp_600;
    VlWide<4>/*127:0*/ __Vtemp_601;
    VlWide<4>/*127:0*/ __Vtemp_603;
    VlWide<4>/*127:0*/ __Vtemp_604;
    VlWide<4>/*127:0*/ __Vtemp_605;
    VlWide<4>/*127:0*/ __Vtemp_607;
    VlWide<4>/*127:0*/ __Vtemp_608;
    VlWide<4>/*127:0*/ __Vtemp_609;
    VlWide<4>/*127:0*/ __Vtemp_611;
    VlWide<4>/*127:0*/ __Vtemp_612;
    VlWide<4>/*127:0*/ __Vtemp_613;
    VlWide<4>/*127:0*/ __Vtemp_615;
    VlWide<4>/*127:0*/ __Vtemp_616;
    VlWide<4>/*127:0*/ __Vtemp_617;
    VlWide<4>/*127:0*/ __Vtemp_619;
    VlWide<4>/*127:0*/ __Vtemp_620;
    VlWide<4>/*127:0*/ __Vtemp_621;
    VlWide<4>/*127:0*/ __Vtemp_623;
    VlWide<4>/*127:0*/ __Vtemp_624;
    VlWide<4>/*127:0*/ __Vtemp_625;
    VlWide<4>/*127:0*/ __Vtemp_627;
    VlWide<4>/*127:0*/ __Vtemp_628;
    VlWide<4>/*127:0*/ __Vtemp_629;
    VlWide<4>/*127:0*/ __Vtemp_631;
    VlWide<4>/*127:0*/ __Vtemp_632;
    VlWide<4>/*127:0*/ __Vtemp_633;
    VlWide<4>/*127:0*/ __Vtemp_635;
    VlWide<4>/*127:0*/ __Vtemp_636;
    VlWide<4>/*127:0*/ __Vtemp_637;
    VlWide<4>/*127:0*/ __Vtemp_639;
    VlWide<4>/*127:0*/ __Vtemp_640;
    VlWide<4>/*127:0*/ __Vtemp_641;
    VlWide<4>/*127:0*/ __Vtemp_643;
    VlWide<4>/*127:0*/ __Vtemp_644;
    VlWide<4>/*127:0*/ __Vtemp_645;
    VlWide<4>/*127:0*/ __Vtemp_647;
    VlWide<4>/*127:0*/ __Vtemp_648;
    VlWide<4>/*127:0*/ __Vtemp_649;
    VlWide<4>/*127:0*/ __Vtemp_651;
    VlWide<4>/*127:0*/ __Vtemp_652;
    VlWide<4>/*127:0*/ __Vtemp_653;
    VlWide<4>/*127:0*/ __Vtemp_655;
    VlWide<4>/*127:0*/ __Vtemp_656;
    VlWide<4>/*127:0*/ __Vtemp_657;
    VlWide<4>/*127:0*/ __Vtemp_659;
    VlWide<4>/*127:0*/ __Vtemp_660;
    VlWide<4>/*127:0*/ __Vtemp_661;
    VlWide<4>/*127:0*/ __Vtemp_663;
    VlWide<4>/*127:0*/ __Vtemp_664;
    VlWide<4>/*127:0*/ __Vtemp_665;
    VlWide<4>/*127:0*/ __Vtemp_667;
    VlWide<4>/*127:0*/ __Vtemp_668;
    VlWide<4>/*127:0*/ __Vtemp_669;
    VlWide<4>/*127:0*/ __Vtemp_671;
    VlWide<4>/*127:0*/ __Vtemp_672;
    VlWide<4>/*127:0*/ __Vtemp_673;
    VlWide<4>/*127:0*/ __Vtemp_675;
    VlWide<4>/*127:0*/ __Vtemp_676;
    VlWide<4>/*127:0*/ __Vtemp_677;
    VlWide<4>/*127:0*/ __Vtemp_679;
    VlWide<4>/*127:0*/ __Vtemp_680;
    VlWide<4>/*127:0*/ __Vtemp_681;
    VlWide<4>/*127:0*/ __Vtemp_683;
    VlWide<4>/*127:0*/ __Vtemp_684;
    VlWide<4>/*127:0*/ __Vtemp_685;
    VlWide<4>/*127:0*/ __Vtemp_687;
    VlWide<4>/*127:0*/ __Vtemp_688;
    VlWide<4>/*127:0*/ __Vtemp_689;
    VlWide<4>/*127:0*/ __Vtemp_691;
    VlWide<4>/*127:0*/ __Vtemp_692;
    VlWide<4>/*127:0*/ __Vtemp_693;
    VlWide<4>/*127:0*/ __Vtemp_695;
    VlWide<4>/*127:0*/ __Vtemp_696;
    VlWide<4>/*127:0*/ __Vtemp_697;
    VlWide<4>/*127:0*/ __Vtemp_699;
    VlWide<4>/*127:0*/ __Vtemp_700;
    VlWide<4>/*127:0*/ __Vtemp_701;
    VlWide<4>/*127:0*/ __Vtemp_703;
    VlWide<4>/*127:0*/ __Vtemp_704;
    VlWide<4>/*127:0*/ __Vtemp_705;
    VlWide<4>/*127:0*/ __Vtemp_707;
    VlWide<4>/*127:0*/ __Vtemp_708;
    VlWide<4>/*127:0*/ __Vtemp_709;
    VlWide<4>/*127:0*/ __Vtemp_711;
    VlWide<4>/*127:0*/ __Vtemp_712;
    VlWide<4>/*127:0*/ __Vtemp_713;
    VlWide<4>/*127:0*/ __Vtemp_715;
    VlWide<4>/*127:0*/ __Vtemp_716;
    VlWide<4>/*127:0*/ __Vtemp_717;
    VlWide<4>/*127:0*/ __Vtemp_719;
    VlWide<4>/*127:0*/ __Vtemp_720;
    VlWide<4>/*127:0*/ __Vtemp_721;
    VlWide<4>/*127:0*/ __Vtemp_723;
    VlWide<4>/*127:0*/ __Vtemp_724;
    VlWide<4>/*127:0*/ __Vtemp_725;
    VlWide<4>/*127:0*/ __Vtemp_727;
    VlWide<4>/*127:0*/ __Vtemp_728;
    VlWide<4>/*127:0*/ __Vtemp_729;
    VlWide<4>/*127:0*/ __Vtemp_731;
    VlWide<4>/*127:0*/ __Vtemp_732;
    VlWide<4>/*127:0*/ __Vtemp_733;
    VlWide<4>/*127:0*/ __Vtemp_735;
    VlWide<4>/*127:0*/ __Vtemp_736;
    VlWide<4>/*127:0*/ __Vtemp_737;
    VlWide<4>/*127:0*/ __Vtemp_739;
    VlWide<4>/*127:0*/ __Vtemp_740;
    VlWide<4>/*127:0*/ __Vtemp_741;
    VlWide<4>/*127:0*/ __Vtemp_743;
    VlWide<4>/*127:0*/ __Vtemp_744;
    VlWide<4>/*127:0*/ __Vtemp_745;
    VlWide<4>/*127:0*/ __Vtemp_747;
    VlWide<4>/*127:0*/ __Vtemp_748;
    VlWide<4>/*127:0*/ __Vtemp_749;
    VlWide<4>/*127:0*/ __Vtemp_751;
    VlWide<4>/*127:0*/ __Vtemp_752;
    VlWide<4>/*127:0*/ __Vtemp_753;
    VlWide<4>/*127:0*/ __Vtemp_755;
    VlWide<4>/*127:0*/ __Vtemp_756;
    VlWide<4>/*127:0*/ __Vtemp_757;
    VlWide<4>/*127:0*/ __Vtemp_759;
    VlWide<4>/*127:0*/ __Vtemp_760;
    VlWide<4>/*127:0*/ __Vtemp_761;
    VlWide<4>/*127:0*/ __Vtemp_763;
    VlWide<4>/*127:0*/ __Vtemp_764;
    VlWide<4>/*127:0*/ __Vtemp_765;
    VlWide<4>/*127:0*/ __Vtemp_767;
    VlWide<4>/*127:0*/ __Vtemp_768;
    VlWide<4>/*127:0*/ __Vtemp_769;
    VlWide<4>/*127:0*/ __Vtemp_771;
    VlWide<4>/*127:0*/ __Vtemp_772;
    VlWide<4>/*127:0*/ __Vtemp_773;
    VlWide<4>/*127:0*/ __Vtemp_775;
    VlWide<4>/*127:0*/ __Vtemp_776;
    VlWide<4>/*127:0*/ __Vtemp_777;
    VlWide<4>/*127:0*/ __Vtemp_779;
    VlWide<4>/*127:0*/ __Vtemp_780;
    VlWide<4>/*127:0*/ __Vtemp_781;
    VlWide<4>/*127:0*/ __Vtemp_783;
    VlWide<4>/*127:0*/ __Vtemp_784;
    VlWide<4>/*127:0*/ __Vtemp_785;
    VlWide<4>/*127:0*/ __Vtemp_787;
    VlWide<4>/*127:0*/ __Vtemp_788;
    VlWide<4>/*127:0*/ __Vtemp_789;
    VlWide<4>/*127:0*/ __Vtemp_791;
    VlWide<4>/*127:0*/ __Vtemp_792;
    VlWide<4>/*127:0*/ __Vtemp_793;
    VlWide<4>/*127:0*/ __Vtemp_795;
    VlWide<4>/*127:0*/ __Vtemp_796;
    VlWide<4>/*127:0*/ __Vtemp_797;
    VlWide<4>/*127:0*/ __Vtemp_799;
    VlWide<4>/*127:0*/ __Vtemp_800;
    VlWide<4>/*127:0*/ __Vtemp_801;
    VlWide<4>/*127:0*/ __Vtemp_803;
    VlWide<4>/*127:0*/ __Vtemp_804;
    VlWide<4>/*127:0*/ __Vtemp_805;
    VlWide<4>/*127:0*/ __Vtemp_807;
    VlWide<4>/*127:0*/ __Vtemp_808;
    VlWide<4>/*127:0*/ __Vtemp_809;
    VlWide<4>/*127:0*/ __Vtemp_811;
    VlWide<4>/*127:0*/ __Vtemp_812;
    VlWide<4>/*127:0*/ __Vtemp_813;
    VlWide<4>/*127:0*/ __Vtemp_815;
    VlWide<4>/*127:0*/ __Vtemp_817;
    VlWide<4>/*127:0*/ __Vtemp_819;
    VlWide<4>/*127:0*/ __Vtemp_820;
    VlWide<4>/*127:0*/ __Vtemp_821;
    VlWide<4>/*127:0*/ __Vtemp_823;
    VlWide<4>/*127:0*/ __Vtemp_824;
    VlWide<4>/*127:0*/ __Vtemp_825;
    VlWide<4>/*127:0*/ __Vtemp_827;
    VlWide<4>/*127:0*/ __Vtemp_828;
    VlWide<4>/*127:0*/ __Vtemp_829;
    VlWide<4>/*127:0*/ __Vtemp_831;
    VlWide<4>/*127:0*/ __Vtemp_832;
    VlWide<4>/*127:0*/ __Vtemp_833;
    VlWide<4>/*127:0*/ __Vtemp_835;
    VlWide<4>/*127:0*/ __Vtemp_836;
    VlWide<4>/*127:0*/ __Vtemp_837;
    VlWide<4>/*127:0*/ __Vtemp_839;
    VlWide<4>/*127:0*/ __Vtemp_840;
    VlWide<4>/*127:0*/ __Vtemp_841;
    VlWide<4>/*127:0*/ __Vtemp_843;
    VlWide<4>/*127:0*/ __Vtemp_844;
    VlWide<4>/*127:0*/ __Vtemp_845;
    VlWide<4>/*127:0*/ __Vtemp_847;
    VlWide<4>/*127:0*/ __Vtemp_848;
    VlWide<4>/*127:0*/ __Vtemp_849;
    VlWide<4>/*127:0*/ __Vtemp_851;
    VlWide<4>/*127:0*/ __Vtemp_852;
    VlWide<4>/*127:0*/ __Vtemp_853;
    VlWide<4>/*127:0*/ __Vtemp_855;
    VlWide<4>/*127:0*/ __Vtemp_856;
    VlWide<4>/*127:0*/ __Vtemp_857;
    VlWide<4>/*127:0*/ __Vtemp_859;
    VlWide<4>/*127:0*/ __Vtemp_860;
    VlWide<4>/*127:0*/ __Vtemp_861;
    VlWide<4>/*127:0*/ __Vtemp_863;
    VlWide<4>/*127:0*/ __Vtemp_864;
    VlWide<4>/*127:0*/ __Vtemp_865;
    VlWide<4>/*127:0*/ __Vtemp_867;
    VlWide<4>/*127:0*/ __Vtemp_868;
    VlWide<4>/*127:0*/ __Vtemp_869;
    VlWide<4>/*127:0*/ __Vtemp_871;
    VlWide<4>/*127:0*/ __Vtemp_872;
    VlWide<4>/*127:0*/ __Vtemp_873;
    VlWide<4>/*127:0*/ __Vtemp_875;
    VlWide<4>/*127:0*/ __Vtemp_876;
    VlWide<4>/*127:0*/ __Vtemp_877;
    VlWide<4>/*127:0*/ __Vtemp_879;
    VlWide<4>/*127:0*/ __Vtemp_880;
    VlWide<4>/*127:0*/ __Vtemp_881;
    VlWide<4>/*127:0*/ __Vtemp_883;
    VlWide<4>/*127:0*/ __Vtemp_884;
    VlWide<4>/*127:0*/ __Vtemp_885;
    VlWide<4>/*127:0*/ __Vtemp_887;
    VlWide<4>/*127:0*/ __Vtemp_888;
    VlWide<4>/*127:0*/ __Vtemp_889;
    VlWide<4>/*127:0*/ __Vtemp_891;
    VlWide<4>/*127:0*/ __Vtemp_892;
    VlWide<4>/*127:0*/ __Vtemp_893;
    VlWide<4>/*127:0*/ __Vtemp_895;
    VlWide<4>/*127:0*/ __Vtemp_896;
    VlWide<4>/*127:0*/ __Vtemp_897;
    VlWide<4>/*127:0*/ __Vtemp_899;
    VlWide<4>/*127:0*/ __Vtemp_900;
    VlWide<4>/*127:0*/ __Vtemp_901;
    VlWide<4>/*127:0*/ __Vtemp_903;
    VlWide<4>/*127:0*/ __Vtemp_904;
    VlWide<4>/*127:0*/ __Vtemp_905;
    VlWide<4>/*127:0*/ __Vtemp_907;
    VlWide<4>/*127:0*/ __Vtemp_908;
    VlWide<4>/*127:0*/ __Vtemp_909;
    VlWide<4>/*127:0*/ __Vtemp_911;
    VlWide<4>/*127:0*/ __Vtemp_912;
    VlWide<4>/*127:0*/ __Vtemp_913;
    VlWide<4>/*127:0*/ __Vtemp_915;
    VlWide<4>/*127:0*/ __Vtemp_916;
    VlWide<4>/*127:0*/ __Vtemp_917;
    VlWide<4>/*127:0*/ __Vtemp_919;
    VlWide<4>/*127:0*/ __Vtemp_920;
    VlWide<4>/*127:0*/ __Vtemp_921;
    VlWide<4>/*127:0*/ __Vtemp_923;
    VlWide<4>/*127:0*/ __Vtemp_924;
    VlWide<4>/*127:0*/ __Vtemp_925;
    VlWide<4>/*127:0*/ __Vtemp_927;
    VlWide<4>/*127:0*/ __Vtemp_928;
    VlWide<4>/*127:0*/ __Vtemp_929;
    VlWide<4>/*127:0*/ __Vtemp_931;
    VlWide<4>/*127:0*/ __Vtemp_932;
    VlWide<4>/*127:0*/ __Vtemp_933;
    VlWide<4>/*127:0*/ __Vtemp_935;
    VlWide<4>/*127:0*/ __Vtemp_936;
    VlWide<4>/*127:0*/ __Vtemp_937;
    VlWide<4>/*127:0*/ __Vtemp_939;
    VlWide<4>/*127:0*/ __Vtemp_940;
    VlWide<4>/*127:0*/ __Vtemp_941;
    VlWide<4>/*127:0*/ __Vtemp_943;
    VlWide<4>/*127:0*/ __Vtemp_944;
    VlWide<4>/*127:0*/ __Vtemp_945;
    VlWide<4>/*127:0*/ __Vtemp_947;
    VlWide<4>/*127:0*/ __Vtemp_948;
    VlWide<4>/*127:0*/ __Vtemp_949;
    VlWide<4>/*127:0*/ __Vtemp_951;
    VlWide<4>/*127:0*/ __Vtemp_952;
    VlWide<4>/*127:0*/ __Vtemp_953;
    VlWide<4>/*127:0*/ __Vtemp_955;
    VlWide<4>/*127:0*/ __Vtemp_956;
    VlWide<4>/*127:0*/ __Vtemp_957;
    VlWide<4>/*127:0*/ __Vtemp_959;
    VlWide<4>/*127:0*/ __Vtemp_960;
    VlWide<4>/*127:0*/ __Vtemp_961;
    VlWide<4>/*127:0*/ __Vtemp_963;
    VlWide<4>/*127:0*/ __Vtemp_964;
    VlWide<4>/*127:0*/ __Vtemp_965;
    VlWide<4>/*127:0*/ __Vtemp_967;
    VlWide<4>/*127:0*/ __Vtemp_968;
    VlWide<4>/*127:0*/ __Vtemp_969;
    VlWide<4>/*127:0*/ __Vtemp_971;
    VlWide<4>/*127:0*/ __Vtemp_972;
    VlWide<4>/*127:0*/ __Vtemp_973;
    VlWide<4>/*127:0*/ __Vtemp_975;
    VlWide<4>/*127:0*/ __Vtemp_976;
    VlWide<4>/*127:0*/ __Vtemp_977;
    VlWide<4>/*127:0*/ __Vtemp_979;
    VlWide<4>/*127:0*/ __Vtemp_980;
    VlWide<4>/*127:0*/ __Vtemp_981;
    VlWide<4>/*127:0*/ __Vtemp_983;
    VlWide<4>/*127:0*/ __Vtemp_984;
    VlWide<4>/*127:0*/ __Vtemp_985;
    VlWide<4>/*127:0*/ __Vtemp_987;
    VlWide<4>/*127:0*/ __Vtemp_988;
    VlWide<4>/*127:0*/ __Vtemp_989;
    VlWide<4>/*127:0*/ __Vtemp_991;
    VlWide<4>/*127:0*/ __Vtemp_992;
    VlWide<4>/*127:0*/ __Vtemp_993;
    VlWide<4>/*127:0*/ __Vtemp_995;
    VlWide<4>/*127:0*/ __Vtemp_996;
    VlWide<4>/*127:0*/ __Vtemp_997;
    VlWide<4>/*127:0*/ __Vtemp_999;
    VlWide<4>/*127:0*/ __Vtemp_1000;
    VlWide<4>/*127:0*/ __Vtemp_1001;
    VlWide<4>/*127:0*/ __Vtemp_1003;
    VlWide<4>/*127:0*/ __Vtemp_1004;
    VlWide<4>/*127:0*/ __Vtemp_1005;
    VlWide<4>/*127:0*/ __Vtemp_1007;
    VlWide<4>/*127:0*/ __Vtemp_1008;
    VlWide<4>/*127:0*/ __Vtemp_1009;
    VlWide<4>/*127:0*/ __Vtemp_1011;
    VlWide<4>/*127:0*/ __Vtemp_1012;
    VlWide<4>/*127:0*/ __Vtemp_1013;
    VlWide<4>/*127:0*/ __Vtemp_1015;
    VlWide<4>/*127:0*/ __Vtemp_1016;
    VlWide<4>/*127:0*/ __Vtemp_1017;
    VlWide<4>/*127:0*/ __Vtemp_1019;
    VlWide<4>/*127:0*/ __Vtemp_1020;
    VlWide<4>/*127:0*/ __Vtemp_1021;
    VlWide<4>/*127:0*/ __Vtemp_1023;
    VlWide<4>/*127:0*/ __Vtemp_1024;
    VlWide<4>/*127:0*/ __Vtemp_1025;
    VlWide<4>/*127:0*/ __Vtemp_1027;
    VlWide<4>/*127:0*/ __Vtemp_1028;
    VlWide<4>/*127:0*/ __Vtemp_1029;
    VlWide<4>/*127:0*/ __Vtemp_1031;
    VlWide<4>/*127:0*/ __Vtemp_1032;
    VlWide<4>/*127:0*/ __Vtemp_1033;
    VlWide<4>/*127:0*/ __Vtemp_1035;
    VlWide<4>/*127:0*/ __Vtemp_1036;
    VlWide<4>/*127:0*/ __Vtemp_1037;
    VlWide<4>/*127:0*/ __Vtemp_1039;
    VlWide<4>/*127:0*/ __Vtemp_1040;
    VlWide<4>/*127:0*/ __Vtemp_1041;
    VlWide<4>/*127:0*/ __Vtemp_1043;
    VlWide<4>/*127:0*/ __Vtemp_1044;
    VlWide<4>/*127:0*/ __Vtemp_1045;
    VlWide<4>/*127:0*/ __Vtemp_1047;
    VlWide<4>/*127:0*/ __Vtemp_1048;
    VlWide<4>/*127:0*/ __Vtemp_1049;
    VlWide<4>/*127:0*/ __Vtemp_1051;
    VlWide<4>/*127:0*/ __Vtemp_1052;
    VlWide<4>/*127:0*/ __Vtemp_1053;
    VlWide<4>/*127:0*/ __Vtemp_1055;
    VlWide<4>/*127:0*/ __Vtemp_1056;
    VlWide<4>/*127:0*/ __Vtemp_1057;
    VlWide<4>/*127:0*/ __Vtemp_1059;
    VlWide<4>/*127:0*/ __Vtemp_1060;
    VlWide<4>/*127:0*/ __Vtemp_1061;
    VlWide<4>/*127:0*/ __Vtemp_1063;
    VlWide<4>/*127:0*/ __Vtemp_1064;
    VlWide<4>/*127:0*/ __Vtemp_1065;
    VlWide<4>/*127:0*/ __Vtemp_1067;
    VlWide<4>/*127:0*/ __Vtemp_1068;
    VlWide<4>/*127:0*/ __Vtemp_1069;
    VlWide<4>/*127:0*/ __Vtemp_1071;
    VlWide<4>/*127:0*/ __Vtemp_1072;
    VlWide<4>/*127:0*/ __Vtemp_1073;
    VlWide<4>/*127:0*/ __Vtemp_1074;
    VlWide<4>/*127:0*/ __Vtemp_1076;
    VlWide<4>/*127:0*/ __Vtemp_1077;
    VlWide<4>/*127:0*/ __Vtemp_1078;
    VlWide<4>/*127:0*/ __Vtemp_1079;
    VlWide<4>/*127:0*/ __Vtemp_1080;
    VlWide<4>/*127:0*/ __Vtemp_1081;
    VlWide<4>/*127:0*/ __Vtemp_1082;
    VlWide<4>/*127:0*/ __Vtemp_1083;
    VlWide<4>/*127:0*/ __Vtemp_1084;
    VlWide<4>/*127:0*/ __Vtemp_1085;
    VlWide<4>/*127:0*/ __Vtemp_1086;
    VlWide<4>/*127:0*/ __Vtemp_1087;
    VlWide<4>/*127:0*/ __Vtemp_1088;
    VlWide<4>/*127:0*/ __Vtemp_1089;
    VlWide<4>/*127:0*/ __Vtemp_1090;
    VlWide<4>/*127:0*/ __Vtemp_1091;
    VlWide<4>/*127:0*/ __Vtemp_1092;
    VlWide<4>/*127:0*/ __Vtemp_1093;
    VlWide<4>/*127:0*/ __Vtemp_1094;
    VlWide<4>/*127:0*/ __Vtemp_1095;
    VlWide<4>/*127:0*/ __Vtemp_1096;
    VlWide<4>/*127:0*/ __Vtemp_1097;
    VlWide<4>/*127:0*/ __Vtemp_1098;
    VlWide<4>/*127:0*/ __Vtemp_1099;
    VlWide<4>/*127:0*/ __Vtemp_1100;
    VlWide<4>/*127:0*/ __Vtemp_1101;
    VlWide<4>/*127:0*/ __Vtemp_1102;
    VlWide<4>/*127:0*/ __Vtemp_1103;
    VlWide<4>/*127:0*/ __Vtemp_1105;
    VlWide<4>/*127:0*/ __Vtemp_1106;
    VlWide<4>/*127:0*/ __Vtemp_1107;
    VlWide<4>/*127:0*/ __Vtemp_1109;
    VlWide<4>/*127:0*/ __Vtemp_1110;
    VlWide<4>/*127:0*/ __Vtemp_1111;
    VlWide<4>/*127:0*/ __Vtemp_1113;
    VlWide<4>/*127:0*/ __Vtemp_1114;
    VlWide<4>/*127:0*/ __Vtemp_1115;
    VlWide<4>/*127:0*/ __Vtemp_1117;
    VlWide<4>/*127:0*/ __Vtemp_1118;
    VlWide<4>/*127:0*/ __Vtemp_1119;
    VlWide<4>/*127:0*/ __Vtemp_1121;
    VlWide<4>/*127:0*/ __Vtemp_1122;
    VlWide<4>/*127:0*/ __Vtemp_1123;
    VlWide<4>/*127:0*/ __Vtemp_1125;
    VlWide<4>/*127:0*/ __Vtemp_1126;
    VlWide<4>/*127:0*/ __Vtemp_1127;
    VlWide<4>/*127:0*/ __Vtemp_1129;
    VlWide<4>/*127:0*/ __Vtemp_1130;
    VlWide<4>/*127:0*/ __Vtemp_1131;
    VlWide<4>/*127:0*/ __Vtemp_1133;
    VlWide<4>/*127:0*/ __Vtemp_1134;
    VlWide<4>/*127:0*/ __Vtemp_1135;
    VlWide<4>/*127:0*/ __Vtemp_1137;
    VlWide<4>/*127:0*/ __Vtemp_1138;
    VlWide<4>/*127:0*/ __Vtemp_1139;
    VlWide<4>/*127:0*/ __Vtemp_1141;
    VlWide<4>/*127:0*/ __Vtemp_1142;
    VlWide<4>/*127:0*/ __Vtemp_1143;
    VlWide<4>/*127:0*/ __Vtemp_1145;
    VlWide<4>/*127:0*/ __Vtemp_1146;
    VlWide<4>/*127:0*/ __Vtemp_1147;
    VlWide<4>/*127:0*/ __Vtemp_1149;
    VlWide<4>/*127:0*/ __Vtemp_1150;
    VlWide<4>/*127:0*/ __Vtemp_1151;
    VlWide<4>/*127:0*/ __Vtemp_1153;
    VlWide<4>/*127:0*/ __Vtemp_1154;
    VlWide<4>/*127:0*/ __Vtemp_1155;
    VlWide<4>/*127:0*/ __Vtemp_1157;
    VlWide<4>/*127:0*/ __Vtemp_1158;
    VlWide<4>/*127:0*/ __Vtemp_1159;
    VlWide<4>/*127:0*/ __Vtemp_1161;
    VlWide<4>/*127:0*/ __Vtemp_1162;
    VlWide<4>/*127:0*/ __Vtemp_1163;
    VlWide<4>/*127:0*/ __Vtemp_1165;
    VlWide<4>/*127:0*/ __Vtemp_1166;
    VlWide<4>/*127:0*/ __Vtemp_1167;
    VlWide<4>/*127:0*/ __Vtemp_1169;
    VlWide<4>/*127:0*/ __Vtemp_1170;
    VlWide<4>/*127:0*/ __Vtemp_1171;
    VlWide<4>/*127:0*/ __Vtemp_1173;
    VlWide<4>/*127:0*/ __Vtemp_1174;
    VlWide<4>/*127:0*/ __Vtemp_1175;
    VlWide<4>/*127:0*/ __Vtemp_1177;
    VlWide<4>/*127:0*/ __Vtemp_1178;
    VlWide<4>/*127:0*/ __Vtemp_1179;
    VlWide<4>/*127:0*/ __Vtemp_1181;
    VlWide<4>/*127:0*/ __Vtemp_1182;
    VlWide<4>/*127:0*/ __Vtemp_1183;
    VlWide<4>/*127:0*/ __Vtemp_1185;
    VlWide<4>/*127:0*/ __Vtemp_1186;
    VlWide<4>/*127:0*/ __Vtemp_1187;
    VlWide<4>/*127:0*/ __Vtemp_1189;
    VlWide<4>/*127:0*/ __Vtemp_1190;
    VlWide<4>/*127:0*/ __Vtemp_1191;
    VlWide<4>/*127:0*/ __Vtemp_1193;
    VlWide<4>/*127:0*/ __Vtemp_1194;
    VlWide<4>/*127:0*/ __Vtemp_1195;
    VlWide<4>/*127:0*/ __Vtemp_1197;
    VlWide<4>/*127:0*/ __Vtemp_1198;
    VlWide<4>/*127:0*/ __Vtemp_1199;
    VlWide<4>/*127:0*/ __Vtemp_1201;
    VlWide<4>/*127:0*/ __Vtemp_1202;
    VlWide<4>/*127:0*/ __Vtemp_1203;
    VlWide<4>/*127:0*/ __Vtemp_1205;
    VlWide<4>/*127:0*/ __Vtemp_1206;
    VlWide<4>/*127:0*/ __Vtemp_1207;
    VlWide<4>/*127:0*/ __Vtemp_1209;
    VlWide<4>/*127:0*/ __Vtemp_1210;
    VlWide<4>/*127:0*/ __Vtemp_1211;
    VlWide<4>/*127:0*/ __Vtemp_1213;
    VlWide<4>/*127:0*/ __Vtemp_1214;
    VlWide<4>/*127:0*/ __Vtemp_1215;
    VlWide<4>/*127:0*/ __Vtemp_1217;
    VlWide<4>/*127:0*/ __Vtemp_1218;
    VlWide<4>/*127:0*/ __Vtemp_1219;
    VlWide<4>/*127:0*/ __Vtemp_1221;
    VlWide<4>/*127:0*/ __Vtemp_1222;
    VlWide<4>/*127:0*/ __Vtemp_1223;
    VlWide<4>/*127:0*/ __Vtemp_1225;
    VlWide<4>/*127:0*/ __Vtemp_1226;
    VlWide<4>/*127:0*/ __Vtemp_1227;
    VlWide<4>/*127:0*/ __Vtemp_1229;
    VlWide<4>/*127:0*/ __Vtemp_1230;
    VlWide<4>/*127:0*/ __Vtemp_1231;
    VlWide<4>/*127:0*/ __Vtemp_1233;
    VlWide<4>/*127:0*/ __Vtemp_1234;
    VlWide<4>/*127:0*/ __Vtemp_1235;
    VlWide<4>/*127:0*/ __Vtemp_1237;
    VlWide<4>/*127:0*/ __Vtemp_1238;
    VlWide<4>/*127:0*/ __Vtemp_1239;
    VlWide<4>/*127:0*/ __Vtemp_1241;
    VlWide<4>/*127:0*/ __Vtemp_1242;
    VlWide<4>/*127:0*/ __Vtemp_1243;
    VlWide<4>/*127:0*/ __Vtemp_1245;
    VlWide<4>/*127:0*/ __Vtemp_1246;
    VlWide<4>/*127:0*/ __Vtemp_1247;
    VlWide<4>/*127:0*/ __Vtemp_1249;
    VlWide<4>/*127:0*/ __Vtemp_1250;
    VlWide<4>/*127:0*/ __Vtemp_1251;
    VlWide<4>/*127:0*/ __Vtemp_1253;
    VlWide<4>/*127:0*/ __Vtemp_1254;
    VlWide<4>/*127:0*/ __Vtemp_1255;
    VlWide<4>/*127:0*/ __Vtemp_1257;
    VlWide<4>/*127:0*/ __Vtemp_1258;
    VlWide<4>/*127:0*/ __Vtemp_1259;
    VlWide<4>/*127:0*/ __Vtemp_1261;
    VlWide<4>/*127:0*/ __Vtemp_1262;
    VlWide<4>/*127:0*/ __Vtemp_1263;
    VlWide<4>/*127:0*/ __Vtemp_1265;
    VlWide<4>/*127:0*/ __Vtemp_1266;
    VlWide<4>/*127:0*/ __Vtemp_1267;
    VlWide<4>/*127:0*/ __Vtemp_1269;
    VlWide<4>/*127:0*/ __Vtemp_1270;
    VlWide<4>/*127:0*/ __Vtemp_1271;
    VlWide<4>/*127:0*/ __Vtemp_1273;
    VlWide<4>/*127:0*/ __Vtemp_1274;
    VlWide<4>/*127:0*/ __Vtemp_1275;
    VlWide<4>/*127:0*/ __Vtemp_1277;
    VlWide<4>/*127:0*/ __Vtemp_1278;
    VlWide<4>/*127:0*/ __Vtemp_1279;
    VlWide<4>/*127:0*/ __Vtemp_1281;
    VlWide<4>/*127:0*/ __Vtemp_1282;
    VlWide<4>/*127:0*/ __Vtemp_1283;
    VlWide<4>/*127:0*/ __Vtemp_1285;
    VlWide<4>/*127:0*/ __Vtemp_1286;
    VlWide<4>/*127:0*/ __Vtemp_1287;
    VlWide<4>/*127:0*/ __Vtemp_1289;
    VlWide<4>/*127:0*/ __Vtemp_1290;
    VlWide<4>/*127:0*/ __Vtemp_1291;
    VlWide<4>/*127:0*/ __Vtemp_1293;
    VlWide<4>/*127:0*/ __Vtemp_1294;
    VlWide<4>/*127:0*/ __Vtemp_1295;
    VlWide<4>/*127:0*/ __Vtemp_1297;
    VlWide<4>/*127:0*/ __Vtemp_1298;
    VlWide<4>/*127:0*/ __Vtemp_1299;
    VlWide<4>/*127:0*/ __Vtemp_1301;
    VlWide<4>/*127:0*/ __Vtemp_1302;
    VlWide<4>/*127:0*/ __Vtemp_1303;
    VlWide<4>/*127:0*/ __Vtemp_1305;
    VlWide<4>/*127:0*/ __Vtemp_1306;
    VlWide<4>/*127:0*/ __Vtemp_1307;
    VlWide<4>/*127:0*/ __Vtemp_1309;
    VlWide<4>/*127:0*/ __Vtemp_1310;
    VlWide<4>/*127:0*/ __Vtemp_1311;
    VlWide<4>/*127:0*/ __Vtemp_1313;
    VlWide<4>/*127:0*/ __Vtemp_1314;
    VlWide<4>/*127:0*/ __Vtemp_1315;
    VlWide<4>/*127:0*/ __Vtemp_1317;
    VlWide<4>/*127:0*/ __Vtemp_1318;
    VlWide<4>/*127:0*/ __Vtemp_1319;
    VlWide<4>/*127:0*/ __Vtemp_1321;
    VlWide<4>/*127:0*/ __Vtemp_1322;
    VlWide<4>/*127:0*/ __Vtemp_1323;
    VlWide<4>/*127:0*/ __Vtemp_1325;
    VlWide<4>/*127:0*/ __Vtemp_1326;
    VlWide<4>/*127:0*/ __Vtemp_1327;
    VlWide<4>/*127:0*/ __Vtemp_1329;
    VlWide<4>/*127:0*/ __Vtemp_1330;
    VlWide<4>/*127:0*/ __Vtemp_1331;
    VlWide<4>/*127:0*/ __Vtemp_1333;
    VlWide<4>/*127:0*/ __Vtemp_1334;
    VlWide<4>/*127:0*/ __Vtemp_1335;
    VlWide<4>/*127:0*/ __Vtemp_1337;
    VlWide<4>/*127:0*/ __Vtemp_1338;
    VlWide<4>/*127:0*/ __Vtemp_1339;
    VlWide<4>/*127:0*/ __Vtemp_1341;
    VlWide<4>/*127:0*/ __Vtemp_1342;
    VlWide<4>/*127:0*/ __Vtemp_1343;
    VlWide<4>/*127:0*/ __Vtemp_1345;
    VlWide<4>/*127:0*/ __Vtemp_1346;
    VlWide<4>/*127:0*/ __Vtemp_1347;
    VlWide<4>/*127:0*/ __Vtemp_1349;
    VlWide<4>/*127:0*/ __Vtemp_1350;
    VlWide<4>/*127:0*/ __Vtemp_1351;
    VlWide<4>/*127:0*/ __Vtemp_1353;
    VlWide<4>/*127:0*/ __Vtemp_1354;
    VlWide<4>/*127:0*/ __Vtemp_1355;
    VlWide<4>/*127:0*/ __Vtemp_1357;
    VlWide<4>/*127:0*/ __Vtemp_1359;
    VlWide<4>/*127:0*/ __Vtemp_1361;
    VlWide<4>/*127:0*/ __Vtemp_1362;
    VlWide<4>/*127:0*/ __Vtemp_1363;
    VlWide<4>/*127:0*/ __Vtemp_1365;
    VlWide<4>/*127:0*/ __Vtemp_1366;
    VlWide<4>/*127:0*/ __Vtemp_1367;
    VlWide<4>/*127:0*/ __Vtemp_1369;
    VlWide<4>/*127:0*/ __Vtemp_1370;
    VlWide<4>/*127:0*/ __Vtemp_1371;
    VlWide<4>/*127:0*/ __Vtemp_1373;
    VlWide<4>/*127:0*/ __Vtemp_1374;
    VlWide<4>/*127:0*/ __Vtemp_1375;
    VlWide<4>/*127:0*/ __Vtemp_1377;
    VlWide<4>/*127:0*/ __Vtemp_1378;
    VlWide<4>/*127:0*/ __Vtemp_1379;
    VlWide<4>/*127:0*/ __Vtemp_1381;
    VlWide<4>/*127:0*/ __Vtemp_1382;
    VlWide<4>/*127:0*/ __Vtemp_1383;
    VlWide<4>/*127:0*/ __Vtemp_1385;
    VlWide<4>/*127:0*/ __Vtemp_1386;
    VlWide<4>/*127:0*/ __Vtemp_1387;
    VlWide<4>/*127:0*/ __Vtemp_1389;
    VlWide<4>/*127:0*/ __Vtemp_1390;
    VlWide<4>/*127:0*/ __Vtemp_1391;
    VlWide<4>/*127:0*/ __Vtemp_1393;
    VlWide<4>/*127:0*/ __Vtemp_1394;
    VlWide<4>/*127:0*/ __Vtemp_1395;
    VlWide<4>/*127:0*/ __Vtemp_1397;
    VlWide<4>/*127:0*/ __Vtemp_1398;
    VlWide<4>/*127:0*/ __Vtemp_1399;
    VlWide<4>/*127:0*/ __Vtemp_1401;
    VlWide<4>/*127:0*/ __Vtemp_1402;
    VlWide<4>/*127:0*/ __Vtemp_1403;
    VlWide<4>/*127:0*/ __Vtemp_1405;
    VlWide<4>/*127:0*/ __Vtemp_1406;
    VlWide<4>/*127:0*/ __Vtemp_1407;
    VlWide<4>/*127:0*/ __Vtemp_1409;
    VlWide<4>/*127:0*/ __Vtemp_1410;
    VlWide<4>/*127:0*/ __Vtemp_1411;
    VlWide<4>/*127:0*/ __Vtemp_1413;
    VlWide<4>/*127:0*/ __Vtemp_1414;
    VlWide<4>/*127:0*/ __Vtemp_1415;
    VlWide<4>/*127:0*/ __Vtemp_1417;
    VlWide<4>/*127:0*/ __Vtemp_1418;
    VlWide<4>/*127:0*/ __Vtemp_1419;
    VlWide<4>/*127:0*/ __Vtemp_1421;
    VlWide<4>/*127:0*/ __Vtemp_1422;
    VlWide<4>/*127:0*/ __Vtemp_1423;
    VlWide<4>/*127:0*/ __Vtemp_1425;
    VlWide<4>/*127:0*/ __Vtemp_1426;
    VlWide<4>/*127:0*/ __Vtemp_1427;
    VlWide<4>/*127:0*/ __Vtemp_1429;
    VlWide<4>/*127:0*/ __Vtemp_1430;
    VlWide<4>/*127:0*/ __Vtemp_1431;
    VlWide<4>/*127:0*/ __Vtemp_1433;
    VlWide<4>/*127:0*/ __Vtemp_1434;
    VlWide<4>/*127:0*/ __Vtemp_1435;
    VlWide<4>/*127:0*/ __Vtemp_1437;
    VlWide<4>/*127:0*/ __Vtemp_1438;
    VlWide<4>/*127:0*/ __Vtemp_1439;
    VlWide<4>/*127:0*/ __Vtemp_1441;
    VlWide<4>/*127:0*/ __Vtemp_1442;
    VlWide<4>/*127:0*/ __Vtemp_1443;
    VlWide<4>/*127:0*/ __Vtemp_1445;
    VlWide<4>/*127:0*/ __Vtemp_1446;
    VlWide<4>/*127:0*/ __Vtemp_1447;
    VlWide<4>/*127:0*/ __Vtemp_1449;
    VlWide<4>/*127:0*/ __Vtemp_1450;
    VlWide<4>/*127:0*/ __Vtemp_1451;
    VlWide<4>/*127:0*/ __Vtemp_1453;
    VlWide<4>/*127:0*/ __Vtemp_1454;
    VlWide<4>/*127:0*/ __Vtemp_1455;
    VlWide<4>/*127:0*/ __Vtemp_1457;
    VlWide<4>/*127:0*/ __Vtemp_1458;
    VlWide<4>/*127:0*/ __Vtemp_1459;
    VlWide<4>/*127:0*/ __Vtemp_1461;
    VlWide<4>/*127:0*/ __Vtemp_1462;
    VlWide<4>/*127:0*/ __Vtemp_1463;
    VlWide<4>/*127:0*/ __Vtemp_1465;
    VlWide<4>/*127:0*/ __Vtemp_1466;
    VlWide<4>/*127:0*/ __Vtemp_1467;
    VlWide<4>/*127:0*/ __Vtemp_1469;
    VlWide<4>/*127:0*/ __Vtemp_1470;
    VlWide<4>/*127:0*/ __Vtemp_1471;
    VlWide<4>/*127:0*/ __Vtemp_1473;
    VlWide<4>/*127:0*/ __Vtemp_1474;
    VlWide<4>/*127:0*/ __Vtemp_1475;
    VlWide<4>/*127:0*/ __Vtemp_1477;
    VlWide<4>/*127:0*/ __Vtemp_1478;
    VlWide<4>/*127:0*/ __Vtemp_1479;
    VlWide<4>/*127:0*/ __Vtemp_1481;
    VlWide<4>/*127:0*/ __Vtemp_1482;
    VlWide<4>/*127:0*/ __Vtemp_1483;
    VlWide<4>/*127:0*/ __Vtemp_1485;
    VlWide<4>/*127:0*/ __Vtemp_1486;
    VlWide<4>/*127:0*/ __Vtemp_1487;
    VlWide<4>/*127:0*/ __Vtemp_1489;
    VlWide<4>/*127:0*/ __Vtemp_1490;
    VlWide<4>/*127:0*/ __Vtemp_1491;
    VlWide<4>/*127:0*/ __Vtemp_1493;
    VlWide<4>/*127:0*/ __Vtemp_1494;
    VlWide<4>/*127:0*/ __Vtemp_1495;
    VlWide<4>/*127:0*/ __Vtemp_1497;
    VlWide<4>/*127:0*/ __Vtemp_1498;
    VlWide<4>/*127:0*/ __Vtemp_1499;
    VlWide<4>/*127:0*/ __Vtemp_1501;
    VlWide<4>/*127:0*/ __Vtemp_1502;
    VlWide<4>/*127:0*/ __Vtemp_1503;
    VlWide<4>/*127:0*/ __Vtemp_1505;
    VlWide<4>/*127:0*/ __Vtemp_1506;
    VlWide<4>/*127:0*/ __Vtemp_1507;
    VlWide<4>/*127:0*/ __Vtemp_1509;
    VlWide<4>/*127:0*/ __Vtemp_1510;
    VlWide<4>/*127:0*/ __Vtemp_1511;
    VlWide<4>/*127:0*/ __Vtemp_1513;
    VlWide<4>/*127:0*/ __Vtemp_1514;
    VlWide<4>/*127:0*/ __Vtemp_1515;
    VlWide<4>/*127:0*/ __Vtemp_1517;
    VlWide<4>/*127:0*/ __Vtemp_1518;
    VlWide<4>/*127:0*/ __Vtemp_1519;
    VlWide<4>/*127:0*/ __Vtemp_1521;
    VlWide<4>/*127:0*/ __Vtemp_1522;
    VlWide<4>/*127:0*/ __Vtemp_1523;
    VlWide<4>/*127:0*/ __Vtemp_1525;
    VlWide<4>/*127:0*/ __Vtemp_1526;
    VlWide<4>/*127:0*/ __Vtemp_1527;
    VlWide<4>/*127:0*/ __Vtemp_1529;
    VlWide<4>/*127:0*/ __Vtemp_1530;
    VlWide<4>/*127:0*/ __Vtemp_1531;
    VlWide<4>/*127:0*/ __Vtemp_1533;
    VlWide<4>/*127:0*/ __Vtemp_1534;
    VlWide<4>/*127:0*/ __Vtemp_1535;
    VlWide<4>/*127:0*/ __Vtemp_1537;
    VlWide<4>/*127:0*/ __Vtemp_1538;
    VlWide<4>/*127:0*/ __Vtemp_1539;
    VlWide<4>/*127:0*/ __Vtemp_1541;
    VlWide<4>/*127:0*/ __Vtemp_1542;
    VlWide<4>/*127:0*/ __Vtemp_1543;
    VlWide<4>/*127:0*/ __Vtemp_1545;
    VlWide<4>/*127:0*/ __Vtemp_1546;
    VlWide<4>/*127:0*/ __Vtemp_1547;
    VlWide<4>/*127:0*/ __Vtemp_1549;
    VlWide<4>/*127:0*/ __Vtemp_1550;
    VlWide<4>/*127:0*/ __Vtemp_1551;
    VlWide<4>/*127:0*/ __Vtemp_1553;
    VlWide<4>/*127:0*/ __Vtemp_1554;
    VlWide<4>/*127:0*/ __Vtemp_1555;
    VlWide<4>/*127:0*/ __Vtemp_1557;
    VlWide<4>/*127:0*/ __Vtemp_1558;
    VlWide<4>/*127:0*/ __Vtemp_1559;
    VlWide<4>/*127:0*/ __Vtemp_1561;
    VlWide<4>/*127:0*/ __Vtemp_1562;
    VlWide<4>/*127:0*/ __Vtemp_1563;
    VlWide<4>/*127:0*/ __Vtemp_1565;
    VlWide<4>/*127:0*/ __Vtemp_1566;
    VlWide<4>/*127:0*/ __Vtemp_1567;
    VlWide<4>/*127:0*/ __Vtemp_1569;
    VlWide<4>/*127:0*/ __Vtemp_1570;
    VlWide<4>/*127:0*/ __Vtemp_1571;
    VlWide<4>/*127:0*/ __Vtemp_1573;
    VlWide<4>/*127:0*/ __Vtemp_1574;
    VlWide<4>/*127:0*/ __Vtemp_1575;
    VlWide<4>/*127:0*/ __Vtemp_1577;
    VlWide<4>/*127:0*/ __Vtemp_1578;
    VlWide<4>/*127:0*/ __Vtemp_1579;
    VlWide<4>/*127:0*/ __Vtemp_1581;
    VlWide<4>/*127:0*/ __Vtemp_1582;
    VlWide<4>/*127:0*/ __Vtemp_1583;
    VlWide<4>/*127:0*/ __Vtemp_1585;
    VlWide<4>/*127:0*/ __Vtemp_1586;
    VlWide<4>/*127:0*/ __Vtemp_1587;
    VlWide<4>/*127:0*/ __Vtemp_1589;
    VlWide<4>/*127:0*/ __Vtemp_1590;
    VlWide<4>/*127:0*/ __Vtemp_1591;
    VlWide<4>/*127:0*/ __Vtemp_1593;
    VlWide<4>/*127:0*/ __Vtemp_1594;
    VlWide<4>/*127:0*/ __Vtemp_1595;
    VlWide<4>/*127:0*/ __Vtemp_1597;
    VlWide<4>/*127:0*/ __Vtemp_1598;
    VlWide<4>/*127:0*/ __Vtemp_1599;
    VlWide<4>/*127:0*/ __Vtemp_1601;
    VlWide<4>/*127:0*/ __Vtemp_1602;
    VlWide<4>/*127:0*/ __Vtemp_1603;
    VlWide<4>/*127:0*/ __Vtemp_1605;
    VlWide<4>/*127:0*/ __Vtemp_1606;
    VlWide<4>/*127:0*/ __Vtemp_1607;
    VlWide<4>/*127:0*/ __Vtemp_1609;
    VlWide<4>/*127:0*/ __Vtemp_1610;
    VlWide<4>/*127:0*/ __Vtemp_1611;
    VlWide<4>/*127:0*/ __Vtemp_1613;
    VlWide<4>/*127:0*/ __Vtemp_1614;
    VlWide<4>/*127:0*/ __Vtemp_1615;
    VlWide<4>/*127:0*/ __Vtemp_1616;
    VlWide<4>/*127:0*/ __Vtemp_1618;
    VlWide<4>/*127:0*/ __Vtemp_1619;
    VlWide<4>/*127:0*/ __Vtemp_1620;
    VlWide<4>/*127:0*/ __Vtemp_1621;
    VlWide<4>/*127:0*/ __Vtemp_1622;
    VlWide<4>/*127:0*/ __Vtemp_1623;
    VlWide<4>/*127:0*/ __Vtemp_1624;
    VlWide<4>/*127:0*/ __Vtemp_1625;
    VlWide<4>/*127:0*/ __Vtemp_1626;
    VlWide<4>/*127:0*/ __Vtemp_1627;
    VlWide<4>/*127:0*/ __Vtemp_1628;
    VlWide<4>/*127:0*/ __Vtemp_1629;
    VlWide<4>/*127:0*/ __Vtemp_1630;
    VlWide<4>/*127:0*/ __Vtemp_1631;
    VlWide<4>/*127:0*/ __Vtemp_1632;
    VlWide<4>/*127:0*/ __Vtemp_1633;
    VlWide<4>/*127:0*/ __Vtemp_1634;
    VlWide<4>/*127:0*/ __Vtemp_1635;
    VlWide<4>/*127:0*/ __Vtemp_1636;
    VlWide<4>/*127:0*/ __Vtemp_1637;
    VlWide<4>/*127:0*/ __Vtemp_1638;
    VlWide<4>/*127:0*/ __Vtemp_1639;
    VlWide<4>/*127:0*/ __Vtemp_1640;
    VlWide<4>/*127:0*/ __Vtemp_1641;
    VlWide<4>/*127:0*/ __Vtemp_1642;
    VlWide<4>/*127:0*/ __Vtemp_1643;
    VlWide<4>/*127:0*/ __Vtemp_1644;
    VlWide<4>/*127:0*/ __Vtemp_1645;
    VlWide<4>/*127:0*/ __Vtemp_1647;
    VlWide<4>/*127:0*/ __Vtemp_1648;
    VlWide<4>/*127:0*/ __Vtemp_1649;
    VlWide<4>/*127:0*/ __Vtemp_1651;
    VlWide<4>/*127:0*/ __Vtemp_1652;
    VlWide<4>/*127:0*/ __Vtemp_1653;
    VlWide<4>/*127:0*/ __Vtemp_1655;
    VlWide<4>/*127:0*/ __Vtemp_1656;
    VlWide<4>/*127:0*/ __Vtemp_1657;
    VlWide<4>/*127:0*/ __Vtemp_1659;
    VlWide<4>/*127:0*/ __Vtemp_1660;
    VlWide<4>/*127:0*/ __Vtemp_1661;
    VlWide<4>/*127:0*/ __Vtemp_1663;
    VlWide<4>/*127:0*/ __Vtemp_1664;
    VlWide<4>/*127:0*/ __Vtemp_1665;
    VlWide<4>/*127:0*/ __Vtemp_1667;
    VlWide<4>/*127:0*/ __Vtemp_1668;
    VlWide<4>/*127:0*/ __Vtemp_1669;
    VlWide<4>/*127:0*/ __Vtemp_1671;
    VlWide<4>/*127:0*/ __Vtemp_1672;
    VlWide<4>/*127:0*/ __Vtemp_1673;
    VlWide<4>/*127:0*/ __Vtemp_1675;
    VlWide<4>/*127:0*/ __Vtemp_1676;
    VlWide<4>/*127:0*/ __Vtemp_1677;
    VlWide<4>/*127:0*/ __Vtemp_1679;
    VlWide<4>/*127:0*/ __Vtemp_1680;
    VlWide<4>/*127:0*/ __Vtemp_1681;
    VlWide<4>/*127:0*/ __Vtemp_1683;
    VlWide<4>/*127:0*/ __Vtemp_1684;
    VlWide<4>/*127:0*/ __Vtemp_1685;
    VlWide<4>/*127:0*/ __Vtemp_1687;
    VlWide<4>/*127:0*/ __Vtemp_1688;
    VlWide<4>/*127:0*/ __Vtemp_1689;
    VlWide<4>/*127:0*/ __Vtemp_1691;
    VlWide<4>/*127:0*/ __Vtemp_1692;
    VlWide<4>/*127:0*/ __Vtemp_1693;
    VlWide<4>/*127:0*/ __Vtemp_1695;
    VlWide<4>/*127:0*/ __Vtemp_1696;
    VlWide<4>/*127:0*/ __Vtemp_1697;
    VlWide<4>/*127:0*/ __Vtemp_1699;
    VlWide<4>/*127:0*/ __Vtemp_1700;
    VlWide<4>/*127:0*/ __Vtemp_1701;
    VlWide<4>/*127:0*/ __Vtemp_1703;
    VlWide<4>/*127:0*/ __Vtemp_1704;
    VlWide<4>/*127:0*/ __Vtemp_1705;
    VlWide<4>/*127:0*/ __Vtemp_1707;
    VlWide<4>/*127:0*/ __Vtemp_1708;
    VlWide<4>/*127:0*/ __Vtemp_1709;
    VlWide<4>/*127:0*/ __Vtemp_1711;
    VlWide<4>/*127:0*/ __Vtemp_1712;
    VlWide<4>/*127:0*/ __Vtemp_1713;
    VlWide<4>/*127:0*/ __Vtemp_1715;
    VlWide<4>/*127:0*/ __Vtemp_1716;
    VlWide<4>/*127:0*/ __Vtemp_1717;
    VlWide<4>/*127:0*/ __Vtemp_1719;
    VlWide<4>/*127:0*/ __Vtemp_1720;
    VlWide<4>/*127:0*/ __Vtemp_1721;
    VlWide<4>/*127:0*/ __Vtemp_1723;
    VlWide<4>/*127:0*/ __Vtemp_1724;
    VlWide<4>/*127:0*/ __Vtemp_1725;
    VlWide<4>/*127:0*/ __Vtemp_1727;
    VlWide<4>/*127:0*/ __Vtemp_1728;
    VlWide<4>/*127:0*/ __Vtemp_1729;
    VlWide<4>/*127:0*/ __Vtemp_1731;
    VlWide<4>/*127:0*/ __Vtemp_1732;
    VlWide<4>/*127:0*/ __Vtemp_1733;
    VlWide<4>/*127:0*/ __Vtemp_1735;
    VlWide<4>/*127:0*/ __Vtemp_1736;
    VlWide<4>/*127:0*/ __Vtemp_1737;
    VlWide<4>/*127:0*/ __Vtemp_1739;
    VlWide<4>/*127:0*/ __Vtemp_1740;
    VlWide<4>/*127:0*/ __Vtemp_1741;
    VlWide<4>/*127:0*/ __Vtemp_1743;
    VlWide<4>/*127:0*/ __Vtemp_1744;
    VlWide<4>/*127:0*/ __Vtemp_1745;
    VlWide<4>/*127:0*/ __Vtemp_1747;
    VlWide<4>/*127:0*/ __Vtemp_1748;
    VlWide<4>/*127:0*/ __Vtemp_1749;
    VlWide<4>/*127:0*/ __Vtemp_1751;
    VlWide<4>/*127:0*/ __Vtemp_1752;
    VlWide<4>/*127:0*/ __Vtemp_1753;
    VlWide<4>/*127:0*/ __Vtemp_1755;
    VlWide<4>/*127:0*/ __Vtemp_1756;
    VlWide<4>/*127:0*/ __Vtemp_1757;
    VlWide<4>/*127:0*/ __Vtemp_1759;
    VlWide<4>/*127:0*/ __Vtemp_1760;
    VlWide<4>/*127:0*/ __Vtemp_1761;
    VlWide<4>/*127:0*/ __Vtemp_1763;
    VlWide<4>/*127:0*/ __Vtemp_1764;
    VlWide<4>/*127:0*/ __Vtemp_1765;
    VlWide<4>/*127:0*/ __Vtemp_1767;
    VlWide<4>/*127:0*/ __Vtemp_1768;
    VlWide<4>/*127:0*/ __Vtemp_1769;
    VlWide<4>/*127:0*/ __Vtemp_1771;
    VlWide<4>/*127:0*/ __Vtemp_1772;
    VlWide<4>/*127:0*/ __Vtemp_1773;
    VlWide<4>/*127:0*/ __Vtemp_1775;
    VlWide<4>/*127:0*/ __Vtemp_1776;
    VlWide<4>/*127:0*/ __Vtemp_1777;
    VlWide<4>/*127:0*/ __Vtemp_1779;
    VlWide<4>/*127:0*/ __Vtemp_1780;
    VlWide<4>/*127:0*/ __Vtemp_1781;
    VlWide<4>/*127:0*/ __Vtemp_1783;
    VlWide<4>/*127:0*/ __Vtemp_1784;
    VlWide<4>/*127:0*/ __Vtemp_1785;
    VlWide<4>/*127:0*/ __Vtemp_1787;
    VlWide<4>/*127:0*/ __Vtemp_1788;
    VlWide<4>/*127:0*/ __Vtemp_1789;
    VlWide<4>/*127:0*/ __Vtemp_1791;
    VlWide<4>/*127:0*/ __Vtemp_1792;
    VlWide<4>/*127:0*/ __Vtemp_1793;
    VlWide<4>/*127:0*/ __Vtemp_1795;
    VlWide<4>/*127:0*/ __Vtemp_1796;
    VlWide<4>/*127:0*/ __Vtemp_1797;
    VlWide<4>/*127:0*/ __Vtemp_1799;
    VlWide<4>/*127:0*/ __Vtemp_1800;
    VlWide<4>/*127:0*/ __Vtemp_1801;
    VlWide<4>/*127:0*/ __Vtemp_1803;
    VlWide<4>/*127:0*/ __Vtemp_1804;
    VlWide<4>/*127:0*/ __Vtemp_1805;
    VlWide<4>/*127:0*/ __Vtemp_1807;
    VlWide<4>/*127:0*/ __Vtemp_1808;
    VlWide<4>/*127:0*/ __Vtemp_1809;
    VlWide<4>/*127:0*/ __Vtemp_1811;
    VlWide<4>/*127:0*/ __Vtemp_1812;
    VlWide<4>/*127:0*/ __Vtemp_1813;
    VlWide<4>/*127:0*/ __Vtemp_1815;
    VlWide<4>/*127:0*/ __Vtemp_1816;
    VlWide<4>/*127:0*/ __Vtemp_1817;
    VlWide<4>/*127:0*/ __Vtemp_1819;
    VlWide<4>/*127:0*/ __Vtemp_1820;
    VlWide<4>/*127:0*/ __Vtemp_1821;
    VlWide<4>/*127:0*/ __Vtemp_1823;
    VlWide<4>/*127:0*/ __Vtemp_1824;
    VlWide<4>/*127:0*/ __Vtemp_1825;
    VlWide<4>/*127:0*/ __Vtemp_1827;
    VlWide<4>/*127:0*/ __Vtemp_1828;
    VlWide<4>/*127:0*/ __Vtemp_1829;
    VlWide<4>/*127:0*/ __Vtemp_1831;
    VlWide<4>/*127:0*/ __Vtemp_1832;
    VlWide<4>/*127:0*/ __Vtemp_1833;
    VlWide<4>/*127:0*/ __Vtemp_1835;
    VlWide<4>/*127:0*/ __Vtemp_1836;
    VlWide<4>/*127:0*/ __Vtemp_1837;
    VlWide<4>/*127:0*/ __Vtemp_1839;
    VlWide<4>/*127:0*/ __Vtemp_1840;
    VlWide<4>/*127:0*/ __Vtemp_1841;
    VlWide<4>/*127:0*/ __Vtemp_1843;
    VlWide<4>/*127:0*/ __Vtemp_1844;
    VlWide<4>/*127:0*/ __Vtemp_1845;
    VlWide<4>/*127:0*/ __Vtemp_1847;
    VlWide<4>/*127:0*/ __Vtemp_1848;
    VlWide<4>/*127:0*/ __Vtemp_1849;
    VlWide<4>/*127:0*/ __Vtemp_1851;
    VlWide<4>/*127:0*/ __Vtemp_1852;
    VlWide<4>/*127:0*/ __Vtemp_1853;
    VlWide<4>/*127:0*/ __Vtemp_1855;
    VlWide<4>/*127:0*/ __Vtemp_1856;
    VlWide<4>/*127:0*/ __Vtemp_1857;
    VlWide<4>/*127:0*/ __Vtemp_1859;
    VlWide<4>/*127:0*/ __Vtemp_1860;
    VlWide<4>/*127:0*/ __Vtemp_1861;
    VlWide<4>/*127:0*/ __Vtemp_1863;
    VlWide<4>/*127:0*/ __Vtemp_1864;
    VlWide<4>/*127:0*/ __Vtemp_1865;
    VlWide<4>/*127:0*/ __Vtemp_1867;
    VlWide<4>/*127:0*/ __Vtemp_1868;
    VlWide<4>/*127:0*/ __Vtemp_1869;
    VlWide<4>/*127:0*/ __Vtemp_1871;
    VlWide<4>/*127:0*/ __Vtemp_1872;
    VlWide<4>/*127:0*/ __Vtemp_1873;
    VlWide<4>/*127:0*/ __Vtemp_1875;
    VlWide<4>/*127:0*/ __Vtemp_1876;
    VlWide<4>/*127:0*/ __Vtemp_1877;
    VlWide<4>/*127:0*/ __Vtemp_1879;
    VlWide<4>/*127:0*/ __Vtemp_1880;
    VlWide<4>/*127:0*/ __Vtemp_1881;
    VlWide<4>/*127:0*/ __Vtemp_1883;
    VlWide<4>/*127:0*/ __Vtemp_1884;
    VlWide<4>/*127:0*/ __Vtemp_1885;
    VlWide<4>/*127:0*/ __Vtemp_1887;
    VlWide<4>/*127:0*/ __Vtemp_1888;
    VlWide<4>/*127:0*/ __Vtemp_1889;
    VlWide<4>/*127:0*/ __Vtemp_1891;
    VlWide<4>/*127:0*/ __Vtemp_1892;
    VlWide<4>/*127:0*/ __Vtemp_1893;
    VlWide<4>/*127:0*/ __Vtemp_1895;
    VlWide<4>/*127:0*/ __Vtemp_1896;
    VlWide<4>/*127:0*/ __Vtemp_1897;
    VlWide<4>/*127:0*/ __Vtemp_1899;
    VlWide<4>/*127:0*/ __Vtemp_1901;
    VlWide<4>/*127:0*/ __Vtemp_1903;
    VlWide<4>/*127:0*/ __Vtemp_1904;
    VlWide<4>/*127:0*/ __Vtemp_1905;
    VlWide<4>/*127:0*/ __Vtemp_1907;
    VlWide<4>/*127:0*/ __Vtemp_1908;
    VlWide<4>/*127:0*/ __Vtemp_1909;
    VlWide<4>/*127:0*/ __Vtemp_1911;
    VlWide<4>/*127:0*/ __Vtemp_1912;
    VlWide<4>/*127:0*/ __Vtemp_1913;
    VlWide<4>/*127:0*/ __Vtemp_1915;
    VlWide<4>/*127:0*/ __Vtemp_1916;
    VlWide<4>/*127:0*/ __Vtemp_1917;
    VlWide<4>/*127:0*/ __Vtemp_1919;
    VlWide<4>/*127:0*/ __Vtemp_1920;
    VlWide<4>/*127:0*/ __Vtemp_1921;
    VlWide<4>/*127:0*/ __Vtemp_1923;
    VlWide<4>/*127:0*/ __Vtemp_1924;
    VlWide<4>/*127:0*/ __Vtemp_1925;
    VlWide<4>/*127:0*/ __Vtemp_1927;
    VlWide<4>/*127:0*/ __Vtemp_1928;
    VlWide<4>/*127:0*/ __Vtemp_1929;
    VlWide<4>/*127:0*/ __Vtemp_1931;
    VlWide<4>/*127:0*/ __Vtemp_1932;
    VlWide<4>/*127:0*/ __Vtemp_1933;
    VlWide<4>/*127:0*/ __Vtemp_1935;
    VlWide<4>/*127:0*/ __Vtemp_1936;
    VlWide<4>/*127:0*/ __Vtemp_1937;
    VlWide<4>/*127:0*/ __Vtemp_1939;
    VlWide<4>/*127:0*/ __Vtemp_1940;
    VlWide<4>/*127:0*/ __Vtemp_1941;
    VlWide<4>/*127:0*/ __Vtemp_1943;
    VlWide<4>/*127:0*/ __Vtemp_1944;
    VlWide<4>/*127:0*/ __Vtemp_1945;
    VlWide<4>/*127:0*/ __Vtemp_1947;
    VlWide<4>/*127:0*/ __Vtemp_1948;
    VlWide<4>/*127:0*/ __Vtemp_1949;
    VlWide<4>/*127:0*/ __Vtemp_1951;
    VlWide<4>/*127:0*/ __Vtemp_1952;
    VlWide<4>/*127:0*/ __Vtemp_1953;
    VlWide<4>/*127:0*/ __Vtemp_1955;
    VlWide<4>/*127:0*/ __Vtemp_1956;
    VlWide<4>/*127:0*/ __Vtemp_1957;
    VlWide<4>/*127:0*/ __Vtemp_1959;
    VlWide<4>/*127:0*/ __Vtemp_1960;
    VlWide<4>/*127:0*/ __Vtemp_1961;
    VlWide<4>/*127:0*/ __Vtemp_1963;
    VlWide<4>/*127:0*/ __Vtemp_1964;
    VlWide<4>/*127:0*/ __Vtemp_1965;
    VlWide<4>/*127:0*/ __Vtemp_1967;
    VlWide<4>/*127:0*/ __Vtemp_1968;
    VlWide<4>/*127:0*/ __Vtemp_1969;
    VlWide<4>/*127:0*/ __Vtemp_1971;
    VlWide<4>/*127:0*/ __Vtemp_1972;
    VlWide<4>/*127:0*/ __Vtemp_1973;
    VlWide<4>/*127:0*/ __Vtemp_1975;
    VlWide<4>/*127:0*/ __Vtemp_1976;
    VlWide<4>/*127:0*/ __Vtemp_1977;
    VlWide<4>/*127:0*/ __Vtemp_1979;
    VlWide<4>/*127:0*/ __Vtemp_1980;
    VlWide<4>/*127:0*/ __Vtemp_1981;
    VlWide<4>/*127:0*/ __Vtemp_1983;
    VlWide<4>/*127:0*/ __Vtemp_1984;
    VlWide<4>/*127:0*/ __Vtemp_1985;
    VlWide<4>/*127:0*/ __Vtemp_1987;
    VlWide<4>/*127:0*/ __Vtemp_1988;
    VlWide<4>/*127:0*/ __Vtemp_1989;
    VlWide<4>/*127:0*/ __Vtemp_1991;
    VlWide<4>/*127:0*/ __Vtemp_1992;
    VlWide<4>/*127:0*/ __Vtemp_1993;
    VlWide<4>/*127:0*/ __Vtemp_1995;
    VlWide<4>/*127:0*/ __Vtemp_1996;
    VlWide<4>/*127:0*/ __Vtemp_1997;
    VlWide<4>/*127:0*/ __Vtemp_1999;
    VlWide<4>/*127:0*/ __Vtemp_2000;
    VlWide<4>/*127:0*/ __Vtemp_2001;
    VlWide<4>/*127:0*/ __Vtemp_2003;
    VlWide<4>/*127:0*/ __Vtemp_2004;
    VlWide<4>/*127:0*/ __Vtemp_2005;
    VlWide<4>/*127:0*/ __Vtemp_2007;
    VlWide<4>/*127:0*/ __Vtemp_2008;
    VlWide<4>/*127:0*/ __Vtemp_2009;
    VlWide<4>/*127:0*/ __Vtemp_2011;
    VlWide<4>/*127:0*/ __Vtemp_2012;
    VlWide<4>/*127:0*/ __Vtemp_2013;
    VlWide<4>/*127:0*/ __Vtemp_2015;
    VlWide<4>/*127:0*/ __Vtemp_2016;
    VlWide<4>/*127:0*/ __Vtemp_2017;
    VlWide<4>/*127:0*/ __Vtemp_2019;
    VlWide<4>/*127:0*/ __Vtemp_2020;
    VlWide<4>/*127:0*/ __Vtemp_2021;
    VlWide<4>/*127:0*/ __Vtemp_2023;
    VlWide<4>/*127:0*/ __Vtemp_2024;
    VlWide<4>/*127:0*/ __Vtemp_2025;
    VlWide<4>/*127:0*/ __Vtemp_2027;
    VlWide<4>/*127:0*/ __Vtemp_2028;
    VlWide<4>/*127:0*/ __Vtemp_2029;
    VlWide<4>/*127:0*/ __Vtemp_2031;
    VlWide<4>/*127:0*/ __Vtemp_2032;
    VlWide<4>/*127:0*/ __Vtemp_2033;
    VlWide<4>/*127:0*/ __Vtemp_2035;
    VlWide<4>/*127:0*/ __Vtemp_2036;
    VlWide<4>/*127:0*/ __Vtemp_2037;
    VlWide<4>/*127:0*/ __Vtemp_2039;
    VlWide<4>/*127:0*/ __Vtemp_2040;
    VlWide<4>/*127:0*/ __Vtemp_2041;
    VlWide<4>/*127:0*/ __Vtemp_2043;
    VlWide<4>/*127:0*/ __Vtemp_2044;
    VlWide<4>/*127:0*/ __Vtemp_2045;
    VlWide<4>/*127:0*/ __Vtemp_2047;
    VlWide<4>/*127:0*/ __Vtemp_2048;
    VlWide<4>/*127:0*/ __Vtemp_2049;
    VlWide<4>/*127:0*/ __Vtemp_2051;
    VlWide<4>/*127:0*/ __Vtemp_2052;
    VlWide<4>/*127:0*/ __Vtemp_2053;
    VlWide<4>/*127:0*/ __Vtemp_2055;
    VlWide<4>/*127:0*/ __Vtemp_2056;
    VlWide<4>/*127:0*/ __Vtemp_2057;
    VlWide<4>/*127:0*/ __Vtemp_2059;
    VlWide<4>/*127:0*/ __Vtemp_2060;
    VlWide<4>/*127:0*/ __Vtemp_2061;
    VlWide<4>/*127:0*/ __Vtemp_2063;
    VlWide<4>/*127:0*/ __Vtemp_2064;
    VlWide<4>/*127:0*/ __Vtemp_2065;
    VlWide<4>/*127:0*/ __Vtemp_2067;
    VlWide<4>/*127:0*/ __Vtemp_2068;
    VlWide<4>/*127:0*/ __Vtemp_2069;
    VlWide<4>/*127:0*/ __Vtemp_2071;
    VlWide<4>/*127:0*/ __Vtemp_2072;
    VlWide<4>/*127:0*/ __Vtemp_2073;
    VlWide<4>/*127:0*/ __Vtemp_2075;
    VlWide<4>/*127:0*/ __Vtemp_2076;
    VlWide<4>/*127:0*/ __Vtemp_2077;
    VlWide<4>/*127:0*/ __Vtemp_2079;
    VlWide<4>/*127:0*/ __Vtemp_2080;
    VlWide<4>/*127:0*/ __Vtemp_2081;
    VlWide<4>/*127:0*/ __Vtemp_2083;
    VlWide<4>/*127:0*/ __Vtemp_2084;
    VlWide<4>/*127:0*/ __Vtemp_2085;
    VlWide<4>/*127:0*/ __Vtemp_2087;
    VlWide<4>/*127:0*/ __Vtemp_2088;
    VlWide<4>/*127:0*/ __Vtemp_2089;
    VlWide<4>/*127:0*/ __Vtemp_2091;
    VlWide<4>/*127:0*/ __Vtemp_2092;
    VlWide<4>/*127:0*/ __Vtemp_2093;
    VlWide<4>/*127:0*/ __Vtemp_2095;
    VlWide<4>/*127:0*/ __Vtemp_2096;
    VlWide<4>/*127:0*/ __Vtemp_2097;
    VlWide<4>/*127:0*/ __Vtemp_2099;
    VlWide<4>/*127:0*/ __Vtemp_2100;
    VlWide<4>/*127:0*/ __Vtemp_2101;
    VlWide<4>/*127:0*/ __Vtemp_2103;
    VlWide<4>/*127:0*/ __Vtemp_2104;
    VlWide<4>/*127:0*/ __Vtemp_2105;
    VlWide<4>/*127:0*/ __Vtemp_2107;
    VlWide<4>/*127:0*/ __Vtemp_2108;
    VlWide<4>/*127:0*/ __Vtemp_2109;
    VlWide<4>/*127:0*/ __Vtemp_2111;
    VlWide<4>/*127:0*/ __Vtemp_2112;
    VlWide<4>/*127:0*/ __Vtemp_2113;
    VlWide<4>/*127:0*/ __Vtemp_2115;
    VlWide<4>/*127:0*/ __Vtemp_2116;
    VlWide<4>/*127:0*/ __Vtemp_2117;
    VlWide<4>/*127:0*/ __Vtemp_2119;
    VlWide<4>/*127:0*/ __Vtemp_2120;
    VlWide<4>/*127:0*/ __Vtemp_2121;
    VlWide<4>/*127:0*/ __Vtemp_2123;
    VlWide<4>/*127:0*/ __Vtemp_2124;
    VlWide<4>/*127:0*/ __Vtemp_2125;
    VlWide<4>/*127:0*/ __Vtemp_2127;
    VlWide<4>/*127:0*/ __Vtemp_2128;
    VlWide<4>/*127:0*/ __Vtemp_2129;
    VlWide<4>/*127:0*/ __Vtemp_2131;
    VlWide<4>/*127:0*/ __Vtemp_2132;
    VlWide<4>/*127:0*/ __Vtemp_2133;
    VlWide<4>/*127:0*/ __Vtemp_2135;
    VlWide<4>/*127:0*/ __Vtemp_2136;
    VlWide<4>/*127:0*/ __Vtemp_2137;
    VlWide<4>/*127:0*/ __Vtemp_2139;
    VlWide<4>/*127:0*/ __Vtemp_2140;
    VlWide<4>/*127:0*/ __Vtemp_2141;
    VlWide<4>/*127:0*/ __Vtemp_2143;
    VlWide<4>/*127:0*/ __Vtemp_2144;
    VlWide<4>/*127:0*/ __Vtemp_2145;
    VlWide<4>/*127:0*/ __Vtemp_2147;
    VlWide<4>/*127:0*/ __Vtemp_2148;
    VlWide<4>/*127:0*/ __Vtemp_2149;
    VlWide<4>/*127:0*/ __Vtemp_2151;
    VlWide<4>/*127:0*/ __Vtemp_2152;
    VlWide<4>/*127:0*/ __Vtemp_2153;
    VlWide<4>/*127:0*/ __Vtemp_2155;
    VlWide<4>/*127:0*/ __Vtemp_2156;
    VlWide<4>/*127:0*/ __Vtemp_2157;
    VlWide<4>/*127:0*/ __Vtemp_2158;
    VlWide<4>/*127:0*/ __Vtemp_2160;
    VlWide<4>/*127:0*/ __Vtemp_2161;
    VlWide<4>/*127:0*/ __Vtemp_2162;
    VlWide<4>/*127:0*/ __Vtemp_2163;
    VlWide<4>/*127:0*/ __Vtemp_2164;
    VlWide<4>/*127:0*/ __Vtemp_2165;
    VlWide<4>/*127:0*/ __Vtemp_2166;
    VlWide<4>/*127:0*/ __Vtemp_2167;
    VlWide<4>/*127:0*/ __Vtemp_2168;
    VlWide<4>/*127:0*/ __Vtemp_2169;
    VlWide<4>/*127:0*/ __Vtemp_2170;
    VlWide<4>/*127:0*/ __Vtemp_2171;
    VlWide<4>/*127:0*/ __Vtemp_2172;
    VlWide<4>/*127:0*/ __Vtemp_2173;
    VlWide<4>/*127:0*/ __Vtemp_2174;
    VlWide<4>/*127:0*/ __Vtemp_2175;
    VlWide<4>/*127:0*/ __Vtemp_2176;
    VlWide<4>/*127:0*/ __Vtemp_2177;
    VlWide<4>/*127:0*/ __Vtemp_2178;
    VlWide<4>/*127:0*/ __Vtemp_2179;
    VlWide<4>/*127:0*/ __Vtemp_2180;
    // Body
    __Vfunc_sfp_mul__34__b = vlSelfRef.BenchMLP__DOT__values
        [0U];
    __Vfunc_sfp_mul__34__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1, __Vfunc_sfp_mul__34__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_2, __Vfunc_sfp_mul__34__b);
    VL_MULS_WWW(128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__34__tmp, __Vtemp_3, 0x20U);
    __Vfunc_sfp_mul__34__Vfuncout = (((QData)((IData)(
                                                      __Vfunc_sfp_mul__34__tmp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vfunc_sfp_mul__34__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__34__Vfuncout;
    __Vfunc_sfp_mul__34__b = vlSelfRef.BenchMLP__DOT__values
        [1U];
    __Vfunc_sfp_mul__34__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_4, __Vfunc_sfp_mul__34__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_5, __Vfunc_sfp_mul__34__b);
    VL_MULS_WWW(128, __Vtemp_6, __Vtemp_4, __Vtemp_5);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__34__tmp, __Vtemp_6, 0x20U);
    __Vfunc_sfp_mul__34__Vfuncout = (((QData)((IData)(
                                                      __Vfunc_sfp_mul__34__tmp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vfunc_sfp_mul__34__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__34__Vfuncout;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i = 2U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    if ((1U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_sub__71__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction;
        vlSelfRef.__Vfunc_sfp_sub__71__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.__Vfunc_sfp_sub__71__Vfuncout = (vlSelfRef.__Vfunc_sfp_sub__71__a 
                                                   - vlSelfRef.__Vfunc_sfp_sub__71__b);
        vlSelfRef.__Vfunc_sfp_mul__70__b = vlSelfRef.__Vfunc_sfp_sub__71__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__70__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction;
        VL_EXTENDS_WQ(128,64, __Vtemp_7, vlSelfRef.__Vfunc_sfp_mul__70__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_8, vlSelfRef.__Vfunc_sfp_mul__70__b);
        VL_MULS_WWW(128, __Vtemp_9, __Vtemp_7, __Vtemp_8);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__70__tmp, __Vtemp_9, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__70__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__70__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__70__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__69__b = vlSelfRef.__Vfunc_sfp_mul__70__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__69__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_10, vlSelfRef.__Vfunc_sfp_mul__69__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_11, vlSelfRef.__Vfunc_sfp_mul__69__b);
        VL_MULS_WWW(128, __Vtemp_12, __Vtemp_10, __Vtemp_11);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__69__tmp, __Vtemp_12, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__69__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__69__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__69__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__68__b = vlSelfRef.__Vfunc_sfp_mul__69__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__68__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_13, vlSelfRef.__Vfunc_sfp_mul__68__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_14, vlSelfRef.__Vfunc_sfp_mul__68__b);
        VL_MULS_WWW(128, __Vtemp_15, __Vtemp_13, __Vtemp_14);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__68__tmp, __Vtemp_15, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__68__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__68__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__68__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__67__b = vlSelfRef.__Vfunc_sfp_mul__68__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__67__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__67__Vfuncout = (vlSelfRef.__Vfunc_sfp_add__67__a 
                                                   + vlSelfRef.__Vfunc_sfp_add__67__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__67__Vfuncout;
    } else if ((2U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_pow__76__b = 2U;
        vlSelfRef.__Vfunc_sfp_tanh__77__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction;
        {
            if (VL_GTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__77__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__78__n = 7U;
                            vlSelfRef.__Vfunc_int_to_sfp__78__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__78__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__78__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__77__Vfuncout 
                    = vlSymsp->TOP__FixedPoint.ONE;
                goto __Vlabel83;
            }
            if (VL_LTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__77__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__79__n = 0xfffffff9U;
                            vlSelfRef.__Vfunc_int_to_sfp__79__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__79__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__79__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__77__Vfuncout 
                    = (- vlSymsp->TOP__FixedPoint.ONE);
                goto __Vlabel83;
            }
            vlSelfRef.__Vfunc_sfp_sub__80__b = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__83__a = VL_SHIFTL_QQI(64,64,32, 
                                                             (- vlSelfRef.__Vfunc_sfp_tanh__77__a), 1U);
            vlSelf->__Vfunc_sfp_exp__83__unnamedblk3__DOT__i = 0;
            vlSelf->__Vfunc_sfp_exp__83__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_exp__83__term = VL_RAND_RESET_Q(64);
            vlSelfRef.__Vfunc_sfp_exp__83__result = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__83__term = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__83__unnamedblk3__DOT__i = 1U;
            while (VL_GTS_III(32, 0x32U, vlSelfRef.__Vfunc_sfp_exp__83__unnamedblk3__DOT__i)) {
                vlSelfRef.__Vfunc_int_to_sfp__85__n 
                    = vlSelfRef.__Vfunc_sfp_exp__83__unnamedblk3__DOT__i;
                vlSelfRef.__Vfunc_int_to_sfp__85__Vfuncout 
                    = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__85__n), 0x20U);
                vlSelfRef.__Vfunc_sfp_div__84__b = vlSelfRef.__Vfunc_int_to_sfp__85__Vfuncout;
                vlSelfRef.__Vfunc_sfp_mul__86__b = vlSelfRef.__Vfunc_sfp_exp__83__a;
                vlSelfRef.__Vfunc_sfp_mul__86__a = vlSelfRef.__Vfunc_sfp_exp__83__term;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__86__tmp);
                VL_EXTENDS_WQ(128,64, __Vtemp_16, vlSelfRef.__Vfunc_sfp_mul__86__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_17, vlSelfRef.__Vfunc_sfp_mul__86__b);
                VL_MULS_WWW(128, __Vtemp_18, __Vtemp_16, __Vtemp_17);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__86__tmp, __Vtemp_18, 0x20U);
                vlSelfRef.__Vfunc_sfp_mul__86__Vfuncout 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__86__tmp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__Vfunc_sfp_mul__86__tmp[0U])));
                vlSelfRef.__Vfunc_sfp_div__84__a = vlSelfRef.__Vfunc_sfp_mul__86__Vfuncout;
                __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__84__remainder);
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__84__b_ext);
                vlSelf->__Vfunc_sfp_div__84__result = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__84__sign_bit = VL_RAND_RESET_I(1);
                vlSelf->__Vfunc_sfp_div__84__abs_a = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__84__abs_b = VL_RAND_RESET_Q(64);
                {
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__84__b)) {
                        vlSelfRef.__Vfunc_sfp_div__84__Vfuncout 
                            = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__84__a)
                                ? 0x7fffffffffffffffULL
                                : 0x8000000000000000ULL);
                        goto __Vlabel84;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__84__a)) {
                        vlSelfRef.__Vfunc_sfp_div__84__Vfuncout = 0ULL;
                        goto __Vlabel84;
                    }
                    vlSelfRef.__Vfunc_sfp_div__84__abs_a 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__84__a 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__84__a)
                            : vlSelfRef.__Vfunc_sfp_div__84__a);
                    vlSelfRef.__Vfunc_sfp_div__84__abs_b 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__84__b 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__84__b)
                            : vlSelfRef.__Vfunc_sfp_div__84__b);
                    vlSelfRef.__Vfunc_sfp_div__84__sign_bit 
                        = (IData)(((vlSelfRef.__Vfunc_sfp_div__84__a 
                                    ^ vlSelfRef.__Vfunc_sfp_div__84__b) 
                                   >> 0x3fU));
                    __Vtemp_19[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__84__abs_a);
                    __Vtemp_19[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__84__abs_a 
                                              >> 0x20U));
                    __Vtemp_19[2U] = 0U;
                    __Vtemp_19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_19, 0x20U);
                    vlSelfRef.__Vfunc_sfp_div__84__b_ext[0U] 
                        = (IData)(vlSelfRef.__Vfunc_sfp_div__84__abs_b);
                    vlSelfRef.__Vfunc_sfp_div__84__b_ext[1U] 
                        = (IData)((vlSelfRef.__Vfunc_sfp_div__84__abs_b 
                                   >> 0x20U));
                    vlSelfRef.__Vfunc_sfp_div__84__b_ext[2U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__84__b_ext[3U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__84__result = 0ULL;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_21, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_21)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_23, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_22, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_23);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_22[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_22[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_22[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_22[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_25, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_25)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_27, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_26, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_27);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_26[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_26[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_26[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_26[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_29, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_29)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_31, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_30, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_31);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_30[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_30[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_30[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_30[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_33, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_33)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_35, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_34, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_35);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_34[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_34[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_34[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_34[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_37, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_37)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_39, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_38, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_39);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_38[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_38[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_38[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_38[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_41, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_41)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_43, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_42, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_43);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_42[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_42[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_42[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_42[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_45, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_45)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_47, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_46, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_47);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_46[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_46[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_46[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_46[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_49, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_49)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_51, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_50, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_51);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_50[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_50[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_50[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_50[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_53, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_53)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_55, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_54, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_55);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_54[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_54[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_54[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_54[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_57, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_57)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_59, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_58, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_59);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_58[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_58[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_58[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_58[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_61, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_61)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_63, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_62, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_63);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_62[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_62[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_62[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_62[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_65, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_65)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_67, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_66, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_67);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_66[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_66[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_66[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_66[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_69, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_69)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_71, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_70, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_71);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_70[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_70[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_70[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_70[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_73, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_73)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_75, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_74, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_75);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_74[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_74[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_74[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_74[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_77, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_77)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_79, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_78, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_79);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_78[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_78[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_78[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_78[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_81, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_81)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_83, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_82, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_83);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_82[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_82[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_82[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_82[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_85, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_85)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_87, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_86, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_87);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_86[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_86[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_86[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_86[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_89, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_89)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_91, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_90, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_91);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_90[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_90[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_90[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_90[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_93, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_93)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_95, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_94, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_95);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_94[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_94[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_94[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_94[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_97, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_97)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_99, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_98, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_99);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_98[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_98[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_98[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_98[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_101, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_101)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_103, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_102, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_103);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_102[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_102[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_102[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_102[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_105, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_105)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_107, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_106, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_107);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_106[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_106[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_106[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_106[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_109, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_109)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_111, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_110, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_111);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_110[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_110[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_110[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_110[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_113, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_113)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_115, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_114, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_115);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_114[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_114[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_114[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_114[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_117, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_117)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_119, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_118, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_119);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_118[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_118[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_118[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_118[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_121, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_121)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_123, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_122, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_123);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_122[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_122[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_122[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_122[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_125, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_125)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_127, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_126, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_127);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_126[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_126[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_126[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_126[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_129, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_129)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_131, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_130, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_131);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_130[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_130[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_130[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_130[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_133, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_133)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_135, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_134, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_135);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_134[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_134[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_134[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_134[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_137, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_137)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_139, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_138, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_139);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_138[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_138[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_138[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_138[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_141, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_141)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_143, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_142, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_143);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_142[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_142[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_142[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_142[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_145, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_145)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_147, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_146, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_147);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_146[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_146[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_146[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_146[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_149, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_149)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_151, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_150, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_151);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_150[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_150[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_150[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_150[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_153, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_153)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_155, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_154, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_155);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_154[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_154[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_154[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_154[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_157, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_157)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_159, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_158, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_159);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_158[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_158[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_158[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_158[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_161, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_161)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_163, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_162, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_163);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_162[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_162[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_162[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_162[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_165, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_165)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_167, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_166, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_167);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_166[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_166[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_166[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_166[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_169, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_169)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_171, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_170, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_171);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_170[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_170[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_170[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_170[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_173, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_173)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_175, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_174, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_175);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_174[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_174[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_174[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_174[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_177, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_177)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_179, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_178, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_179);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_178[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_178[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_178[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_178[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_181, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_181)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_183, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_182, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_183);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_182[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_182[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_182[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_182[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_185, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_185)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_187, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_186, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_187);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_186[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_186[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_186[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_186[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_189, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_189)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_191, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_190, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_191);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_190[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_190[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_190[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_190[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_193, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_193)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_195, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_194, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_195);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_194[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_194[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_194[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_194[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_197, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_197)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_199, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_198, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_199);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_198[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_198[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_198[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_198[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_201, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_201)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_203, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_202, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_203);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_202[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_202[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_202[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_202[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_205, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_205)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_207, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_206, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_207);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_206[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_206[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_206[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_206[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_209, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_209)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_211, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_210, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_211);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_210[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_210[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_210[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_210[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_213, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_213)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_215, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_214, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_215);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_214[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_214[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_214[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_214[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_217, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_217)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_219, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_218, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_219);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_218[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_218[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_218[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_218[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_221, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_221)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_223, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_222, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_223);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_222[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_222[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_222[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_222[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_225, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_225)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_227, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_226, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_227);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_226[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_226[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_226[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_226[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_229, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_229)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_231, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_230, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_231);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_230[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_230[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_230[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_230[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_233, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_233)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_235, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_234, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_235);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_234[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_234[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_234[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_234[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_237, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_237)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_239, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_238, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_239);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_238[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_238[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_238[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_238[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_241, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_241)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_243, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_242, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_243);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_242[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_242[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_242[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_242[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_245, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_245)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_247, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_246, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_247);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_246[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_246[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_246[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_246[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_249, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_249)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_251, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_250, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_251);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_250[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_250[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_250[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_250[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_253, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_253)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_255, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_254, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_255);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_254[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_254[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_254[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_254[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_257, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_257)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_259, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_258, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_259);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_258[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_258[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_258[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_258[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_261, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_261)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_263, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_262, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_263);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_262[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_262[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_262[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_262[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_265, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_265)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_267, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_266, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_267);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_266[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_266[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_266[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_266[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_269, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_269)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_271, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_270, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_271);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_270[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_270[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_270[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_270[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, vlSelfRef.__Vfunc_sfp_div__84__b_ext)) {
                        VL_SUB_W(4, __Vtemp_273, vlSelfRef.__Vfunc_sfp_div__84__remainder, vlSelfRef.__Vfunc_sfp_div__84__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_273[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_273[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_273[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_273[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__84__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__84__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__84__result)
                            : vlSelfRef.__Vfunc_sfp_div__84__result);
                    __Vlabel84: ;
                }
                vlSelfRef.__Vfunc_sfp_exp__83__term 
                    = vlSelfRef.__Vfunc_sfp_div__84__Vfuncout;
                vlSelfRef.__Vfunc_sfp_add__87__b = vlSelfRef.__Vfunc_sfp_exp__83__term;
                vlSelfRef.__Vfunc_sfp_add__87__a = vlSelfRef.__Vfunc_sfp_exp__83__result;
                vlSelfRef.__Vfunc_sfp_add__87__Vfuncout 
                    = (vlSelfRef.__Vfunc_sfp_add__87__a 
                       + vlSelfRef.__Vfunc_sfp_add__87__b);
                vlSelfRef.__Vfunc_sfp_exp__83__result 
                    = vlSelfRef.__Vfunc_sfp_add__87__Vfuncout;
                vlSelfRef.__Vfunc_sfp_exp__83__unnamedblk3__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_exp__83__unnamedblk3__DOT__i);
            }
            vlSelfRef.__Vfunc_sfp_exp__83__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_exp__83__result;
            vlSelfRef.__Vfunc_sfp_add__82__b = vlSelfRef.__Vfunc_sfp_exp__83__Vfuncout;
            vlSelfRef.__Vfunc_sfp_add__82__a = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_add__82__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_add__82__a 
                   + vlSelfRef.__Vfunc_sfp_add__82__b);
            vlSelfRef.__Vfunc_sfp_div__81__b = vlSelfRef.__Vfunc_sfp_add__82__Vfuncout;
            vlSelfRef.__Vfunc_int_to_sfp__88__n = 2U;
            vlSelfRef.__Vfunc_int_to_sfp__88__Vfuncout 
                = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__88__n), 0x20U);
            vlSelfRef.__Vfunc_sfp_div__81__a = vlSelfRef.__Vfunc_int_to_sfp__88__Vfuncout;
            __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0;
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__81__remainder);
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__81__b_ext);
            vlSelf->__Vfunc_sfp_div__81__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__81__sign_bit = VL_RAND_RESET_I(1);
            vlSelf->__Vfunc_sfp_div__81__abs_a = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__81__abs_b = VL_RAND_RESET_Q(64);
            {
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__81__b)) {
                    vlSelfRef.__Vfunc_sfp_div__81__Vfuncout 
                        = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__81__a)
                            ? 0x7fffffffffffffffULL
                            : 0x8000000000000000ULL);
                    goto __Vlabel85;
                }
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__81__a)) {
                    vlSelfRef.__Vfunc_sfp_div__81__Vfuncout = 0ULL;
                    goto __Vlabel85;
                }
                vlSelfRef.__Vfunc_sfp_div__81__abs_a 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__81__a 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__81__a)
                        : vlSelfRef.__Vfunc_sfp_div__81__a);
                vlSelfRef.__Vfunc_sfp_div__81__abs_b 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__81__b 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__81__b)
                        : vlSelfRef.__Vfunc_sfp_div__81__b);
                vlSelfRef.__Vfunc_sfp_div__81__sign_bit 
                    = (IData)(((vlSelfRef.__Vfunc_sfp_div__81__a 
                                ^ vlSelfRef.__Vfunc_sfp_div__81__b) 
                               >> 0x3fU));
                __Vtemp_275[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__81__abs_a);
                __Vtemp_275[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__81__abs_a 
                                           >> 0x20U));
                __Vtemp_275[2U] = 0U;
                __Vtemp_275[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_275, 0x20U);
                vlSelfRef.__Vfunc_sfp_div__81__b_ext[0U] 
                    = (IData)(vlSelfRef.__Vfunc_sfp_div__81__abs_b);
                vlSelfRef.__Vfunc_sfp_div__81__b_ext[1U] 
                    = (IData)((vlSelfRef.__Vfunc_sfp_div__81__abs_b 
                               >> 0x20U));
                vlSelfRef.__Vfunc_sfp_div__81__b_ext[2U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__81__b_ext[3U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__81__result = 0ULL;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_277, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_277)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_279, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_278, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_279);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_278[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_278[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_278[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_278[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_281, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_281)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_283, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_282, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_283);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_282[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_282[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_282[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_282[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_285, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_285)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_287, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_286, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_287);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_286[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_286[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_286[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_286[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_289, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_289)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_291, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_290, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_291);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_290[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_290[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_290[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_290[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_293, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_293)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_295, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_294, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_295);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_294[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_294[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_294[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_294[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_297, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_297)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_299, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_298, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_299);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_298[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_298[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_298[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_298[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_301, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_301)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_303, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_302, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_303);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_302[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_302[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_302[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_302[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_305, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_305)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_307, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_306, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_307);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_306[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_306[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_306[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_306[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_309, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_309)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_311, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_310, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_311);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_310[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_310[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_310[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_310[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_313, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_313)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_315, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_314, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_315);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_314[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_314[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_314[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_314[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_317, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_317)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_319, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_318, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_319);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_318[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_318[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_318[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_318[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_321, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_321)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_323, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_322, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_323);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_322[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_322[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_322[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_322[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_325, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_325)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_327, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_326, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_327);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_326[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_326[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_326[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_326[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_329, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_329)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_331, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_330, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_331);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_330[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_330[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_330[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_330[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_333, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_333)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_335, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_334, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_335);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_334[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_334[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_334[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_334[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_337, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_337)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_339, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_338, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_339);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_338[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_338[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_338[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_338[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_341, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_341)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_343, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_342, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_343);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_342[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_342[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_342[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_342[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_345, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_345)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_347, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_346, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_347);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_346[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_346[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_346[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_346[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_349, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_349)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_351, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_350, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_351);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_350[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_350[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_350[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_350[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_353, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_353)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_355, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_354, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_355);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_354[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_354[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_354[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_354[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_357, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_357)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_359, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_358, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_359);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_358[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_358[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_358[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_358[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_361, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_361)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_363, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_362, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_363);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_362[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_362[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_362[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_362[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_365, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_365)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_367, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_366, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_367);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_366[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_366[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_366[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_366[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_369, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_369)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_371, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_370, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_371);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_370[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_370[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_370[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_370[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_373, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_373)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_375, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_374, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_375);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_374[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_374[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_374[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_374[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_377, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_377)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_379, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_378, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_379);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_378[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_378[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_378[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_378[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_381, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_381)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_383, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_382, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_383);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_382[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_382[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_382[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_382[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_385, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_385)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_387, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_386, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_387);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_386[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_386[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_386[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_386[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_389, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_389)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_391, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_390, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_391);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_390[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_390[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_390[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_390[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_393, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_393)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_395, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_394, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_395);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_394[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_394[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_394[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_394[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_397, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_397)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_399, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_398, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_399);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_398[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_398[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_398[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_398[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_401, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_401)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_403, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_402, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_403);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_402[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_402[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_402[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_402[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_405, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_405)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_407, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_406, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_407);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_406[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_406[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_406[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_406[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_409, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_409)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_411, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_410, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_411);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_410[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_410[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_410[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_410[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_413, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_413)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_415, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_414, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_415);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_414[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_414[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_414[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_414[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_417, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_417)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_419, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_418, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_419);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_418[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_418[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_418[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_418[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_421, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_421)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_423, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_422, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_423);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_422[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_422[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_422[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_422[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_425, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_425)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_427, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_426, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_427);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_426[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_426[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_426[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_426[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_429, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_429)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_431, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_430, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_431);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_430[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_430[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_430[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_430[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_433, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_433)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_435, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_434, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_435);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_434[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_434[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_434[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_434[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_437, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_437)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_439, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_438, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_439);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_438[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_438[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_438[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_438[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_441, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_441)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_443, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_442, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_443);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_442[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_442[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_442[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_442[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_445, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_445)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_447, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_446, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_447);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_446[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_446[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_446[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_446[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_449, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_449)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_451, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_450, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_451);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_450[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_450[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_450[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_450[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_453, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_453)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_455, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_454, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_455);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_454[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_454[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_454[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_454[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_457, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_457)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_459, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_458, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_459);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_458[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_458[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_458[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_458[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_461, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_461)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_463, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_462, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_463);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_462[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_462[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_462[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_462[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_465, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_465)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_467, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_466, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_467);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_466[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_466[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_466[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_466[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_469, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_469)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_471, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_470, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_471);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_470[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_470[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_470[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_470[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_473, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_473)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_475, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_474, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_475);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_474[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_474[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_474[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_474[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_477, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_477)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_479, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_478, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_479);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_478[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_478[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_478[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_478[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_481, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_481)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_483, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_482, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_483);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_482[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_482[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_482[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_482[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_485, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_485)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_487, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_486, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_487);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_486[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_486[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_486[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_486[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_489, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_489)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_491, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_490, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_491);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_490[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_490[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_490[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_490[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_493, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_493)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_495, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_494, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_495);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_494[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_494[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_494[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_494[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_497, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_497)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_499, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_498, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_499);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_498[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_498[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_498[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_498[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_501, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_501)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_503, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_502, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_503);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_502[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_502[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_502[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_502[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_505, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_505)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_507, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_506, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_507);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_506[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_506[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_506[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_506[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_509, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_509)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_511, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_510, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_511);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_510[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_510[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_510[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_510[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_513, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_513)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_515, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_514, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_515);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_514[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_514[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_514[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_514[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_517, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_517)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_519, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_518, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_519);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_518[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_518[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_518[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_518[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_521, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_521)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_523, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_522, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_523);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_522[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_522[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_522[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_522[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_525, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_525)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_527, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_526, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_527);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_526[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_526[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_526[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_526[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, vlSelfRef.__Vfunc_sfp_div__81__b_ext)) {
                    VL_SUB_W(4, __Vtemp_529, vlSelfRef.__Vfunc_sfp_div__81__remainder, vlSelfRef.__Vfunc_sfp_div__81__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_529[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_529[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_529[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_529[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_sfp_div__81__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_sfp_div__81__sign_bit)
                        ? (- vlSelfRef.__Vfunc_sfp_div__81__result)
                        : vlSelfRef.__Vfunc_sfp_div__81__result);
                __Vlabel85: ;
            }
            vlSelfRef.__Vfunc_sfp_sub__80__a = vlSelfRef.__Vfunc_sfp_div__81__Vfuncout;
            vlSelfRef.__Vfunc_sfp_sub__80__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_sub__80__a 
                   - vlSelfRef.__Vfunc_sfp_sub__80__b);
            vlSelfRef.__Vfunc_sfp_tanh__77__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_sub__80__Vfuncout;
            __Vlabel83: ;
        }
        vlSelfRef.__Vfunc_sfp_pow__76__a = vlSelfRef.__Vfunc_sfp_tanh__77__Vfuncout;
        vlSelfRef.__Vfunc_sfp_pow__76__result = 1ULL;
        vlSelfRef.__Vfunc_sfp_pow__76__unnamedblk2__DOT__i = 1U;
        while (VL_LTES_III(32, vlSelfRef.__Vfunc_sfp_pow__76__unnamedblk2__DOT__i, vlSelfRef.__Vfunc_sfp_pow__76__b)) {
            vlSelfRef.__Vfunc_sfp_mul__89__b = vlSelfRef.__Vfunc_sfp_pow__76__a;
            vlSelfRef.__Vfunc_sfp_mul__89__a = vlSelfRef.__Vfunc_sfp_pow__76__result;
            VL_EXTENDS_WQ(128,64, __Vtemp_530, vlSelfRef.__Vfunc_sfp_mul__89__a);
            VL_EXTENDS_WQ(128,64, __Vtemp_531, vlSelfRef.__Vfunc_sfp_mul__89__b);
            VL_MULS_WWW(128, __Vtemp_532, __Vtemp_530, __Vtemp_531);
            VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__89__tmp, __Vtemp_532, 0x20U);
            vlSelfRef.__Vfunc_sfp_mul__89__Vfuncout 
                = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__89__tmp[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__89__tmp[0U])));
            vlSelfRef.__Vfunc_sfp_pow__76__result = vlSelfRef.__Vfunc_sfp_mul__89__Vfuncout;
            vlSelfRef.__Vfunc_sfp_pow__76__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_pow__76__unnamedblk2__DOT__i);
        }
        vlSelfRef.__Vfunc_sfp_pow__76__Vfuncout = vlSelfRef.__Vfunc_sfp_pow__76__result;
        vlSelfRef.__Vfunc_sfp_sub__75__b = vlSelfRef.__Vfunc_sfp_pow__76__Vfuncout;
        vlSelfRef.__Vfunc_sfp_sub__75__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.__Vfunc_sfp_sub__75__Vfuncout = (vlSelfRef.__Vfunc_sfp_sub__75__a 
                                                   - vlSelfRef.__Vfunc_sfp_sub__75__b);
        vlSelfRef.__Vfunc_sfp_mul__74__b = vlSelfRef.__Vfunc_sfp_sub__75__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__74__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_534, vlSelfRef.__Vfunc_sfp_mul__74__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_535, vlSelfRef.__Vfunc_sfp_mul__74__b);
        VL_MULS_WWW(128, __Vtemp_536, __Vtemp_534, __Vtemp_535);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__74__tmp, __Vtemp_536, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__74__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__74__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__74__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__73__b = vlSelfRef.__Vfunc_sfp_mul__74__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__73__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_537, vlSelfRef.__Vfunc_sfp_mul__73__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_538, vlSelfRef.__Vfunc_sfp_mul__73__b);
        VL_MULS_WWW(128, __Vtemp_539, __Vtemp_537, __Vtemp_538);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__73__tmp, __Vtemp_539, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__73__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__73__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__73__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__72__b = vlSelfRef.__Vfunc_sfp_mul__73__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__72__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__72__Vfuncout = (vlSelfRef.__Vfunc_sfp_add__72__a 
                                                   + vlSelfRef.__Vfunc_sfp_add__72__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__72__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 1U;
    } else if ((3U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_mul__91__b = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum)
                                             ? vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                                            [0U] : 0ULL);
        vlSelfRef.__Vfunc_sfp_mul__91__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_540, vlSelfRef.__Vfunc_sfp_mul__91__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_541, vlSelfRef.__Vfunc_sfp_mul__91__b);
        VL_MULS_WWW(128, __Vtemp_542, __Vtemp_540, __Vtemp_541);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__91__tmp, __Vtemp_542, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__91__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__91__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__91__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__90__b = vlSelfRef.__Vfunc_sfp_mul__91__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__90__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__90__Vfuncout = (vlSelfRef.__Vfunc_sfp_add__90__a 
                                                   + vlSelfRef.__Vfunc_sfp_add__90__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__90__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 1U;
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    }
    __Vfunc_sfp_mul__92__b = vlSelfRef.BenchMLP__DOT__values
        [0U];
    __Vfunc_sfp_mul__92__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_543, __Vfunc_sfp_mul__92__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_544, __Vfunc_sfp_mul__92__b);
    VL_MULS_WWW(128, __Vtemp_545, __Vtemp_543, __Vtemp_544);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__92__tmp, __Vtemp_545, 0x20U);
    __Vfunc_sfp_mul__92__Vfuncout = (((QData)((IData)(
                                                      __Vfunc_sfp_mul__92__tmp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vfunc_sfp_mul__92__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__92__Vfuncout;
    __Vfunc_sfp_mul__92__b = vlSelfRef.BenchMLP__DOT__values
        [1U];
    __Vfunc_sfp_mul__92__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_546, __Vfunc_sfp_mul__92__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_547, __Vfunc_sfp_mul__92__b);
    VL_MULS_WWW(128, __Vtemp_548, __Vtemp_546, __Vtemp_547);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__92__tmp, __Vtemp_548, 0x20U);
    __Vfunc_sfp_mul__92__Vfuncout = (((QData)((IData)(
                                                      __Vfunc_sfp_mul__92__tmp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vfunc_sfp_mul__92__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__92__Vfuncout;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i = 2U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    if ((1U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_sub__129__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction;
        vlSelfRef.__Vfunc_sfp_sub__129__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.__Vfunc_sfp_sub__129__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__129__a - vlSelfRef.__Vfunc_sfp_sub__129__b);
        vlSelfRef.__Vfunc_sfp_mul__128__b = vlSelfRef.__Vfunc_sfp_sub__129__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__128__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction;
        VL_EXTENDS_WQ(128,64, __Vtemp_549, vlSelfRef.__Vfunc_sfp_mul__128__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_550, vlSelfRef.__Vfunc_sfp_mul__128__b);
        VL_MULS_WWW(128, __Vtemp_551, __Vtemp_549, __Vtemp_550);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__128__tmp, __Vtemp_551, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__128__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__128__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__128__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__127__b = vlSelfRef.__Vfunc_sfp_mul__128__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__127__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_552, vlSelfRef.__Vfunc_sfp_mul__127__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_553, vlSelfRef.__Vfunc_sfp_mul__127__b);
        VL_MULS_WWW(128, __Vtemp_554, __Vtemp_552, __Vtemp_553);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__127__tmp, __Vtemp_554, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__127__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__127__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__127__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__126__b = vlSelfRef.__Vfunc_sfp_mul__127__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__126__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_555, vlSelfRef.__Vfunc_sfp_mul__126__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_556, vlSelfRef.__Vfunc_sfp_mul__126__b);
        VL_MULS_WWW(128, __Vtemp_557, __Vtemp_555, __Vtemp_556);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__126__tmp, __Vtemp_557, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__126__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__126__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__126__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__125__b = vlSelfRef.__Vfunc_sfp_mul__126__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__125__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__125__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__125__a + vlSelfRef.__Vfunc_sfp_add__125__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__125__Vfuncout;
    } else if ((2U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_pow__134__b = 2U;
        vlSelfRef.__Vfunc_sfp_tanh__135__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction;
        {
            if (VL_GTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__135__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__136__n = 7U;
                            vlSelfRef.__Vfunc_int_to_sfp__136__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__136__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__136__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__135__Vfuncout 
                    = vlSymsp->TOP__FixedPoint.ONE;
                goto __Vlabel86;
            }
            if (VL_LTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__135__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__137__n = 0xfffffff9U;
                            vlSelfRef.__Vfunc_int_to_sfp__137__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__137__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__137__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__135__Vfuncout 
                    = (- vlSymsp->TOP__FixedPoint.ONE);
                goto __Vlabel86;
            }
            vlSelfRef.__Vfunc_sfp_sub__138__b = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__141__a = VL_SHIFTL_QQI(64,64,32, 
                                                              (- vlSelfRef.__Vfunc_sfp_tanh__135__a), 1U);
            vlSelf->__Vfunc_sfp_exp__141__unnamedblk3__DOT__i = 0;
            vlSelf->__Vfunc_sfp_exp__141__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_exp__141__term = VL_RAND_RESET_Q(64);
            vlSelfRef.__Vfunc_sfp_exp__141__result 
                = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__141__term = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__141__unnamedblk3__DOT__i = 1U;
            while (VL_GTS_III(32, 0x32U, vlSelfRef.__Vfunc_sfp_exp__141__unnamedblk3__DOT__i)) {
                vlSelfRef.__Vfunc_int_to_sfp__143__n 
                    = vlSelfRef.__Vfunc_sfp_exp__141__unnamedblk3__DOT__i;
                vlSelfRef.__Vfunc_int_to_sfp__143__Vfuncout 
                    = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__143__n), 0x20U);
                vlSelfRef.__Vfunc_sfp_div__142__b = vlSelfRef.__Vfunc_int_to_sfp__143__Vfuncout;
                vlSelfRef.__Vfunc_sfp_mul__144__b = vlSelfRef.__Vfunc_sfp_exp__141__a;
                vlSelfRef.__Vfunc_sfp_mul__144__a = vlSelfRef.__Vfunc_sfp_exp__141__term;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__144__tmp);
                VL_EXTENDS_WQ(128,64, __Vtemp_558, vlSelfRef.__Vfunc_sfp_mul__144__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_559, vlSelfRef.__Vfunc_sfp_mul__144__b);
                VL_MULS_WWW(128, __Vtemp_560, __Vtemp_558, __Vtemp_559);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__144__tmp, __Vtemp_560, 0x20U);
                vlSelfRef.__Vfunc_sfp_mul__144__Vfuncout 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__144__tmp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__Vfunc_sfp_mul__144__tmp[0U])));
                vlSelfRef.__Vfunc_sfp_div__142__a = vlSelfRef.__Vfunc_sfp_mul__144__Vfuncout;
                __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__142__remainder);
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__142__b_ext);
                vlSelf->__Vfunc_sfp_div__142__result = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__142__sign_bit = VL_RAND_RESET_I(1);
                vlSelf->__Vfunc_sfp_div__142__abs_a = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__142__abs_b = VL_RAND_RESET_Q(64);
                {
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__142__b)) {
                        vlSelfRef.__Vfunc_sfp_div__142__Vfuncout 
                            = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__142__a)
                                ? 0x7fffffffffffffffULL
                                : 0x8000000000000000ULL);
                        goto __Vlabel87;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__142__a)) {
                        vlSelfRef.__Vfunc_sfp_div__142__Vfuncout = 0ULL;
                        goto __Vlabel87;
                    }
                    vlSelfRef.__Vfunc_sfp_div__142__abs_a 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__142__a 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__142__a)
                            : vlSelfRef.__Vfunc_sfp_div__142__a);
                    vlSelfRef.__Vfunc_sfp_div__142__abs_b 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__142__b 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__142__b)
                            : vlSelfRef.__Vfunc_sfp_div__142__b);
                    vlSelfRef.__Vfunc_sfp_div__142__sign_bit 
                        = (IData)(((vlSelfRef.__Vfunc_sfp_div__142__a 
                                    ^ vlSelfRef.__Vfunc_sfp_div__142__b) 
                                   >> 0x3fU));
                    __Vtemp_561[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__142__abs_a);
                    __Vtemp_561[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__142__abs_a 
                                               >> 0x20U));
                    __Vtemp_561[2U] = 0U;
                    __Vtemp_561[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_561, 0x20U);
                    vlSelfRef.__Vfunc_sfp_div__142__b_ext[0U] 
                        = (IData)(vlSelfRef.__Vfunc_sfp_div__142__abs_b);
                    vlSelfRef.__Vfunc_sfp_div__142__b_ext[1U] 
                        = (IData)((vlSelfRef.__Vfunc_sfp_div__142__abs_b 
                                   >> 0x20U));
                    vlSelfRef.__Vfunc_sfp_div__142__b_ext[2U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__142__b_ext[3U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__142__result = 0ULL;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_563, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_563)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_565, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_564, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_565);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_564[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_564[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_564[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_564[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_567, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_567)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_569, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_568, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_569);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_568[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_568[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_568[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_568[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_571, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_571)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_573, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_572, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_573);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_572[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_572[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_572[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_572[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_575, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_575)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_577, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_576, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_577);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_576[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_576[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_576[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_576[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_579, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_579)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_581, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_580, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_581);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_580[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_580[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_580[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_580[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_583, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_583)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_585, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_584, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_585);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_584[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_584[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_584[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_584[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_587, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_587)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_589, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_588, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_589);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_588[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_588[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_588[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_588[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_591, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_591)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_593, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_592, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_593);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_592[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_592[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_592[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_592[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_595, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_595)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_597, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_596, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_597);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_596[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_596[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_596[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_596[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_599, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_599)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_601, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_600, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_601);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_600[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_600[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_600[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_600[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_603, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_603)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_605, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_604, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_605);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_604[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_604[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_604[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_604[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_607, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_607)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_609, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_608, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_609);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_608[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_608[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_608[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_608[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_611, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_611)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_613, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_612, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_613);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_612[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_612[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_612[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_612[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_615, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_615)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_617, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_616, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_617);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_616[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_616[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_616[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_616[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_619, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_619)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_621, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_620, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_621);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_620[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_620[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_620[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_620[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_623, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_623)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_625, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_624, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_625);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_624[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_624[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_624[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_624[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_627, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_627)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_629, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_628, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_629);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_628[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_628[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_628[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_628[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_631, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_631)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_633, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_632, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_633);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_632[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_632[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_632[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_632[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_635, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_635)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_637, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_636, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_637);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_636[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_636[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_636[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_636[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_639, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_639)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_641, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_640, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_641);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_640[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_640[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_640[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_640[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_643, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_643)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_645, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_644, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_645);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_644[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_644[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_644[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_644[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_647, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_647)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_649, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_648, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_649);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_648[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_648[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_648[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_648[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_651, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_651)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_653, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_652, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_653);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_652[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_652[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_652[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_652[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_655, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_655)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_657, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_656, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_657);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_656[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_656[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_656[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_656[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_659, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_659)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_661, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_660, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_661);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_660[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_660[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_660[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_660[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_663, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_663)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_665, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_664, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_665);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_664[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_664[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_664[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_664[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_667, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_667)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_669, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_668, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_669);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_668[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_668[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_668[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_668[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_671, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_671)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_673, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_672, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_673);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_672[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_672[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_672[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_672[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_675, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_675)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_677, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_676, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_677);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_676[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_676[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_676[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_676[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_679, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_679)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_681, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_680, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_681);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_680[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_680[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_680[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_680[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_683, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_683)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_685, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_684, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_685);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_684[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_684[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_684[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_684[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_687, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_687)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_689, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_688, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_689);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_688[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_688[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_688[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_688[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_691, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_691)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_693, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_692, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_693);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_692[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_692[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_692[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_692[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_695, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_695)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_697, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_696, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_697);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_696[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_696[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_696[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_696[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_699, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_699)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_701, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_700, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_701);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_700[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_700[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_700[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_700[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_703, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_703)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_705, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_704, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_705);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_704[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_704[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_704[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_704[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_707, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_707)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_709, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_708, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_709);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_708[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_708[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_708[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_708[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_711, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_711)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_713, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_712, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_713);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_712[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_712[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_712[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_712[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_715, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_715)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_717, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_716, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_717);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_716[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_716[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_716[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_716[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_719, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_719)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_721, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_720, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_721);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_720[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_720[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_720[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_720[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_723, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_723)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_725, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_724, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_725);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_724[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_724[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_724[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_724[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_727, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_727)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_729, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_728, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_729);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_728[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_728[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_728[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_728[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_731, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_731)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_733, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_732, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_733);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_732[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_732[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_732[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_732[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_735, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_735)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_737, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_736, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_737);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_736[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_736[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_736[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_736[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_739, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_739)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_741, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_740, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_741);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_740[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_740[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_740[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_740[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_743, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_743)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_745, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_744, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_745);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_744[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_744[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_744[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_744[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_747, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_747)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_749, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_748, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_749);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_748[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_748[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_748[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_748[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_751, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_751)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_753, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_752, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_753);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_752[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_752[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_752[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_752[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_755, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_755)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_757, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_756, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_757);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_756[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_756[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_756[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_756[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_759, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_759)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_761, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_760, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_761);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_760[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_760[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_760[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_760[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_763, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_763)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_765, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_764, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_765);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_764[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_764[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_764[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_764[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_767, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_767)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_769, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_768, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_769);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_768[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_768[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_768[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_768[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_771, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_771)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_773, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_772, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_773);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_772[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_772[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_772[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_772[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_775, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_775)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_777, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_776, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_777);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_776[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_776[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_776[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_776[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_779, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_779)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_781, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_780, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_781);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_780[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_780[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_780[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_780[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_783, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_783)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_785, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_784, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_785);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_784[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_784[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_784[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_784[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_787, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_787)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_789, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_788, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_789);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_788[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_788[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_788[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_788[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_791, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_791)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_793, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_792, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_793);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_792[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_792[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_792[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_792[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_795, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_795)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_797, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_796, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_797);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_796[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_796[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_796[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_796[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_799, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_799)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_801, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_800, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_801);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_800[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_800[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_800[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_800[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_803, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_803)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_805, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_804, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_805);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_804[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_804[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_804[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_804[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_807, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_807)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_809, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_808, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_809);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_808[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_808[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_808[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_808[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_811, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_811)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_813, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_812, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_813);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_812[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_812[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_812[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_812[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, vlSelfRef.__Vfunc_sfp_div__142__b_ext)) {
                        VL_SUB_W(4, __Vtemp_815, vlSelfRef.__Vfunc_sfp_div__142__remainder, vlSelfRef.__Vfunc_sfp_div__142__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_815[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_815[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_815[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_815[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__142__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__142__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__142__result)
                            : vlSelfRef.__Vfunc_sfp_div__142__result);
                    __Vlabel87: ;
                }
                vlSelfRef.__Vfunc_sfp_exp__141__term 
                    = vlSelfRef.__Vfunc_sfp_div__142__Vfuncout;
                vlSelfRef.__Vfunc_sfp_add__145__b = vlSelfRef.__Vfunc_sfp_exp__141__term;
                vlSelfRef.__Vfunc_sfp_add__145__a = vlSelfRef.__Vfunc_sfp_exp__141__result;
                vlSelfRef.__Vfunc_sfp_add__145__Vfuncout 
                    = (vlSelfRef.__Vfunc_sfp_add__145__a 
                       + vlSelfRef.__Vfunc_sfp_add__145__b);
                vlSelfRef.__Vfunc_sfp_exp__141__result 
                    = vlSelfRef.__Vfunc_sfp_add__145__Vfuncout;
                vlSelfRef.__Vfunc_sfp_exp__141__unnamedblk3__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_exp__141__unnamedblk3__DOT__i);
            }
            vlSelfRef.__Vfunc_sfp_exp__141__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_exp__141__result;
            vlSelfRef.__Vfunc_sfp_add__140__b = vlSelfRef.__Vfunc_sfp_exp__141__Vfuncout;
            vlSelfRef.__Vfunc_sfp_add__140__a = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_add__140__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_add__140__a 
                   + vlSelfRef.__Vfunc_sfp_add__140__b);
            vlSelfRef.__Vfunc_sfp_div__139__b = vlSelfRef.__Vfunc_sfp_add__140__Vfuncout;
            vlSelfRef.__Vfunc_int_to_sfp__146__n = 2U;
            vlSelfRef.__Vfunc_int_to_sfp__146__Vfuncout 
                = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__146__n), 0x20U);
            vlSelfRef.__Vfunc_sfp_div__139__a = vlSelfRef.__Vfunc_int_to_sfp__146__Vfuncout;
            __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0;
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__139__remainder);
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__139__b_ext);
            vlSelf->__Vfunc_sfp_div__139__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__139__sign_bit = VL_RAND_RESET_I(1);
            vlSelf->__Vfunc_sfp_div__139__abs_a = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__139__abs_b = VL_RAND_RESET_Q(64);
            {
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__139__b)) {
                    vlSelfRef.__Vfunc_sfp_div__139__Vfuncout 
                        = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__139__a)
                            ? 0x7fffffffffffffffULL
                            : 0x8000000000000000ULL);
                    goto __Vlabel88;
                }
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__139__a)) {
                    vlSelfRef.__Vfunc_sfp_div__139__Vfuncout = 0ULL;
                    goto __Vlabel88;
                }
                vlSelfRef.__Vfunc_sfp_div__139__abs_a 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__139__a 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__139__a)
                        : vlSelfRef.__Vfunc_sfp_div__139__a);
                vlSelfRef.__Vfunc_sfp_div__139__abs_b 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__139__b 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__139__b)
                        : vlSelfRef.__Vfunc_sfp_div__139__b);
                vlSelfRef.__Vfunc_sfp_div__139__sign_bit 
                    = (IData)(((vlSelfRef.__Vfunc_sfp_div__139__a 
                                ^ vlSelfRef.__Vfunc_sfp_div__139__b) 
                               >> 0x3fU));
                __Vtemp_817[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__139__abs_a);
                __Vtemp_817[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__139__abs_a 
                                           >> 0x20U));
                __Vtemp_817[2U] = 0U;
                __Vtemp_817[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_817, 0x20U);
                vlSelfRef.__Vfunc_sfp_div__139__b_ext[0U] 
                    = (IData)(vlSelfRef.__Vfunc_sfp_div__139__abs_b);
                vlSelfRef.__Vfunc_sfp_div__139__b_ext[1U] 
                    = (IData)((vlSelfRef.__Vfunc_sfp_div__139__abs_b 
                               >> 0x20U));
                vlSelfRef.__Vfunc_sfp_div__139__b_ext[2U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__139__b_ext[3U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__139__result = 0ULL;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_819, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_819)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_821, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_820, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_821);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_820[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_820[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_820[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_820[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_823, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_823)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_825, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_824, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_825);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_824[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_824[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_824[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_824[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_827, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_827)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_829, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_828, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_829);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_828[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_828[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_828[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_828[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_831, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_831)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_833, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_832, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_833);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_832[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_832[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_832[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_832[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_835, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_835)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_837, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_836, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_837);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_836[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_836[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_836[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_836[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_839, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_839)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_841, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_840, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_841);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_840[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_840[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_840[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_840[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_843, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_843)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_845, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_844, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_845);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_844[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_844[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_844[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_844[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_847, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_847)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_849, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_848, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_849);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_848[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_848[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_848[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_848[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_851, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_851)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_853, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_852, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_853);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_852[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_852[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_852[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_852[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_855, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_855)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_857, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_856, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_857);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_856[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_856[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_856[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_856[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_859, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_859)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_861, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_860, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_861);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_860[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_860[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_860[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_860[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_863, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_863)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_865, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_864, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_865);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_864[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_864[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_864[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_864[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_867, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_867)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_869, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_868, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_869);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_868[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_868[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_868[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_868[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_871, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_871)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_873, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_872, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_873);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_872[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_872[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_872[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_872[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_875, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_875)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_877, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_876, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_877);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_876[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_876[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_876[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_876[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_879, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_879)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_881, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_880, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_881);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_880[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_880[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_880[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_880[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_883, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_883)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_885, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_884, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_885);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_884[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_884[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_884[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_884[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_887, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_887)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_889, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_888, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_889);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_888[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_888[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_888[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_888[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_891, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_891)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_893, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_892, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_893);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_892[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_892[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_892[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_892[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_895, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_895)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_897, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_896, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_897);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_896[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_896[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_896[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_896[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_899, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_899)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_901, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_900, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_901);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_900[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_900[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_900[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_900[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_903, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_903)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_905, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_904, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_905);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_904[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_904[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_904[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_904[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_907, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_907)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_909, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_908, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_909);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_908[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_908[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_908[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_908[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_911, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_911)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_913, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_912, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_913);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_912[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_912[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_912[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_912[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_915, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_915)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_917, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_916, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_917);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_916[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_916[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_916[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_916[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_919, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_919)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_921, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_920, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_921);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_920[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_920[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_920[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_920[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_923, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_923)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_925, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_924, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_925);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_924[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_924[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_924[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_924[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_927, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_927)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_929, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_928, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_929);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_928[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_928[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_928[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_928[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_931, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_931)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_933, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_932, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_933);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_932[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_932[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_932[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_932[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_935, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_935)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_937, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_936, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_937);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_936[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_936[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_936[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_936[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_939, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_939)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_941, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_940, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_941);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_940[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_940[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_940[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_940[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_943, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_943)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_945, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_944, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_945);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_944[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_944[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_944[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_944[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_947, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_947)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_949, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_948, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_949);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_948[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_948[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_948[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_948[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_951, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_951)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_953, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_952, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_953);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_952[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_952[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_952[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_952[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_955, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_955)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_957, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_956, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_957);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_956[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_956[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_956[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_956[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_959, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_959)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_961, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_960, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_961);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_960[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_960[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_960[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_960[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_963, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_963)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_965, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_964, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_965);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_964[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_964[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_964[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_964[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_967, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_967)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_969, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_968, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_969);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_968[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_968[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_968[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_968[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_971, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_971)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_973, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_972, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_973);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_972[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_972[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_972[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_972[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_975, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_975)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_977, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_976, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_977);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_976[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_976[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_976[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_976[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_979, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_979)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_981, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_980, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_981);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_980[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_980[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_980[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_980[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_983, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_983)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_985, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_984, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_985);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_984[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_984[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_984[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_984[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_987, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_987)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_989, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_988, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_989);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_988[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_988[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_988[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_988[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_991, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_991)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_993, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_992, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_993);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_992[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_992[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_992[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_992[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_995, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_995)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_997, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_996, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_997);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_996[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_996[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_996[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_996[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_999, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_999)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1001, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_1000, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1001);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1000[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1000[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1000[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1000[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1003, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1003)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1005, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_1004, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1005);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1004[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1004[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1004[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1004[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1007, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1007)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1009, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_1008, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1009);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1008[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1008[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1008[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1008[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1011, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1011)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1013, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_1012, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1013);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1012[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1012[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1012[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1012[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1015, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1015)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1017, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_1016, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1017);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1016[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1016[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1016[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1016[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1019, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1019)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1021, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_1020, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1021);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1020[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1020[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1020[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1020[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1023, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1023)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1025, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_1024, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1025);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1024[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1024[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1024[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1024[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1027, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1027)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1029, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_1028, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1029);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1028[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1028[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1028[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1028[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1031, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1031)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1033, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_1032, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1033);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1032[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1032[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1032[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1032[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1035, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1035)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1037, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_1036, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1037);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1036[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1036[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1036[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1036[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1039, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1039)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1041, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_1040, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1041);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1040[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1040[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1040[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1040[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1043, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1043)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1045, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_1044, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1045);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1044[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1044[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1044[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1044[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1047, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1047)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1049, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_1048, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1049);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1048[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1048[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1048[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1048[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1051, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1051)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1053, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_1052, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1053);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1052[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1052[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1052[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1052[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1055, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1055)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1057, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_1056, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1057);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1056[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1056[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1056[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1056[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1059, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1059)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1061, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_1060, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1061);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1060[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1060[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1060[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1060[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1063, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1063)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1065, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_1064, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1065);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1064[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1064[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1064[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1064[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1067, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1067)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1069, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_1068, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1069);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1068[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1068[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1068[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1068[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, vlSelfRef.__Vfunc_sfp_div__139__b_ext)) {
                    VL_SUB_W(4, __Vtemp_1071, vlSelfRef.__Vfunc_sfp_div__139__remainder, vlSelfRef.__Vfunc_sfp_div__139__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1071[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1071[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1071[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1071[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_sfp_div__139__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_sfp_div__139__sign_bit)
                        ? (- vlSelfRef.__Vfunc_sfp_div__139__result)
                        : vlSelfRef.__Vfunc_sfp_div__139__result);
                __Vlabel88: ;
            }
            vlSelfRef.__Vfunc_sfp_sub__138__a = vlSelfRef.__Vfunc_sfp_div__139__Vfuncout;
            vlSelfRef.__Vfunc_sfp_sub__138__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_sub__138__a 
                   - vlSelfRef.__Vfunc_sfp_sub__138__b);
            vlSelfRef.__Vfunc_sfp_tanh__135__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_sub__138__Vfuncout;
            __Vlabel86: ;
        }
        vlSelfRef.__Vfunc_sfp_pow__134__a = vlSelfRef.__Vfunc_sfp_tanh__135__Vfuncout;
        vlSelfRef.__Vfunc_sfp_pow__134__result = 1ULL;
        vlSelfRef.__Vfunc_sfp_pow__134__unnamedblk2__DOT__i = 1U;
        while (VL_LTES_III(32, vlSelfRef.__Vfunc_sfp_pow__134__unnamedblk2__DOT__i, vlSelfRef.__Vfunc_sfp_pow__134__b)) {
            vlSelfRef.__Vfunc_sfp_mul__147__b = vlSelfRef.__Vfunc_sfp_pow__134__a;
            vlSelfRef.__Vfunc_sfp_mul__147__a = vlSelfRef.__Vfunc_sfp_pow__134__result;
            VL_EXTENDS_WQ(128,64, __Vtemp_1072, vlSelfRef.__Vfunc_sfp_mul__147__a);
            VL_EXTENDS_WQ(128,64, __Vtemp_1073, vlSelfRef.__Vfunc_sfp_mul__147__b);
            VL_MULS_WWW(128, __Vtemp_1074, __Vtemp_1072, __Vtemp_1073);
            VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__147__tmp, __Vtemp_1074, 0x20U);
            vlSelfRef.__Vfunc_sfp_mul__147__Vfuncout 
                = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__147__tmp[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__147__tmp[0U])));
            vlSelfRef.__Vfunc_sfp_pow__134__result 
                = vlSelfRef.__Vfunc_sfp_mul__147__Vfuncout;
            vlSelfRef.__Vfunc_sfp_pow__134__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_pow__134__unnamedblk2__DOT__i);
        }
        vlSelfRef.__Vfunc_sfp_pow__134__Vfuncout = vlSelfRef.__Vfunc_sfp_pow__134__result;
        vlSelfRef.__Vfunc_sfp_sub__133__b = vlSelfRef.__Vfunc_sfp_pow__134__Vfuncout;
        vlSelfRef.__Vfunc_sfp_sub__133__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.__Vfunc_sfp_sub__133__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__133__a - vlSelfRef.__Vfunc_sfp_sub__133__b);
        vlSelfRef.__Vfunc_sfp_mul__132__b = vlSelfRef.__Vfunc_sfp_sub__133__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__132__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1076, vlSelfRef.__Vfunc_sfp_mul__132__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1077, vlSelfRef.__Vfunc_sfp_mul__132__b);
        VL_MULS_WWW(128, __Vtemp_1078, __Vtemp_1076, __Vtemp_1077);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__132__tmp, __Vtemp_1078, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__132__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__132__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__132__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__131__b = vlSelfRef.__Vfunc_sfp_mul__132__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__131__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1079, vlSelfRef.__Vfunc_sfp_mul__131__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1080, vlSelfRef.__Vfunc_sfp_mul__131__b);
        VL_MULS_WWW(128, __Vtemp_1081, __Vtemp_1079, __Vtemp_1080);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__131__tmp, __Vtemp_1081, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__131__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__131__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__131__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__130__b = vlSelfRef.__Vfunc_sfp_mul__131__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__130__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__130__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__130__a + vlSelfRef.__Vfunc_sfp_add__130__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__130__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 1U;
    } else if ((3U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_mul__149__b = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum)
                                              ? vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                                             [0U] : 0ULL);
        vlSelfRef.__Vfunc_sfp_mul__149__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1082, vlSelfRef.__Vfunc_sfp_mul__149__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1083, vlSelfRef.__Vfunc_sfp_mul__149__b);
        VL_MULS_WWW(128, __Vtemp_1084, __Vtemp_1082, __Vtemp_1083);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__149__tmp, __Vtemp_1084, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__149__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__149__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__149__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__148__b = vlSelfRef.__Vfunc_sfp_mul__149__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__148__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__148__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__148__a + vlSelfRef.__Vfunc_sfp_add__148__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__148__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 1U;
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    }
    __Vfunc_sfp_mul__150__b = vlSelfRef.BenchMLP__DOT__values
        [0U];
    __Vfunc_sfp_mul__150__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1085, __Vfunc_sfp_mul__150__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1086, __Vfunc_sfp_mul__150__b);
    VL_MULS_WWW(128, __Vtemp_1087, __Vtemp_1085, __Vtemp_1086);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__150__tmp, __Vtemp_1087, 0x20U);
    __Vfunc_sfp_mul__150__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__150__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__150__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__150__Vfuncout;
    __Vfunc_sfp_mul__150__b = vlSelfRef.BenchMLP__DOT__values
        [1U];
    __Vfunc_sfp_mul__150__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1088, __Vfunc_sfp_mul__150__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1089, __Vfunc_sfp_mul__150__b);
    VL_MULS_WWW(128, __Vtemp_1090, __Vtemp_1088, __Vtemp_1089);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__150__tmp, __Vtemp_1090, 0x20U);
    __Vfunc_sfp_mul__150__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__150__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__150__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__150__Vfuncout;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i = 2U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    if ((1U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_sub__187__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction;
        vlSelfRef.__Vfunc_sfp_sub__187__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.__Vfunc_sfp_sub__187__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__187__a - vlSelfRef.__Vfunc_sfp_sub__187__b);
        vlSelfRef.__Vfunc_sfp_mul__186__b = vlSelfRef.__Vfunc_sfp_sub__187__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__186__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction;
        VL_EXTENDS_WQ(128,64, __Vtemp_1091, vlSelfRef.__Vfunc_sfp_mul__186__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1092, vlSelfRef.__Vfunc_sfp_mul__186__b);
        VL_MULS_WWW(128, __Vtemp_1093, __Vtemp_1091, __Vtemp_1092);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__186__tmp, __Vtemp_1093, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__186__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__186__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__186__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__185__b = vlSelfRef.__Vfunc_sfp_mul__186__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__185__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1094, vlSelfRef.__Vfunc_sfp_mul__185__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1095, vlSelfRef.__Vfunc_sfp_mul__185__b);
        VL_MULS_WWW(128, __Vtemp_1096, __Vtemp_1094, __Vtemp_1095);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__185__tmp, __Vtemp_1096, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__185__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__185__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__185__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__184__b = vlSelfRef.__Vfunc_sfp_mul__185__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__184__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1097, vlSelfRef.__Vfunc_sfp_mul__184__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1098, vlSelfRef.__Vfunc_sfp_mul__184__b);
        VL_MULS_WWW(128, __Vtemp_1099, __Vtemp_1097, __Vtemp_1098);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__184__tmp, __Vtemp_1099, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__184__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__184__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__184__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__183__b = vlSelfRef.__Vfunc_sfp_mul__184__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__183__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__183__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__183__a + vlSelfRef.__Vfunc_sfp_add__183__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__183__Vfuncout;
    } else if ((2U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_pow__192__b = 2U;
        vlSelfRef.__Vfunc_sfp_tanh__193__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction;
        {
            if (VL_GTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__193__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__194__n = 7U;
                            vlSelfRef.__Vfunc_int_to_sfp__194__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__194__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__194__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__193__Vfuncout 
                    = vlSymsp->TOP__FixedPoint.ONE;
                goto __Vlabel89;
            }
            if (VL_LTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__193__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__195__n = 0xfffffff9U;
                            vlSelfRef.__Vfunc_int_to_sfp__195__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__195__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__195__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__193__Vfuncout 
                    = (- vlSymsp->TOP__FixedPoint.ONE);
                goto __Vlabel89;
            }
            vlSelfRef.__Vfunc_sfp_sub__196__b = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__199__a = VL_SHIFTL_QQI(64,64,32, 
                                                              (- vlSelfRef.__Vfunc_sfp_tanh__193__a), 1U);
            vlSelf->__Vfunc_sfp_exp__199__unnamedblk3__DOT__i = 0;
            vlSelf->__Vfunc_sfp_exp__199__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_exp__199__term = VL_RAND_RESET_Q(64);
            vlSelfRef.__Vfunc_sfp_exp__199__result 
                = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__199__term = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__199__unnamedblk3__DOT__i = 1U;
            while (VL_GTS_III(32, 0x32U, vlSelfRef.__Vfunc_sfp_exp__199__unnamedblk3__DOT__i)) {
                vlSelfRef.__Vfunc_int_to_sfp__201__n 
                    = vlSelfRef.__Vfunc_sfp_exp__199__unnamedblk3__DOT__i;
                vlSelfRef.__Vfunc_int_to_sfp__201__Vfuncout 
                    = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__201__n), 0x20U);
                vlSelfRef.__Vfunc_sfp_div__200__b = vlSelfRef.__Vfunc_int_to_sfp__201__Vfuncout;
                vlSelfRef.__Vfunc_sfp_mul__202__b = vlSelfRef.__Vfunc_sfp_exp__199__a;
                vlSelfRef.__Vfunc_sfp_mul__202__a = vlSelfRef.__Vfunc_sfp_exp__199__term;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__202__tmp);
                VL_EXTENDS_WQ(128,64, __Vtemp_1100, vlSelfRef.__Vfunc_sfp_mul__202__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_1101, vlSelfRef.__Vfunc_sfp_mul__202__b);
                VL_MULS_WWW(128, __Vtemp_1102, __Vtemp_1100, __Vtemp_1101);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__202__tmp, __Vtemp_1102, 0x20U);
                vlSelfRef.__Vfunc_sfp_mul__202__Vfuncout 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__202__tmp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__Vfunc_sfp_mul__202__tmp[0U])));
                vlSelfRef.__Vfunc_sfp_div__200__a = vlSelfRef.__Vfunc_sfp_mul__202__Vfuncout;
                __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__200__remainder);
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__200__b_ext);
                vlSelf->__Vfunc_sfp_div__200__result = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__200__sign_bit = VL_RAND_RESET_I(1);
                vlSelf->__Vfunc_sfp_div__200__abs_a = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__200__abs_b = VL_RAND_RESET_Q(64);
                {
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__200__b)) {
                        vlSelfRef.__Vfunc_sfp_div__200__Vfuncout 
                            = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__200__a)
                                ? 0x7fffffffffffffffULL
                                : 0x8000000000000000ULL);
                        goto __Vlabel90;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__200__a)) {
                        vlSelfRef.__Vfunc_sfp_div__200__Vfuncout = 0ULL;
                        goto __Vlabel90;
                    }
                    vlSelfRef.__Vfunc_sfp_div__200__abs_a 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__200__a 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__200__a)
                            : vlSelfRef.__Vfunc_sfp_div__200__a);
                    vlSelfRef.__Vfunc_sfp_div__200__abs_b 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__200__b 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__200__b)
                            : vlSelfRef.__Vfunc_sfp_div__200__b);
                    vlSelfRef.__Vfunc_sfp_div__200__sign_bit 
                        = (IData)(((vlSelfRef.__Vfunc_sfp_div__200__a 
                                    ^ vlSelfRef.__Vfunc_sfp_div__200__b) 
                                   >> 0x3fU));
                    __Vtemp_1103[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__200__abs_a);
                    __Vtemp_1103[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__200__abs_a 
                                                >> 0x20U));
                    __Vtemp_1103[2U] = 0U;
                    __Vtemp_1103[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1103, 0x20U);
                    vlSelfRef.__Vfunc_sfp_div__200__b_ext[0U] 
                        = (IData)(vlSelfRef.__Vfunc_sfp_div__200__abs_b);
                    vlSelfRef.__Vfunc_sfp_div__200__b_ext[1U] 
                        = (IData)((vlSelfRef.__Vfunc_sfp_div__200__abs_b 
                                   >> 0x20U));
                    vlSelfRef.__Vfunc_sfp_div__200__b_ext[2U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__200__b_ext[3U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__200__result = 0ULL;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1105, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1105)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1107, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_1106, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1107);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1106[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1106[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1106[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1106[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1109, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1109)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1111, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_1110, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1111);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1110[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1110[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1110[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1110[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1113, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1113)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1115, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_1114, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1115);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1114[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1114[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1114[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1114[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1117, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1117)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1119, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_1118, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1119);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1118[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1118[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1118[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1118[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1121, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1121)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1123, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_1122, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1123);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1122[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1122[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1122[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1122[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1125, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1125)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1127, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_1126, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1127);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1126[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1126[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1126[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1126[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1129, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1129)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1131, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_1130, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1131);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1130[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1130[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1130[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1130[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1133, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1133)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1135, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_1134, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1135);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1134[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1134[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1134[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1134[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1137, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1137)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1139, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_1138, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1139);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1138[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1138[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1138[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1138[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1141, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1141)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1143, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_1142, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1143);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1142[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1142[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1142[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1142[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1145, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1145)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1147, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_1146, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1147);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1146[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1146[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1146[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1146[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1149, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1149)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1151, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_1150, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1151);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1150[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1150[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1150[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1150[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1153, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1153)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1155, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_1154, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1155);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1154[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1154[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1154[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1154[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1157, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1157)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1159, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_1158, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1159);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1158[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1158[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1158[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1158[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1161, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1161)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1163, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_1162, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1163);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1162[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1162[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1162[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1162[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1165, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1165)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1167, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_1166, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1167);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1166[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1166[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1166[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1166[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1169, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1169)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1171, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_1170, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1171);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1170[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1170[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1170[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1170[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1173, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1173)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1175, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_1174, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1175);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1174[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1174[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1174[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1174[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1177, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1177)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1179, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_1178, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1179);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1178[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1178[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1178[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1178[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1181, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1181)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1183, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_1182, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1183);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1182[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1182[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1182[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1182[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1185, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1185)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1187, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_1186, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1187);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1186[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1186[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1186[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1186[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1189, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1189)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1191, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_1190, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1191);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1190[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1190[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1190[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1190[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1193, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1193)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1195, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_1194, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1195);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1194[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1194[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1194[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1194[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1197, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1197)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1199, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_1198, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1199);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1198[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1198[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1198[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1198[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1201, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1201)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1203, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_1202, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1203);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1202[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1202[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1202[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1202[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1205, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1205)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1207, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_1206, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1207);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1206[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1206[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1206[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1206[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1209, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1209)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1211, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_1210, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1211);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1210[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1210[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1210[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1210[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1213, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1213)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1215, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_1214, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1215);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1214[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1214[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1214[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1214[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1217, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1217)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1219, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_1218, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1219);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1218[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1218[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1218[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1218[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1221, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1221)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1223, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_1222, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1223);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1222[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1222[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1222[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1222[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1225, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1225)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1227, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_1226, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1227);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1226[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1226[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1226[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1226[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1229, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1229)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1231, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_1230, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1231);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1230[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1230[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1230[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1230[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1233, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1233)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1235, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_1234, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1235);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1234[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1234[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1234[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1234[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1237, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1237)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1239, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_1238, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1239);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1238[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1238[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1238[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1238[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1241, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1241)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1243, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_1242, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1243);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1242[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1242[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1242[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1242[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1245, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1245)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1247, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_1246, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1247);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1246[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1246[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1246[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1246[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1249, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1249)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1251, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_1250, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1251);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1250[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1250[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1250[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1250[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1253, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1253)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1255, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_1254, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1255);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1254[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1254[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1254[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1254[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1257, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1257)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1259, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_1258, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1259);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1258[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1258[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1258[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1258[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1261, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1261)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1263, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_1262, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1263);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1262[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1262[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1262[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1262[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1265, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1265)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1267, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_1266, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1267);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1266[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1266[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1266[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1266[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1269, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1269)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1271, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_1270, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1271);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1270[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1270[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1270[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1270[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1273, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1273)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1275, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_1274, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1275);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1274[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1274[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1274[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1274[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1277, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1277)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1279, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_1278, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1279);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1278[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1278[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1278[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1278[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1281, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1281)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1283, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_1282, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1283);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1282[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1282[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1282[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1282[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1285, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1285)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1287, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_1286, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1287);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1286[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1286[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1286[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1286[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1289, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1289)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1291, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_1290, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1291);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1290[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1290[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1290[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1290[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1293, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1293)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1295, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_1294, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1295);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1294[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1294[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1294[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1294[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1297, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1297)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1299, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_1298, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1299);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1298[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1298[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1298[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1298[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1301, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1301)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1303, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_1302, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1303);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1302[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1302[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1302[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1302[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1305, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1305)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1307, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_1306, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1307);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1306[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1306[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1306[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1306[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1309, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1309)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1311, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_1310, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1311);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1310[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1310[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1310[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1310[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1313, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1313)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1315, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_1314, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1315);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1314[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1314[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1314[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1314[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1317, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1317)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1319, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_1318, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1319);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1318[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1318[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1318[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1318[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1321, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1321)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1323, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_1322, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1323);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1322[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1322[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1322[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1322[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1325, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1325)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1327, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_1326, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1327);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1326[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1326[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1326[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1326[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1329, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1329)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1331, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_1330, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1331);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1330[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1330[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1330[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1330[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1333, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1333)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1335, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_1334, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1335);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1334[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1334[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1334[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1334[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1337, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1337)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1339, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_1338, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1339);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1338[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1338[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1338[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1338[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1341, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1341)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1343, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_1342, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1343);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1342[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1342[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1342[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1342[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1345, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1345)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1347, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_1346, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1347);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1346[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1346[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1346[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1346[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1349, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1349)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1351, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_1350, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1351);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1350[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1350[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1350[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1350[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1353, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1353)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1355, vlSelfRef.__Vfunc_sfp_div__200__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_1354, vlSelfRef.__Vfunc_sfp_div__200__remainder, __Vtemp_1355);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1354[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1354[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1354[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1354[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__200__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__200__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__200__remainder, vlSelfRef.__Vfunc_sfp_div__200__b_ext)) {
                        VL_SUB_W(4, __Vtemp_1357, vlSelfRef.__Vfunc_sfp_div__200__remainder, vlSelfRef.__Vfunc_sfp_div__200__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[0U] 
                            = __Vtemp_1357[0U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[1U] 
                            = __Vtemp_1357[1U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[2U] 
                            = __Vtemp_1357[2U];
                        vlSelfRef.__Vfunc_sfp_div__200__remainder[3U] 
                            = __Vtemp_1357[3U];
                        vlSelfRef.__Vfunc_sfp_div__200__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__200__result);
                    }
                    __Vfunc_sfp_div__200__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__200__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__200__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__200__result)
                            : vlSelfRef.__Vfunc_sfp_div__200__result);
                    __Vlabel90: ;
                }
                vlSelfRef.__Vfunc_sfp_exp__199__term 
                    = vlSelfRef.__Vfunc_sfp_div__200__Vfuncout;
                vlSelfRef.__Vfunc_sfp_add__203__b = vlSelfRef.__Vfunc_sfp_exp__199__term;
                vlSelfRef.__Vfunc_sfp_add__203__a = vlSelfRef.__Vfunc_sfp_exp__199__result;
                vlSelfRef.__Vfunc_sfp_add__203__Vfuncout 
                    = (vlSelfRef.__Vfunc_sfp_add__203__a 
                       + vlSelfRef.__Vfunc_sfp_add__203__b);
                vlSelfRef.__Vfunc_sfp_exp__199__result 
                    = vlSelfRef.__Vfunc_sfp_add__203__Vfuncout;
                vlSelfRef.__Vfunc_sfp_exp__199__unnamedblk3__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_exp__199__unnamedblk3__DOT__i);
            }
            vlSelfRef.__Vfunc_sfp_exp__199__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_exp__199__result;
            vlSelfRef.__Vfunc_sfp_add__198__b = vlSelfRef.__Vfunc_sfp_exp__199__Vfuncout;
            vlSelfRef.__Vfunc_sfp_add__198__a = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_add__198__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_add__198__a 
                   + vlSelfRef.__Vfunc_sfp_add__198__b);
            vlSelfRef.__Vfunc_sfp_div__197__b = vlSelfRef.__Vfunc_sfp_add__198__Vfuncout;
            vlSelfRef.__Vfunc_int_to_sfp__204__n = 2U;
            vlSelfRef.__Vfunc_int_to_sfp__204__Vfuncout 
                = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__204__n), 0x20U);
            vlSelfRef.__Vfunc_sfp_div__197__a = vlSelfRef.__Vfunc_int_to_sfp__204__Vfuncout;
            __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0;
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__197__remainder);
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__197__b_ext);
            vlSelf->__Vfunc_sfp_div__197__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__197__sign_bit = VL_RAND_RESET_I(1);
            vlSelf->__Vfunc_sfp_div__197__abs_a = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__197__abs_b = VL_RAND_RESET_Q(64);
            {
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__197__b)) {
                    vlSelfRef.__Vfunc_sfp_div__197__Vfuncout 
                        = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__197__a)
                            ? 0x7fffffffffffffffULL
                            : 0x8000000000000000ULL);
                    goto __Vlabel91;
                }
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__197__a)) {
                    vlSelfRef.__Vfunc_sfp_div__197__Vfuncout = 0ULL;
                    goto __Vlabel91;
                }
                vlSelfRef.__Vfunc_sfp_div__197__abs_a 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__197__a 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__197__a)
                        : vlSelfRef.__Vfunc_sfp_div__197__a);
                vlSelfRef.__Vfunc_sfp_div__197__abs_b 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__197__b 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__197__b)
                        : vlSelfRef.__Vfunc_sfp_div__197__b);
                vlSelfRef.__Vfunc_sfp_div__197__sign_bit 
                    = (IData)(((vlSelfRef.__Vfunc_sfp_div__197__a 
                                ^ vlSelfRef.__Vfunc_sfp_div__197__b) 
                               >> 0x3fU));
                __Vtemp_1359[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__197__abs_a);
                __Vtemp_1359[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__197__abs_a 
                                            >> 0x20U));
                __Vtemp_1359[2U] = 0U;
                __Vtemp_1359[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1359, 0x20U);
                vlSelfRef.__Vfunc_sfp_div__197__b_ext[0U] 
                    = (IData)(vlSelfRef.__Vfunc_sfp_div__197__abs_b);
                vlSelfRef.__Vfunc_sfp_div__197__b_ext[1U] 
                    = (IData)((vlSelfRef.__Vfunc_sfp_div__197__abs_b 
                               >> 0x20U));
                vlSelfRef.__Vfunc_sfp_div__197__b_ext[2U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__197__b_ext[3U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__197__result = 0ULL;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1361, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1361)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1363, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_1362, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1363);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1362[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1362[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1362[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1362[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1365, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1365)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1367, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_1366, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1367);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1366[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1366[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1366[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1366[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1369, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1369)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1371, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_1370, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1371);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1370[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1370[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1370[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1370[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1373, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1373)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1375, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_1374, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1375);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1374[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1374[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1374[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1374[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1377, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1377)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1379, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_1378, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1379);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1378[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1378[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1378[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1378[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1381, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1381)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1383, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_1382, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1383);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1382[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1382[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1382[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1382[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1385, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1385)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1387, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_1386, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1387);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1386[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1386[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1386[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1386[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1389, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1389)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1391, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_1390, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1391);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1390[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1390[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1390[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1390[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1393, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1393)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1395, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_1394, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1395);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1394[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1394[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1394[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1394[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1397, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1397)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1399, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_1398, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1399);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1398[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1398[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1398[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1398[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1401, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1401)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1403, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_1402, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1403);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1402[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1402[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1402[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1402[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1405, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1405)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1407, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_1406, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1407);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1406[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1406[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1406[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1406[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1409, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1409)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1411, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_1410, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1411);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1410[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1410[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1410[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1410[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1413, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1413)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1415, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_1414, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1415);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1414[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1414[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1414[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1414[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1417, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1417)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1419, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_1418, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1419);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1418[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1418[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1418[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1418[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1421, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1421)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1423, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_1422, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1423);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1422[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1422[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1422[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1422[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1425, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1425)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1427, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_1426, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1427);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1426[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1426[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1426[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1426[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1429, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1429)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1431, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_1430, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1431);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1430[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1430[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1430[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1430[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1433, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1433)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1435, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_1434, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1435);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1434[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1434[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1434[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1434[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1437, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1437)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1439, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_1438, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1439);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1438[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1438[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1438[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1438[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1441, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1441)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1443, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_1442, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1443);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1442[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1442[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1442[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1442[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1445, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1445)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1447, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_1446, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1447);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1446[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1446[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1446[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1446[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1449, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1449)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1451, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_1450, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1451);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1450[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1450[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1450[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1450[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1453, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1453)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1455, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_1454, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1455);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1454[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1454[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1454[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1454[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1457, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1457)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1459, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_1458, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1459);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1458[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1458[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1458[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1458[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1461, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1461)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1463, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_1462, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1463);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1462[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1462[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1462[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1462[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1465, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1465)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1467, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_1466, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1467);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1466[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1466[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1466[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1466[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1469, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1469)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1471, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_1470, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1471);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1470[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1470[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1470[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1470[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1473, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1473)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1475, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_1474, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1475);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1474[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1474[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1474[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1474[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1477, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1477)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1479, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_1478, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1479);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1478[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1478[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1478[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1478[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1481, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1481)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1483, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_1482, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1483);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1482[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1482[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1482[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1482[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1485, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1485)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1487, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_1486, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1487);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1486[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1486[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1486[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1486[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1489, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1489)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1491, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_1490, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1491);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1490[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1490[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1490[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1490[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1493, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1493)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1495, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_1494, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1495);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1494[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1494[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1494[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1494[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1497, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1497)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1499, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_1498, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1499);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1498[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1498[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1498[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1498[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1501, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1501)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1503, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_1502, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1503);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1502[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1502[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1502[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1502[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1505, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1505)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1507, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_1506, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1507);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1506[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1506[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1506[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1506[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1509, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1509)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1511, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_1510, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1511);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1510[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1510[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1510[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1510[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1513, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1513)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1515, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_1514, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1515);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1514[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1514[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1514[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1514[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1517, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1517)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1519, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_1518, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1519);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1518[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1518[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1518[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1518[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1521, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1521)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1523, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_1522, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1523);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1522[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1522[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1522[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1522[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1525, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1525)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1527, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_1526, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1527);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1526[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1526[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1526[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1526[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1529, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1529)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1531, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_1530, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1531);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1530[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1530[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1530[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1530[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1533, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1533)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1535, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_1534, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1535);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1534[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1534[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1534[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1534[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1537, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1537)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1539, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_1538, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1539);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1538[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1538[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1538[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1538[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1541, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1541)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1543, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_1542, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1543);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1542[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1542[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1542[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1542[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1545, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1545)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1547, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_1546, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1547);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1546[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1546[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1546[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1546[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1549, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1549)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1551, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_1550, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1551);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1550[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1550[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1550[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1550[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1553, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1553)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1555, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_1554, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1555);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1554[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1554[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1554[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1554[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1557, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1557)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1559, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_1558, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1559);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1558[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1558[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1558[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1558[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1561, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1561)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1563, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_1562, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1563);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1562[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1562[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1562[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1562[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1565, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1565)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1567, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_1566, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1567);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1566[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1566[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1566[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1566[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1569, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1569)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1571, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_1570, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1571);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1570[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1570[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1570[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1570[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1573, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1573)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1575, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_1574, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1575);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1574[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1574[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1574[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1574[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1577, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1577)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1579, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_1578, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1579);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1578[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1578[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1578[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1578[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1581, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1581)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1583, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_1582, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1583);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1582[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1582[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1582[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1582[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1585, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1585)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1587, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_1586, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1587);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1586[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1586[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1586[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1586[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1589, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1589)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1591, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_1590, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1591);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1590[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1590[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1590[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1590[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1593, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1593)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1595, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_1594, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1595);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1594[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1594[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1594[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1594[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1597, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1597)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1599, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_1598, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1599);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1598[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1598[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1598[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1598[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1601, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1601)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1603, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_1602, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1603);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1602[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1602[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1602[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1602[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1605, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1605)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1607, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_1606, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1607);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1606[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1606[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1606[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1606[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1609, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1609)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1611, vlSelfRef.__Vfunc_sfp_div__197__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_1610, vlSelfRef.__Vfunc_sfp_div__197__remainder, __Vtemp_1611);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1610[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1610[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1610[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1610[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__197__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__197__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__197__remainder, vlSelfRef.__Vfunc_sfp_div__197__b_ext)) {
                    VL_SUB_W(4, __Vtemp_1613, vlSelfRef.__Vfunc_sfp_div__197__remainder, vlSelfRef.__Vfunc_sfp_div__197__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[0U] 
                        = __Vtemp_1613[0U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[1U] 
                        = __Vtemp_1613[1U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[2U] 
                        = __Vtemp_1613[2U];
                    vlSelfRef.__Vfunc_sfp_div__197__remainder[3U] 
                        = __Vtemp_1613[3U];
                    vlSelfRef.__Vfunc_sfp_div__197__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__197__result);
                }
                __Vfunc_sfp_div__197__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_sfp_div__197__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_sfp_div__197__sign_bit)
                        ? (- vlSelfRef.__Vfunc_sfp_div__197__result)
                        : vlSelfRef.__Vfunc_sfp_div__197__result);
                __Vlabel91: ;
            }
            vlSelfRef.__Vfunc_sfp_sub__196__a = vlSelfRef.__Vfunc_sfp_div__197__Vfuncout;
            vlSelfRef.__Vfunc_sfp_sub__196__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_sub__196__a 
                   - vlSelfRef.__Vfunc_sfp_sub__196__b);
            vlSelfRef.__Vfunc_sfp_tanh__193__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_sub__196__Vfuncout;
            __Vlabel89: ;
        }
        vlSelfRef.__Vfunc_sfp_pow__192__a = vlSelfRef.__Vfunc_sfp_tanh__193__Vfuncout;
        vlSelfRef.__Vfunc_sfp_pow__192__result = 1ULL;
        vlSelfRef.__Vfunc_sfp_pow__192__unnamedblk2__DOT__i = 1U;
        while (VL_LTES_III(32, vlSelfRef.__Vfunc_sfp_pow__192__unnamedblk2__DOT__i, vlSelfRef.__Vfunc_sfp_pow__192__b)) {
            vlSelfRef.__Vfunc_sfp_mul__205__b = vlSelfRef.__Vfunc_sfp_pow__192__a;
            vlSelfRef.__Vfunc_sfp_mul__205__a = vlSelfRef.__Vfunc_sfp_pow__192__result;
            VL_EXTENDS_WQ(128,64, __Vtemp_1614, vlSelfRef.__Vfunc_sfp_mul__205__a);
            VL_EXTENDS_WQ(128,64, __Vtemp_1615, vlSelfRef.__Vfunc_sfp_mul__205__b);
            VL_MULS_WWW(128, __Vtemp_1616, __Vtemp_1614, __Vtemp_1615);
            VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__205__tmp, __Vtemp_1616, 0x20U);
            vlSelfRef.__Vfunc_sfp_mul__205__Vfuncout 
                = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__205__tmp[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__205__tmp[0U])));
            vlSelfRef.__Vfunc_sfp_pow__192__result 
                = vlSelfRef.__Vfunc_sfp_mul__205__Vfuncout;
            vlSelfRef.__Vfunc_sfp_pow__192__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_pow__192__unnamedblk2__DOT__i);
        }
        vlSelfRef.__Vfunc_sfp_pow__192__Vfuncout = vlSelfRef.__Vfunc_sfp_pow__192__result;
        vlSelfRef.__Vfunc_sfp_sub__191__b = vlSelfRef.__Vfunc_sfp_pow__192__Vfuncout;
        vlSelfRef.__Vfunc_sfp_sub__191__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.__Vfunc_sfp_sub__191__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__191__a - vlSelfRef.__Vfunc_sfp_sub__191__b);
        vlSelfRef.__Vfunc_sfp_mul__190__b = vlSelfRef.__Vfunc_sfp_sub__191__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__190__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1618, vlSelfRef.__Vfunc_sfp_mul__190__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1619, vlSelfRef.__Vfunc_sfp_mul__190__b);
        VL_MULS_WWW(128, __Vtemp_1620, __Vtemp_1618, __Vtemp_1619);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__190__tmp, __Vtemp_1620, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__190__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__190__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__190__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__189__b = vlSelfRef.__Vfunc_sfp_mul__190__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__189__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1621, vlSelfRef.__Vfunc_sfp_mul__189__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1622, vlSelfRef.__Vfunc_sfp_mul__189__b);
        VL_MULS_WWW(128, __Vtemp_1623, __Vtemp_1621, __Vtemp_1622);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__189__tmp, __Vtemp_1623, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__189__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__189__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__189__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__188__b = vlSelfRef.__Vfunc_sfp_mul__189__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__188__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__188__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__188__a + vlSelfRef.__Vfunc_sfp_add__188__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__188__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 1U;
    } else if ((3U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_mul__207__b = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum)
                                              ? vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                                             [0U] : 0ULL);
        vlSelfRef.__Vfunc_sfp_mul__207__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1624, vlSelfRef.__Vfunc_sfp_mul__207__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1625, vlSelfRef.__Vfunc_sfp_mul__207__b);
        VL_MULS_WWW(128, __Vtemp_1626, __Vtemp_1624, __Vtemp_1625);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__207__tmp, __Vtemp_1626, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__207__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__207__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__207__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__206__b = vlSelfRef.__Vfunc_sfp_mul__207__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__206__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__206__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__206__a + vlSelfRef.__Vfunc_sfp_add__206__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__206__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 1U;
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    }
    __Vfunc_sfp_mul__208__b = vlSelfRef.BenchMLP__DOT__values
        [0U];
    __Vfunc_sfp_mul__208__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1627, __Vfunc_sfp_mul__208__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1628, __Vfunc_sfp_mul__208__b);
    VL_MULS_WWW(128, __Vtemp_1629, __Vtemp_1627, __Vtemp_1628);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__208__tmp, __Vtemp_1629, 0x20U);
    __Vfunc_sfp_mul__208__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__208__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__208__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__208__Vfuncout;
    __Vfunc_sfp_mul__208__b = vlSelfRef.BenchMLP__DOT__values
        [1U];
    __Vfunc_sfp_mul__208__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1630, __Vfunc_sfp_mul__208__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1631, __Vfunc_sfp_mul__208__b);
    VL_MULS_WWW(128, __Vtemp_1632, __Vtemp_1630, __Vtemp_1631);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__208__tmp, __Vtemp_1632, 0x20U);
    __Vfunc_sfp_mul__208__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__208__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__208__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__208__Vfuncout;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i = 2U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
        [0U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient = 0ULL;
    if ((1U == vlSelfRef.BenchMLP__DOT__output_activation)) {
        vlSelfRef.__Vfunc_sfp_sub__245__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__prediction;
        vlSelfRef.__Vfunc_sfp_sub__245__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.__Vfunc_sfp_sub__245__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__245__a - vlSelfRef.__Vfunc_sfp_sub__245__b);
        vlSelfRef.__Vfunc_sfp_mul__244__b = vlSelfRef.__Vfunc_sfp_sub__245__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__244__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__prediction;
        VL_EXTENDS_WQ(128,64, __Vtemp_1633, vlSelfRef.__Vfunc_sfp_mul__244__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1634, vlSelfRef.__Vfunc_sfp_mul__244__b);
        VL_MULS_WWW(128, __Vtemp_1635, __Vtemp_1633, __Vtemp_1634);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__244__tmp, __Vtemp_1635, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__244__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__244__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__244__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__243__b = vlSelfRef.__Vfunc_sfp_mul__244__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__243__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1636, vlSelfRef.__Vfunc_sfp_mul__243__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1637, vlSelfRef.__Vfunc_sfp_mul__243__b);
        VL_MULS_WWW(128, __Vtemp_1638, __Vtemp_1636, __Vtemp_1637);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__243__tmp, __Vtemp_1638, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__243__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__243__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__243__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__242__b = vlSelfRef.__Vfunc_sfp_mul__243__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__242__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1639, vlSelfRef.__Vfunc_sfp_mul__242__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1640, vlSelfRef.__Vfunc_sfp_mul__242__b);
        VL_MULS_WWW(128, __Vtemp_1641, __Vtemp_1639, __Vtemp_1640);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__242__tmp, __Vtemp_1641, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__242__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__242__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__242__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__241__b = vlSelfRef.__Vfunc_sfp_mul__242__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__241__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__241__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__241__a + vlSelfRef.__Vfunc_sfp_add__241__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__241__Vfuncout;
    } else if ((2U == vlSelfRef.BenchMLP__DOT__output_activation)) {
        vlSelfRef.__Vfunc_sfp_pow__250__b = 2U;
        vlSelfRef.__Vfunc_sfp_tanh__251__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__prediction;
        {
            if (VL_GTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__251__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__252__n = 7U;
                            vlSelfRef.__Vfunc_int_to_sfp__252__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__252__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__252__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__251__Vfuncout 
                    = vlSymsp->TOP__FixedPoint.ONE;
                goto __Vlabel92;
            }
            if (VL_LTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__251__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__253__n = 0xfffffff9U;
                            vlSelfRef.__Vfunc_int_to_sfp__253__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__253__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__253__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__251__Vfuncout 
                    = (- vlSymsp->TOP__FixedPoint.ONE);
                goto __Vlabel92;
            }
            vlSelfRef.__Vfunc_sfp_sub__254__b = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__257__a = VL_SHIFTL_QQI(64,64,32, 
                                                              (- vlSelfRef.__Vfunc_sfp_tanh__251__a), 1U);
            vlSelf->__Vfunc_sfp_exp__257__unnamedblk3__DOT__i = 0;
            vlSelf->__Vfunc_sfp_exp__257__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_exp__257__term = VL_RAND_RESET_Q(64);
            vlSelfRef.__Vfunc_sfp_exp__257__result 
                = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__257__term = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__257__unnamedblk3__DOT__i = 1U;
            while (VL_GTS_III(32, 0x32U, vlSelfRef.__Vfunc_sfp_exp__257__unnamedblk3__DOT__i)) {
                vlSelfRef.__Vfunc_int_to_sfp__259__n 
                    = vlSelfRef.__Vfunc_sfp_exp__257__unnamedblk3__DOT__i;
                vlSelfRef.__Vfunc_int_to_sfp__259__Vfuncout 
                    = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__259__n), 0x20U);
                vlSelfRef.__Vfunc_sfp_div__258__b = vlSelfRef.__Vfunc_int_to_sfp__259__Vfuncout;
                vlSelfRef.__Vfunc_sfp_mul__260__b = vlSelfRef.__Vfunc_sfp_exp__257__a;
                vlSelfRef.__Vfunc_sfp_mul__260__a = vlSelfRef.__Vfunc_sfp_exp__257__term;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__260__tmp);
                VL_EXTENDS_WQ(128,64, __Vtemp_1642, vlSelfRef.__Vfunc_sfp_mul__260__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_1643, vlSelfRef.__Vfunc_sfp_mul__260__b);
                VL_MULS_WWW(128, __Vtemp_1644, __Vtemp_1642, __Vtemp_1643);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__260__tmp, __Vtemp_1644, 0x20U);
                vlSelfRef.__Vfunc_sfp_mul__260__Vfuncout 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__260__tmp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__Vfunc_sfp_mul__260__tmp[0U])));
                vlSelfRef.__Vfunc_sfp_div__258__a = vlSelfRef.__Vfunc_sfp_mul__260__Vfuncout;
                __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__258__remainder);
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__258__b_ext);
                vlSelf->__Vfunc_sfp_div__258__result = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__258__sign_bit = VL_RAND_RESET_I(1);
                vlSelf->__Vfunc_sfp_div__258__abs_a = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__258__abs_b = VL_RAND_RESET_Q(64);
                {
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__258__b)) {
                        vlSelfRef.__Vfunc_sfp_div__258__Vfuncout 
                            = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__258__a)
                                ? 0x7fffffffffffffffULL
                                : 0x8000000000000000ULL);
                        goto __Vlabel93;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__258__a)) {
                        vlSelfRef.__Vfunc_sfp_div__258__Vfuncout = 0ULL;
                        goto __Vlabel93;
                    }
                    vlSelfRef.__Vfunc_sfp_div__258__abs_a 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__258__a 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__258__a)
                            : vlSelfRef.__Vfunc_sfp_div__258__a);
                    vlSelfRef.__Vfunc_sfp_div__258__abs_b 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__258__b 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__258__b)
                            : vlSelfRef.__Vfunc_sfp_div__258__b);
                    vlSelfRef.__Vfunc_sfp_div__258__sign_bit 
                        = (IData)(((vlSelfRef.__Vfunc_sfp_div__258__a 
                                    ^ vlSelfRef.__Vfunc_sfp_div__258__b) 
                                   >> 0x3fU));
                    __Vtemp_1645[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__258__abs_a);
                    __Vtemp_1645[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__258__abs_a 
                                                >> 0x20U));
                    __Vtemp_1645[2U] = 0U;
                    __Vtemp_1645[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1645, 0x20U);
                    vlSelfRef.__Vfunc_sfp_div__258__b_ext[0U] 
                        = (IData)(vlSelfRef.__Vfunc_sfp_div__258__abs_b);
                    vlSelfRef.__Vfunc_sfp_div__258__b_ext[1U] 
                        = (IData)((vlSelfRef.__Vfunc_sfp_div__258__abs_b 
                                   >> 0x20U));
                    vlSelfRef.__Vfunc_sfp_div__258__b_ext[2U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__258__b_ext[3U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__258__result = 0ULL;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1647, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1647)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1649, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_1648, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1649);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1648[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1648[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1648[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1648[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1651, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1651)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1653, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_1652, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1653);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1652[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1652[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1652[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1652[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1655, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1655)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1657, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_1656, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1657);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1656[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1656[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1656[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1656[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1659, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1659)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1661, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_1660, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1661);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1660[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1660[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1660[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1660[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1663, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1663)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1665, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_1664, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1665);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1664[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1664[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1664[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1664[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1667, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1667)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1669, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_1668, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1669);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1668[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1668[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1668[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1668[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1671, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1671)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1673, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_1672, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1673);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1672[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1672[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1672[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1672[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1675, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1675)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1677, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_1676, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1677);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1676[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1676[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1676[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1676[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1679, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1679)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1681, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_1680, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1681);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1680[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1680[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1680[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1680[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1683, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1683)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1685, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_1684, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1685);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1684[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1684[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1684[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1684[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1687, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1687)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1689, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_1688, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1689);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1688[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1688[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1688[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1688[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1691, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1691)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1693, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_1692, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1693);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1692[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1692[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1692[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1692[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1695, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1695)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1697, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_1696, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1697);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1696[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1696[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1696[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1696[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1699, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1699)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1701, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_1700, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1701);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1700[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1700[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1700[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1700[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1703, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1703)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1705, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_1704, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1705);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1704[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1704[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1704[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1704[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1707, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1707)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1709, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_1708, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1709);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1708[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1708[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1708[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1708[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1711, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1711)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1713, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_1712, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1713);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1712[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1712[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1712[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1712[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1715, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1715)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1717, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_1716, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1717);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1716[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1716[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1716[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1716[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1719, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1719)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1721, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_1720, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1721);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1720[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1720[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1720[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1720[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1723, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1723)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1725, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_1724, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1725);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1724[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1724[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1724[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1724[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1727, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1727)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1729, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_1728, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1729);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1728[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1728[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1728[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1728[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1731, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1731)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1733, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_1732, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1733);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1732[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1732[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1732[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1732[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1735, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1735)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1737, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_1736, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1737);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1736[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1736[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1736[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1736[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1739, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1739)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1741, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_1740, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1741);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1740[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1740[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1740[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1740[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1743, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1743)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1745, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_1744, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1745);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1744[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1744[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1744[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1744[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1747, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1747)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1749, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_1748, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1749);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1748[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1748[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1748[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1748[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1751, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1751)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1753, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_1752, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1753);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1752[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1752[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1752[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1752[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1755, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1755)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1757, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_1756, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1757);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1756[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1756[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1756[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1756[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1759, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1759)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1761, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_1760, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1761);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1760[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1760[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1760[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1760[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1763, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1763)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1765, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_1764, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1765);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1764[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1764[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1764[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1764[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1767, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1767)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1769, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_1768, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1769);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1768[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1768[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1768[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1768[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1771, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1771)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1773, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_1772, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1773);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1772[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1772[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1772[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1772[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1775, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1775)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1777, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_1776, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1777);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1776[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1776[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1776[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1776[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1779, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1779)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1781, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_1780, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1781);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1780[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1780[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1780[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1780[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1783, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1783)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1785, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_1784, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1785);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1784[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1784[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1784[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1784[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1787, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1787)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1789, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_1788, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1789);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1788[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1788[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1788[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1788[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1791, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1791)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1793, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_1792, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1793);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1792[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1792[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1792[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1792[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1795, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1795)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1797, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_1796, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1797);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1796[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1796[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1796[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1796[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1799, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1799)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1801, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_1800, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1801);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1800[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1800[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1800[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1800[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1803, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1803)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1805, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_1804, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1805);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1804[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1804[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1804[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1804[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1807, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1807)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1809, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_1808, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1809);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1808[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1808[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1808[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1808[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1811, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1811)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1813, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_1812, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1813);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1812[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1812[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1812[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1812[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1815, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1815)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1817, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_1816, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1817);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1816[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1816[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1816[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1816[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1819, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1819)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1821, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_1820, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1821);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1820[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1820[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1820[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1820[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1823, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1823)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1825, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_1824, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1825);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1824[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1824[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1824[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1824[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1827, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1827)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1829, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_1828, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1829);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1828[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1828[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1828[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1828[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1831, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1831)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1833, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_1832, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1833);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1832[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1832[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1832[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1832[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1835, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1835)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1837, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_1836, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1837);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1836[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1836[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1836[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1836[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1839, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1839)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1841, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_1840, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1841);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1840[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1840[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1840[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1840[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1843, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1843)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1845, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_1844, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1845);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1844[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1844[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1844[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1844[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1847, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1847)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1849, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_1848, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1849);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1848[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1848[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1848[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1848[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1851, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1851)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1853, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_1852, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1853);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1852[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1852[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1852[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1852[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1855, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1855)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1857, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_1856, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1857);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1856[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1856[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1856[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1856[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1859, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1859)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1861, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_1860, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1861);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1860[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1860[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1860[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1860[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1863, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1863)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1865, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_1864, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1865);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1864[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1864[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1864[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1864[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1867, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1867)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1869, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_1868, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1869);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1868[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1868[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1868[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1868[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1871, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1871)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1873, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_1872, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1873);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1872[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1872[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1872[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1872[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1875, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1875)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1877, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_1876, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1877);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1876[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1876[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1876[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1876[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1879, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1879)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1881, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_1880, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1881);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1880[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1880[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1880[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1880[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1883, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1883)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1885, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_1884, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1885);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1884[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1884[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1884[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1884[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1887, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1887)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1889, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_1888, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1889);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1888[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1888[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1888[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1888[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1891, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1891)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1893, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_1892, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1893);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1892[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1892[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1892[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1892[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1895, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1895)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1897, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_1896, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_1897);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1896[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1896[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1896[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1896[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, vlSelfRef.__Vfunc_sfp_div__258__b_ext)) {
                        VL_SUB_W(4, __Vtemp_1899, vlSelfRef.__Vfunc_sfp_div__258__remainder, vlSelfRef.__Vfunc_sfp_div__258__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_1899[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_1899[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_1899[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_1899[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__258__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__258__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__258__result)
                            : vlSelfRef.__Vfunc_sfp_div__258__result);
                    __Vlabel93: ;
                }
                vlSelfRef.__Vfunc_sfp_exp__257__term 
                    = vlSelfRef.__Vfunc_sfp_div__258__Vfuncout;
                vlSelfRef.__Vfunc_sfp_add__261__b = vlSelfRef.__Vfunc_sfp_exp__257__term;
                vlSelfRef.__Vfunc_sfp_add__261__a = vlSelfRef.__Vfunc_sfp_exp__257__result;
                vlSelfRef.__Vfunc_sfp_add__261__Vfuncout 
                    = (vlSelfRef.__Vfunc_sfp_add__261__a 
                       + vlSelfRef.__Vfunc_sfp_add__261__b);
                vlSelfRef.__Vfunc_sfp_exp__257__result 
                    = vlSelfRef.__Vfunc_sfp_add__261__Vfuncout;
                vlSelfRef.__Vfunc_sfp_exp__257__unnamedblk3__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_exp__257__unnamedblk3__DOT__i);
            }
            vlSelfRef.__Vfunc_sfp_exp__257__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_exp__257__result;
            vlSelfRef.__Vfunc_sfp_add__256__b = vlSelfRef.__Vfunc_sfp_exp__257__Vfuncout;
            vlSelfRef.__Vfunc_sfp_add__256__a = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_add__256__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_add__256__a 
                   + vlSelfRef.__Vfunc_sfp_add__256__b);
            vlSelfRef.__Vfunc_sfp_div__255__b = vlSelfRef.__Vfunc_sfp_add__256__Vfuncout;
            vlSelfRef.__Vfunc_int_to_sfp__262__n = 2U;
            vlSelfRef.__Vfunc_int_to_sfp__262__Vfuncout 
                = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__262__n), 0x20U);
            vlSelfRef.__Vfunc_sfp_div__255__a = vlSelfRef.__Vfunc_int_to_sfp__262__Vfuncout;
            __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0;
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__255__remainder);
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__255__b_ext);
            vlSelf->__Vfunc_sfp_div__255__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__255__sign_bit = VL_RAND_RESET_I(1);
            vlSelf->__Vfunc_sfp_div__255__abs_a = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__255__abs_b = VL_RAND_RESET_Q(64);
            {
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__255__b)) {
                    vlSelfRef.__Vfunc_sfp_div__255__Vfuncout 
                        = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__255__a)
                            ? 0x7fffffffffffffffULL
                            : 0x8000000000000000ULL);
                    goto __Vlabel94;
                }
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__255__a)) {
                    vlSelfRef.__Vfunc_sfp_div__255__Vfuncout = 0ULL;
                    goto __Vlabel94;
                }
                vlSelfRef.__Vfunc_sfp_div__255__abs_a 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__255__a 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__255__a)
                        : vlSelfRef.__Vfunc_sfp_div__255__a);
                vlSelfRef.__Vfunc_sfp_div__255__abs_b 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__255__b 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__255__b)
                        : vlSelfRef.__Vfunc_sfp_div__255__b);
                vlSelfRef.__Vfunc_sfp_div__255__sign_bit 
                    = (IData)(((vlSelfRef.__Vfunc_sfp_div__255__a 
                                ^ vlSelfRef.__Vfunc_sfp_div__255__b) 
                               >> 0x3fU));
                __Vtemp_1901[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__255__abs_a);
                __Vtemp_1901[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__255__abs_a 
                                            >> 0x20U));
                __Vtemp_1901[2U] = 0U;
                __Vtemp_1901[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1901, 0x20U);
                vlSelfRef.__Vfunc_sfp_div__255__b_ext[0U] 
                    = (IData)(vlSelfRef.__Vfunc_sfp_div__255__abs_b);
                vlSelfRef.__Vfunc_sfp_div__255__b_ext[1U] 
                    = (IData)((vlSelfRef.__Vfunc_sfp_div__255__abs_b 
                               >> 0x20U));
                vlSelfRef.__Vfunc_sfp_div__255__b_ext[2U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__255__b_ext[3U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__255__result = 0ULL;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1903, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1903)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1905, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_1904, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1905);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1904[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1904[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1904[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1904[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1907, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1907)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1909, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_1908, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1909);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1908[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1908[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1908[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1908[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1911, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1911)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1913, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_1912, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1913);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1912[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1912[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1912[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1912[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1915, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1915)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1917, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_1916, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1917);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1916[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1916[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1916[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1916[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1919, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1919)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1921, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_1920, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1921);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1920[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1920[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1920[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1920[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1923, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1923)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1925, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_1924, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1925);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1924[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1924[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1924[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1924[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1927, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1927)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1929, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_1928, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1929);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1928[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1928[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1928[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1928[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1931, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1931)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1933, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_1932, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1933);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1932[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1932[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1932[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1932[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1935, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1935)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1937, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_1936, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1937);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1936[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1936[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1936[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1936[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1939, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1939)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1941, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_1940, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1941);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1940[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1940[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1940[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1940[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1943, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1943)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1945, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_1944, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1945);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1944[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1944[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1944[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1944[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1947, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1947)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1949, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_1948, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1949);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1948[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1948[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1948[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1948[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1951, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1951)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1953, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_1952, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1953);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1952[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1952[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1952[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1952[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1955, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1955)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1957, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_1956, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1957);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1956[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1956[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1956[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1956[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1959, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1959)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1961, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_1960, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1961);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1960[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1960[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1960[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1960[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1963, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1963)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1965, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_1964, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1965);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1964[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1964[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1964[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1964[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1967, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1967)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1969, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_1968, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1969);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1968[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1968[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1968[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1968[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1971, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1971)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1973, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_1972, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1973);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1972[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1972[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1972[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1972[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1975, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1975)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1977, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_1976, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1977);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1976[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1976[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1976[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1976[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1979, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1979)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1981, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_1980, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1981);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1980[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1980[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1980[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1980[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1983, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1983)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1985, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_1984, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1985);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1984[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1984[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1984[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1984[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1987, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1987)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1989, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_1988, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1989);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1988[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1988[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1988[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1988[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1991, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1991)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1993, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_1992, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1993);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1992[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1992[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1992[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1992[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1995, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1995)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1997, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_1996, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1997);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_1996[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_1996[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_1996[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_1996[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1999, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_1999)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2001, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_2000, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2001);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2000[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2000[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2000[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2000[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2003, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2003)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2005, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_2004, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2005);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2004[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2004[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2004[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2004[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2007, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2007)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2009, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_2008, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2009);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2008[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2008[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2008[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2008[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2011, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2011)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2013, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_2012, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2013);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2012[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2012[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2012[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2012[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2015, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2015)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2017, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_2016, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2017);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2016[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2016[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2016[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2016[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2019, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2019)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2021, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_2020, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2021);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2020[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2020[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2020[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2020[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2023, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2023)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2025, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_2024, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2025);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2024[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2024[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2024[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2024[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2027, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2027)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2029, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_2028, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2029);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2028[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2028[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2028[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2028[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2031, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2031)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2033, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_2032, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2033);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2032[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2032[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2032[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2032[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2035, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2035)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2037, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_2036, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2037);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2036[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2036[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2036[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2036[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2039, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2039)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2041, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_2040, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2041);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2040[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2040[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2040[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2040[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2043, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2043)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2045, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_2044, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2045);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2044[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2044[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2044[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2044[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2047, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2047)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2049, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_2048, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2049);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2048[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2048[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2048[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2048[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2051, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2051)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2053, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_2052, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2053);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2052[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2052[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2052[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2052[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2055, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2055)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2057, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_2056, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2057);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2056[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2056[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2056[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2056[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2059, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2059)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2061, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_2060, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2061);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2060[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2060[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2060[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2060[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2063, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2063)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2065, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_2064, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2065);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2064[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2064[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2064[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2064[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2067, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2067)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2069, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_2068, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2069);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2068[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2068[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2068[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2068[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2071, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2071)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2073, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_2072, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2073);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2072[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2072[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2072[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2072[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2075, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2075)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2077, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_2076, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2077);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2076[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2076[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2076[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2076[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2079, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2079)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2081, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_2080, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2081);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2080[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2080[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2080[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2080[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2083, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2083)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2085, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_2084, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2085);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2084[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2084[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2084[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2084[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2087, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2087)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2089, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_2088, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2089);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2088[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2088[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2088[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2088[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2091, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2091)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2093, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_2092, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2093);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2092[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2092[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2092[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2092[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2095, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2095)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2097, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_2096, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2097);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2096[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2096[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2096[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2096[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2099, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2099)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2101, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_2100, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2101);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2100[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2100[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2100[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2100[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2103, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2103)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2105, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_2104, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2105);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2104[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2104[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2104[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2104[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2107, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2107)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2109, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_2108, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2109);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2108[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2108[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2108[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2108[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2111, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2111)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2113, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_2112, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2113);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2112[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2112[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2112[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2112[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2115, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2115)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2117, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_2116, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2117);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2116[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2116[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2116[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2116[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2119, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2119)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2121, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_2120, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2121);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2120[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2120[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2120[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2120[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2123, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2123)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2125, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_2124, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2125);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2124[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2124[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2124[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2124[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2127, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2127)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2129, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_2128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2129);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2128[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2128[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2128[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2128[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2131, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2131)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2133, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_2132, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2133);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2132[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2132[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2132[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2132[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2135, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2135)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2137, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_2136, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2137);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2136[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2136[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2136[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2136[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2139, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2139)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2141, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_2140, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2141);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2140[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2140[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2140[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2140[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2143, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2143)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2145, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_2144, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2145);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2144[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2144[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2144[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2144[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2147, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2147)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2149, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_2148, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2149);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2148[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2148[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2148[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2148[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2151, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2151)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2153, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_2152, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_2153);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2152[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2152[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2152[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2152[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, vlSelfRef.__Vfunc_sfp_div__255__b_ext)) {
                    VL_SUB_W(4, __Vtemp_2155, vlSelfRef.__Vfunc_sfp_div__255__remainder, vlSelfRef.__Vfunc_sfp_div__255__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_2155[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_2155[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_2155[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_2155[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_sfp_div__255__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_sfp_div__255__sign_bit)
                        ? (- vlSelfRef.__Vfunc_sfp_div__255__result)
                        : vlSelfRef.__Vfunc_sfp_div__255__result);
                __Vlabel94: ;
            }
            vlSelfRef.__Vfunc_sfp_sub__254__a = vlSelfRef.__Vfunc_sfp_div__255__Vfuncout;
            vlSelfRef.__Vfunc_sfp_sub__254__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_sub__254__a 
                   - vlSelfRef.__Vfunc_sfp_sub__254__b);
            vlSelfRef.__Vfunc_sfp_tanh__251__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_sub__254__Vfuncout;
            __Vlabel92: ;
        }
        vlSelfRef.__Vfunc_sfp_pow__250__a = vlSelfRef.__Vfunc_sfp_tanh__251__Vfuncout;
        vlSelfRef.__Vfunc_sfp_pow__250__result = 1ULL;
        vlSelfRef.__Vfunc_sfp_pow__250__unnamedblk2__DOT__i = 1U;
        while (VL_LTES_III(32, vlSelfRef.__Vfunc_sfp_pow__250__unnamedblk2__DOT__i, vlSelfRef.__Vfunc_sfp_pow__250__b)) {
            vlSelfRef.__Vfunc_sfp_mul__263__b = vlSelfRef.__Vfunc_sfp_pow__250__a;
            vlSelfRef.__Vfunc_sfp_mul__263__a = vlSelfRef.__Vfunc_sfp_pow__250__result;
            VL_EXTENDS_WQ(128,64, __Vtemp_2156, vlSelfRef.__Vfunc_sfp_mul__263__a);
            VL_EXTENDS_WQ(128,64, __Vtemp_2157, vlSelfRef.__Vfunc_sfp_mul__263__b);
            VL_MULS_WWW(128, __Vtemp_2158, __Vtemp_2156, __Vtemp_2157);
            VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__263__tmp, __Vtemp_2158, 0x20U);
            vlSelfRef.__Vfunc_sfp_mul__263__Vfuncout 
                = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__263__tmp[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__263__tmp[0U])));
            vlSelfRef.__Vfunc_sfp_pow__250__result 
                = vlSelfRef.__Vfunc_sfp_mul__263__Vfuncout;
            vlSelfRef.__Vfunc_sfp_pow__250__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_pow__250__unnamedblk2__DOT__i);
        }
        vlSelfRef.__Vfunc_sfp_pow__250__Vfuncout = vlSelfRef.__Vfunc_sfp_pow__250__result;
        vlSelfRef.__Vfunc_sfp_sub__249__b = vlSelfRef.__Vfunc_sfp_pow__250__Vfuncout;
        vlSelfRef.__Vfunc_sfp_sub__249__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.__Vfunc_sfp_sub__249__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__249__a - vlSelfRef.__Vfunc_sfp_sub__249__b);
        vlSelfRef.__Vfunc_sfp_mul__248__b = vlSelfRef.__Vfunc_sfp_sub__249__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__248__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_2160, vlSelfRef.__Vfunc_sfp_mul__248__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_2161, vlSelfRef.__Vfunc_sfp_mul__248__b);
        VL_MULS_WWW(128, __Vtemp_2162, __Vtemp_2160, __Vtemp_2161);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__248__tmp, __Vtemp_2162, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__248__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__248__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__248__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__247__b = vlSelfRef.__Vfunc_sfp_mul__248__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__247__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_2163, vlSelfRef.__Vfunc_sfp_mul__247__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_2164, vlSelfRef.__Vfunc_sfp_mul__247__b);
        VL_MULS_WWW(128, __Vtemp_2165, __Vtemp_2163, __Vtemp_2164);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__247__tmp, __Vtemp_2165, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__247__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__247__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__247__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__246__b = vlSelfRef.__Vfunc_sfp_mul__247__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__246__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__246__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__246__a + vlSelfRef.__Vfunc_sfp_add__246__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__246__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk4__DOT__i = 1U;
    } else if ((3U == vlSelfRef.BenchMLP__DOT__output_activation)) {
        vlSelfRef.__Vfunc_sfp_mul__265__b = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum)
                                              ? vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer
                                             [0U] : 0ULL);
        vlSelfRef.__Vfunc_sfp_mul__265__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_2166, vlSelfRef.__Vfunc_sfp_mul__265__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_2167, vlSelfRef.__Vfunc_sfp_mul__265__b);
        VL_MULS_WWW(128, __Vtemp_2168, __Vtemp_2166, __Vtemp_2167);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__265__tmp, __Vtemp_2168, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__265__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__265__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__265__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__264__b = vlSelfRef.__Vfunc_sfp_mul__265__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__264__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__264__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__264__a + vlSelfRef.__Vfunc_sfp_add__264__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__264__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk5__DOT__i = 1U;
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient = 0ULL;
    }
    __Vfunc_sfp_mul__266__b = vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
        [0U];
    __Vfunc_sfp_mul__266__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_2169, __Vfunc_sfp_mul__266__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_2170, __Vfunc_sfp_mul__266__b);
    VL_MULS_WWW(128, __Vtemp_2171, __Vtemp_2169, __Vtemp_2170);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__266__tmp, __Vtemp_2171, 0x20U);
    __Vfunc_sfp_mul__266__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__266__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__266__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__266__Vfuncout;
    __Vfunc_sfp_mul__266__b = vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
        [1U];
    __Vfunc_sfp_mul__266__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_2172, __Vfunc_sfp_mul__266__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_2173, __Vfunc_sfp_mul__266__b);
    VL_MULS_WWW(128, __Vtemp_2174, __Vtemp_2172, __Vtemp_2173);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__266__tmp, __Vtemp_2174, 0x20U);
    __Vfunc_sfp_mul__266__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__266__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__266__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__266__Vfuncout;
    __Vfunc_sfp_mul__266__b = vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
        [2U];
    __Vfunc_sfp_mul__266__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_2175, __Vfunc_sfp_mul__266__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_2176, __Vfunc_sfp_mul__266__b);
    VL_MULS_WWW(128, __Vtemp_2177, __Vtemp_2175, __Vtemp_2176);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__266__tmp, __Vtemp_2177, 0x20U);
    __Vfunc_sfp_mul__266__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__266__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__266__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[2U] 
        = __Vfunc_sfp_mul__266__Vfuncout;
    __Vfunc_sfp_mul__266__b = vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
        [3U];
    __Vfunc_sfp_mul__266__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_2178, __Vfunc_sfp_mul__266__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_2179, __Vfunc_sfp_mul__266__b);
    VL_MULS_WWW(128, __Vtemp_2180, __Vtemp_2178, __Vtemp_2179);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__266__tmp, __Vtemp_2180, 0x20U);
    __Vfunc_sfp_mul__266__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__266__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__266__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[3U] 
        = __Vfunc_sfp_mul__266__Vfuncout;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk6__DOT__i = 4U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
}
