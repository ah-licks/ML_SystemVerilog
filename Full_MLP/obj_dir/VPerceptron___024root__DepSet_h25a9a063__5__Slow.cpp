// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron__Syms.h"
#include "VPerceptron___024root.h"

VL_ATTR_COLD void VPerceptron___024root___stl_comb__TOP__6(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___stl_comb__TOP__6\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
    IData/*31:0*/ __Vfunc_sfp_div__313__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_sfp_div__316__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__324__Vfuncout;
    __Vfunc_sfp_mul__324__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__324__a;
    __Vfunc_sfp_mul__324__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__324__b;
    __Vfunc_sfp_mul__324__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__324__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__324__tmp);
    IData/*31:0*/ __Vfunc_sfp_div__371__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_sfp_div__374__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__382__Vfuncout;
    __Vfunc_sfp_mul__382__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__382__a;
    __Vfunc_sfp_mul__382__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__382__b;
    __Vfunc_sfp_mul__382__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__382__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__382__tmp);
    IData/*31:0*/ __Vfunc_sfp_div__429__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_sfp_div__432__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__440__Vfuncout;
    __Vfunc_sfp_mul__440__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__440__a;
    __Vfunc_sfp_mul__440__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__440__b;
    __Vfunc_sfp_mul__440__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__440__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__440__tmp);
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
    VlWide<4>/*127:0*/ __Vtemp_562;
    VlWide<4>/*127:0*/ __Vtemp_563;
    VlWide<4>/*127:0*/ __Vtemp_564;
    VlWide<4>/*127:0*/ __Vtemp_565;
    VlWide<4>/*127:0*/ __Vtemp_566;
    VlWide<4>/*127:0*/ __Vtemp_567;
    VlWide<4>/*127:0*/ __Vtemp_569;
    VlWide<4>/*127:0*/ __Vtemp_570;
    VlWide<4>/*127:0*/ __Vtemp_571;
    VlWide<4>/*127:0*/ __Vtemp_573;
    VlWide<4>/*127:0*/ __Vtemp_574;
    VlWide<4>/*127:0*/ __Vtemp_575;
    VlWide<4>/*127:0*/ __Vtemp_577;
    VlWide<4>/*127:0*/ __Vtemp_578;
    VlWide<4>/*127:0*/ __Vtemp_579;
    VlWide<4>/*127:0*/ __Vtemp_581;
    VlWide<4>/*127:0*/ __Vtemp_582;
    VlWide<4>/*127:0*/ __Vtemp_583;
    VlWide<4>/*127:0*/ __Vtemp_585;
    VlWide<4>/*127:0*/ __Vtemp_586;
    VlWide<4>/*127:0*/ __Vtemp_587;
    VlWide<4>/*127:0*/ __Vtemp_589;
    VlWide<4>/*127:0*/ __Vtemp_590;
    VlWide<4>/*127:0*/ __Vtemp_591;
    VlWide<4>/*127:0*/ __Vtemp_593;
    VlWide<4>/*127:0*/ __Vtemp_594;
    VlWide<4>/*127:0*/ __Vtemp_595;
    VlWide<4>/*127:0*/ __Vtemp_597;
    VlWide<4>/*127:0*/ __Vtemp_598;
    VlWide<4>/*127:0*/ __Vtemp_599;
    VlWide<4>/*127:0*/ __Vtemp_601;
    VlWide<4>/*127:0*/ __Vtemp_602;
    VlWide<4>/*127:0*/ __Vtemp_603;
    VlWide<4>/*127:0*/ __Vtemp_605;
    VlWide<4>/*127:0*/ __Vtemp_606;
    VlWide<4>/*127:0*/ __Vtemp_607;
    VlWide<4>/*127:0*/ __Vtemp_609;
    VlWide<4>/*127:0*/ __Vtemp_610;
    VlWide<4>/*127:0*/ __Vtemp_611;
    VlWide<4>/*127:0*/ __Vtemp_613;
    VlWide<4>/*127:0*/ __Vtemp_614;
    VlWide<4>/*127:0*/ __Vtemp_615;
    VlWide<4>/*127:0*/ __Vtemp_617;
    VlWide<4>/*127:0*/ __Vtemp_618;
    VlWide<4>/*127:0*/ __Vtemp_619;
    VlWide<4>/*127:0*/ __Vtemp_621;
    VlWide<4>/*127:0*/ __Vtemp_622;
    VlWide<4>/*127:0*/ __Vtemp_623;
    VlWide<4>/*127:0*/ __Vtemp_625;
    VlWide<4>/*127:0*/ __Vtemp_626;
    VlWide<4>/*127:0*/ __Vtemp_627;
    VlWide<4>/*127:0*/ __Vtemp_629;
    VlWide<4>/*127:0*/ __Vtemp_630;
    VlWide<4>/*127:0*/ __Vtemp_631;
    VlWide<4>/*127:0*/ __Vtemp_633;
    VlWide<4>/*127:0*/ __Vtemp_634;
    VlWide<4>/*127:0*/ __Vtemp_635;
    VlWide<4>/*127:0*/ __Vtemp_637;
    VlWide<4>/*127:0*/ __Vtemp_638;
    VlWide<4>/*127:0*/ __Vtemp_639;
    VlWide<4>/*127:0*/ __Vtemp_641;
    VlWide<4>/*127:0*/ __Vtemp_642;
    VlWide<4>/*127:0*/ __Vtemp_643;
    VlWide<4>/*127:0*/ __Vtemp_645;
    VlWide<4>/*127:0*/ __Vtemp_646;
    VlWide<4>/*127:0*/ __Vtemp_647;
    VlWide<4>/*127:0*/ __Vtemp_649;
    VlWide<4>/*127:0*/ __Vtemp_650;
    VlWide<4>/*127:0*/ __Vtemp_651;
    VlWide<4>/*127:0*/ __Vtemp_653;
    VlWide<4>/*127:0*/ __Vtemp_654;
    VlWide<4>/*127:0*/ __Vtemp_655;
    VlWide<4>/*127:0*/ __Vtemp_657;
    VlWide<4>/*127:0*/ __Vtemp_658;
    VlWide<4>/*127:0*/ __Vtemp_659;
    VlWide<4>/*127:0*/ __Vtemp_661;
    VlWide<4>/*127:0*/ __Vtemp_662;
    VlWide<4>/*127:0*/ __Vtemp_663;
    VlWide<4>/*127:0*/ __Vtemp_665;
    VlWide<4>/*127:0*/ __Vtemp_666;
    VlWide<4>/*127:0*/ __Vtemp_667;
    VlWide<4>/*127:0*/ __Vtemp_669;
    VlWide<4>/*127:0*/ __Vtemp_670;
    VlWide<4>/*127:0*/ __Vtemp_671;
    VlWide<4>/*127:0*/ __Vtemp_673;
    VlWide<4>/*127:0*/ __Vtemp_674;
    VlWide<4>/*127:0*/ __Vtemp_675;
    VlWide<4>/*127:0*/ __Vtemp_677;
    VlWide<4>/*127:0*/ __Vtemp_678;
    VlWide<4>/*127:0*/ __Vtemp_679;
    VlWide<4>/*127:0*/ __Vtemp_681;
    VlWide<4>/*127:0*/ __Vtemp_682;
    VlWide<4>/*127:0*/ __Vtemp_683;
    VlWide<4>/*127:0*/ __Vtemp_685;
    VlWide<4>/*127:0*/ __Vtemp_686;
    VlWide<4>/*127:0*/ __Vtemp_687;
    VlWide<4>/*127:0*/ __Vtemp_689;
    VlWide<4>/*127:0*/ __Vtemp_690;
    VlWide<4>/*127:0*/ __Vtemp_691;
    VlWide<4>/*127:0*/ __Vtemp_693;
    VlWide<4>/*127:0*/ __Vtemp_694;
    VlWide<4>/*127:0*/ __Vtemp_695;
    VlWide<4>/*127:0*/ __Vtemp_697;
    VlWide<4>/*127:0*/ __Vtemp_698;
    VlWide<4>/*127:0*/ __Vtemp_699;
    VlWide<4>/*127:0*/ __Vtemp_701;
    VlWide<4>/*127:0*/ __Vtemp_702;
    VlWide<4>/*127:0*/ __Vtemp_703;
    VlWide<4>/*127:0*/ __Vtemp_705;
    VlWide<4>/*127:0*/ __Vtemp_706;
    VlWide<4>/*127:0*/ __Vtemp_707;
    VlWide<4>/*127:0*/ __Vtemp_709;
    VlWide<4>/*127:0*/ __Vtemp_710;
    VlWide<4>/*127:0*/ __Vtemp_711;
    VlWide<4>/*127:0*/ __Vtemp_713;
    VlWide<4>/*127:0*/ __Vtemp_714;
    VlWide<4>/*127:0*/ __Vtemp_715;
    VlWide<4>/*127:0*/ __Vtemp_717;
    VlWide<4>/*127:0*/ __Vtemp_718;
    VlWide<4>/*127:0*/ __Vtemp_719;
    VlWide<4>/*127:0*/ __Vtemp_721;
    VlWide<4>/*127:0*/ __Vtemp_722;
    VlWide<4>/*127:0*/ __Vtemp_723;
    VlWide<4>/*127:0*/ __Vtemp_725;
    VlWide<4>/*127:0*/ __Vtemp_726;
    VlWide<4>/*127:0*/ __Vtemp_727;
    VlWide<4>/*127:0*/ __Vtemp_729;
    VlWide<4>/*127:0*/ __Vtemp_730;
    VlWide<4>/*127:0*/ __Vtemp_731;
    VlWide<4>/*127:0*/ __Vtemp_733;
    VlWide<4>/*127:0*/ __Vtemp_734;
    VlWide<4>/*127:0*/ __Vtemp_735;
    VlWide<4>/*127:0*/ __Vtemp_737;
    VlWide<4>/*127:0*/ __Vtemp_738;
    VlWide<4>/*127:0*/ __Vtemp_739;
    VlWide<4>/*127:0*/ __Vtemp_741;
    VlWide<4>/*127:0*/ __Vtemp_742;
    VlWide<4>/*127:0*/ __Vtemp_743;
    VlWide<4>/*127:0*/ __Vtemp_745;
    VlWide<4>/*127:0*/ __Vtemp_746;
    VlWide<4>/*127:0*/ __Vtemp_747;
    VlWide<4>/*127:0*/ __Vtemp_749;
    VlWide<4>/*127:0*/ __Vtemp_750;
    VlWide<4>/*127:0*/ __Vtemp_751;
    VlWide<4>/*127:0*/ __Vtemp_753;
    VlWide<4>/*127:0*/ __Vtemp_754;
    VlWide<4>/*127:0*/ __Vtemp_755;
    VlWide<4>/*127:0*/ __Vtemp_757;
    VlWide<4>/*127:0*/ __Vtemp_758;
    VlWide<4>/*127:0*/ __Vtemp_759;
    VlWide<4>/*127:0*/ __Vtemp_761;
    VlWide<4>/*127:0*/ __Vtemp_762;
    VlWide<4>/*127:0*/ __Vtemp_763;
    VlWide<4>/*127:0*/ __Vtemp_765;
    VlWide<4>/*127:0*/ __Vtemp_766;
    VlWide<4>/*127:0*/ __Vtemp_767;
    VlWide<4>/*127:0*/ __Vtemp_769;
    VlWide<4>/*127:0*/ __Vtemp_770;
    VlWide<4>/*127:0*/ __Vtemp_771;
    VlWide<4>/*127:0*/ __Vtemp_773;
    VlWide<4>/*127:0*/ __Vtemp_774;
    VlWide<4>/*127:0*/ __Vtemp_775;
    VlWide<4>/*127:0*/ __Vtemp_777;
    VlWide<4>/*127:0*/ __Vtemp_778;
    VlWide<4>/*127:0*/ __Vtemp_779;
    VlWide<4>/*127:0*/ __Vtemp_781;
    VlWide<4>/*127:0*/ __Vtemp_782;
    VlWide<4>/*127:0*/ __Vtemp_783;
    VlWide<4>/*127:0*/ __Vtemp_785;
    VlWide<4>/*127:0*/ __Vtemp_786;
    VlWide<4>/*127:0*/ __Vtemp_787;
    VlWide<4>/*127:0*/ __Vtemp_789;
    VlWide<4>/*127:0*/ __Vtemp_790;
    VlWide<4>/*127:0*/ __Vtemp_791;
    VlWide<4>/*127:0*/ __Vtemp_793;
    VlWide<4>/*127:0*/ __Vtemp_794;
    VlWide<4>/*127:0*/ __Vtemp_795;
    VlWide<4>/*127:0*/ __Vtemp_797;
    VlWide<4>/*127:0*/ __Vtemp_798;
    VlWide<4>/*127:0*/ __Vtemp_799;
    VlWide<4>/*127:0*/ __Vtemp_801;
    VlWide<4>/*127:0*/ __Vtemp_802;
    VlWide<4>/*127:0*/ __Vtemp_803;
    VlWide<4>/*127:0*/ __Vtemp_805;
    VlWide<4>/*127:0*/ __Vtemp_806;
    VlWide<4>/*127:0*/ __Vtemp_807;
    VlWide<4>/*127:0*/ __Vtemp_809;
    VlWide<4>/*127:0*/ __Vtemp_810;
    VlWide<4>/*127:0*/ __Vtemp_811;
    VlWide<4>/*127:0*/ __Vtemp_813;
    VlWide<4>/*127:0*/ __Vtemp_814;
    VlWide<4>/*127:0*/ __Vtemp_815;
    VlWide<4>/*127:0*/ __Vtemp_817;
    VlWide<4>/*127:0*/ __Vtemp_818;
    VlWide<4>/*127:0*/ __Vtemp_819;
    VlWide<4>/*127:0*/ __Vtemp_821;
    VlWide<4>/*127:0*/ __Vtemp_823;
    VlWide<4>/*127:0*/ __Vtemp_825;
    VlWide<4>/*127:0*/ __Vtemp_826;
    VlWide<4>/*127:0*/ __Vtemp_827;
    VlWide<4>/*127:0*/ __Vtemp_829;
    VlWide<4>/*127:0*/ __Vtemp_830;
    VlWide<4>/*127:0*/ __Vtemp_831;
    VlWide<4>/*127:0*/ __Vtemp_833;
    VlWide<4>/*127:0*/ __Vtemp_834;
    VlWide<4>/*127:0*/ __Vtemp_835;
    VlWide<4>/*127:0*/ __Vtemp_837;
    VlWide<4>/*127:0*/ __Vtemp_838;
    VlWide<4>/*127:0*/ __Vtemp_839;
    VlWide<4>/*127:0*/ __Vtemp_841;
    VlWide<4>/*127:0*/ __Vtemp_842;
    VlWide<4>/*127:0*/ __Vtemp_843;
    VlWide<4>/*127:0*/ __Vtemp_845;
    VlWide<4>/*127:0*/ __Vtemp_846;
    VlWide<4>/*127:0*/ __Vtemp_847;
    VlWide<4>/*127:0*/ __Vtemp_849;
    VlWide<4>/*127:0*/ __Vtemp_850;
    VlWide<4>/*127:0*/ __Vtemp_851;
    VlWide<4>/*127:0*/ __Vtemp_853;
    VlWide<4>/*127:0*/ __Vtemp_854;
    VlWide<4>/*127:0*/ __Vtemp_855;
    VlWide<4>/*127:0*/ __Vtemp_857;
    VlWide<4>/*127:0*/ __Vtemp_858;
    VlWide<4>/*127:0*/ __Vtemp_859;
    VlWide<4>/*127:0*/ __Vtemp_861;
    VlWide<4>/*127:0*/ __Vtemp_862;
    VlWide<4>/*127:0*/ __Vtemp_863;
    VlWide<4>/*127:0*/ __Vtemp_865;
    VlWide<4>/*127:0*/ __Vtemp_866;
    VlWide<4>/*127:0*/ __Vtemp_867;
    VlWide<4>/*127:0*/ __Vtemp_869;
    VlWide<4>/*127:0*/ __Vtemp_870;
    VlWide<4>/*127:0*/ __Vtemp_871;
    VlWide<4>/*127:0*/ __Vtemp_873;
    VlWide<4>/*127:0*/ __Vtemp_874;
    VlWide<4>/*127:0*/ __Vtemp_875;
    VlWide<4>/*127:0*/ __Vtemp_877;
    VlWide<4>/*127:0*/ __Vtemp_878;
    VlWide<4>/*127:0*/ __Vtemp_879;
    VlWide<4>/*127:0*/ __Vtemp_881;
    VlWide<4>/*127:0*/ __Vtemp_882;
    VlWide<4>/*127:0*/ __Vtemp_883;
    VlWide<4>/*127:0*/ __Vtemp_885;
    VlWide<4>/*127:0*/ __Vtemp_886;
    VlWide<4>/*127:0*/ __Vtemp_887;
    VlWide<4>/*127:0*/ __Vtemp_889;
    VlWide<4>/*127:0*/ __Vtemp_890;
    VlWide<4>/*127:0*/ __Vtemp_891;
    VlWide<4>/*127:0*/ __Vtemp_893;
    VlWide<4>/*127:0*/ __Vtemp_894;
    VlWide<4>/*127:0*/ __Vtemp_895;
    VlWide<4>/*127:0*/ __Vtemp_897;
    VlWide<4>/*127:0*/ __Vtemp_898;
    VlWide<4>/*127:0*/ __Vtemp_899;
    VlWide<4>/*127:0*/ __Vtemp_901;
    VlWide<4>/*127:0*/ __Vtemp_902;
    VlWide<4>/*127:0*/ __Vtemp_903;
    VlWide<4>/*127:0*/ __Vtemp_905;
    VlWide<4>/*127:0*/ __Vtemp_906;
    VlWide<4>/*127:0*/ __Vtemp_907;
    VlWide<4>/*127:0*/ __Vtemp_909;
    VlWide<4>/*127:0*/ __Vtemp_910;
    VlWide<4>/*127:0*/ __Vtemp_911;
    VlWide<4>/*127:0*/ __Vtemp_913;
    VlWide<4>/*127:0*/ __Vtemp_914;
    VlWide<4>/*127:0*/ __Vtemp_915;
    VlWide<4>/*127:0*/ __Vtemp_917;
    VlWide<4>/*127:0*/ __Vtemp_918;
    VlWide<4>/*127:0*/ __Vtemp_919;
    VlWide<4>/*127:0*/ __Vtemp_921;
    VlWide<4>/*127:0*/ __Vtemp_922;
    VlWide<4>/*127:0*/ __Vtemp_923;
    VlWide<4>/*127:0*/ __Vtemp_925;
    VlWide<4>/*127:0*/ __Vtemp_926;
    VlWide<4>/*127:0*/ __Vtemp_927;
    VlWide<4>/*127:0*/ __Vtemp_929;
    VlWide<4>/*127:0*/ __Vtemp_930;
    VlWide<4>/*127:0*/ __Vtemp_931;
    VlWide<4>/*127:0*/ __Vtemp_933;
    VlWide<4>/*127:0*/ __Vtemp_934;
    VlWide<4>/*127:0*/ __Vtemp_935;
    VlWide<4>/*127:0*/ __Vtemp_937;
    VlWide<4>/*127:0*/ __Vtemp_938;
    VlWide<4>/*127:0*/ __Vtemp_939;
    VlWide<4>/*127:0*/ __Vtemp_941;
    VlWide<4>/*127:0*/ __Vtemp_942;
    VlWide<4>/*127:0*/ __Vtemp_943;
    VlWide<4>/*127:0*/ __Vtemp_945;
    VlWide<4>/*127:0*/ __Vtemp_946;
    VlWide<4>/*127:0*/ __Vtemp_947;
    VlWide<4>/*127:0*/ __Vtemp_949;
    VlWide<4>/*127:0*/ __Vtemp_950;
    VlWide<4>/*127:0*/ __Vtemp_951;
    VlWide<4>/*127:0*/ __Vtemp_953;
    VlWide<4>/*127:0*/ __Vtemp_954;
    VlWide<4>/*127:0*/ __Vtemp_955;
    VlWide<4>/*127:0*/ __Vtemp_957;
    VlWide<4>/*127:0*/ __Vtemp_958;
    VlWide<4>/*127:0*/ __Vtemp_959;
    VlWide<4>/*127:0*/ __Vtemp_961;
    VlWide<4>/*127:0*/ __Vtemp_962;
    VlWide<4>/*127:0*/ __Vtemp_963;
    VlWide<4>/*127:0*/ __Vtemp_965;
    VlWide<4>/*127:0*/ __Vtemp_966;
    VlWide<4>/*127:0*/ __Vtemp_967;
    VlWide<4>/*127:0*/ __Vtemp_969;
    VlWide<4>/*127:0*/ __Vtemp_970;
    VlWide<4>/*127:0*/ __Vtemp_971;
    VlWide<4>/*127:0*/ __Vtemp_973;
    VlWide<4>/*127:0*/ __Vtemp_974;
    VlWide<4>/*127:0*/ __Vtemp_975;
    VlWide<4>/*127:0*/ __Vtemp_977;
    VlWide<4>/*127:0*/ __Vtemp_978;
    VlWide<4>/*127:0*/ __Vtemp_979;
    VlWide<4>/*127:0*/ __Vtemp_981;
    VlWide<4>/*127:0*/ __Vtemp_982;
    VlWide<4>/*127:0*/ __Vtemp_983;
    VlWide<4>/*127:0*/ __Vtemp_985;
    VlWide<4>/*127:0*/ __Vtemp_986;
    VlWide<4>/*127:0*/ __Vtemp_987;
    VlWide<4>/*127:0*/ __Vtemp_989;
    VlWide<4>/*127:0*/ __Vtemp_990;
    VlWide<4>/*127:0*/ __Vtemp_991;
    VlWide<4>/*127:0*/ __Vtemp_993;
    VlWide<4>/*127:0*/ __Vtemp_994;
    VlWide<4>/*127:0*/ __Vtemp_995;
    VlWide<4>/*127:0*/ __Vtemp_997;
    VlWide<4>/*127:0*/ __Vtemp_998;
    VlWide<4>/*127:0*/ __Vtemp_999;
    VlWide<4>/*127:0*/ __Vtemp_1001;
    VlWide<4>/*127:0*/ __Vtemp_1002;
    VlWide<4>/*127:0*/ __Vtemp_1003;
    VlWide<4>/*127:0*/ __Vtemp_1005;
    VlWide<4>/*127:0*/ __Vtemp_1006;
    VlWide<4>/*127:0*/ __Vtemp_1007;
    VlWide<4>/*127:0*/ __Vtemp_1009;
    VlWide<4>/*127:0*/ __Vtemp_1010;
    VlWide<4>/*127:0*/ __Vtemp_1011;
    VlWide<4>/*127:0*/ __Vtemp_1013;
    VlWide<4>/*127:0*/ __Vtemp_1014;
    VlWide<4>/*127:0*/ __Vtemp_1015;
    VlWide<4>/*127:0*/ __Vtemp_1017;
    VlWide<4>/*127:0*/ __Vtemp_1018;
    VlWide<4>/*127:0*/ __Vtemp_1019;
    VlWide<4>/*127:0*/ __Vtemp_1021;
    VlWide<4>/*127:0*/ __Vtemp_1022;
    VlWide<4>/*127:0*/ __Vtemp_1023;
    VlWide<4>/*127:0*/ __Vtemp_1025;
    VlWide<4>/*127:0*/ __Vtemp_1026;
    VlWide<4>/*127:0*/ __Vtemp_1027;
    VlWide<4>/*127:0*/ __Vtemp_1029;
    VlWide<4>/*127:0*/ __Vtemp_1030;
    VlWide<4>/*127:0*/ __Vtemp_1031;
    VlWide<4>/*127:0*/ __Vtemp_1033;
    VlWide<4>/*127:0*/ __Vtemp_1034;
    VlWide<4>/*127:0*/ __Vtemp_1035;
    VlWide<4>/*127:0*/ __Vtemp_1037;
    VlWide<4>/*127:0*/ __Vtemp_1038;
    VlWide<4>/*127:0*/ __Vtemp_1039;
    VlWide<4>/*127:0*/ __Vtemp_1041;
    VlWide<4>/*127:0*/ __Vtemp_1042;
    VlWide<4>/*127:0*/ __Vtemp_1043;
    VlWide<4>/*127:0*/ __Vtemp_1045;
    VlWide<4>/*127:0*/ __Vtemp_1046;
    VlWide<4>/*127:0*/ __Vtemp_1047;
    VlWide<4>/*127:0*/ __Vtemp_1049;
    VlWide<4>/*127:0*/ __Vtemp_1050;
    VlWide<4>/*127:0*/ __Vtemp_1051;
    VlWide<4>/*127:0*/ __Vtemp_1053;
    VlWide<4>/*127:0*/ __Vtemp_1054;
    VlWide<4>/*127:0*/ __Vtemp_1055;
    VlWide<4>/*127:0*/ __Vtemp_1057;
    VlWide<4>/*127:0*/ __Vtemp_1058;
    VlWide<4>/*127:0*/ __Vtemp_1059;
    VlWide<4>/*127:0*/ __Vtemp_1061;
    VlWide<4>/*127:0*/ __Vtemp_1062;
    VlWide<4>/*127:0*/ __Vtemp_1063;
    VlWide<4>/*127:0*/ __Vtemp_1065;
    VlWide<4>/*127:0*/ __Vtemp_1066;
    VlWide<4>/*127:0*/ __Vtemp_1067;
    VlWide<4>/*127:0*/ __Vtemp_1069;
    VlWide<4>/*127:0*/ __Vtemp_1070;
    VlWide<4>/*127:0*/ __Vtemp_1071;
    VlWide<4>/*127:0*/ __Vtemp_1073;
    VlWide<4>/*127:0*/ __Vtemp_1074;
    VlWide<4>/*127:0*/ __Vtemp_1075;
    VlWide<4>/*127:0*/ __Vtemp_1077;
    VlWide<4>/*127:0*/ __Vtemp_1078;
    VlWide<4>/*127:0*/ __Vtemp_1079;
    VlWide<4>/*127:0*/ __Vtemp_1080;
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
    VlWide<4>/*127:0*/ __Vtemp_1104;
    VlWide<4>/*127:0*/ __Vtemp_1105;
    VlWide<4>/*127:0*/ __Vtemp_1106;
    VlWide<4>/*127:0*/ __Vtemp_1107;
    VlWide<4>/*127:0*/ __Vtemp_1108;
    VlWide<4>/*127:0*/ __Vtemp_1109;
    VlWide<4>/*127:0*/ __Vtemp_1110;
    VlWide<4>/*127:0*/ __Vtemp_1111;
    VlWide<4>/*127:0*/ __Vtemp_1112;
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
    VlWide<4>/*127:0*/ __Vtemp_1358;
    VlWide<4>/*127:0*/ __Vtemp_1359;
    VlWide<4>/*127:0*/ __Vtemp_1361;
    VlWide<4>/*127:0*/ __Vtemp_1362;
    VlWide<4>/*127:0*/ __Vtemp_1363;
    VlWide<4>/*127:0*/ __Vtemp_1365;
    VlWide<4>/*127:0*/ __Vtemp_1366;
    VlWide<4>/*127:0*/ __Vtemp_1367;
    VlWide<4>/*127:0*/ __Vtemp_1369;
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
    VlWide<4>/*127:0*/ __Vtemp_1617;
    VlWide<4>/*127:0*/ __Vtemp_1618;
    VlWide<4>/*127:0*/ __Vtemp_1619;
    VlWide<4>/*127:0*/ __Vtemp_1621;
    VlWide<4>/*127:0*/ __Vtemp_1622;
    VlWide<4>/*127:0*/ __Vtemp_1623;
    VlWide<4>/*127:0*/ __Vtemp_1625;
    VlWide<4>/*127:0*/ __Vtemp_1626;
    VlWide<4>/*127:0*/ __Vtemp_1627;
    VlWide<4>/*127:0*/ __Vtemp_1628;
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
    VlWide<4>/*127:0*/ __Vtemp_1646;
    VlWide<4>/*127:0*/ __Vtemp_1647;
    VlWide<4>/*127:0*/ __Vtemp_1648;
    VlWide<4>/*127:0*/ __Vtemp_1649;
    VlWide<4>/*127:0*/ __Vtemp_1650;
    VlWide<4>/*127:0*/ __Vtemp_1651;
    VlWide<4>/*127:0*/ __Vtemp_1652;
    VlWide<4>/*127:0*/ __Vtemp_1653;
    VlWide<4>/*127:0*/ __Vtemp_1654;
    VlWide<4>/*127:0*/ __Vtemp_1655;
    VlWide<4>/*127:0*/ __Vtemp_1656;
    VlWide<4>/*127:0*/ __Vtemp_1657;
    VlWide<4>/*127:0*/ __Vtemp_1658;
    VlWide<4>/*127:0*/ __Vtemp_1659;
    VlWide<4>/*127:0*/ __Vtemp_1660;
    VlWide<4>/*127:0*/ __Vtemp_1661;
    VlWide<4>/*127:0*/ __Vtemp_1662;
    VlWide<4>/*127:0*/ __Vtemp_1663;
    VlWide<4>/*127:0*/ __Vtemp_1665;
    VlWide<4>/*127:0*/ __Vtemp_1666;
    VlWide<4>/*127:0*/ __Vtemp_1667;
    VlWide<4>/*127:0*/ __Vtemp_1669;
    VlWide<4>/*127:0*/ __Vtemp_1670;
    VlWide<4>/*127:0*/ __Vtemp_1671;
    VlWide<4>/*127:0*/ __Vtemp_1673;
    VlWide<4>/*127:0*/ __Vtemp_1674;
    VlWide<4>/*127:0*/ __Vtemp_1675;
    VlWide<4>/*127:0*/ __Vtemp_1677;
    VlWide<4>/*127:0*/ __Vtemp_1678;
    VlWide<4>/*127:0*/ __Vtemp_1679;
    VlWide<4>/*127:0*/ __Vtemp_1681;
    VlWide<4>/*127:0*/ __Vtemp_1682;
    VlWide<4>/*127:0*/ __Vtemp_1683;
    VlWide<4>/*127:0*/ __Vtemp_1685;
    VlWide<4>/*127:0*/ __Vtemp_1686;
    VlWide<4>/*127:0*/ __Vtemp_1687;
    VlWide<4>/*127:0*/ __Vtemp_1689;
    VlWide<4>/*127:0*/ __Vtemp_1690;
    VlWide<4>/*127:0*/ __Vtemp_1691;
    VlWide<4>/*127:0*/ __Vtemp_1693;
    VlWide<4>/*127:0*/ __Vtemp_1694;
    VlWide<4>/*127:0*/ __Vtemp_1695;
    VlWide<4>/*127:0*/ __Vtemp_1697;
    VlWide<4>/*127:0*/ __Vtemp_1698;
    VlWide<4>/*127:0*/ __Vtemp_1699;
    VlWide<4>/*127:0*/ __Vtemp_1701;
    VlWide<4>/*127:0*/ __Vtemp_1702;
    VlWide<4>/*127:0*/ __Vtemp_1703;
    VlWide<4>/*127:0*/ __Vtemp_1705;
    VlWide<4>/*127:0*/ __Vtemp_1706;
    VlWide<4>/*127:0*/ __Vtemp_1707;
    VlWide<4>/*127:0*/ __Vtemp_1709;
    VlWide<4>/*127:0*/ __Vtemp_1710;
    VlWide<4>/*127:0*/ __Vtemp_1711;
    VlWide<4>/*127:0*/ __Vtemp_1713;
    VlWide<4>/*127:0*/ __Vtemp_1714;
    VlWide<4>/*127:0*/ __Vtemp_1715;
    VlWide<4>/*127:0*/ __Vtemp_1717;
    VlWide<4>/*127:0*/ __Vtemp_1718;
    VlWide<4>/*127:0*/ __Vtemp_1719;
    VlWide<4>/*127:0*/ __Vtemp_1721;
    VlWide<4>/*127:0*/ __Vtemp_1722;
    VlWide<4>/*127:0*/ __Vtemp_1723;
    VlWide<4>/*127:0*/ __Vtemp_1725;
    VlWide<4>/*127:0*/ __Vtemp_1726;
    VlWide<4>/*127:0*/ __Vtemp_1727;
    VlWide<4>/*127:0*/ __Vtemp_1729;
    VlWide<4>/*127:0*/ __Vtemp_1730;
    VlWide<4>/*127:0*/ __Vtemp_1731;
    VlWide<4>/*127:0*/ __Vtemp_1733;
    VlWide<4>/*127:0*/ __Vtemp_1734;
    VlWide<4>/*127:0*/ __Vtemp_1735;
    VlWide<4>/*127:0*/ __Vtemp_1737;
    VlWide<4>/*127:0*/ __Vtemp_1738;
    VlWide<4>/*127:0*/ __Vtemp_1739;
    VlWide<4>/*127:0*/ __Vtemp_1741;
    VlWide<4>/*127:0*/ __Vtemp_1742;
    VlWide<4>/*127:0*/ __Vtemp_1743;
    VlWide<4>/*127:0*/ __Vtemp_1745;
    VlWide<4>/*127:0*/ __Vtemp_1746;
    VlWide<4>/*127:0*/ __Vtemp_1747;
    VlWide<4>/*127:0*/ __Vtemp_1749;
    VlWide<4>/*127:0*/ __Vtemp_1750;
    VlWide<4>/*127:0*/ __Vtemp_1751;
    VlWide<4>/*127:0*/ __Vtemp_1753;
    VlWide<4>/*127:0*/ __Vtemp_1754;
    VlWide<4>/*127:0*/ __Vtemp_1755;
    VlWide<4>/*127:0*/ __Vtemp_1757;
    VlWide<4>/*127:0*/ __Vtemp_1758;
    VlWide<4>/*127:0*/ __Vtemp_1759;
    VlWide<4>/*127:0*/ __Vtemp_1761;
    VlWide<4>/*127:0*/ __Vtemp_1762;
    VlWide<4>/*127:0*/ __Vtemp_1763;
    VlWide<4>/*127:0*/ __Vtemp_1765;
    VlWide<4>/*127:0*/ __Vtemp_1766;
    VlWide<4>/*127:0*/ __Vtemp_1767;
    VlWide<4>/*127:0*/ __Vtemp_1769;
    VlWide<4>/*127:0*/ __Vtemp_1770;
    VlWide<4>/*127:0*/ __Vtemp_1771;
    VlWide<4>/*127:0*/ __Vtemp_1773;
    VlWide<4>/*127:0*/ __Vtemp_1774;
    VlWide<4>/*127:0*/ __Vtemp_1775;
    VlWide<4>/*127:0*/ __Vtemp_1777;
    VlWide<4>/*127:0*/ __Vtemp_1778;
    VlWide<4>/*127:0*/ __Vtemp_1779;
    VlWide<4>/*127:0*/ __Vtemp_1781;
    VlWide<4>/*127:0*/ __Vtemp_1782;
    VlWide<4>/*127:0*/ __Vtemp_1783;
    VlWide<4>/*127:0*/ __Vtemp_1785;
    VlWide<4>/*127:0*/ __Vtemp_1786;
    VlWide<4>/*127:0*/ __Vtemp_1787;
    VlWide<4>/*127:0*/ __Vtemp_1789;
    VlWide<4>/*127:0*/ __Vtemp_1790;
    VlWide<4>/*127:0*/ __Vtemp_1791;
    VlWide<4>/*127:0*/ __Vtemp_1793;
    VlWide<4>/*127:0*/ __Vtemp_1794;
    VlWide<4>/*127:0*/ __Vtemp_1795;
    VlWide<4>/*127:0*/ __Vtemp_1797;
    VlWide<4>/*127:0*/ __Vtemp_1798;
    VlWide<4>/*127:0*/ __Vtemp_1799;
    VlWide<4>/*127:0*/ __Vtemp_1801;
    VlWide<4>/*127:0*/ __Vtemp_1802;
    VlWide<4>/*127:0*/ __Vtemp_1803;
    VlWide<4>/*127:0*/ __Vtemp_1805;
    VlWide<4>/*127:0*/ __Vtemp_1806;
    VlWide<4>/*127:0*/ __Vtemp_1807;
    VlWide<4>/*127:0*/ __Vtemp_1809;
    VlWide<4>/*127:0*/ __Vtemp_1810;
    VlWide<4>/*127:0*/ __Vtemp_1811;
    VlWide<4>/*127:0*/ __Vtemp_1813;
    VlWide<4>/*127:0*/ __Vtemp_1814;
    VlWide<4>/*127:0*/ __Vtemp_1815;
    VlWide<4>/*127:0*/ __Vtemp_1817;
    VlWide<4>/*127:0*/ __Vtemp_1818;
    VlWide<4>/*127:0*/ __Vtemp_1819;
    VlWide<4>/*127:0*/ __Vtemp_1821;
    VlWide<4>/*127:0*/ __Vtemp_1822;
    VlWide<4>/*127:0*/ __Vtemp_1823;
    VlWide<4>/*127:0*/ __Vtemp_1825;
    VlWide<4>/*127:0*/ __Vtemp_1826;
    VlWide<4>/*127:0*/ __Vtemp_1827;
    VlWide<4>/*127:0*/ __Vtemp_1829;
    VlWide<4>/*127:0*/ __Vtemp_1830;
    VlWide<4>/*127:0*/ __Vtemp_1831;
    VlWide<4>/*127:0*/ __Vtemp_1833;
    VlWide<4>/*127:0*/ __Vtemp_1834;
    VlWide<4>/*127:0*/ __Vtemp_1835;
    VlWide<4>/*127:0*/ __Vtemp_1837;
    VlWide<4>/*127:0*/ __Vtemp_1838;
    VlWide<4>/*127:0*/ __Vtemp_1839;
    VlWide<4>/*127:0*/ __Vtemp_1841;
    VlWide<4>/*127:0*/ __Vtemp_1842;
    VlWide<4>/*127:0*/ __Vtemp_1843;
    VlWide<4>/*127:0*/ __Vtemp_1845;
    VlWide<4>/*127:0*/ __Vtemp_1846;
    VlWide<4>/*127:0*/ __Vtemp_1847;
    VlWide<4>/*127:0*/ __Vtemp_1849;
    VlWide<4>/*127:0*/ __Vtemp_1850;
    VlWide<4>/*127:0*/ __Vtemp_1851;
    VlWide<4>/*127:0*/ __Vtemp_1853;
    VlWide<4>/*127:0*/ __Vtemp_1854;
    VlWide<4>/*127:0*/ __Vtemp_1855;
    VlWide<4>/*127:0*/ __Vtemp_1857;
    VlWide<4>/*127:0*/ __Vtemp_1858;
    VlWide<4>/*127:0*/ __Vtemp_1859;
    VlWide<4>/*127:0*/ __Vtemp_1861;
    VlWide<4>/*127:0*/ __Vtemp_1862;
    VlWide<4>/*127:0*/ __Vtemp_1863;
    VlWide<4>/*127:0*/ __Vtemp_1865;
    VlWide<4>/*127:0*/ __Vtemp_1866;
    VlWide<4>/*127:0*/ __Vtemp_1867;
    VlWide<4>/*127:0*/ __Vtemp_1869;
    VlWide<4>/*127:0*/ __Vtemp_1870;
    VlWide<4>/*127:0*/ __Vtemp_1871;
    VlWide<4>/*127:0*/ __Vtemp_1873;
    VlWide<4>/*127:0*/ __Vtemp_1874;
    VlWide<4>/*127:0*/ __Vtemp_1875;
    VlWide<4>/*127:0*/ __Vtemp_1877;
    VlWide<4>/*127:0*/ __Vtemp_1878;
    VlWide<4>/*127:0*/ __Vtemp_1879;
    VlWide<4>/*127:0*/ __Vtemp_1881;
    VlWide<4>/*127:0*/ __Vtemp_1882;
    VlWide<4>/*127:0*/ __Vtemp_1883;
    VlWide<4>/*127:0*/ __Vtemp_1885;
    VlWide<4>/*127:0*/ __Vtemp_1886;
    VlWide<4>/*127:0*/ __Vtemp_1887;
    VlWide<4>/*127:0*/ __Vtemp_1889;
    VlWide<4>/*127:0*/ __Vtemp_1890;
    VlWide<4>/*127:0*/ __Vtemp_1891;
    VlWide<4>/*127:0*/ __Vtemp_1893;
    VlWide<4>/*127:0*/ __Vtemp_1894;
    VlWide<4>/*127:0*/ __Vtemp_1895;
    VlWide<4>/*127:0*/ __Vtemp_1897;
    VlWide<4>/*127:0*/ __Vtemp_1898;
    VlWide<4>/*127:0*/ __Vtemp_1899;
    VlWide<4>/*127:0*/ __Vtemp_1901;
    VlWide<4>/*127:0*/ __Vtemp_1902;
    VlWide<4>/*127:0*/ __Vtemp_1903;
    VlWide<4>/*127:0*/ __Vtemp_1905;
    VlWide<4>/*127:0*/ __Vtemp_1906;
    VlWide<4>/*127:0*/ __Vtemp_1907;
    VlWide<4>/*127:0*/ __Vtemp_1909;
    VlWide<4>/*127:0*/ __Vtemp_1910;
    VlWide<4>/*127:0*/ __Vtemp_1911;
    VlWide<4>/*127:0*/ __Vtemp_1913;
    VlWide<4>/*127:0*/ __Vtemp_1914;
    VlWide<4>/*127:0*/ __Vtemp_1915;
    VlWide<4>/*127:0*/ __Vtemp_1917;
    VlWide<4>/*127:0*/ __Vtemp_1919;
    VlWide<4>/*127:0*/ __Vtemp_1921;
    VlWide<4>/*127:0*/ __Vtemp_1922;
    VlWide<4>/*127:0*/ __Vtemp_1923;
    VlWide<4>/*127:0*/ __Vtemp_1925;
    VlWide<4>/*127:0*/ __Vtemp_1926;
    VlWide<4>/*127:0*/ __Vtemp_1927;
    VlWide<4>/*127:0*/ __Vtemp_1929;
    VlWide<4>/*127:0*/ __Vtemp_1930;
    VlWide<4>/*127:0*/ __Vtemp_1931;
    VlWide<4>/*127:0*/ __Vtemp_1933;
    VlWide<4>/*127:0*/ __Vtemp_1934;
    VlWide<4>/*127:0*/ __Vtemp_1935;
    VlWide<4>/*127:0*/ __Vtemp_1937;
    VlWide<4>/*127:0*/ __Vtemp_1938;
    VlWide<4>/*127:0*/ __Vtemp_1939;
    VlWide<4>/*127:0*/ __Vtemp_1941;
    VlWide<4>/*127:0*/ __Vtemp_1942;
    VlWide<4>/*127:0*/ __Vtemp_1943;
    VlWide<4>/*127:0*/ __Vtemp_1945;
    VlWide<4>/*127:0*/ __Vtemp_1946;
    VlWide<4>/*127:0*/ __Vtemp_1947;
    VlWide<4>/*127:0*/ __Vtemp_1949;
    VlWide<4>/*127:0*/ __Vtemp_1950;
    VlWide<4>/*127:0*/ __Vtemp_1951;
    VlWide<4>/*127:0*/ __Vtemp_1953;
    VlWide<4>/*127:0*/ __Vtemp_1954;
    VlWide<4>/*127:0*/ __Vtemp_1955;
    VlWide<4>/*127:0*/ __Vtemp_1957;
    VlWide<4>/*127:0*/ __Vtemp_1958;
    VlWide<4>/*127:0*/ __Vtemp_1959;
    VlWide<4>/*127:0*/ __Vtemp_1961;
    VlWide<4>/*127:0*/ __Vtemp_1962;
    VlWide<4>/*127:0*/ __Vtemp_1963;
    VlWide<4>/*127:0*/ __Vtemp_1965;
    VlWide<4>/*127:0*/ __Vtemp_1966;
    VlWide<4>/*127:0*/ __Vtemp_1967;
    VlWide<4>/*127:0*/ __Vtemp_1969;
    VlWide<4>/*127:0*/ __Vtemp_1970;
    VlWide<4>/*127:0*/ __Vtemp_1971;
    VlWide<4>/*127:0*/ __Vtemp_1973;
    VlWide<4>/*127:0*/ __Vtemp_1974;
    VlWide<4>/*127:0*/ __Vtemp_1975;
    VlWide<4>/*127:0*/ __Vtemp_1977;
    VlWide<4>/*127:0*/ __Vtemp_1978;
    VlWide<4>/*127:0*/ __Vtemp_1979;
    VlWide<4>/*127:0*/ __Vtemp_1981;
    VlWide<4>/*127:0*/ __Vtemp_1982;
    VlWide<4>/*127:0*/ __Vtemp_1983;
    VlWide<4>/*127:0*/ __Vtemp_1985;
    VlWide<4>/*127:0*/ __Vtemp_1986;
    VlWide<4>/*127:0*/ __Vtemp_1987;
    VlWide<4>/*127:0*/ __Vtemp_1989;
    VlWide<4>/*127:0*/ __Vtemp_1990;
    VlWide<4>/*127:0*/ __Vtemp_1991;
    VlWide<4>/*127:0*/ __Vtemp_1993;
    VlWide<4>/*127:0*/ __Vtemp_1994;
    VlWide<4>/*127:0*/ __Vtemp_1995;
    VlWide<4>/*127:0*/ __Vtemp_1997;
    VlWide<4>/*127:0*/ __Vtemp_1998;
    VlWide<4>/*127:0*/ __Vtemp_1999;
    VlWide<4>/*127:0*/ __Vtemp_2001;
    VlWide<4>/*127:0*/ __Vtemp_2002;
    VlWide<4>/*127:0*/ __Vtemp_2003;
    VlWide<4>/*127:0*/ __Vtemp_2005;
    VlWide<4>/*127:0*/ __Vtemp_2006;
    VlWide<4>/*127:0*/ __Vtemp_2007;
    VlWide<4>/*127:0*/ __Vtemp_2009;
    VlWide<4>/*127:0*/ __Vtemp_2010;
    VlWide<4>/*127:0*/ __Vtemp_2011;
    VlWide<4>/*127:0*/ __Vtemp_2013;
    VlWide<4>/*127:0*/ __Vtemp_2014;
    VlWide<4>/*127:0*/ __Vtemp_2015;
    VlWide<4>/*127:0*/ __Vtemp_2017;
    VlWide<4>/*127:0*/ __Vtemp_2018;
    VlWide<4>/*127:0*/ __Vtemp_2019;
    VlWide<4>/*127:0*/ __Vtemp_2021;
    VlWide<4>/*127:0*/ __Vtemp_2022;
    VlWide<4>/*127:0*/ __Vtemp_2023;
    VlWide<4>/*127:0*/ __Vtemp_2025;
    VlWide<4>/*127:0*/ __Vtemp_2026;
    VlWide<4>/*127:0*/ __Vtemp_2027;
    VlWide<4>/*127:0*/ __Vtemp_2029;
    VlWide<4>/*127:0*/ __Vtemp_2030;
    VlWide<4>/*127:0*/ __Vtemp_2031;
    VlWide<4>/*127:0*/ __Vtemp_2033;
    VlWide<4>/*127:0*/ __Vtemp_2034;
    VlWide<4>/*127:0*/ __Vtemp_2035;
    VlWide<4>/*127:0*/ __Vtemp_2037;
    VlWide<4>/*127:0*/ __Vtemp_2038;
    VlWide<4>/*127:0*/ __Vtemp_2039;
    VlWide<4>/*127:0*/ __Vtemp_2041;
    VlWide<4>/*127:0*/ __Vtemp_2042;
    VlWide<4>/*127:0*/ __Vtemp_2043;
    VlWide<4>/*127:0*/ __Vtemp_2045;
    VlWide<4>/*127:0*/ __Vtemp_2046;
    VlWide<4>/*127:0*/ __Vtemp_2047;
    VlWide<4>/*127:0*/ __Vtemp_2049;
    VlWide<4>/*127:0*/ __Vtemp_2050;
    VlWide<4>/*127:0*/ __Vtemp_2051;
    VlWide<4>/*127:0*/ __Vtemp_2053;
    VlWide<4>/*127:0*/ __Vtemp_2054;
    VlWide<4>/*127:0*/ __Vtemp_2055;
    VlWide<4>/*127:0*/ __Vtemp_2057;
    VlWide<4>/*127:0*/ __Vtemp_2058;
    VlWide<4>/*127:0*/ __Vtemp_2059;
    VlWide<4>/*127:0*/ __Vtemp_2061;
    VlWide<4>/*127:0*/ __Vtemp_2062;
    VlWide<4>/*127:0*/ __Vtemp_2063;
    VlWide<4>/*127:0*/ __Vtemp_2065;
    VlWide<4>/*127:0*/ __Vtemp_2066;
    VlWide<4>/*127:0*/ __Vtemp_2067;
    VlWide<4>/*127:0*/ __Vtemp_2069;
    VlWide<4>/*127:0*/ __Vtemp_2070;
    VlWide<4>/*127:0*/ __Vtemp_2071;
    VlWide<4>/*127:0*/ __Vtemp_2073;
    VlWide<4>/*127:0*/ __Vtemp_2074;
    VlWide<4>/*127:0*/ __Vtemp_2075;
    VlWide<4>/*127:0*/ __Vtemp_2077;
    VlWide<4>/*127:0*/ __Vtemp_2078;
    VlWide<4>/*127:0*/ __Vtemp_2079;
    VlWide<4>/*127:0*/ __Vtemp_2081;
    VlWide<4>/*127:0*/ __Vtemp_2082;
    VlWide<4>/*127:0*/ __Vtemp_2083;
    VlWide<4>/*127:0*/ __Vtemp_2085;
    VlWide<4>/*127:0*/ __Vtemp_2086;
    VlWide<4>/*127:0*/ __Vtemp_2087;
    VlWide<4>/*127:0*/ __Vtemp_2089;
    VlWide<4>/*127:0*/ __Vtemp_2090;
    VlWide<4>/*127:0*/ __Vtemp_2091;
    VlWide<4>/*127:0*/ __Vtemp_2093;
    VlWide<4>/*127:0*/ __Vtemp_2094;
    VlWide<4>/*127:0*/ __Vtemp_2095;
    VlWide<4>/*127:0*/ __Vtemp_2097;
    VlWide<4>/*127:0*/ __Vtemp_2098;
    VlWide<4>/*127:0*/ __Vtemp_2099;
    VlWide<4>/*127:0*/ __Vtemp_2101;
    VlWide<4>/*127:0*/ __Vtemp_2102;
    VlWide<4>/*127:0*/ __Vtemp_2103;
    VlWide<4>/*127:0*/ __Vtemp_2105;
    VlWide<4>/*127:0*/ __Vtemp_2106;
    VlWide<4>/*127:0*/ __Vtemp_2107;
    VlWide<4>/*127:0*/ __Vtemp_2109;
    VlWide<4>/*127:0*/ __Vtemp_2110;
    VlWide<4>/*127:0*/ __Vtemp_2111;
    VlWide<4>/*127:0*/ __Vtemp_2113;
    VlWide<4>/*127:0*/ __Vtemp_2114;
    VlWide<4>/*127:0*/ __Vtemp_2115;
    VlWide<4>/*127:0*/ __Vtemp_2117;
    VlWide<4>/*127:0*/ __Vtemp_2118;
    VlWide<4>/*127:0*/ __Vtemp_2119;
    VlWide<4>/*127:0*/ __Vtemp_2121;
    VlWide<4>/*127:0*/ __Vtemp_2122;
    VlWide<4>/*127:0*/ __Vtemp_2123;
    VlWide<4>/*127:0*/ __Vtemp_2125;
    VlWide<4>/*127:0*/ __Vtemp_2126;
    VlWide<4>/*127:0*/ __Vtemp_2127;
    VlWide<4>/*127:0*/ __Vtemp_2129;
    VlWide<4>/*127:0*/ __Vtemp_2130;
    VlWide<4>/*127:0*/ __Vtemp_2131;
    VlWide<4>/*127:0*/ __Vtemp_2133;
    VlWide<4>/*127:0*/ __Vtemp_2134;
    VlWide<4>/*127:0*/ __Vtemp_2135;
    VlWide<4>/*127:0*/ __Vtemp_2137;
    VlWide<4>/*127:0*/ __Vtemp_2138;
    VlWide<4>/*127:0*/ __Vtemp_2139;
    VlWide<4>/*127:0*/ __Vtemp_2141;
    VlWide<4>/*127:0*/ __Vtemp_2142;
    VlWide<4>/*127:0*/ __Vtemp_2143;
    VlWide<4>/*127:0*/ __Vtemp_2145;
    VlWide<4>/*127:0*/ __Vtemp_2146;
    VlWide<4>/*127:0*/ __Vtemp_2147;
    VlWide<4>/*127:0*/ __Vtemp_2149;
    VlWide<4>/*127:0*/ __Vtemp_2150;
    VlWide<4>/*127:0*/ __Vtemp_2151;
    VlWide<4>/*127:0*/ __Vtemp_2153;
    VlWide<4>/*127:0*/ __Vtemp_2154;
    VlWide<4>/*127:0*/ __Vtemp_2155;
    VlWide<4>/*127:0*/ __Vtemp_2157;
    VlWide<4>/*127:0*/ __Vtemp_2158;
    VlWide<4>/*127:0*/ __Vtemp_2159;
    VlWide<4>/*127:0*/ __Vtemp_2161;
    VlWide<4>/*127:0*/ __Vtemp_2162;
    VlWide<4>/*127:0*/ __Vtemp_2163;
    VlWide<4>/*127:0*/ __Vtemp_2165;
    VlWide<4>/*127:0*/ __Vtemp_2166;
    VlWide<4>/*127:0*/ __Vtemp_2167;
    VlWide<4>/*127:0*/ __Vtemp_2169;
    VlWide<4>/*127:0*/ __Vtemp_2170;
    VlWide<4>/*127:0*/ __Vtemp_2171;
    VlWide<4>/*127:0*/ __Vtemp_2173;
    VlWide<4>/*127:0*/ __Vtemp_2174;
    VlWide<4>/*127:0*/ __Vtemp_2175;
    VlWide<4>/*127:0*/ __Vtemp_2176;
    VlWide<4>/*127:0*/ __Vtemp_2178;
    VlWide<4>/*127:0*/ __Vtemp_2179;
    VlWide<4>/*127:0*/ __Vtemp_2180;
    VlWide<4>/*127:0*/ __Vtemp_2181;
    VlWide<4>/*127:0*/ __Vtemp_2182;
    VlWide<4>/*127:0*/ __Vtemp_2183;
    VlWide<4>/*127:0*/ __Vtemp_2184;
    VlWide<4>/*127:0*/ __Vtemp_2185;
    VlWide<4>/*127:0*/ __Vtemp_2186;
    VlWide<4>/*127:0*/ __Vtemp_2187;
    VlWide<4>/*127:0*/ __Vtemp_2188;
    VlWide<4>/*127:0*/ __Vtemp_2189;
    VlWide<4>/*127:0*/ __Vtemp_2190;
    VlWide<4>/*127:0*/ __Vtemp_2191;
    VlWide<4>/*127:0*/ __Vtemp_2192;
    VlWide<4>/*127:0*/ __Vtemp_2193;
    VlWide<4>/*127:0*/ __Vtemp_2194;
    VlWide<4>/*127:0*/ __Vtemp_2195;
    VlWide<4>/*127:0*/ __Vtemp_2196;
    VlWide<4>/*127:0*/ __Vtemp_2197;
    VlWide<4>/*127:0*/ __Vtemp_2198;
    // Body
    __Vfunc_sfp_mul__208__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__values
        [0U];
    __Vfunc_sfp_mul__208__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1, __Vfunc_sfp_mul__208__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_2, __Vfunc_sfp_mul__208__b);
    VL_MULS_WWW(128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__208__tmp, __Vtemp_3, 0x20U);
    __Vfunc_sfp_mul__208__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__208__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__208__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__208__Vfuncout;
    __Vfunc_sfp_mul__208__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__values
        [1U];
    __Vfunc_sfp_mul__208__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_4, __Vfunc_sfp_mul__208__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_5, __Vfunc_sfp_mul__208__b);
    VL_MULS_WWW(128, __Vtemp_6, __Vtemp_4, __Vtemp_5);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__208__tmp, __Vtemp_6, 0x20U);
    __Vfunc_sfp_mul__208__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__208__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__208__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__208__Vfuncout;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i = 2U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    if ((1U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_sub__245__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction;
        vlSelfRef.__Vfunc_sfp_sub__245__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.__Vfunc_sfp_sub__245__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__245__a - vlSelfRef.__Vfunc_sfp_sub__245__b);
        vlSelfRef.__Vfunc_sfp_mul__244__b = vlSelfRef.__Vfunc_sfp_sub__245__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__244__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction;
        VL_EXTENDS_WQ(128,64, __Vtemp_7, vlSelfRef.__Vfunc_sfp_mul__244__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_8, vlSelfRef.__Vfunc_sfp_mul__244__b);
        VL_MULS_WWW(128, __Vtemp_9, __Vtemp_7, __Vtemp_8);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__244__tmp, __Vtemp_9, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__244__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__244__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__244__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__243__b = vlSelfRef.__Vfunc_sfp_mul__244__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__243__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_10, vlSelfRef.__Vfunc_sfp_mul__243__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_11, vlSelfRef.__Vfunc_sfp_mul__243__b);
        VL_MULS_WWW(128, __Vtemp_12, __Vtemp_10, __Vtemp_11);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__243__tmp, __Vtemp_12, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__243__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__243__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__243__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__242__b = vlSelfRef.__Vfunc_sfp_mul__243__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__242__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_13, vlSelfRef.__Vfunc_sfp_mul__242__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_14, vlSelfRef.__Vfunc_sfp_mul__242__b);
        VL_MULS_WWW(128, __Vtemp_15, __Vtemp_13, __Vtemp_14);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__242__tmp, __Vtemp_15, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__242__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__242__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__242__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__241__b = vlSelfRef.__Vfunc_sfp_mul__242__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__241__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__241__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__241__a + vlSelfRef.__Vfunc_sfp_add__241__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__241__Vfuncout;
    } else if ((2U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_pow__250__b = 2U;
        vlSelfRef.__Vfunc_sfp_tanh__251__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction;
        {
            if (VL_GTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__251__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__252__n = 3U;
                            vlSelfRef.__Vfunc_int_to_sfp__252__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__252__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__252__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__251__Vfuncout 
                    = vlSymsp->TOP__FixedPoint.ONE;
                goto __Vlabel108;
            }
            if (VL_LTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__251__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__253__n = 0xfffffffdU;
                            vlSelfRef.__Vfunc_int_to_sfp__253__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__253__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__253__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__251__Vfuncout 
                    = (- vlSymsp->TOP__FixedPoint.ONE);
                goto __Vlabel108;
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
            while (VL_GTS_III(32, 0x14U, vlSelfRef.__Vfunc_sfp_exp__257__unnamedblk3__DOT__i)) {
                vlSelfRef.__Vfunc_int_to_sfp__259__n 
                    = vlSelfRef.__Vfunc_sfp_exp__257__unnamedblk3__DOT__i;
                vlSelfRef.__Vfunc_int_to_sfp__259__Vfuncout 
                    = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__259__n), 0x20U);
                vlSelfRef.__Vfunc_sfp_div__258__b = vlSelfRef.__Vfunc_int_to_sfp__259__Vfuncout;
                vlSelfRef.__Vfunc_sfp_mul__260__b = vlSelfRef.__Vfunc_sfp_exp__257__a;
                vlSelfRef.__Vfunc_sfp_mul__260__a = vlSelfRef.__Vfunc_sfp_exp__257__term;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__260__tmp);
                VL_EXTENDS_WQ(128,64, __Vtemp_16, vlSelfRef.__Vfunc_sfp_mul__260__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_17, vlSelfRef.__Vfunc_sfp_mul__260__b);
                VL_MULS_WWW(128, __Vtemp_18, __Vtemp_16, __Vtemp_17);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__260__tmp, __Vtemp_18, 0x20U);
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
                        goto __Vlabel109;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__258__a)) {
                        vlSelfRef.__Vfunc_sfp_div__258__Vfuncout = 0ULL;
                        goto __Vlabel109;
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
                    __Vtemp_19[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__258__abs_a);
                    __Vtemp_19[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__258__abs_a 
                                              >> 0x20U));
                    __Vtemp_19[2U] = 0U;
                    __Vtemp_19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_19, 0x20U);
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
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_21, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_21)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_23, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_22, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_23);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_22[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_22[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_22[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_22[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_25, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_25)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_27, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_26, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_27);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_26[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_26[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_26[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_26[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_29, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_29)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_31, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_30, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_31);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_30[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_30[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_30[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_30[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_33, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_33)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_35, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_34, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_35);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_34[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_34[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_34[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_34[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_37, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_37)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_39, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_38, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_39);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_38[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_38[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_38[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_38[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_41, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_41)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_43, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_42, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_43);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_42[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_42[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_42[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_42[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_45, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_45)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_47, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_46, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_47);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_46[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_46[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_46[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_46[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_49, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_49)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_51, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_50, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_51);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_50[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_50[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_50[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_50[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_53, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_53)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_55, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_54, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_55);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_54[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_54[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_54[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_54[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_57, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_57)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_59, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_58, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_59);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_58[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_58[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_58[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_58[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_61, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_61)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_63, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_62, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_63);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_62[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_62[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_62[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_62[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_65, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_65)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_67, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_66, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_67);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_66[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_66[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_66[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_66[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_69, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_69)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_71, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_70, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_71);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_70[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_70[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_70[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_70[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_73, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_73)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_75, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_74, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_75);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_74[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_74[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_74[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_74[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_77, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_77)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_79, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_78, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_79);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_78[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_78[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_78[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_78[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_81, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_81)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_83, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_82, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_83);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_82[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_82[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_82[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_82[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_85, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_85)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_87, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_86, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_87);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_86[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_86[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_86[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_86[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_89, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_89)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_91, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_90, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_91);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_90[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_90[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_90[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_90[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_93, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_93)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_95, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_94, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_95);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_94[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_94[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_94[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_94[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_97, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_97)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_99, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_98, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_99);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_98[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_98[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_98[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_98[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_101, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_101)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_103, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_102, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_103);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_102[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_102[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_102[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_102[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_105, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_105)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_107, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_106, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_107);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_106[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_106[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_106[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_106[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_109, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_109)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_111, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_110, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_111);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_110[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_110[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_110[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_110[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_113, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_113)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_115, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_114, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_115);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_114[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_114[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_114[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_114[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_117, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_117)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_119, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_118, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_119);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_118[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_118[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_118[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_118[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_121, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_121)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_123, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_122, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_123);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_122[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_122[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_122[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_122[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_125, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_125)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_127, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_126, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_127);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_126[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_126[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_126[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_126[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_129, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_129)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_131, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_130, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_131);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_130[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_130[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_130[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_130[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_133, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_133)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_135, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_134, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_135);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_134[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_134[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_134[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_134[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_137, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_137)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_139, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_138, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_139);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_138[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_138[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_138[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_138[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_141, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_141)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_143, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_142, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_143);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_142[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_142[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_142[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_142[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_145, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_145)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_147, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_146, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_147);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_146[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_146[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_146[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_146[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_149, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_149)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_151, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_150, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_151);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_150[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_150[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_150[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_150[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_153, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_153)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_155, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_154, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_155);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_154[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_154[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_154[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_154[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_157, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_157)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_159, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_158, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_159);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_158[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_158[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_158[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_158[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_161, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_161)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_163, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_162, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_163);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_162[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_162[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_162[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_162[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_165, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_165)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_167, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_166, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_167);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_166[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_166[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_166[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_166[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_169, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_169)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_171, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_170, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_171);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_170[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_170[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_170[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_170[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_173, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_173)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_175, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_174, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_175);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_174[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_174[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_174[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_174[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_177, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_177)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_179, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_178, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_179);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_178[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_178[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_178[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_178[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_181, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_181)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_183, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_182, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_183);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_182[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_182[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_182[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_182[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_185, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_185)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_187, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_186, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_187);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_186[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_186[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_186[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_186[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_189, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_189)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_191, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_190, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_191);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_190[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_190[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_190[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_190[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_193, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_193)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_195, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_194, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_195);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_194[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_194[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_194[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_194[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_197, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_197)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_199, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_198, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_199);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_198[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_198[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_198[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_198[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_201, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_201)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_203, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_202, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_203);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_202[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_202[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_202[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_202[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_205, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_205)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_207, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_206, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_207);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_206[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_206[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_206[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_206[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_209, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_209)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_211, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_210, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_211);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_210[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_210[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_210[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_210[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_213, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_213)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_215, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_214, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_215);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_214[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_214[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_214[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_214[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_217, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_217)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_219, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_218, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_219);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_218[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_218[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_218[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_218[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_221, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_221)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_223, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_222, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_223);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_222[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_222[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_222[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_222[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_225, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_225)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_227, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_226, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_227);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_226[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_226[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_226[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_226[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_229, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_229)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_231, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_230, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_231);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_230[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_230[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_230[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_230[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_233, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_233)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_235, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_234, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_235);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_234[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_234[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_234[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_234[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_237, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_237)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_239, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_238, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_239);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_238[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_238[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_238[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_238[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_241, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_241)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_243, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_242, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_243);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_242[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_242[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_242[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_242[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_245, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_245)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_247, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_246, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_247);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_246[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_246[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_246[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_246[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_249, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_249)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_251, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_250, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_251);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_250[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_250[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_250[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_250[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_253, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_253)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_255, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_254, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_255);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_254[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_254[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_254[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_254[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_257, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_257)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_259, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_258, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_259);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_258[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_258[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_258[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_258[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_261, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_261)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_263, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_262, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_263);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_262[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_262[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_262[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_262[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_265, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_265)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_267, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_266, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_267);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_266[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_266[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_266[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_266[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_269, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_269)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_271, vlSelfRef.__Vfunc_sfp_div__258__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_270, vlSelfRef.__Vfunc_sfp_div__258__remainder, __Vtemp_271);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_270[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_270[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_270[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_270[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__258__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__258__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__258__remainder, vlSelfRef.__Vfunc_sfp_div__258__b_ext)) {
                        VL_SUB_W(4, __Vtemp_273, vlSelfRef.__Vfunc_sfp_div__258__remainder, vlSelfRef.__Vfunc_sfp_div__258__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[0U] 
                            = __Vtemp_273[0U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[1U] 
                            = __Vtemp_273[1U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[2U] 
                            = __Vtemp_273[2U];
                        vlSelfRef.__Vfunc_sfp_div__258__remainder[3U] 
                            = __Vtemp_273[3U];
                        vlSelfRef.__Vfunc_sfp_div__258__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__258__result);
                    }
                    __Vfunc_sfp_div__258__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__258__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__258__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__258__result)
                            : vlSelfRef.__Vfunc_sfp_div__258__result);
                    __Vlabel109: ;
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
                    goto __Vlabel110;
                }
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__255__a)) {
                    vlSelfRef.__Vfunc_sfp_div__255__Vfuncout = 0ULL;
                    goto __Vlabel110;
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
                __Vtemp_275[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__255__abs_a);
                __Vtemp_275[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__255__abs_a 
                                           >> 0x20U));
                __Vtemp_275[2U] = 0U;
                __Vtemp_275[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_275, 0x20U);
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
                VL_SHIFTL_WWI(128,128,32, __Vtemp_277, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_277)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_279, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_278, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_279);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_278[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_278[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_278[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_278[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_281, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_281)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_283, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_282, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_283);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_282[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_282[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_282[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_282[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_285, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_285)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_287, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_286, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_287);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_286[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_286[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_286[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_286[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_289, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_289)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_291, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_290, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_291);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_290[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_290[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_290[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_290[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_293, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_293)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_295, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_294, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_295);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_294[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_294[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_294[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_294[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_297, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_297)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_299, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_298, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_299);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_298[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_298[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_298[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_298[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_301, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_301)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_303, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_302, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_303);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_302[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_302[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_302[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_302[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_305, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_305)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_307, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_306, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_307);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_306[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_306[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_306[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_306[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_309, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_309)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_311, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_310, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_311);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_310[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_310[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_310[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_310[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_313, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_313)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_315, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_314, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_315);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_314[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_314[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_314[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_314[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_317, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_317)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_319, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_318, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_319);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_318[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_318[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_318[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_318[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_321, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_321)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_323, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_322, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_323);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_322[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_322[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_322[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_322[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_325, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_325)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_327, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_326, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_327);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_326[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_326[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_326[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_326[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_329, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_329)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_331, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_330, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_331);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_330[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_330[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_330[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_330[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_333, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_333)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_335, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_334, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_335);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_334[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_334[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_334[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_334[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_337, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_337)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_339, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_338, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_339);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_338[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_338[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_338[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_338[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_341, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_341)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_343, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_342, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_343);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_342[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_342[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_342[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_342[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_345, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_345)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_347, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_346, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_347);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_346[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_346[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_346[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_346[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_349, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_349)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_351, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_350, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_351);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_350[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_350[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_350[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_350[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_353, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_353)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_355, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_354, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_355);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_354[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_354[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_354[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_354[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_357, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_357)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_359, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_358, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_359);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_358[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_358[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_358[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_358[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_361, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_361)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_363, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_362, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_363);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_362[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_362[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_362[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_362[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_365, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_365)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_367, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_366, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_367);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_366[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_366[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_366[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_366[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_369, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_369)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_371, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_370, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_371);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_370[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_370[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_370[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_370[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_373, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_373)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_375, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_374, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_375);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_374[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_374[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_374[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_374[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_377, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_377)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_379, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_378, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_379);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_378[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_378[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_378[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_378[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_381, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_381)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_383, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_382, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_383);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_382[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_382[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_382[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_382[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_385, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_385)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_387, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_386, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_387);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_386[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_386[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_386[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_386[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_389, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_389)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_391, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_390, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_391);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_390[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_390[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_390[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_390[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_393, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_393)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_395, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_394, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_395);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_394[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_394[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_394[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_394[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_397, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_397)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_399, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_398, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_399);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_398[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_398[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_398[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_398[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_401, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_401)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_403, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_402, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_403);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_402[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_402[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_402[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_402[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_405, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_405)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_407, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_406, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_407);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_406[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_406[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_406[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_406[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_409, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_409)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_411, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_410, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_411);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_410[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_410[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_410[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_410[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_413, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_413)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_415, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_414, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_415);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_414[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_414[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_414[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_414[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_417, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_417)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_419, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_418, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_419);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_418[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_418[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_418[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_418[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_421, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_421)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_423, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_422, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_423);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_422[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_422[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_422[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_422[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_425, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_425)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_427, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_426, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_427);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_426[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_426[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_426[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_426[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_429, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_429)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_431, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_430, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_431);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_430[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_430[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_430[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_430[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_433, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_433)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_435, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_434, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_435);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_434[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_434[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_434[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_434[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_437, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_437)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_439, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_438, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_439);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_438[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_438[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_438[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_438[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_441, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_441)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_443, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_442, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_443);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_442[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_442[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_442[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_442[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_445, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_445)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_447, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_446, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_447);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_446[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_446[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_446[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_446[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_449, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_449)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_451, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_450, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_451);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_450[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_450[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_450[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_450[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_453, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_453)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_455, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_454, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_455);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_454[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_454[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_454[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_454[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_457, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_457)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_459, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_458, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_459);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_458[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_458[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_458[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_458[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_461, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_461)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_463, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_462, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_463);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_462[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_462[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_462[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_462[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_465, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_465)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_467, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_466, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_467);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_466[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_466[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_466[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_466[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_469, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_469)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_471, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_470, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_471);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_470[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_470[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_470[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_470[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_473, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_473)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_475, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_474, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_475);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_474[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_474[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_474[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_474[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_477, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_477)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_479, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_478, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_479);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_478[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_478[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_478[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_478[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_481, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_481)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_483, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_482, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_483);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_482[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_482[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_482[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_482[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_485, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_485)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_487, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_486, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_487);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_486[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_486[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_486[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_486[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_489, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_489)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_491, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_490, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_491);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_490[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_490[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_490[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_490[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_493, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_493)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_495, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_494, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_495);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_494[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_494[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_494[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_494[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_497, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_497)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_499, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_498, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_499);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_498[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_498[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_498[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_498[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_501, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_501)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_503, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_502, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_503);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_502[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_502[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_502[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_502[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_505, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_505)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_507, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_506, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_507);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_506[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_506[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_506[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_506[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_509, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_509)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_511, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_510, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_511);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_510[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_510[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_510[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_510[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_513, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_513)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_515, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_514, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_515);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_514[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_514[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_514[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_514[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_517, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_517)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_519, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_518, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_519);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_518[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_518[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_518[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_518[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_521, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_521)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_523, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_522, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_523);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_522[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_522[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_522[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_522[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_525, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_525)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_527, vlSelfRef.__Vfunc_sfp_div__255__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_526, vlSelfRef.__Vfunc_sfp_div__255__remainder, __Vtemp_527);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_526[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_526[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_526[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_526[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__255__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__255__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__255__remainder, vlSelfRef.__Vfunc_sfp_div__255__b_ext)) {
                    VL_SUB_W(4, __Vtemp_529, vlSelfRef.__Vfunc_sfp_div__255__remainder, vlSelfRef.__Vfunc_sfp_div__255__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[0U] 
                        = __Vtemp_529[0U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[1U] 
                        = __Vtemp_529[1U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[2U] 
                        = __Vtemp_529[2U];
                    vlSelfRef.__Vfunc_sfp_div__255__remainder[3U] 
                        = __Vtemp_529[3U];
                    vlSelfRef.__Vfunc_sfp_div__255__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__255__result);
                }
                __Vfunc_sfp_div__255__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_sfp_div__255__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_sfp_div__255__sign_bit)
                        ? (- vlSelfRef.__Vfunc_sfp_div__255__result)
                        : vlSelfRef.__Vfunc_sfp_div__255__result);
                __Vlabel110: ;
            }
            vlSelfRef.__Vfunc_sfp_sub__254__a = vlSelfRef.__Vfunc_sfp_div__255__Vfuncout;
            vlSelfRef.__Vfunc_sfp_sub__254__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_sub__254__a 
                   - vlSelfRef.__Vfunc_sfp_sub__254__b);
            vlSelfRef.__Vfunc_sfp_tanh__251__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_sub__254__Vfuncout;
            __Vlabel108: ;
        }
        vlSelfRef.__Vfunc_sfp_pow__250__a = vlSelfRef.__Vfunc_sfp_tanh__251__Vfuncout;
        vlSelfRef.__Vfunc_sfp_pow__250__result = 1ULL;
        vlSelfRef.__Vfunc_sfp_pow__250__unnamedblk2__DOT__i = 1U;
        while (VL_LTES_III(32, vlSelfRef.__Vfunc_sfp_pow__250__unnamedblk2__DOT__i, vlSelfRef.__Vfunc_sfp_pow__250__b)) {
            vlSelfRef.__Vfunc_sfp_mul__263__b = vlSelfRef.__Vfunc_sfp_pow__250__a;
            vlSelfRef.__Vfunc_sfp_mul__263__a = vlSelfRef.__Vfunc_sfp_pow__250__result;
            VL_EXTENDS_WQ(128,64, __Vtemp_530, vlSelfRef.__Vfunc_sfp_mul__263__a);
            VL_EXTENDS_WQ(128,64, __Vtemp_531, vlSelfRef.__Vfunc_sfp_mul__263__b);
            VL_MULS_WWW(128, __Vtemp_532, __Vtemp_530, __Vtemp_531);
            VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__263__tmp, __Vtemp_532, 0x20U);
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
        vlSelfRef.__Vfunc_sfp_mul__248__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_534, vlSelfRef.__Vfunc_sfp_mul__248__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_535, vlSelfRef.__Vfunc_sfp_mul__248__b);
        VL_MULS_WWW(128, __Vtemp_536, __Vtemp_534, __Vtemp_535);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__248__tmp, __Vtemp_536, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__248__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__248__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__248__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__247__b = vlSelfRef.__Vfunc_sfp_mul__248__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__247__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_537, vlSelfRef.__Vfunc_sfp_mul__247__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_538, vlSelfRef.__Vfunc_sfp_mul__247__b);
        VL_MULS_WWW(128, __Vtemp_539, __Vtemp_537, __Vtemp_538);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__247__tmp, __Vtemp_539, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__247__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__247__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__247__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__246__b = vlSelfRef.__Vfunc_sfp_mul__247__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__246__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__246__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__246__a + vlSelfRef.__Vfunc_sfp_add__246__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__246__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 1U;
    } else if ((3U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_mul__265__b = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__sum)
                                              ? vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient_next_layer
                                             [0U] : 0ULL);
        vlSelfRef.__Vfunc_sfp_mul__265__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_540, vlSelfRef.__Vfunc_sfp_mul__265__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_541, vlSelfRef.__Vfunc_sfp_mul__265__b);
        VL_MULS_WWW(128, __Vtemp_542, __Vtemp_540, __Vtemp_541);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__265__tmp, __Vtemp_542, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__265__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__265__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__265__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__264__b = vlSelfRef.__Vfunc_sfp_mul__265__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__264__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__264__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__264__a + vlSelfRef.__Vfunc_sfp_add__264__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__264__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 1U;
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    }
    __Vfunc_sfp_mul__266__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__values
        [0U];
    __Vfunc_sfp_mul__266__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_543, __Vfunc_sfp_mul__266__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_544, __Vfunc_sfp_mul__266__b);
    VL_MULS_WWW(128, __Vtemp_545, __Vtemp_543, __Vtemp_544);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__266__tmp, __Vtemp_545, 0x20U);
    __Vfunc_sfp_mul__266__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__266__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__266__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__266__Vfuncout;
    __Vfunc_sfp_mul__266__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__values
        [1U];
    __Vfunc_sfp_mul__266__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_546, __Vfunc_sfp_mul__266__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_547, __Vfunc_sfp_mul__266__b);
    VL_MULS_WWW(128, __Vtemp_548, __Vtemp_546, __Vtemp_547);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__266__tmp, __Vtemp_548, 0x20U);
    __Vfunc_sfp_mul__266__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__266__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__266__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__266__Vfuncout;
    __Vfunc_sfp_mul__266__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__values
        [2U];
    __Vfunc_sfp_mul__266__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_549, __Vfunc_sfp_mul__266__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_550, __Vfunc_sfp_mul__266__b);
    VL_MULS_WWW(128, __Vtemp_551, __Vtemp_549, __Vtemp_550);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__266__tmp, __Vtemp_551, 0x20U);
    __Vfunc_sfp_mul__266__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__266__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__266__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[2U] 
        = __Vfunc_sfp_mul__266__Vfuncout;
    __Vfunc_sfp_mul__266__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__values
        [3U];
    __Vfunc_sfp_mul__266__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_552, __Vfunc_sfp_mul__266__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_553, __Vfunc_sfp_mul__266__b);
    VL_MULS_WWW(128, __Vtemp_554, __Vtemp_552, __Vtemp_553);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__266__tmp, __Vtemp_554, 0x20U);
    __Vfunc_sfp_mul__266__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__266__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__266__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[3U] 
        = __Vfunc_sfp_mul__266__Vfuncout;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i = 4U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    if ((1U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_sub__303__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction;
        vlSelfRef.__Vfunc_sfp_sub__303__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.__Vfunc_sfp_sub__303__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__303__a - vlSelfRef.__Vfunc_sfp_sub__303__b);
        vlSelfRef.__Vfunc_sfp_mul__302__b = vlSelfRef.__Vfunc_sfp_sub__303__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__302__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction;
        VL_EXTENDS_WQ(128,64, __Vtemp_555, vlSelfRef.__Vfunc_sfp_mul__302__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_556, vlSelfRef.__Vfunc_sfp_mul__302__b);
        VL_MULS_WWW(128, __Vtemp_557, __Vtemp_555, __Vtemp_556);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__302__tmp, __Vtemp_557, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__302__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__302__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__302__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__301__b = vlSelfRef.__Vfunc_sfp_mul__302__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__301__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_558, vlSelfRef.__Vfunc_sfp_mul__301__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_559, vlSelfRef.__Vfunc_sfp_mul__301__b);
        VL_MULS_WWW(128, __Vtemp_560, __Vtemp_558, __Vtemp_559);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__301__tmp, __Vtemp_560, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__301__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__301__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__301__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__300__b = vlSelfRef.__Vfunc_sfp_mul__301__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__300__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_561, vlSelfRef.__Vfunc_sfp_mul__300__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_562, vlSelfRef.__Vfunc_sfp_mul__300__b);
        VL_MULS_WWW(128, __Vtemp_563, __Vtemp_561, __Vtemp_562);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__300__tmp, __Vtemp_563, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__300__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__300__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__300__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__299__b = vlSelfRef.__Vfunc_sfp_mul__300__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__299__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__299__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__299__a + vlSelfRef.__Vfunc_sfp_add__299__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__299__Vfuncout;
    } else if ((2U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_pow__308__b = 2U;
        vlSelfRef.__Vfunc_sfp_tanh__309__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction;
        {
            if (VL_GTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__309__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__310__n = 3U;
                            vlSelfRef.__Vfunc_int_to_sfp__310__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__310__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__310__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__309__Vfuncout 
                    = vlSymsp->TOP__FixedPoint.ONE;
                goto __Vlabel111;
            }
            if (VL_LTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__309__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__311__n = 0xfffffffdU;
                            vlSelfRef.__Vfunc_int_to_sfp__311__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__311__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__311__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__309__Vfuncout 
                    = (- vlSymsp->TOP__FixedPoint.ONE);
                goto __Vlabel111;
            }
            vlSelfRef.__Vfunc_sfp_sub__312__b = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__315__a = VL_SHIFTL_QQI(64,64,32, 
                                                              (- vlSelfRef.__Vfunc_sfp_tanh__309__a), 1U);
            vlSelf->__Vfunc_sfp_exp__315__unnamedblk3__DOT__i = 0;
            vlSelf->__Vfunc_sfp_exp__315__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_exp__315__term = VL_RAND_RESET_Q(64);
            vlSelfRef.__Vfunc_sfp_exp__315__result 
                = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__315__term = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__315__unnamedblk3__DOT__i = 1U;
            while (VL_GTS_III(32, 0x14U, vlSelfRef.__Vfunc_sfp_exp__315__unnamedblk3__DOT__i)) {
                vlSelfRef.__Vfunc_int_to_sfp__317__n 
                    = vlSelfRef.__Vfunc_sfp_exp__315__unnamedblk3__DOT__i;
                vlSelfRef.__Vfunc_int_to_sfp__317__Vfuncout 
                    = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__317__n), 0x20U);
                vlSelfRef.__Vfunc_sfp_div__316__b = vlSelfRef.__Vfunc_int_to_sfp__317__Vfuncout;
                vlSelfRef.__Vfunc_sfp_mul__318__b = vlSelfRef.__Vfunc_sfp_exp__315__a;
                vlSelfRef.__Vfunc_sfp_mul__318__a = vlSelfRef.__Vfunc_sfp_exp__315__term;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__318__tmp);
                VL_EXTENDS_WQ(128,64, __Vtemp_564, vlSelfRef.__Vfunc_sfp_mul__318__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_565, vlSelfRef.__Vfunc_sfp_mul__318__b);
                VL_MULS_WWW(128, __Vtemp_566, __Vtemp_564, __Vtemp_565);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__318__tmp, __Vtemp_566, 0x20U);
                vlSelfRef.__Vfunc_sfp_mul__318__Vfuncout 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__318__tmp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__Vfunc_sfp_mul__318__tmp[0U])));
                vlSelfRef.__Vfunc_sfp_div__316__a = vlSelfRef.__Vfunc_sfp_mul__318__Vfuncout;
                __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__316__remainder);
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__316__b_ext);
                vlSelf->__Vfunc_sfp_div__316__result = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__316__sign_bit = VL_RAND_RESET_I(1);
                vlSelf->__Vfunc_sfp_div__316__abs_a = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__316__abs_b = VL_RAND_RESET_Q(64);
                {
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__316__b)) {
                        vlSelfRef.__Vfunc_sfp_div__316__Vfuncout 
                            = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__316__a)
                                ? 0x7fffffffffffffffULL
                                : 0x8000000000000000ULL);
                        goto __Vlabel112;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__316__a)) {
                        vlSelfRef.__Vfunc_sfp_div__316__Vfuncout = 0ULL;
                        goto __Vlabel112;
                    }
                    vlSelfRef.__Vfunc_sfp_div__316__abs_a 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__316__a 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__316__a)
                            : vlSelfRef.__Vfunc_sfp_div__316__a);
                    vlSelfRef.__Vfunc_sfp_div__316__abs_b 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__316__b 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__316__b)
                            : vlSelfRef.__Vfunc_sfp_div__316__b);
                    vlSelfRef.__Vfunc_sfp_div__316__sign_bit 
                        = (IData)(((vlSelfRef.__Vfunc_sfp_div__316__a 
                                    ^ vlSelfRef.__Vfunc_sfp_div__316__b) 
                                   >> 0x3fU));
                    __Vtemp_567[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__316__abs_a);
                    __Vtemp_567[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__316__abs_a 
                                               >> 0x20U));
                    __Vtemp_567[2U] = 0U;
                    __Vtemp_567[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_567, 0x20U);
                    vlSelfRef.__Vfunc_sfp_div__316__b_ext[0U] 
                        = (IData)(vlSelfRef.__Vfunc_sfp_div__316__abs_b);
                    vlSelfRef.__Vfunc_sfp_div__316__b_ext[1U] 
                        = (IData)((vlSelfRef.__Vfunc_sfp_div__316__abs_b 
                                   >> 0x20U));
                    vlSelfRef.__Vfunc_sfp_div__316__b_ext[2U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__316__b_ext[3U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__316__result = 0ULL;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_569, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_569)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_571, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_570, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_571);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_570[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_570[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_570[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_570[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_573, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_573)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_575, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_574, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_575);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_574[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_574[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_574[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_574[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_577, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_577)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_579, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_578, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_579);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_578[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_578[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_578[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_578[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_581, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_581)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_583, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_582, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_583);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_582[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_582[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_582[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_582[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_585, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_585)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_587, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_586, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_587);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_586[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_586[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_586[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_586[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_589, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_589)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_591, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_590, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_591);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_590[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_590[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_590[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_590[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_593, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_593)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_595, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_594, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_595);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_594[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_594[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_594[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_594[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_597, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_597)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_599, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_598, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_599);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_598[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_598[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_598[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_598[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_601, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_601)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_603, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_602, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_603);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_602[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_602[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_602[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_602[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_605, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_605)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_607, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_606, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_607);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_606[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_606[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_606[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_606[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_609, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_609)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_611, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_610, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_611);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_610[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_610[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_610[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_610[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_613, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_613)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_615, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_614, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_615);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_614[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_614[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_614[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_614[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_617, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_617)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_619, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_618, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_619);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_618[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_618[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_618[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_618[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_621, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_621)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_623, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_622, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_623);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_622[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_622[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_622[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_622[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_625, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_625)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_627, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_626, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_627);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_626[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_626[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_626[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_626[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_629, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_629)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_631, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_630, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_631);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_630[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_630[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_630[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_630[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_633, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_633)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_635, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_634, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_635);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_634[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_634[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_634[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_634[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_637, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_637)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_639, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_638, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_639);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_638[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_638[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_638[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_638[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_641, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_641)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_643, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_642, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_643);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_642[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_642[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_642[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_642[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_645, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_645)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_647, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_646, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_647);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_646[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_646[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_646[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_646[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_649, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_649)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_651, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_650, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_651);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_650[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_650[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_650[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_650[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_653, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_653)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_655, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_654, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_655);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_654[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_654[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_654[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_654[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_657, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_657)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_659, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_658, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_659);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_658[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_658[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_658[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_658[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_661, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_661)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_663, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_662, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_663);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_662[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_662[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_662[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_662[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_665, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_665)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_667, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_666, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_667);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_666[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_666[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_666[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_666[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_669, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_669)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_671, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_670, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_671);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_670[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_670[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_670[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_670[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_673, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_673)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_675, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_674, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_675);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_674[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_674[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_674[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_674[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_677, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_677)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_679, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_678, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_679);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_678[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_678[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_678[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_678[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_681, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_681)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_683, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_682, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_683);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_682[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_682[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_682[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_682[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_685, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_685)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_687, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_686, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_687);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_686[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_686[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_686[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_686[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_689, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_689)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_691, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_690, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_691);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_690[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_690[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_690[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_690[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_693, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_693)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_695, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_694, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_695);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_694[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_694[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_694[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_694[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_697, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_697)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_699, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_698, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_699);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_698[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_698[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_698[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_698[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_701, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_701)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_703, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_702, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_703);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_702[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_702[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_702[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_702[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_705, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_705)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_707, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_706, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_707);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_706[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_706[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_706[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_706[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_709, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_709)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_711, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_710, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_711);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_710[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_710[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_710[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_710[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_713, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_713)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_715, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_714, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_715);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_714[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_714[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_714[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_714[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_717, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_717)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_719, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_718, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_719);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_718[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_718[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_718[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_718[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_721, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_721)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_723, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_722, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_723);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_722[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_722[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_722[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_722[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_725, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_725)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_727, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_726, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_727);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_726[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_726[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_726[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_726[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_729, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_729)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_731, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_730, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_731);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_730[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_730[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_730[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_730[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_733, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_733)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_735, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_734, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_735);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_734[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_734[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_734[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_734[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_737, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_737)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_739, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_738, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_739);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_738[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_738[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_738[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_738[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_741, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_741)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_743, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_742, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_743);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_742[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_742[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_742[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_742[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_745, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_745)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_747, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_746, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_747);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_746[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_746[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_746[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_746[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_749, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_749)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_751, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_750, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_751);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_750[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_750[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_750[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_750[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_753, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_753)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_755, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_754, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_755);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_754[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_754[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_754[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_754[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_757, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_757)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_759, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_758, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_759);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_758[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_758[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_758[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_758[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_761, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_761)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_763, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_762, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_763);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_762[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_762[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_762[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_762[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_765, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_765)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_767, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_766, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_767);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_766[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_766[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_766[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_766[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_769, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_769)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_771, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_770, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_771);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_770[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_770[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_770[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_770[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_773, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_773)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_775, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_774, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_775);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_774[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_774[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_774[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_774[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_777, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_777)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_779, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_778, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_779);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_778[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_778[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_778[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_778[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_781, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_781)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_783, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_782, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_783);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_782[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_782[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_782[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_782[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_785, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_785)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_787, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_786, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_787);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_786[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_786[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_786[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_786[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_789, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_789)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_791, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_790, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_791);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_790[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_790[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_790[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_790[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_793, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_793)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_795, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_794, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_795);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_794[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_794[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_794[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_794[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_797, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_797)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_799, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_798, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_799);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_798[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_798[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_798[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_798[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_801, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_801)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_803, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_802, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_803);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_802[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_802[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_802[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_802[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_805, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_805)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_807, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_806, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_807);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_806[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_806[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_806[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_806[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_809, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_809)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_811, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_810, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_811);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_810[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_810[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_810[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_810[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_813, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_813)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_815, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_814, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_815);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_814[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_814[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_814[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_814[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_817, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_817)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_819, vlSelfRef.__Vfunc_sfp_div__316__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_818, vlSelfRef.__Vfunc_sfp_div__316__remainder, __Vtemp_819);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_818[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_818[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_818[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_818[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__316__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__316__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__316__remainder, vlSelfRef.__Vfunc_sfp_div__316__b_ext)) {
                        VL_SUB_W(4, __Vtemp_821, vlSelfRef.__Vfunc_sfp_div__316__remainder, vlSelfRef.__Vfunc_sfp_div__316__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[0U] 
                            = __Vtemp_821[0U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[1U] 
                            = __Vtemp_821[1U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[2U] 
                            = __Vtemp_821[2U];
                        vlSelfRef.__Vfunc_sfp_div__316__remainder[3U] 
                            = __Vtemp_821[3U];
                        vlSelfRef.__Vfunc_sfp_div__316__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__316__result);
                    }
                    __Vfunc_sfp_div__316__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__316__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__316__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__316__result)
                            : vlSelfRef.__Vfunc_sfp_div__316__result);
                    __Vlabel112: ;
                }
                vlSelfRef.__Vfunc_sfp_exp__315__term 
                    = vlSelfRef.__Vfunc_sfp_div__316__Vfuncout;
                vlSelfRef.__Vfunc_sfp_add__319__b = vlSelfRef.__Vfunc_sfp_exp__315__term;
                vlSelfRef.__Vfunc_sfp_add__319__a = vlSelfRef.__Vfunc_sfp_exp__315__result;
                vlSelfRef.__Vfunc_sfp_add__319__Vfuncout 
                    = (vlSelfRef.__Vfunc_sfp_add__319__a 
                       + vlSelfRef.__Vfunc_sfp_add__319__b);
                vlSelfRef.__Vfunc_sfp_exp__315__result 
                    = vlSelfRef.__Vfunc_sfp_add__319__Vfuncout;
                vlSelfRef.__Vfunc_sfp_exp__315__unnamedblk3__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_exp__315__unnamedblk3__DOT__i);
            }
            vlSelfRef.__Vfunc_sfp_exp__315__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_exp__315__result;
            vlSelfRef.__Vfunc_sfp_add__314__b = vlSelfRef.__Vfunc_sfp_exp__315__Vfuncout;
            vlSelfRef.__Vfunc_sfp_add__314__a = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_add__314__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_add__314__a 
                   + vlSelfRef.__Vfunc_sfp_add__314__b);
            vlSelfRef.__Vfunc_sfp_div__313__b = vlSelfRef.__Vfunc_sfp_add__314__Vfuncout;
            vlSelfRef.__Vfunc_int_to_sfp__320__n = 2U;
            vlSelfRef.__Vfunc_int_to_sfp__320__Vfuncout 
                = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__320__n), 0x20U);
            vlSelfRef.__Vfunc_sfp_div__313__a = vlSelfRef.__Vfunc_int_to_sfp__320__Vfuncout;
            __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0;
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__313__remainder);
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__313__b_ext);
            vlSelf->__Vfunc_sfp_div__313__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__313__sign_bit = VL_RAND_RESET_I(1);
            vlSelf->__Vfunc_sfp_div__313__abs_a = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__313__abs_b = VL_RAND_RESET_Q(64);
            {
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__313__b)) {
                    vlSelfRef.__Vfunc_sfp_div__313__Vfuncout 
                        = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__313__a)
                            ? 0x7fffffffffffffffULL
                            : 0x8000000000000000ULL);
                    goto __Vlabel113;
                }
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__313__a)) {
                    vlSelfRef.__Vfunc_sfp_div__313__Vfuncout = 0ULL;
                    goto __Vlabel113;
                }
                vlSelfRef.__Vfunc_sfp_div__313__abs_a 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__313__a 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__313__a)
                        : vlSelfRef.__Vfunc_sfp_div__313__a);
                vlSelfRef.__Vfunc_sfp_div__313__abs_b 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__313__b 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__313__b)
                        : vlSelfRef.__Vfunc_sfp_div__313__b);
                vlSelfRef.__Vfunc_sfp_div__313__sign_bit 
                    = (IData)(((vlSelfRef.__Vfunc_sfp_div__313__a 
                                ^ vlSelfRef.__Vfunc_sfp_div__313__b) 
                               >> 0x3fU));
                __Vtemp_823[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__313__abs_a);
                __Vtemp_823[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__313__abs_a 
                                           >> 0x20U));
                __Vtemp_823[2U] = 0U;
                __Vtemp_823[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_823, 0x20U);
                vlSelfRef.__Vfunc_sfp_div__313__b_ext[0U] 
                    = (IData)(vlSelfRef.__Vfunc_sfp_div__313__abs_b);
                vlSelfRef.__Vfunc_sfp_div__313__b_ext[1U] 
                    = (IData)((vlSelfRef.__Vfunc_sfp_div__313__abs_b 
                               >> 0x20U));
                vlSelfRef.__Vfunc_sfp_div__313__b_ext[2U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__313__b_ext[3U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__313__result = 0ULL;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_825, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_825)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_827, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_826, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_827);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_826[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_826[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_826[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_826[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_829, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_829)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_831, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_830, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_831);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_830[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_830[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_830[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_830[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_833, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_833)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_835, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_834, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_835);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_834[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_834[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_834[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_834[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_837, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_837)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_839, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_838, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_839);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_838[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_838[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_838[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_838[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_841, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_841)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_843, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_842, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_843);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_842[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_842[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_842[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_842[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_845, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_845)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_847, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_846, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_847);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_846[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_846[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_846[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_846[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_849, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_849)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_851, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_850, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_851);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_850[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_850[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_850[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_850[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_853, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_853)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_855, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_854, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_855);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_854[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_854[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_854[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_854[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_857, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_857)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_859, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_858, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_859);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_858[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_858[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_858[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_858[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_861, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_861)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_863, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_862, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_863);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_862[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_862[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_862[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_862[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_865, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_865)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_867, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_866, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_867);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_866[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_866[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_866[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_866[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_869, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_869)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_871, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_870, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_871);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_870[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_870[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_870[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_870[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_873, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_873)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_875, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_874, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_875);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_874[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_874[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_874[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_874[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_877, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_877)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_879, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_878, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_879);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_878[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_878[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_878[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_878[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_881, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_881)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_883, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_882, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_883);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_882[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_882[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_882[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_882[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_885, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_885)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_887, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_886, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_887);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_886[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_886[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_886[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_886[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_889, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_889)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_891, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_890, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_891);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_890[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_890[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_890[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_890[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_893, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_893)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_895, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_894, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_895);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_894[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_894[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_894[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_894[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_897, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_897)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_899, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_898, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_899);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_898[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_898[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_898[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_898[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_901, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_901)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_903, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_902, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_903);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_902[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_902[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_902[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_902[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_905, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_905)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_907, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_906, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_907);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_906[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_906[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_906[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_906[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_909, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_909)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_911, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_910, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_911);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_910[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_910[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_910[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_910[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_913, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_913)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_915, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_914, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_915);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_914[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_914[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_914[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_914[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_917, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_917)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_919, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_918, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_919);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_918[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_918[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_918[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_918[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_921, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_921)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_923, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_922, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_923);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_922[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_922[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_922[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_922[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_925, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_925)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_927, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_926, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_927);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_926[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_926[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_926[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_926[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_929, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_929)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_931, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_930, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_931);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_930[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_930[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_930[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_930[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_933, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_933)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_935, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_934, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_935);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_934[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_934[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_934[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_934[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_937, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_937)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_939, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_938, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_939);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_938[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_938[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_938[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_938[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_941, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_941)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_943, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_942, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_943);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_942[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_942[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_942[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_942[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_945, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_945)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_947, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_946, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_947);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_946[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_946[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_946[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_946[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_949, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_949)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_951, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_950, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_951);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_950[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_950[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_950[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_950[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_953, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_953)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_955, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_954, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_955);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_954[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_954[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_954[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_954[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_957, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_957)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_959, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_958, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_959);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_958[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_958[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_958[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_958[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_961, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_961)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_963, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_962, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_963);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_962[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_962[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_962[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_962[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_965, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_965)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_967, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_966, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_967);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_966[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_966[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_966[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_966[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_969, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_969)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_971, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_970, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_971);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_970[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_970[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_970[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_970[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_973, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_973)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_975, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_974, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_975);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_974[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_974[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_974[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_974[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_977, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_977)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_979, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_978, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_979);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_978[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_978[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_978[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_978[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_981, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_981)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_983, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_982, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_983);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_982[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_982[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_982[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_982[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_985, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_985)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_987, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_986, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_987);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_986[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_986[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_986[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_986[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_989, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_989)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_991, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_990, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_991);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_990[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_990[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_990[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_990[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_993, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_993)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_995, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_994, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_995);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_994[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_994[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_994[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_994[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_997, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_997)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_999, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_998, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_999);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_998[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_998[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_998[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_998[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1001, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1001)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1003, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_1002, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1003);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_1002[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_1002[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_1002[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_1002[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1005, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1005)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1007, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_1006, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1007);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_1006[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_1006[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_1006[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_1006[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1009, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1009)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1011, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_1010, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1011);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_1010[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_1010[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_1010[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_1010[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1013, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1013)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1015, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_1014, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1015);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_1014[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_1014[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_1014[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_1014[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1017, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1017)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1019, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_1018, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1019);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_1018[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_1018[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_1018[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_1018[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1021, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1021)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1023, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_1022, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1023);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_1022[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_1022[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_1022[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_1022[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1025, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1025)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1027, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_1026, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1027);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_1026[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_1026[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_1026[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_1026[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1029, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1029)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1031, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_1030, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1031);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_1030[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_1030[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_1030[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_1030[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1033, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1033)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1035, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_1034, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1035);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_1034[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_1034[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_1034[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_1034[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1037, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1037)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1039, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_1038, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1039);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_1038[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_1038[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_1038[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_1038[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1041, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1041)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1043, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_1042, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1043);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_1042[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_1042[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_1042[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_1042[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1045, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1045)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1047, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_1046, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1047);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_1046[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_1046[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_1046[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_1046[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1049, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1049)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1051, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_1050, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1051);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_1050[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_1050[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_1050[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_1050[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1053, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1053)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1055, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_1054, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1055);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_1054[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_1054[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_1054[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_1054[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1057, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1057)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1059, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_1058, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1059);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_1058[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_1058[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_1058[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_1058[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1061, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1061)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1063, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_1062, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1063);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_1062[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_1062[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_1062[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_1062[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1065, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1065)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1067, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_1066, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1067);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_1066[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_1066[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_1066[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_1066[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1069, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1069)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1071, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_1070, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1071);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_1070[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_1070[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_1070[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_1070[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1073, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1073)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1075, vlSelfRef.__Vfunc_sfp_div__313__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_1074, vlSelfRef.__Vfunc_sfp_div__313__remainder, __Vtemp_1075);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_1074[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_1074[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_1074[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_1074[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__313__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__313__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__313__remainder, vlSelfRef.__Vfunc_sfp_div__313__b_ext)) {
                    VL_SUB_W(4, __Vtemp_1077, vlSelfRef.__Vfunc_sfp_div__313__remainder, vlSelfRef.__Vfunc_sfp_div__313__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[0U] 
                        = __Vtemp_1077[0U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[1U] 
                        = __Vtemp_1077[1U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[2U] 
                        = __Vtemp_1077[2U];
                    vlSelfRef.__Vfunc_sfp_div__313__remainder[3U] 
                        = __Vtemp_1077[3U];
                    vlSelfRef.__Vfunc_sfp_div__313__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__313__result);
                }
                __Vfunc_sfp_div__313__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_sfp_div__313__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_sfp_div__313__sign_bit)
                        ? (- vlSelfRef.__Vfunc_sfp_div__313__result)
                        : vlSelfRef.__Vfunc_sfp_div__313__result);
                __Vlabel113: ;
            }
            vlSelfRef.__Vfunc_sfp_sub__312__a = vlSelfRef.__Vfunc_sfp_div__313__Vfuncout;
            vlSelfRef.__Vfunc_sfp_sub__312__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_sub__312__a 
                   - vlSelfRef.__Vfunc_sfp_sub__312__b);
            vlSelfRef.__Vfunc_sfp_tanh__309__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_sub__312__Vfuncout;
            __Vlabel111: ;
        }
        vlSelfRef.__Vfunc_sfp_pow__308__a = vlSelfRef.__Vfunc_sfp_tanh__309__Vfuncout;
        vlSelfRef.__Vfunc_sfp_pow__308__result = 1ULL;
        vlSelfRef.__Vfunc_sfp_pow__308__unnamedblk2__DOT__i = 1U;
        while (VL_LTES_III(32, vlSelfRef.__Vfunc_sfp_pow__308__unnamedblk2__DOT__i, vlSelfRef.__Vfunc_sfp_pow__308__b)) {
            vlSelfRef.__Vfunc_sfp_mul__321__b = vlSelfRef.__Vfunc_sfp_pow__308__a;
            vlSelfRef.__Vfunc_sfp_mul__321__a = vlSelfRef.__Vfunc_sfp_pow__308__result;
            VL_EXTENDS_WQ(128,64, __Vtemp_1078, vlSelfRef.__Vfunc_sfp_mul__321__a);
            VL_EXTENDS_WQ(128,64, __Vtemp_1079, vlSelfRef.__Vfunc_sfp_mul__321__b);
            VL_MULS_WWW(128, __Vtemp_1080, __Vtemp_1078, __Vtemp_1079);
            VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__321__tmp, __Vtemp_1080, 0x20U);
            vlSelfRef.__Vfunc_sfp_mul__321__Vfuncout 
                = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__321__tmp[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__321__tmp[0U])));
            vlSelfRef.__Vfunc_sfp_pow__308__result 
                = vlSelfRef.__Vfunc_sfp_mul__321__Vfuncout;
            vlSelfRef.__Vfunc_sfp_pow__308__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_pow__308__unnamedblk2__DOT__i);
        }
        vlSelfRef.__Vfunc_sfp_pow__308__Vfuncout = vlSelfRef.__Vfunc_sfp_pow__308__result;
        vlSelfRef.__Vfunc_sfp_sub__307__b = vlSelfRef.__Vfunc_sfp_pow__308__Vfuncout;
        vlSelfRef.__Vfunc_sfp_sub__307__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.__Vfunc_sfp_sub__307__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__307__a - vlSelfRef.__Vfunc_sfp_sub__307__b);
        vlSelfRef.__Vfunc_sfp_mul__306__b = vlSelfRef.__Vfunc_sfp_sub__307__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__306__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1082, vlSelfRef.__Vfunc_sfp_mul__306__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1083, vlSelfRef.__Vfunc_sfp_mul__306__b);
        VL_MULS_WWW(128, __Vtemp_1084, __Vtemp_1082, __Vtemp_1083);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__306__tmp, __Vtemp_1084, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__306__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__306__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__306__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__305__b = vlSelfRef.__Vfunc_sfp_mul__306__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__305__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1085, vlSelfRef.__Vfunc_sfp_mul__305__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1086, vlSelfRef.__Vfunc_sfp_mul__305__b);
        VL_MULS_WWW(128, __Vtemp_1087, __Vtemp_1085, __Vtemp_1086);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__305__tmp, __Vtemp_1087, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__305__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__305__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__305__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__304__b = vlSelfRef.__Vfunc_sfp_mul__305__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__304__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__304__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__304__a + vlSelfRef.__Vfunc_sfp_add__304__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__304__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 1U;
    } else if ((3U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_mul__323__b = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__sum)
                                              ? vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer
                                             [0U] : 0ULL);
        vlSelfRef.__Vfunc_sfp_mul__323__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1088, vlSelfRef.__Vfunc_sfp_mul__323__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1089, vlSelfRef.__Vfunc_sfp_mul__323__b);
        VL_MULS_WWW(128, __Vtemp_1090, __Vtemp_1088, __Vtemp_1089);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__323__tmp, __Vtemp_1090, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__323__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__323__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__323__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__322__b = vlSelfRef.__Vfunc_sfp_mul__323__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__322__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__322__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__322__a + vlSelfRef.__Vfunc_sfp_add__322__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__322__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 1U;
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    }
    __Vfunc_sfp_mul__324__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__values
        [0U];
    __Vfunc_sfp_mul__324__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1091, __Vfunc_sfp_mul__324__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1092, __Vfunc_sfp_mul__324__b);
    VL_MULS_WWW(128, __Vtemp_1093, __Vtemp_1091, __Vtemp_1092);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__324__tmp, __Vtemp_1093, 0x20U);
    __Vfunc_sfp_mul__324__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__324__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__324__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__324__Vfuncout;
    __Vfunc_sfp_mul__324__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__values
        [1U];
    __Vfunc_sfp_mul__324__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1094, __Vfunc_sfp_mul__324__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1095, __Vfunc_sfp_mul__324__b);
    VL_MULS_WWW(128, __Vtemp_1096, __Vtemp_1094, __Vtemp_1095);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__324__tmp, __Vtemp_1096, 0x20U);
    __Vfunc_sfp_mul__324__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__324__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__324__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__324__Vfuncout;
    __Vfunc_sfp_mul__324__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__values
        [2U];
    __Vfunc_sfp_mul__324__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1097, __Vfunc_sfp_mul__324__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1098, __Vfunc_sfp_mul__324__b);
    VL_MULS_WWW(128, __Vtemp_1099, __Vtemp_1097, __Vtemp_1098);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__324__tmp, __Vtemp_1099, 0x20U);
    __Vfunc_sfp_mul__324__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__324__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__324__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[2U] 
        = __Vfunc_sfp_mul__324__Vfuncout;
    __Vfunc_sfp_mul__324__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__values
        [3U];
    __Vfunc_sfp_mul__324__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1100, __Vfunc_sfp_mul__324__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1101, __Vfunc_sfp_mul__324__b);
    VL_MULS_WWW(128, __Vtemp_1102, __Vtemp_1100, __Vtemp_1101);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__324__tmp, __Vtemp_1102, 0x20U);
    __Vfunc_sfp_mul__324__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__324__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__324__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[3U] 
        = __Vfunc_sfp_mul__324__Vfuncout;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i = 4U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    if ((1U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_sub__361__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__prediction;
        vlSelfRef.__Vfunc_sfp_sub__361__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.__Vfunc_sfp_sub__361__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__361__a - vlSelfRef.__Vfunc_sfp_sub__361__b);
        vlSelfRef.__Vfunc_sfp_mul__360__b = vlSelfRef.__Vfunc_sfp_sub__361__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__360__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__prediction;
        VL_EXTENDS_WQ(128,64, __Vtemp_1103, vlSelfRef.__Vfunc_sfp_mul__360__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1104, vlSelfRef.__Vfunc_sfp_mul__360__b);
        VL_MULS_WWW(128, __Vtemp_1105, __Vtemp_1103, __Vtemp_1104);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__360__tmp, __Vtemp_1105, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__360__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__360__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__360__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__359__b = vlSelfRef.__Vfunc_sfp_mul__360__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__359__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1106, vlSelfRef.__Vfunc_sfp_mul__359__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1107, vlSelfRef.__Vfunc_sfp_mul__359__b);
        VL_MULS_WWW(128, __Vtemp_1108, __Vtemp_1106, __Vtemp_1107);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__359__tmp, __Vtemp_1108, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__359__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__359__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__359__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__358__b = vlSelfRef.__Vfunc_sfp_mul__359__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__358__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1109, vlSelfRef.__Vfunc_sfp_mul__358__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1110, vlSelfRef.__Vfunc_sfp_mul__358__b);
        VL_MULS_WWW(128, __Vtemp_1111, __Vtemp_1109, __Vtemp_1110);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__358__tmp, __Vtemp_1111, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__358__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__358__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__358__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__357__b = vlSelfRef.__Vfunc_sfp_mul__358__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__357__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__357__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__357__a + vlSelfRef.__Vfunc_sfp_add__357__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__357__Vfuncout;
    } else if ((2U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_pow__366__b = 2U;
        vlSelfRef.__Vfunc_sfp_tanh__367__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__prediction;
        {
            if (VL_GTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__367__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__368__n = 3U;
                            vlSelfRef.__Vfunc_int_to_sfp__368__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__368__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__368__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__367__Vfuncout 
                    = vlSymsp->TOP__FixedPoint.ONE;
                goto __Vlabel114;
            }
            if (VL_LTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__367__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__369__n = 0xfffffffdU;
                            vlSelfRef.__Vfunc_int_to_sfp__369__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__369__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__369__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__367__Vfuncout 
                    = (- vlSymsp->TOP__FixedPoint.ONE);
                goto __Vlabel114;
            }
            vlSelfRef.__Vfunc_sfp_sub__370__b = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__373__a = VL_SHIFTL_QQI(64,64,32, 
                                                              (- vlSelfRef.__Vfunc_sfp_tanh__367__a), 1U);
            vlSelf->__Vfunc_sfp_exp__373__unnamedblk3__DOT__i = 0;
            vlSelf->__Vfunc_sfp_exp__373__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_exp__373__term = VL_RAND_RESET_Q(64);
            vlSelfRef.__Vfunc_sfp_exp__373__result 
                = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__373__term = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__373__unnamedblk3__DOT__i = 1U;
            while (VL_GTS_III(32, 0x14U, vlSelfRef.__Vfunc_sfp_exp__373__unnamedblk3__DOT__i)) {
                vlSelfRef.__Vfunc_int_to_sfp__375__n 
                    = vlSelfRef.__Vfunc_sfp_exp__373__unnamedblk3__DOT__i;
                vlSelfRef.__Vfunc_int_to_sfp__375__Vfuncout 
                    = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__375__n), 0x20U);
                vlSelfRef.__Vfunc_sfp_div__374__b = vlSelfRef.__Vfunc_int_to_sfp__375__Vfuncout;
                vlSelfRef.__Vfunc_sfp_mul__376__b = vlSelfRef.__Vfunc_sfp_exp__373__a;
                vlSelfRef.__Vfunc_sfp_mul__376__a = vlSelfRef.__Vfunc_sfp_exp__373__term;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__376__tmp);
                VL_EXTENDS_WQ(128,64, __Vtemp_1112, vlSelfRef.__Vfunc_sfp_mul__376__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_1113, vlSelfRef.__Vfunc_sfp_mul__376__b);
                VL_MULS_WWW(128, __Vtemp_1114, __Vtemp_1112, __Vtemp_1113);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__376__tmp, __Vtemp_1114, 0x20U);
                vlSelfRef.__Vfunc_sfp_mul__376__Vfuncout 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__376__tmp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__Vfunc_sfp_mul__376__tmp[0U])));
                vlSelfRef.__Vfunc_sfp_div__374__a = vlSelfRef.__Vfunc_sfp_mul__376__Vfuncout;
                __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__374__remainder);
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__374__b_ext);
                vlSelf->__Vfunc_sfp_div__374__result = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__374__sign_bit = VL_RAND_RESET_I(1);
                vlSelf->__Vfunc_sfp_div__374__abs_a = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__374__abs_b = VL_RAND_RESET_Q(64);
                {
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__374__b)) {
                        vlSelfRef.__Vfunc_sfp_div__374__Vfuncout 
                            = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__374__a)
                                ? 0x7fffffffffffffffULL
                                : 0x8000000000000000ULL);
                        goto __Vlabel115;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__374__a)) {
                        vlSelfRef.__Vfunc_sfp_div__374__Vfuncout = 0ULL;
                        goto __Vlabel115;
                    }
                    vlSelfRef.__Vfunc_sfp_div__374__abs_a 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__374__a 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__374__a)
                            : vlSelfRef.__Vfunc_sfp_div__374__a);
                    vlSelfRef.__Vfunc_sfp_div__374__abs_b 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__374__b 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__374__b)
                            : vlSelfRef.__Vfunc_sfp_div__374__b);
                    vlSelfRef.__Vfunc_sfp_div__374__sign_bit 
                        = (IData)(((vlSelfRef.__Vfunc_sfp_div__374__a 
                                    ^ vlSelfRef.__Vfunc_sfp_div__374__b) 
                                   >> 0x3fU));
                    __Vtemp_1115[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__374__abs_a);
                    __Vtemp_1115[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__374__abs_a 
                                                >> 0x20U));
                    __Vtemp_1115[2U] = 0U;
                    __Vtemp_1115[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1115, 0x20U);
                    vlSelfRef.__Vfunc_sfp_div__374__b_ext[0U] 
                        = (IData)(vlSelfRef.__Vfunc_sfp_div__374__abs_b);
                    vlSelfRef.__Vfunc_sfp_div__374__b_ext[1U] 
                        = (IData)((vlSelfRef.__Vfunc_sfp_div__374__abs_b 
                                   >> 0x20U));
                    vlSelfRef.__Vfunc_sfp_div__374__b_ext[2U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__374__b_ext[3U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__374__result = 0ULL;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1117, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1117)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1119, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_1118, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1119);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1118[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1118[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1118[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1118[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1121, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1121)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1123, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_1122, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1123);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1122[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1122[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1122[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1122[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1125, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1125)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1127, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_1126, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1127);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1126[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1126[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1126[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1126[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1129, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1129)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1131, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_1130, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1131);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1130[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1130[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1130[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1130[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1133, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1133)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1135, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_1134, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1135);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1134[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1134[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1134[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1134[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1137, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1137)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1139, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_1138, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1139);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1138[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1138[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1138[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1138[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1141, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1141)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1143, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_1142, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1143);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1142[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1142[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1142[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1142[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1145, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1145)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1147, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_1146, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1147);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1146[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1146[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1146[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1146[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1149, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1149)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1151, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_1150, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1151);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1150[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1150[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1150[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1150[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1153, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1153)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1155, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_1154, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1155);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1154[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1154[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1154[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1154[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1157, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1157)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1159, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_1158, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1159);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1158[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1158[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1158[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1158[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1161, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1161)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1163, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_1162, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1163);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1162[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1162[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1162[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1162[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1165, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1165)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1167, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_1166, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1167);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1166[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1166[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1166[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1166[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1169, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1169)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1171, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_1170, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1171);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1170[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1170[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1170[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1170[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1173, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1173)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1175, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_1174, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1175);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1174[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1174[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1174[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1174[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1177, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1177)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1179, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_1178, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1179);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1178[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1178[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1178[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1178[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1181, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1181)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1183, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_1182, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1183);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1182[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1182[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1182[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1182[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1185, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1185)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1187, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_1186, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1187);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1186[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1186[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1186[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1186[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1189, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1189)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1191, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_1190, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1191);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1190[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1190[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1190[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1190[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1193, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1193)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1195, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_1194, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1195);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1194[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1194[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1194[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1194[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1197, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1197)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1199, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_1198, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1199);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1198[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1198[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1198[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1198[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1201, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1201)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1203, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_1202, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1203);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1202[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1202[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1202[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1202[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1205, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1205)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1207, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_1206, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1207);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1206[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1206[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1206[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1206[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1209, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1209)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1211, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_1210, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1211);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1210[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1210[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1210[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1210[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1213, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1213)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1215, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_1214, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1215);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1214[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1214[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1214[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1214[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1217, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1217)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1219, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_1218, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1219);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1218[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1218[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1218[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1218[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1221, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1221)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1223, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_1222, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1223);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1222[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1222[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1222[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1222[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1225, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1225)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1227, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_1226, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1227);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1226[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1226[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1226[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1226[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1229, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1229)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1231, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_1230, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1231);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1230[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1230[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1230[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1230[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1233, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1233)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1235, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_1234, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1235);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1234[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1234[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1234[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1234[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1237, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1237)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1239, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_1238, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1239);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1238[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1238[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1238[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1238[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1241, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1241)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1243, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_1242, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1243);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1242[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1242[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1242[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1242[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1245, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1245)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1247, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_1246, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1247);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1246[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1246[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1246[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1246[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1249, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1249)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1251, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_1250, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1251);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1250[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1250[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1250[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1250[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1253, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1253)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1255, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_1254, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1255);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1254[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1254[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1254[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1254[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1257, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1257)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1259, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_1258, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1259);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1258[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1258[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1258[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1258[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1261, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1261)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1263, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_1262, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1263);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1262[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1262[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1262[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1262[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1265, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1265)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1267, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_1266, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1267);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1266[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1266[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1266[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1266[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1269, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1269)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1271, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_1270, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1271);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1270[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1270[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1270[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1270[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1273, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1273)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1275, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_1274, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1275);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1274[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1274[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1274[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1274[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1277, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1277)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1279, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_1278, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1279);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1278[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1278[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1278[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1278[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1281, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1281)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1283, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_1282, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1283);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1282[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1282[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1282[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1282[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1285, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1285)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1287, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_1286, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1287);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1286[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1286[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1286[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1286[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1289, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1289)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1291, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_1290, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1291);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1290[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1290[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1290[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1290[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1293, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1293)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1295, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_1294, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1295);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1294[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1294[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1294[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1294[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1297, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1297)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1299, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_1298, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1299);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1298[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1298[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1298[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1298[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1301, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1301)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1303, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_1302, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1303);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1302[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1302[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1302[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1302[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1305, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1305)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1307, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_1306, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1307);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1306[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1306[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1306[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1306[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1309, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1309)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1311, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_1310, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1311);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1310[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1310[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1310[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1310[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1313, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1313)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1315, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_1314, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1315);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1314[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1314[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1314[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1314[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1317, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1317)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1319, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_1318, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1319);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1318[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1318[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1318[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1318[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1321, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1321)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1323, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_1322, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1323);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1322[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1322[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1322[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1322[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1325, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1325)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1327, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_1326, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1327);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1326[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1326[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1326[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1326[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1329, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1329)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1331, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_1330, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1331);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1330[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1330[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1330[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1330[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1333, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1333)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1335, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_1334, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1335);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1334[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1334[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1334[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1334[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1337, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1337)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1339, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_1338, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1339);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1338[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1338[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1338[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1338[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1341, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1341)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1343, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_1342, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1343);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1342[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1342[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1342[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1342[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1345, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1345)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1347, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_1346, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1347);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1346[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1346[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1346[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1346[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1349, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1349)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1351, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_1350, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1351);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1350[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1350[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1350[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1350[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1353, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1353)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1355, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_1354, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1355);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1354[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1354[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1354[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1354[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1357, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1357)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1359, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_1358, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1359);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1358[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1358[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1358[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1358[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1361, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1361)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1363, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_1362, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1363);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1362[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1362[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1362[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1362[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1365, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1365)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1367, vlSelfRef.__Vfunc_sfp_div__374__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_1366, vlSelfRef.__Vfunc_sfp_div__374__remainder, __Vtemp_1367);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1366[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1366[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1366[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1366[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__374__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__374__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__374__remainder, vlSelfRef.__Vfunc_sfp_div__374__b_ext)) {
                        VL_SUB_W(4, __Vtemp_1369, vlSelfRef.__Vfunc_sfp_div__374__remainder, vlSelfRef.__Vfunc_sfp_div__374__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[0U] 
                            = __Vtemp_1369[0U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[1U] 
                            = __Vtemp_1369[1U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[2U] 
                            = __Vtemp_1369[2U];
                        vlSelfRef.__Vfunc_sfp_div__374__remainder[3U] 
                            = __Vtemp_1369[3U];
                        vlSelfRef.__Vfunc_sfp_div__374__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__374__result);
                    }
                    __Vfunc_sfp_div__374__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__374__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__374__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__374__result)
                            : vlSelfRef.__Vfunc_sfp_div__374__result);
                    __Vlabel115: ;
                }
                vlSelfRef.__Vfunc_sfp_exp__373__term 
                    = vlSelfRef.__Vfunc_sfp_div__374__Vfuncout;
                vlSelfRef.__Vfunc_sfp_add__377__b = vlSelfRef.__Vfunc_sfp_exp__373__term;
                vlSelfRef.__Vfunc_sfp_add__377__a = vlSelfRef.__Vfunc_sfp_exp__373__result;
                vlSelfRef.__Vfunc_sfp_add__377__Vfuncout 
                    = (vlSelfRef.__Vfunc_sfp_add__377__a 
                       + vlSelfRef.__Vfunc_sfp_add__377__b);
                vlSelfRef.__Vfunc_sfp_exp__373__result 
                    = vlSelfRef.__Vfunc_sfp_add__377__Vfuncout;
                vlSelfRef.__Vfunc_sfp_exp__373__unnamedblk3__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_exp__373__unnamedblk3__DOT__i);
            }
            vlSelfRef.__Vfunc_sfp_exp__373__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_exp__373__result;
            vlSelfRef.__Vfunc_sfp_add__372__b = vlSelfRef.__Vfunc_sfp_exp__373__Vfuncout;
            vlSelfRef.__Vfunc_sfp_add__372__a = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_add__372__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_add__372__a 
                   + vlSelfRef.__Vfunc_sfp_add__372__b);
            vlSelfRef.__Vfunc_sfp_div__371__b = vlSelfRef.__Vfunc_sfp_add__372__Vfuncout;
            vlSelfRef.__Vfunc_int_to_sfp__378__n = 2U;
            vlSelfRef.__Vfunc_int_to_sfp__378__Vfuncout 
                = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__378__n), 0x20U);
            vlSelfRef.__Vfunc_sfp_div__371__a = vlSelfRef.__Vfunc_int_to_sfp__378__Vfuncout;
            __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0;
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__371__remainder);
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__371__b_ext);
            vlSelf->__Vfunc_sfp_div__371__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__371__sign_bit = VL_RAND_RESET_I(1);
            vlSelf->__Vfunc_sfp_div__371__abs_a = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__371__abs_b = VL_RAND_RESET_Q(64);
            {
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__371__b)) {
                    vlSelfRef.__Vfunc_sfp_div__371__Vfuncout 
                        = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__371__a)
                            ? 0x7fffffffffffffffULL
                            : 0x8000000000000000ULL);
                    goto __Vlabel116;
                }
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__371__a)) {
                    vlSelfRef.__Vfunc_sfp_div__371__Vfuncout = 0ULL;
                    goto __Vlabel116;
                }
                vlSelfRef.__Vfunc_sfp_div__371__abs_a 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__371__a 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__371__a)
                        : vlSelfRef.__Vfunc_sfp_div__371__a);
                vlSelfRef.__Vfunc_sfp_div__371__abs_b 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__371__b 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__371__b)
                        : vlSelfRef.__Vfunc_sfp_div__371__b);
                vlSelfRef.__Vfunc_sfp_div__371__sign_bit 
                    = (IData)(((vlSelfRef.__Vfunc_sfp_div__371__a 
                                ^ vlSelfRef.__Vfunc_sfp_div__371__b) 
                               >> 0x3fU));
                __Vtemp_1371[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__371__abs_a);
                __Vtemp_1371[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__371__abs_a 
                                            >> 0x20U));
                __Vtemp_1371[2U] = 0U;
                __Vtemp_1371[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1371, 0x20U);
                vlSelfRef.__Vfunc_sfp_div__371__b_ext[0U] 
                    = (IData)(vlSelfRef.__Vfunc_sfp_div__371__abs_b);
                vlSelfRef.__Vfunc_sfp_div__371__b_ext[1U] 
                    = (IData)((vlSelfRef.__Vfunc_sfp_div__371__abs_b 
                               >> 0x20U));
                vlSelfRef.__Vfunc_sfp_div__371__b_ext[2U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__371__b_ext[3U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__371__result = 0ULL;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1373, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1373)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1375, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_1374, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1375);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1374[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1374[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1374[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1374[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1377, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1377)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1379, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_1378, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1379);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1378[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1378[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1378[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1378[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1381, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1381)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1383, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_1382, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1383);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1382[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1382[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1382[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1382[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1385, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1385)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1387, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_1386, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1387);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1386[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1386[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1386[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1386[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1389, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1389)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1391, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_1390, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1391);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1390[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1390[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1390[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1390[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1393, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1393)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1395, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_1394, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1395);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1394[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1394[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1394[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1394[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1397, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1397)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1399, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_1398, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1399);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1398[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1398[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1398[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1398[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1401, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1401)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1403, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_1402, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1403);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1402[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1402[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1402[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1402[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1405, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1405)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1407, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_1406, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1407);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1406[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1406[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1406[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1406[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1409, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1409)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1411, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_1410, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1411);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1410[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1410[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1410[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1410[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1413, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1413)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1415, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_1414, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1415);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1414[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1414[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1414[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1414[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1417, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1417)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1419, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_1418, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1419);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1418[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1418[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1418[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1418[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1421, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1421)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1423, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_1422, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1423);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1422[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1422[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1422[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1422[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1425, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1425)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1427, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_1426, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1427);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1426[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1426[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1426[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1426[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1429, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1429)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1431, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_1430, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1431);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1430[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1430[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1430[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1430[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1433, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1433)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1435, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_1434, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1435);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1434[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1434[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1434[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1434[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1437, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1437)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1439, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_1438, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1439);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1438[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1438[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1438[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1438[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1441, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1441)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1443, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_1442, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1443);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1442[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1442[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1442[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1442[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1445, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1445)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1447, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_1446, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1447);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1446[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1446[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1446[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1446[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1449, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1449)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1451, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_1450, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1451);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1450[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1450[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1450[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1450[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1453, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1453)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1455, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_1454, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1455);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1454[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1454[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1454[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1454[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1457, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1457)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1459, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_1458, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1459);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1458[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1458[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1458[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1458[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1461, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1461)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1463, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_1462, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1463);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1462[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1462[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1462[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1462[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1465, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1465)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1467, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_1466, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1467);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1466[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1466[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1466[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1466[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1469, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1469)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1471, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_1470, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1471);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1470[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1470[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1470[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1470[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1473, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1473)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1475, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_1474, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1475);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1474[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1474[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1474[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1474[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1477, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1477)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1479, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_1478, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1479);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1478[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1478[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1478[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1478[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1481, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1481)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1483, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_1482, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1483);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1482[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1482[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1482[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1482[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1485, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1485)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1487, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_1486, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1487);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1486[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1486[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1486[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1486[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1489, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1489)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1491, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_1490, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1491);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1490[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1490[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1490[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1490[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1493, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1493)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1495, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_1494, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1495);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1494[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1494[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1494[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1494[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1497, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1497)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1499, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_1498, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1499);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1498[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1498[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1498[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1498[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1501, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1501)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1503, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_1502, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1503);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1502[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1502[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1502[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1502[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1505, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1505)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1507, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_1506, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1507);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1506[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1506[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1506[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1506[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1509, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1509)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1511, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_1510, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1511);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1510[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1510[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1510[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1510[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1513, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1513)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1515, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_1514, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1515);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1514[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1514[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1514[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1514[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1517, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1517)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1519, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_1518, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1519);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1518[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1518[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1518[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1518[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1521, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1521)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1523, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_1522, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1523);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1522[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1522[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1522[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1522[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1525, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1525)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1527, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_1526, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1527);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1526[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1526[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1526[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1526[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1529, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1529)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1531, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_1530, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1531);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1530[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1530[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1530[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1530[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1533, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1533)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1535, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_1534, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1535);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1534[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1534[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1534[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1534[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1537, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1537)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1539, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_1538, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1539);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1538[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1538[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1538[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1538[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1541, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1541)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1543, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_1542, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1543);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1542[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1542[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1542[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1542[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1545, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1545)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1547, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_1546, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1547);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1546[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1546[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1546[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1546[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1549, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1549)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1551, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_1550, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1551);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1550[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1550[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1550[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1550[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1553, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1553)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1555, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_1554, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1555);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1554[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1554[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1554[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1554[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1557, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1557)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1559, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_1558, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1559);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1558[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1558[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1558[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1558[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1561, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1561)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1563, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_1562, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1563);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1562[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1562[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1562[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1562[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1565, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1565)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1567, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_1566, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1567);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1566[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1566[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1566[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1566[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1569, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1569)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1571, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_1570, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1571);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1570[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1570[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1570[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1570[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1573, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1573)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1575, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_1574, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1575);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1574[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1574[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1574[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1574[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1577, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1577)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1579, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_1578, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1579);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1578[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1578[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1578[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1578[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1581, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1581)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1583, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_1582, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1583);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1582[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1582[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1582[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1582[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1585, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1585)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1587, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_1586, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1587);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1586[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1586[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1586[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1586[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1589, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1589)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1591, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_1590, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1591);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1590[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1590[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1590[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1590[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1593, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1593)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1595, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_1594, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1595);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1594[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1594[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1594[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1594[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1597, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1597)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1599, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_1598, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1599);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1598[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1598[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1598[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1598[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1601, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1601)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1603, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_1602, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1603);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1602[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1602[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1602[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1602[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1605, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1605)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1607, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_1606, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1607);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1606[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1606[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1606[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1606[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1609, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1609)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1611, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_1610, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1611);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1610[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1610[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1610[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1610[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1613, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1613)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1615, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_1614, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1615);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1614[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1614[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1614[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1614[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1617, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1617)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1619, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_1618, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1619);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1618[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1618[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1618[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1618[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1621, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1621)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1623, vlSelfRef.__Vfunc_sfp_div__371__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_1622, vlSelfRef.__Vfunc_sfp_div__371__remainder, __Vtemp_1623);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1622[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1622[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1622[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1622[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__371__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__371__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__371__remainder, vlSelfRef.__Vfunc_sfp_div__371__b_ext)) {
                    VL_SUB_W(4, __Vtemp_1625, vlSelfRef.__Vfunc_sfp_div__371__remainder, vlSelfRef.__Vfunc_sfp_div__371__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[0U] 
                        = __Vtemp_1625[0U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[1U] 
                        = __Vtemp_1625[1U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[2U] 
                        = __Vtemp_1625[2U];
                    vlSelfRef.__Vfunc_sfp_div__371__remainder[3U] 
                        = __Vtemp_1625[3U];
                    vlSelfRef.__Vfunc_sfp_div__371__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__371__result);
                }
                __Vfunc_sfp_div__371__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_sfp_div__371__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_sfp_div__371__sign_bit)
                        ? (- vlSelfRef.__Vfunc_sfp_div__371__result)
                        : vlSelfRef.__Vfunc_sfp_div__371__result);
                __Vlabel116: ;
            }
            vlSelfRef.__Vfunc_sfp_sub__370__a = vlSelfRef.__Vfunc_sfp_div__371__Vfuncout;
            vlSelfRef.__Vfunc_sfp_sub__370__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_sub__370__a 
                   - vlSelfRef.__Vfunc_sfp_sub__370__b);
            vlSelfRef.__Vfunc_sfp_tanh__367__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_sub__370__Vfuncout;
            __Vlabel114: ;
        }
        vlSelfRef.__Vfunc_sfp_pow__366__a = vlSelfRef.__Vfunc_sfp_tanh__367__Vfuncout;
        vlSelfRef.__Vfunc_sfp_pow__366__result = 1ULL;
        vlSelfRef.__Vfunc_sfp_pow__366__unnamedblk2__DOT__i = 1U;
        while (VL_LTES_III(32, vlSelfRef.__Vfunc_sfp_pow__366__unnamedblk2__DOT__i, vlSelfRef.__Vfunc_sfp_pow__366__b)) {
            vlSelfRef.__Vfunc_sfp_mul__379__b = vlSelfRef.__Vfunc_sfp_pow__366__a;
            vlSelfRef.__Vfunc_sfp_mul__379__a = vlSelfRef.__Vfunc_sfp_pow__366__result;
            VL_EXTENDS_WQ(128,64, __Vtemp_1626, vlSelfRef.__Vfunc_sfp_mul__379__a);
            VL_EXTENDS_WQ(128,64, __Vtemp_1627, vlSelfRef.__Vfunc_sfp_mul__379__b);
            VL_MULS_WWW(128, __Vtemp_1628, __Vtemp_1626, __Vtemp_1627);
            VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__379__tmp, __Vtemp_1628, 0x20U);
            vlSelfRef.__Vfunc_sfp_mul__379__Vfuncout 
                = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__379__tmp[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__379__tmp[0U])));
            vlSelfRef.__Vfunc_sfp_pow__366__result 
                = vlSelfRef.__Vfunc_sfp_mul__379__Vfuncout;
            vlSelfRef.__Vfunc_sfp_pow__366__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_pow__366__unnamedblk2__DOT__i);
        }
        vlSelfRef.__Vfunc_sfp_pow__366__Vfuncout = vlSelfRef.__Vfunc_sfp_pow__366__result;
        vlSelfRef.__Vfunc_sfp_sub__365__b = vlSelfRef.__Vfunc_sfp_pow__366__Vfuncout;
        vlSelfRef.__Vfunc_sfp_sub__365__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.__Vfunc_sfp_sub__365__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__365__a - vlSelfRef.__Vfunc_sfp_sub__365__b);
        vlSelfRef.__Vfunc_sfp_mul__364__b = vlSelfRef.__Vfunc_sfp_sub__365__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__364__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1630, vlSelfRef.__Vfunc_sfp_mul__364__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1631, vlSelfRef.__Vfunc_sfp_mul__364__b);
        VL_MULS_WWW(128, __Vtemp_1632, __Vtemp_1630, __Vtemp_1631);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__364__tmp, __Vtemp_1632, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__364__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__364__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__364__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__363__b = vlSelfRef.__Vfunc_sfp_mul__364__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__363__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1633, vlSelfRef.__Vfunc_sfp_mul__363__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1634, vlSelfRef.__Vfunc_sfp_mul__363__b);
        VL_MULS_WWW(128, __Vtemp_1635, __Vtemp_1633, __Vtemp_1634);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__363__tmp, __Vtemp_1635, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__363__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__363__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__363__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__362__b = vlSelfRef.__Vfunc_sfp_mul__363__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__362__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__362__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__362__a + vlSelfRef.__Vfunc_sfp_add__362__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__362__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 1U;
    } else if ((3U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_mul__381__b = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__sum)
                                              ? vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__error_gradient_next_layer
                                             [0U] : 0ULL);
        vlSelfRef.__Vfunc_sfp_mul__381__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1636, vlSelfRef.__Vfunc_sfp_mul__381__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1637, vlSelfRef.__Vfunc_sfp_mul__381__b);
        VL_MULS_WWW(128, __Vtemp_1638, __Vtemp_1636, __Vtemp_1637);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__381__tmp, __Vtemp_1638, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__381__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__381__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__381__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__380__b = vlSelfRef.__Vfunc_sfp_mul__381__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__380__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__380__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__380__a + vlSelfRef.__Vfunc_sfp_add__380__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__380__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 1U;
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    }
    __Vfunc_sfp_mul__382__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__values
        [0U];
    __Vfunc_sfp_mul__382__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1639, __Vfunc_sfp_mul__382__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1640, __Vfunc_sfp_mul__382__b);
    VL_MULS_WWW(128, __Vtemp_1641, __Vtemp_1639, __Vtemp_1640);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__382__tmp, __Vtemp_1641, 0x20U);
    __Vfunc_sfp_mul__382__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__382__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__382__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__382__Vfuncout;
    __Vfunc_sfp_mul__382__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__values
        [1U];
    __Vfunc_sfp_mul__382__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1642, __Vfunc_sfp_mul__382__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1643, __Vfunc_sfp_mul__382__b);
    VL_MULS_WWW(128, __Vtemp_1644, __Vtemp_1642, __Vtemp_1643);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__382__tmp, __Vtemp_1644, 0x20U);
    __Vfunc_sfp_mul__382__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__382__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__382__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__382__Vfuncout;
    __Vfunc_sfp_mul__382__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__values
        [2U];
    __Vfunc_sfp_mul__382__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1645, __Vfunc_sfp_mul__382__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1646, __Vfunc_sfp_mul__382__b);
    VL_MULS_WWW(128, __Vtemp_1647, __Vtemp_1645, __Vtemp_1646);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__382__tmp, __Vtemp_1647, 0x20U);
    __Vfunc_sfp_mul__382__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__382__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__382__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__weight_gradient[2U] 
        = __Vfunc_sfp_mul__382__Vfuncout;
    __Vfunc_sfp_mul__382__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__values
        [3U];
    __Vfunc_sfp_mul__382__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1648, __Vfunc_sfp_mul__382__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1649, __Vfunc_sfp_mul__382__b);
    VL_MULS_WWW(128, __Vtemp_1650, __Vtemp_1648, __Vtemp_1649);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__382__tmp, __Vtemp_1650, 0x20U);
    __Vfunc_sfp_mul__382__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__382__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__382__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__weight_gradient[3U] 
        = __Vfunc_sfp_mul__382__Vfuncout;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i = 4U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    if ((1U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_sub__419__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__prediction;
        vlSelfRef.__Vfunc_sfp_sub__419__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.__Vfunc_sfp_sub__419__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__419__a - vlSelfRef.__Vfunc_sfp_sub__419__b);
        vlSelfRef.__Vfunc_sfp_mul__418__b = vlSelfRef.__Vfunc_sfp_sub__419__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__418__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__prediction;
        VL_EXTENDS_WQ(128,64, __Vtemp_1651, vlSelfRef.__Vfunc_sfp_mul__418__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1652, vlSelfRef.__Vfunc_sfp_mul__418__b);
        VL_MULS_WWW(128, __Vtemp_1653, __Vtemp_1651, __Vtemp_1652);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__418__tmp, __Vtemp_1653, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__418__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__418__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__418__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__417__b = vlSelfRef.__Vfunc_sfp_mul__418__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__417__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1654, vlSelfRef.__Vfunc_sfp_mul__417__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1655, vlSelfRef.__Vfunc_sfp_mul__417__b);
        VL_MULS_WWW(128, __Vtemp_1656, __Vtemp_1654, __Vtemp_1655);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__417__tmp, __Vtemp_1656, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__417__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__417__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__417__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__416__b = vlSelfRef.__Vfunc_sfp_mul__417__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__416__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1657, vlSelfRef.__Vfunc_sfp_mul__416__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1658, vlSelfRef.__Vfunc_sfp_mul__416__b);
        VL_MULS_WWW(128, __Vtemp_1659, __Vtemp_1657, __Vtemp_1658);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__416__tmp, __Vtemp_1659, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__416__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__416__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__416__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__415__b = vlSelfRef.__Vfunc_sfp_mul__416__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__415__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__415__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__415__a + vlSelfRef.__Vfunc_sfp_add__415__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__415__Vfuncout;
    } else if ((2U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_pow__424__b = 2U;
        vlSelfRef.__Vfunc_sfp_tanh__425__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__prediction;
        {
            if (VL_GTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__425__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__426__n = 3U;
                            vlSelfRef.__Vfunc_int_to_sfp__426__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__426__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__426__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__425__Vfuncout 
                    = vlSymsp->TOP__FixedPoint.ONE;
                goto __Vlabel117;
            }
            if (VL_LTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__425__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__427__n = 0xfffffffdU;
                            vlSelfRef.__Vfunc_int_to_sfp__427__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__427__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__427__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__425__Vfuncout 
                    = (- vlSymsp->TOP__FixedPoint.ONE);
                goto __Vlabel117;
            }
            vlSelfRef.__Vfunc_sfp_sub__428__b = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__431__a = VL_SHIFTL_QQI(64,64,32, 
                                                              (- vlSelfRef.__Vfunc_sfp_tanh__425__a), 1U);
            vlSelf->__Vfunc_sfp_exp__431__unnamedblk3__DOT__i = 0;
            vlSelf->__Vfunc_sfp_exp__431__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_exp__431__term = VL_RAND_RESET_Q(64);
            vlSelfRef.__Vfunc_sfp_exp__431__result 
                = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__431__term = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__431__unnamedblk3__DOT__i = 1U;
            while (VL_GTS_III(32, 0x14U, vlSelfRef.__Vfunc_sfp_exp__431__unnamedblk3__DOT__i)) {
                vlSelfRef.__Vfunc_int_to_sfp__433__n 
                    = vlSelfRef.__Vfunc_sfp_exp__431__unnamedblk3__DOT__i;
                vlSelfRef.__Vfunc_int_to_sfp__433__Vfuncout 
                    = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__433__n), 0x20U);
                vlSelfRef.__Vfunc_sfp_div__432__b = vlSelfRef.__Vfunc_int_to_sfp__433__Vfuncout;
                vlSelfRef.__Vfunc_sfp_mul__434__b = vlSelfRef.__Vfunc_sfp_exp__431__a;
                vlSelfRef.__Vfunc_sfp_mul__434__a = vlSelfRef.__Vfunc_sfp_exp__431__term;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__434__tmp);
                VL_EXTENDS_WQ(128,64, __Vtemp_1660, vlSelfRef.__Vfunc_sfp_mul__434__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_1661, vlSelfRef.__Vfunc_sfp_mul__434__b);
                VL_MULS_WWW(128, __Vtemp_1662, __Vtemp_1660, __Vtemp_1661);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__434__tmp, __Vtemp_1662, 0x20U);
                vlSelfRef.__Vfunc_sfp_mul__434__Vfuncout 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__434__tmp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__Vfunc_sfp_mul__434__tmp[0U])));
                vlSelfRef.__Vfunc_sfp_div__432__a = vlSelfRef.__Vfunc_sfp_mul__434__Vfuncout;
                __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__432__remainder);
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__432__b_ext);
                vlSelf->__Vfunc_sfp_div__432__result = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__432__sign_bit = VL_RAND_RESET_I(1);
                vlSelf->__Vfunc_sfp_div__432__abs_a = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__432__abs_b = VL_RAND_RESET_Q(64);
                {
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__432__b)) {
                        vlSelfRef.__Vfunc_sfp_div__432__Vfuncout 
                            = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__432__a)
                                ? 0x7fffffffffffffffULL
                                : 0x8000000000000000ULL);
                        goto __Vlabel118;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__432__a)) {
                        vlSelfRef.__Vfunc_sfp_div__432__Vfuncout = 0ULL;
                        goto __Vlabel118;
                    }
                    vlSelfRef.__Vfunc_sfp_div__432__abs_a 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__432__a 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__432__a)
                            : vlSelfRef.__Vfunc_sfp_div__432__a);
                    vlSelfRef.__Vfunc_sfp_div__432__abs_b 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__432__b 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__432__b)
                            : vlSelfRef.__Vfunc_sfp_div__432__b);
                    vlSelfRef.__Vfunc_sfp_div__432__sign_bit 
                        = (IData)(((vlSelfRef.__Vfunc_sfp_div__432__a 
                                    ^ vlSelfRef.__Vfunc_sfp_div__432__b) 
                                   >> 0x3fU));
                    __Vtemp_1663[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__432__abs_a);
                    __Vtemp_1663[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__432__abs_a 
                                                >> 0x20U));
                    __Vtemp_1663[2U] = 0U;
                    __Vtemp_1663[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1663, 0x20U);
                    vlSelfRef.__Vfunc_sfp_div__432__b_ext[0U] 
                        = (IData)(vlSelfRef.__Vfunc_sfp_div__432__abs_b);
                    vlSelfRef.__Vfunc_sfp_div__432__b_ext[1U] 
                        = (IData)((vlSelfRef.__Vfunc_sfp_div__432__abs_b 
                                   >> 0x20U));
                    vlSelfRef.__Vfunc_sfp_div__432__b_ext[2U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__432__b_ext[3U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__432__result = 0ULL;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1665, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1665)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1667, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_1666, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1667);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1666[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1666[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1666[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1666[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1669, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1669)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1671, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_1670, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1671);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1670[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1670[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1670[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1670[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1673, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1673)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1675, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_1674, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1675);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1674[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1674[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1674[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1674[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1677, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1677)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1679, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_1678, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1679);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1678[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1678[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1678[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1678[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1681, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1681)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1683, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_1682, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1683);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1682[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1682[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1682[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1682[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1685, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1685)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1687, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_1686, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1687);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1686[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1686[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1686[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1686[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1689, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1689)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1691, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_1690, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1691);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1690[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1690[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1690[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1690[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1693, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1693)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1695, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_1694, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1695);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1694[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1694[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1694[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1694[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1697, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1697)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1699, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_1698, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1699);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1698[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1698[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1698[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1698[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1701, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1701)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1703, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_1702, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1703);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1702[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1702[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1702[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1702[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1705, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1705)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1707, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_1706, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1707);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1706[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1706[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1706[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1706[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1709, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1709)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1711, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_1710, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1711);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1710[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1710[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1710[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1710[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1713, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1713)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1715, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_1714, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1715);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1714[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1714[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1714[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1714[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1717, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1717)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1719, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_1718, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1719);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1718[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1718[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1718[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1718[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1721, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1721)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1723, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_1722, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1723);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1722[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1722[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1722[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1722[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1725, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1725)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1727, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_1726, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1727);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1726[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1726[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1726[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1726[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1729, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1729)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1731, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_1730, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1731);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1730[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1730[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1730[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1730[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1733, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1733)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1735, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_1734, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1735);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1734[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1734[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1734[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1734[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1737, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1737)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1739, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_1738, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1739);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1738[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1738[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1738[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1738[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1741, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1741)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1743, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_1742, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1743);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1742[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1742[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1742[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1742[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1745, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1745)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1747, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_1746, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1747);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1746[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1746[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1746[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1746[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1749, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1749)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1751, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_1750, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1751);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1750[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1750[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1750[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1750[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1753, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1753)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1755, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_1754, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1755);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1754[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1754[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1754[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1754[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1757, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1757)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1759, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_1758, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1759);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1758[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1758[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1758[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1758[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1761, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1761)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1763, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_1762, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1763);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1762[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1762[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1762[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1762[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1765, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1765)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1767, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_1766, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1767);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1766[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1766[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1766[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1766[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1769, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1769)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1771, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_1770, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1771);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1770[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1770[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1770[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1770[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1773, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1773)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1775, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_1774, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1775);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1774[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1774[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1774[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1774[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1777, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1777)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1779, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_1778, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1779);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1778[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1778[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1778[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1778[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1781, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1781)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1783, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_1782, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1783);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1782[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1782[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1782[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1782[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1785, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1785)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1787, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_1786, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1787);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1786[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1786[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1786[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1786[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1789, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1789)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1791, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_1790, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1791);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1790[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1790[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1790[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1790[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1793, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1793)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1795, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_1794, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1795);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1794[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1794[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1794[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1794[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1797, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1797)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1799, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_1798, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1799);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1798[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1798[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1798[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1798[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1801, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1801)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1803, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_1802, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1803);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1802[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1802[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1802[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1802[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1805, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1805)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1807, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_1806, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1807);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1806[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1806[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1806[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1806[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1809, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1809)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1811, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_1810, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1811);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1810[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1810[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1810[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1810[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1813, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1813)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1815, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_1814, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1815);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1814[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1814[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1814[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1814[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1817, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1817)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1819, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_1818, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1819);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1818[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1818[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1818[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1818[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1821, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1821)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1823, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_1822, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1823);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1822[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1822[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1822[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1822[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1825, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1825)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1827, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_1826, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1827);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1826[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1826[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1826[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1826[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1829, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1829)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1831, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_1830, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1831);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1830[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1830[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1830[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1830[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1833, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1833)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1835, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_1834, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1835);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1834[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1834[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1834[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1834[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1837, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1837)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1839, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_1838, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1839);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1838[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1838[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1838[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1838[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1841, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1841)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1843, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_1842, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1843);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1842[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1842[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1842[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1842[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1845, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1845)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1847, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_1846, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1847);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1846[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1846[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1846[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1846[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1849, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1849)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1851, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_1850, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1851);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1850[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1850[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1850[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1850[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1853, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1853)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1855, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_1854, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1855);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1854[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1854[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1854[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1854[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1857, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1857)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1859, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_1858, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1859);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1858[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1858[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1858[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1858[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1861, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1861)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1863, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_1862, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1863);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1862[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1862[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1862[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1862[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1865, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1865)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1867, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_1866, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1867);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1866[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1866[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1866[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1866[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1869, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1869)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1871, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_1870, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1871);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1870[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1870[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1870[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1870[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1873, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1873)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1875, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_1874, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1875);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1874[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1874[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1874[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1874[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1877, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1877)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1879, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_1878, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1879);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1878[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1878[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1878[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1878[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1881, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1881)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1883, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_1882, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1883);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1882[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1882[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1882[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1882[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1885, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1885)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1887, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_1886, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1887);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1886[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1886[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1886[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1886[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1889, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1889)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1891, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_1890, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1891);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1890[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1890[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1890[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1890[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1893, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1893)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1895, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_1894, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1895);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1894[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1894[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1894[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1894[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1897, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1897)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1899, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_1898, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1899);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1898[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1898[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1898[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1898[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1901, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1901)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1903, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_1902, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1903);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1902[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1902[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1902[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1902[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1905, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1905)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1907, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_1906, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1907);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1906[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1906[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1906[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1906[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1909, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1909)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1911, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_1910, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1911);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1910[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1910[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1910[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1910[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1913, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1913)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1915, vlSelfRef.__Vfunc_sfp_div__432__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_1914, vlSelfRef.__Vfunc_sfp_div__432__remainder, __Vtemp_1915);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1914[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1914[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1914[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1914[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__432__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__432__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__432__remainder, vlSelfRef.__Vfunc_sfp_div__432__b_ext)) {
                        VL_SUB_W(4, __Vtemp_1917, vlSelfRef.__Vfunc_sfp_div__432__remainder, vlSelfRef.__Vfunc_sfp_div__432__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[0U] 
                            = __Vtemp_1917[0U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[1U] 
                            = __Vtemp_1917[1U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[2U] 
                            = __Vtemp_1917[2U];
                        vlSelfRef.__Vfunc_sfp_div__432__remainder[3U] 
                            = __Vtemp_1917[3U];
                        vlSelfRef.__Vfunc_sfp_div__432__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__432__result);
                    }
                    __Vfunc_sfp_div__432__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__432__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__432__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__432__result)
                            : vlSelfRef.__Vfunc_sfp_div__432__result);
                    __Vlabel118: ;
                }
                vlSelfRef.__Vfunc_sfp_exp__431__term 
                    = vlSelfRef.__Vfunc_sfp_div__432__Vfuncout;
                vlSelfRef.__Vfunc_sfp_add__435__b = vlSelfRef.__Vfunc_sfp_exp__431__term;
                vlSelfRef.__Vfunc_sfp_add__435__a = vlSelfRef.__Vfunc_sfp_exp__431__result;
                vlSelfRef.__Vfunc_sfp_add__435__Vfuncout 
                    = (vlSelfRef.__Vfunc_sfp_add__435__a 
                       + vlSelfRef.__Vfunc_sfp_add__435__b);
                vlSelfRef.__Vfunc_sfp_exp__431__result 
                    = vlSelfRef.__Vfunc_sfp_add__435__Vfuncout;
                vlSelfRef.__Vfunc_sfp_exp__431__unnamedblk3__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_exp__431__unnamedblk3__DOT__i);
            }
            vlSelfRef.__Vfunc_sfp_exp__431__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_exp__431__result;
            vlSelfRef.__Vfunc_sfp_add__430__b = vlSelfRef.__Vfunc_sfp_exp__431__Vfuncout;
            vlSelfRef.__Vfunc_sfp_add__430__a = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_add__430__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_add__430__a 
                   + vlSelfRef.__Vfunc_sfp_add__430__b);
            vlSelfRef.__Vfunc_sfp_div__429__b = vlSelfRef.__Vfunc_sfp_add__430__Vfuncout;
            vlSelfRef.__Vfunc_int_to_sfp__436__n = 2U;
            vlSelfRef.__Vfunc_int_to_sfp__436__Vfuncout 
                = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__436__n), 0x20U);
            vlSelfRef.__Vfunc_sfp_div__429__a = vlSelfRef.__Vfunc_int_to_sfp__436__Vfuncout;
            __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0;
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__429__remainder);
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__429__b_ext);
            vlSelf->__Vfunc_sfp_div__429__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__429__sign_bit = VL_RAND_RESET_I(1);
            vlSelf->__Vfunc_sfp_div__429__abs_a = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__429__abs_b = VL_RAND_RESET_Q(64);
            {
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__429__b)) {
                    vlSelfRef.__Vfunc_sfp_div__429__Vfuncout 
                        = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__429__a)
                            ? 0x7fffffffffffffffULL
                            : 0x8000000000000000ULL);
                    goto __Vlabel119;
                }
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__429__a)) {
                    vlSelfRef.__Vfunc_sfp_div__429__Vfuncout = 0ULL;
                    goto __Vlabel119;
                }
                vlSelfRef.__Vfunc_sfp_div__429__abs_a 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__429__a 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__429__a)
                        : vlSelfRef.__Vfunc_sfp_div__429__a);
                vlSelfRef.__Vfunc_sfp_div__429__abs_b 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__429__b 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__429__b)
                        : vlSelfRef.__Vfunc_sfp_div__429__b);
                vlSelfRef.__Vfunc_sfp_div__429__sign_bit 
                    = (IData)(((vlSelfRef.__Vfunc_sfp_div__429__a 
                                ^ vlSelfRef.__Vfunc_sfp_div__429__b) 
                               >> 0x3fU));
                __Vtemp_1919[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__429__abs_a);
                __Vtemp_1919[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__429__abs_a 
                                            >> 0x20U));
                __Vtemp_1919[2U] = 0U;
                __Vtemp_1919[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1919, 0x20U);
                vlSelfRef.__Vfunc_sfp_div__429__b_ext[0U] 
                    = (IData)(vlSelfRef.__Vfunc_sfp_div__429__abs_b);
                vlSelfRef.__Vfunc_sfp_div__429__b_ext[1U] 
                    = (IData)((vlSelfRef.__Vfunc_sfp_div__429__abs_b 
                               >> 0x20U));
                vlSelfRef.__Vfunc_sfp_div__429__b_ext[2U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__429__b_ext[3U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__429__result = 0ULL;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1921, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1921)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1923, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_1922, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1923);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_1922[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_1922[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_1922[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_1922[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1925, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1925)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1927, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_1926, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1927);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_1926[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_1926[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_1926[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_1926[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1929, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1929)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1931, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_1930, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1931);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_1930[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_1930[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_1930[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_1930[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1933, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1933)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1935, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_1934, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1935);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_1934[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_1934[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_1934[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_1934[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1937, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1937)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1939, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_1938, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1939);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_1938[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_1938[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_1938[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_1938[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1941, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1941)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1943, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_1942, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1943);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_1942[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_1942[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_1942[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_1942[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1945, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1945)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1947, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_1946, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1947);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_1946[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_1946[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_1946[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_1946[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1949, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1949)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1951, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_1950, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1951);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_1950[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_1950[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_1950[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_1950[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1953, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1953)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1955, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_1954, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1955);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_1954[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_1954[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_1954[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_1954[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1957, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1957)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1959, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_1958, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1959);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_1958[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_1958[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_1958[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_1958[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1961, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1961)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1963, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_1962, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1963);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_1962[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_1962[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_1962[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_1962[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1965, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1965)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1967, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_1966, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1967);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_1966[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_1966[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_1966[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_1966[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1969, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1969)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1971, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_1970, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1971);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_1970[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_1970[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_1970[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_1970[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1973, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1973)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1975, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_1974, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1975);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_1974[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_1974[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_1974[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_1974[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1977, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1977)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1979, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_1978, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1979);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_1978[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_1978[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_1978[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_1978[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1981, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1981)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1983, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_1982, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1983);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_1982[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_1982[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_1982[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_1982[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1985, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1985)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1987, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_1986, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1987);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_1986[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_1986[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_1986[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_1986[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1989, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1989)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1991, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_1990, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1991);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_1990[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_1990[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_1990[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_1990[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1993, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1993)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1995, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_1994, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1995);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_1994[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_1994[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_1994[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_1994[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1997, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1997)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1999, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_1998, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_1999);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_1998[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_1998[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_1998[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_1998[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2001, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2001)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2003, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_2002, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2003);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2002[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2002[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2002[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2002[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2005, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2005)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2007, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_2006, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2007);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2006[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2006[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2006[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2006[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2009, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2009)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2011, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_2010, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2011);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2010[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2010[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2010[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2010[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2013, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2013)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2015, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_2014, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2015);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2014[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2014[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2014[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2014[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2017, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2017)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2019, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_2018, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2019);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2018[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2018[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2018[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2018[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2021, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2021)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2023, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_2022, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2023);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2022[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2022[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2022[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2022[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2025, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2025)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2027, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_2026, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2027);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2026[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2026[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2026[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2026[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2029, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2029)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2031, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_2030, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2031);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2030[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2030[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2030[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2030[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2033, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2033)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2035, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_2034, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2035);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2034[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2034[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2034[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2034[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2037, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2037)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2039, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_2038, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2039);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2038[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2038[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2038[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2038[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2041, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2041)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2043, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_2042, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2043);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2042[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2042[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2042[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2042[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2045, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2045)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2047, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_2046, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2047);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2046[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2046[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2046[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2046[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2049, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2049)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2051, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_2050, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2051);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2050[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2050[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2050[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2050[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2053, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2053)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2055, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_2054, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2055);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2054[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2054[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2054[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2054[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2057, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2057)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2059, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_2058, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2059);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2058[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2058[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2058[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2058[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2061, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2061)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2063, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_2062, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2063);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2062[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2062[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2062[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2062[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2065, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2065)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2067, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_2066, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2067);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2066[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2066[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2066[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2066[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2069, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2069)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2071, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_2070, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2071);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2070[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2070[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2070[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2070[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2073, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2073)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2075, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_2074, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2075);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2074[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2074[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2074[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2074[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2077, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2077)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2079, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_2078, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2079);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2078[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2078[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2078[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2078[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2081, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2081)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2083, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_2082, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2083);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2082[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2082[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2082[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2082[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2085, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2085)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2087, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_2086, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2087);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2086[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2086[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2086[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2086[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2089, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2089)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2091, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_2090, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2091);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2090[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2090[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2090[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2090[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2093, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2093)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2095, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_2094, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2095);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2094[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2094[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2094[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2094[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2097, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2097)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2099, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_2098, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2099);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2098[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2098[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2098[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2098[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2101, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2101)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2103, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_2102, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2103);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2102[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2102[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2102[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2102[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2105, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2105)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2107, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_2106, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2107);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2106[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2106[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2106[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2106[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2109, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2109)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2111, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_2110, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2111);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2110[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2110[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2110[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2110[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2113, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2113)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2115, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_2114, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2115);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2114[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2114[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2114[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2114[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2117, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2117)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2119, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_2118, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2119);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2118[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2118[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2118[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2118[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2121, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2121)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2123, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_2122, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2123);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2122[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2122[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2122[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2122[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2125, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2125)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2127, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_2126, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2127);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2126[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2126[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2126[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2126[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2129, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2129)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2131, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_2130, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2131);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2130[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2130[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2130[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2130[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2133, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2133)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2135, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_2134, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2135);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2134[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2134[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2134[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2134[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2137, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2137)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2139, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_2138, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2139);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2138[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2138[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2138[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2138[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2141, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2141)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2143, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_2142, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2143);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2142[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2142[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2142[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2142[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2145, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2145)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2147, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_2146, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2147);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2146[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2146[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2146[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2146[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2149, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2149)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2151, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_2150, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2151);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2150[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2150[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2150[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2150[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2153, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2153)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2155, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_2154, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2155);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2154[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2154[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2154[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2154[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2157, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2157)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2159, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_2158, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2159);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2158[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2158[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2158[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2158[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2161, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2161)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2163, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_2162, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2163);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2162[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2162[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2162[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2162[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2165, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2165)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2167, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_2166, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2167);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2166[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2166[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2166[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2166[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2169, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2169)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2171, vlSelfRef.__Vfunc_sfp_div__429__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_2170, vlSelfRef.__Vfunc_sfp_div__429__remainder, __Vtemp_2171);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2170[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2170[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2170[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2170[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__429__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__429__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__429__remainder, vlSelfRef.__Vfunc_sfp_div__429__b_ext)) {
                    VL_SUB_W(4, __Vtemp_2173, vlSelfRef.__Vfunc_sfp_div__429__remainder, vlSelfRef.__Vfunc_sfp_div__429__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[0U] 
                        = __Vtemp_2173[0U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[1U] 
                        = __Vtemp_2173[1U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[2U] 
                        = __Vtemp_2173[2U];
                    vlSelfRef.__Vfunc_sfp_div__429__remainder[3U] 
                        = __Vtemp_2173[3U];
                    vlSelfRef.__Vfunc_sfp_div__429__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__429__result);
                }
                __Vfunc_sfp_div__429__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_sfp_div__429__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_sfp_div__429__sign_bit)
                        ? (- vlSelfRef.__Vfunc_sfp_div__429__result)
                        : vlSelfRef.__Vfunc_sfp_div__429__result);
                __Vlabel119: ;
            }
            vlSelfRef.__Vfunc_sfp_sub__428__a = vlSelfRef.__Vfunc_sfp_div__429__Vfuncout;
            vlSelfRef.__Vfunc_sfp_sub__428__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_sub__428__a 
                   - vlSelfRef.__Vfunc_sfp_sub__428__b);
            vlSelfRef.__Vfunc_sfp_tanh__425__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_sub__428__Vfuncout;
            __Vlabel117: ;
        }
        vlSelfRef.__Vfunc_sfp_pow__424__a = vlSelfRef.__Vfunc_sfp_tanh__425__Vfuncout;
        vlSelfRef.__Vfunc_sfp_pow__424__result = 1ULL;
        vlSelfRef.__Vfunc_sfp_pow__424__unnamedblk2__DOT__i = 1U;
        while (VL_LTES_III(32, vlSelfRef.__Vfunc_sfp_pow__424__unnamedblk2__DOT__i, vlSelfRef.__Vfunc_sfp_pow__424__b)) {
            vlSelfRef.__Vfunc_sfp_mul__437__b = vlSelfRef.__Vfunc_sfp_pow__424__a;
            vlSelfRef.__Vfunc_sfp_mul__437__a = vlSelfRef.__Vfunc_sfp_pow__424__result;
            VL_EXTENDS_WQ(128,64, __Vtemp_2174, vlSelfRef.__Vfunc_sfp_mul__437__a);
            VL_EXTENDS_WQ(128,64, __Vtemp_2175, vlSelfRef.__Vfunc_sfp_mul__437__b);
            VL_MULS_WWW(128, __Vtemp_2176, __Vtemp_2174, __Vtemp_2175);
            VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__437__tmp, __Vtemp_2176, 0x20U);
            vlSelfRef.__Vfunc_sfp_mul__437__Vfuncout 
                = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__437__tmp[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__437__tmp[0U])));
            vlSelfRef.__Vfunc_sfp_pow__424__result 
                = vlSelfRef.__Vfunc_sfp_mul__437__Vfuncout;
            vlSelfRef.__Vfunc_sfp_pow__424__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_pow__424__unnamedblk2__DOT__i);
        }
        vlSelfRef.__Vfunc_sfp_pow__424__Vfuncout = vlSelfRef.__Vfunc_sfp_pow__424__result;
        vlSelfRef.__Vfunc_sfp_sub__423__b = vlSelfRef.__Vfunc_sfp_pow__424__Vfuncout;
        vlSelfRef.__Vfunc_sfp_sub__423__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.__Vfunc_sfp_sub__423__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__423__a - vlSelfRef.__Vfunc_sfp_sub__423__b);
        vlSelfRef.__Vfunc_sfp_mul__422__b = vlSelfRef.__Vfunc_sfp_sub__423__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__422__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_2178, vlSelfRef.__Vfunc_sfp_mul__422__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_2179, vlSelfRef.__Vfunc_sfp_mul__422__b);
        VL_MULS_WWW(128, __Vtemp_2180, __Vtemp_2178, __Vtemp_2179);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__422__tmp, __Vtemp_2180, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__422__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__422__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__422__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__421__b = vlSelfRef.__Vfunc_sfp_mul__422__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__421__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_2181, vlSelfRef.__Vfunc_sfp_mul__421__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_2182, vlSelfRef.__Vfunc_sfp_mul__421__b);
        VL_MULS_WWW(128, __Vtemp_2183, __Vtemp_2181, __Vtemp_2182);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__421__tmp, __Vtemp_2183, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__421__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__421__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__421__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__420__b = vlSelfRef.__Vfunc_sfp_mul__421__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__420__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__420__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__420__a + vlSelfRef.__Vfunc_sfp_add__420__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__420__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 1U;
    } else if ((3U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_mul__439__b = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__sum)
                                              ? vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__error_gradient_next_layer
                                             [0U] : 0ULL);
        vlSelfRef.__Vfunc_sfp_mul__439__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_2184, vlSelfRef.__Vfunc_sfp_mul__439__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_2185, vlSelfRef.__Vfunc_sfp_mul__439__b);
        VL_MULS_WWW(128, __Vtemp_2186, __Vtemp_2184, __Vtemp_2185);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__439__tmp, __Vtemp_2186, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__439__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__439__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__439__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__438__b = vlSelfRef.__Vfunc_sfp_mul__439__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__438__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__438__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__438__a + vlSelfRef.__Vfunc_sfp_add__438__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__438__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 1U;
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    }
    __Vfunc_sfp_mul__440__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__values
        [0U];
    __Vfunc_sfp_mul__440__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_2187, __Vfunc_sfp_mul__440__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_2188, __Vfunc_sfp_mul__440__b);
    VL_MULS_WWW(128, __Vtemp_2189, __Vtemp_2187, __Vtemp_2188);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__440__tmp, __Vtemp_2189, 0x20U);
    __Vfunc_sfp_mul__440__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__440__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__440__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__440__Vfuncout;
    __Vfunc_sfp_mul__440__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__values
        [1U];
    __Vfunc_sfp_mul__440__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_2190, __Vfunc_sfp_mul__440__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_2191, __Vfunc_sfp_mul__440__b);
    VL_MULS_WWW(128, __Vtemp_2192, __Vtemp_2190, __Vtemp_2191);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__440__tmp, __Vtemp_2192, 0x20U);
    __Vfunc_sfp_mul__440__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__440__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__440__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__440__Vfuncout;
    __Vfunc_sfp_mul__440__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__values
        [2U];
    __Vfunc_sfp_mul__440__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_2193, __Vfunc_sfp_mul__440__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_2194, __Vfunc_sfp_mul__440__b);
    VL_MULS_WWW(128, __Vtemp_2195, __Vtemp_2193, __Vtemp_2194);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__440__tmp, __Vtemp_2195, 0x20U);
    __Vfunc_sfp_mul__440__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__440__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__440__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__weight_gradient[2U] 
        = __Vfunc_sfp_mul__440__Vfuncout;
    __Vfunc_sfp_mul__440__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__values
        [3U];
    __Vfunc_sfp_mul__440__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_2196, __Vfunc_sfp_mul__440__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_2197, __Vfunc_sfp_mul__440__b);
    VL_MULS_WWW(128, __Vtemp_2198, __Vtemp_2196, __Vtemp_2197);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__440__tmp, __Vtemp_2198, 0x20U);
    __Vfunc_sfp_mul__440__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__440__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__440__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__weight_gradient[3U] 
        = __Vfunc_sfp_mul__440__Vfuncout;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i = 4U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients[0U][0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients[0U][1U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients[0U][2U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients[0U][3U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients[1U][0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients[1U][1U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients[1U][2U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__2__KET____DOT__hidden_perceptron__error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients[1U][3U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__3__KET____DOT__hidden_perceptron__error_gradient;
}
