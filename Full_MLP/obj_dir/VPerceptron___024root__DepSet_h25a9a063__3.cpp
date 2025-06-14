// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron__Syms.h"
#include "VPerceptron___024root.h"

VL_INLINE_OPT void VPerceptron___024root___nba_sequent__TOP__1(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___nba_sequent__TOP__1\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ BenchMLP__DOT__mlp__DOT____Vlvbound_hadc1fea3__0;
    BenchMLP__DOT__mlp__DOT____Vlvbound_hadc1fea3__0 = 0;
    IData/*31:0*/ __Vfunc_sfp_div__1__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_sfp_div__5__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_sfp_div__23__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_sfp_div__26__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0;
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
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_25;
    VlWide<4>/*127:0*/ __Vtemp_27;
    VlWide<4>/*127:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_31;
    VlWide<4>/*127:0*/ __Vtemp_32;
    VlWide<4>/*127:0*/ __Vtemp_33;
    VlWide<4>/*127:0*/ __Vtemp_35;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_37;
    VlWide<4>/*127:0*/ __Vtemp_39;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_41;
    VlWide<4>/*127:0*/ __Vtemp_43;
    VlWide<4>/*127:0*/ __Vtemp_44;
    VlWide<4>/*127:0*/ __Vtemp_45;
    VlWide<4>/*127:0*/ __Vtemp_47;
    VlWide<4>/*127:0*/ __Vtemp_48;
    VlWide<4>/*127:0*/ __Vtemp_49;
    VlWide<4>/*127:0*/ __Vtemp_51;
    VlWide<4>/*127:0*/ __Vtemp_52;
    VlWide<4>/*127:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_55;
    VlWide<4>/*127:0*/ __Vtemp_56;
    VlWide<4>/*127:0*/ __Vtemp_57;
    VlWide<4>/*127:0*/ __Vtemp_59;
    VlWide<4>/*127:0*/ __Vtemp_60;
    VlWide<4>/*127:0*/ __Vtemp_61;
    VlWide<4>/*127:0*/ __Vtemp_63;
    VlWide<4>/*127:0*/ __Vtemp_64;
    VlWide<4>/*127:0*/ __Vtemp_65;
    VlWide<4>/*127:0*/ __Vtemp_67;
    VlWide<4>/*127:0*/ __Vtemp_68;
    VlWide<4>/*127:0*/ __Vtemp_69;
    VlWide<4>/*127:0*/ __Vtemp_71;
    VlWide<4>/*127:0*/ __Vtemp_72;
    VlWide<4>/*127:0*/ __Vtemp_73;
    VlWide<4>/*127:0*/ __Vtemp_75;
    VlWide<4>/*127:0*/ __Vtemp_76;
    VlWide<4>/*127:0*/ __Vtemp_77;
    VlWide<4>/*127:0*/ __Vtemp_79;
    VlWide<4>/*127:0*/ __Vtemp_80;
    VlWide<4>/*127:0*/ __Vtemp_81;
    VlWide<4>/*127:0*/ __Vtemp_83;
    VlWide<4>/*127:0*/ __Vtemp_84;
    VlWide<4>/*127:0*/ __Vtemp_85;
    VlWide<4>/*127:0*/ __Vtemp_87;
    VlWide<4>/*127:0*/ __Vtemp_88;
    VlWide<4>/*127:0*/ __Vtemp_89;
    VlWide<4>/*127:0*/ __Vtemp_91;
    VlWide<4>/*127:0*/ __Vtemp_92;
    VlWide<4>/*127:0*/ __Vtemp_93;
    VlWide<4>/*127:0*/ __Vtemp_95;
    VlWide<4>/*127:0*/ __Vtemp_96;
    VlWide<4>/*127:0*/ __Vtemp_97;
    VlWide<4>/*127:0*/ __Vtemp_99;
    VlWide<4>/*127:0*/ __Vtemp_100;
    VlWide<4>/*127:0*/ __Vtemp_101;
    VlWide<4>/*127:0*/ __Vtemp_103;
    VlWide<4>/*127:0*/ __Vtemp_104;
    VlWide<4>/*127:0*/ __Vtemp_105;
    VlWide<4>/*127:0*/ __Vtemp_107;
    VlWide<4>/*127:0*/ __Vtemp_108;
    VlWide<4>/*127:0*/ __Vtemp_109;
    VlWide<4>/*127:0*/ __Vtemp_111;
    VlWide<4>/*127:0*/ __Vtemp_112;
    VlWide<4>/*127:0*/ __Vtemp_113;
    VlWide<4>/*127:0*/ __Vtemp_115;
    VlWide<4>/*127:0*/ __Vtemp_116;
    VlWide<4>/*127:0*/ __Vtemp_117;
    VlWide<4>/*127:0*/ __Vtemp_119;
    VlWide<4>/*127:0*/ __Vtemp_120;
    VlWide<4>/*127:0*/ __Vtemp_121;
    VlWide<4>/*127:0*/ __Vtemp_123;
    VlWide<4>/*127:0*/ __Vtemp_124;
    VlWide<4>/*127:0*/ __Vtemp_125;
    VlWide<4>/*127:0*/ __Vtemp_127;
    VlWide<4>/*127:0*/ __Vtemp_128;
    VlWide<4>/*127:0*/ __Vtemp_129;
    VlWide<4>/*127:0*/ __Vtemp_131;
    VlWide<4>/*127:0*/ __Vtemp_132;
    VlWide<4>/*127:0*/ __Vtemp_133;
    VlWide<4>/*127:0*/ __Vtemp_135;
    VlWide<4>/*127:0*/ __Vtemp_136;
    VlWide<4>/*127:0*/ __Vtemp_137;
    VlWide<4>/*127:0*/ __Vtemp_139;
    VlWide<4>/*127:0*/ __Vtemp_140;
    VlWide<4>/*127:0*/ __Vtemp_141;
    VlWide<4>/*127:0*/ __Vtemp_143;
    VlWide<4>/*127:0*/ __Vtemp_144;
    VlWide<4>/*127:0*/ __Vtemp_145;
    VlWide<4>/*127:0*/ __Vtemp_147;
    VlWide<4>/*127:0*/ __Vtemp_148;
    VlWide<4>/*127:0*/ __Vtemp_149;
    VlWide<4>/*127:0*/ __Vtemp_151;
    VlWide<4>/*127:0*/ __Vtemp_152;
    VlWide<4>/*127:0*/ __Vtemp_153;
    VlWide<4>/*127:0*/ __Vtemp_155;
    VlWide<4>/*127:0*/ __Vtemp_156;
    VlWide<4>/*127:0*/ __Vtemp_157;
    VlWide<4>/*127:0*/ __Vtemp_159;
    VlWide<4>/*127:0*/ __Vtemp_160;
    VlWide<4>/*127:0*/ __Vtemp_161;
    VlWide<4>/*127:0*/ __Vtemp_163;
    VlWide<4>/*127:0*/ __Vtemp_164;
    VlWide<4>/*127:0*/ __Vtemp_165;
    VlWide<4>/*127:0*/ __Vtemp_167;
    VlWide<4>/*127:0*/ __Vtemp_168;
    VlWide<4>/*127:0*/ __Vtemp_169;
    VlWide<4>/*127:0*/ __Vtemp_171;
    VlWide<4>/*127:0*/ __Vtemp_172;
    VlWide<4>/*127:0*/ __Vtemp_173;
    VlWide<4>/*127:0*/ __Vtemp_175;
    VlWide<4>/*127:0*/ __Vtemp_176;
    VlWide<4>/*127:0*/ __Vtemp_177;
    VlWide<4>/*127:0*/ __Vtemp_179;
    VlWide<4>/*127:0*/ __Vtemp_180;
    VlWide<4>/*127:0*/ __Vtemp_181;
    VlWide<4>/*127:0*/ __Vtemp_183;
    VlWide<4>/*127:0*/ __Vtemp_184;
    VlWide<4>/*127:0*/ __Vtemp_185;
    VlWide<4>/*127:0*/ __Vtemp_187;
    VlWide<4>/*127:0*/ __Vtemp_188;
    VlWide<4>/*127:0*/ __Vtemp_189;
    VlWide<4>/*127:0*/ __Vtemp_191;
    VlWide<4>/*127:0*/ __Vtemp_192;
    VlWide<4>/*127:0*/ __Vtemp_193;
    VlWide<4>/*127:0*/ __Vtemp_195;
    VlWide<4>/*127:0*/ __Vtemp_196;
    VlWide<4>/*127:0*/ __Vtemp_197;
    VlWide<4>/*127:0*/ __Vtemp_199;
    VlWide<4>/*127:0*/ __Vtemp_200;
    VlWide<4>/*127:0*/ __Vtemp_201;
    VlWide<4>/*127:0*/ __Vtemp_203;
    VlWide<4>/*127:0*/ __Vtemp_204;
    VlWide<4>/*127:0*/ __Vtemp_205;
    VlWide<4>/*127:0*/ __Vtemp_207;
    VlWide<4>/*127:0*/ __Vtemp_208;
    VlWide<4>/*127:0*/ __Vtemp_209;
    VlWide<4>/*127:0*/ __Vtemp_211;
    VlWide<4>/*127:0*/ __Vtemp_212;
    VlWide<4>/*127:0*/ __Vtemp_213;
    VlWide<4>/*127:0*/ __Vtemp_215;
    VlWide<4>/*127:0*/ __Vtemp_216;
    VlWide<4>/*127:0*/ __Vtemp_217;
    VlWide<4>/*127:0*/ __Vtemp_219;
    VlWide<4>/*127:0*/ __Vtemp_220;
    VlWide<4>/*127:0*/ __Vtemp_221;
    VlWide<4>/*127:0*/ __Vtemp_223;
    VlWide<4>/*127:0*/ __Vtemp_224;
    VlWide<4>/*127:0*/ __Vtemp_225;
    VlWide<4>/*127:0*/ __Vtemp_227;
    VlWide<4>/*127:0*/ __Vtemp_228;
    VlWide<4>/*127:0*/ __Vtemp_229;
    VlWide<4>/*127:0*/ __Vtemp_231;
    VlWide<4>/*127:0*/ __Vtemp_232;
    VlWide<4>/*127:0*/ __Vtemp_233;
    VlWide<4>/*127:0*/ __Vtemp_235;
    VlWide<4>/*127:0*/ __Vtemp_236;
    VlWide<4>/*127:0*/ __Vtemp_237;
    VlWide<4>/*127:0*/ __Vtemp_239;
    VlWide<4>/*127:0*/ __Vtemp_240;
    VlWide<4>/*127:0*/ __Vtemp_241;
    VlWide<4>/*127:0*/ __Vtemp_243;
    VlWide<4>/*127:0*/ __Vtemp_244;
    VlWide<4>/*127:0*/ __Vtemp_245;
    VlWide<4>/*127:0*/ __Vtemp_247;
    VlWide<4>/*127:0*/ __Vtemp_248;
    VlWide<4>/*127:0*/ __Vtemp_249;
    VlWide<4>/*127:0*/ __Vtemp_251;
    VlWide<4>/*127:0*/ __Vtemp_252;
    VlWide<4>/*127:0*/ __Vtemp_253;
    VlWide<4>/*127:0*/ __Vtemp_255;
    VlWide<4>/*127:0*/ __Vtemp_256;
    VlWide<4>/*127:0*/ __Vtemp_258;
    VlWide<4>/*127:0*/ __Vtemp_259;
    VlWide<4>/*127:0*/ __Vtemp_260;
    VlWide<4>/*127:0*/ __Vtemp_262;
    VlWide<4>/*127:0*/ __Vtemp_263;
    VlWide<4>/*127:0*/ __Vtemp_264;
    VlWide<4>/*127:0*/ __Vtemp_266;
    VlWide<4>/*127:0*/ __Vtemp_267;
    VlWide<4>/*127:0*/ __Vtemp_268;
    VlWide<4>/*127:0*/ __Vtemp_270;
    VlWide<4>/*127:0*/ __Vtemp_271;
    VlWide<4>/*127:0*/ __Vtemp_272;
    VlWide<4>/*127:0*/ __Vtemp_274;
    VlWide<4>/*127:0*/ __Vtemp_275;
    VlWide<4>/*127:0*/ __Vtemp_276;
    VlWide<4>/*127:0*/ __Vtemp_278;
    VlWide<4>/*127:0*/ __Vtemp_279;
    VlWide<4>/*127:0*/ __Vtemp_280;
    VlWide<4>/*127:0*/ __Vtemp_282;
    VlWide<4>/*127:0*/ __Vtemp_283;
    VlWide<4>/*127:0*/ __Vtemp_284;
    VlWide<4>/*127:0*/ __Vtemp_286;
    VlWide<4>/*127:0*/ __Vtemp_287;
    VlWide<4>/*127:0*/ __Vtemp_288;
    VlWide<4>/*127:0*/ __Vtemp_290;
    VlWide<4>/*127:0*/ __Vtemp_291;
    VlWide<4>/*127:0*/ __Vtemp_292;
    VlWide<4>/*127:0*/ __Vtemp_294;
    VlWide<4>/*127:0*/ __Vtemp_295;
    VlWide<4>/*127:0*/ __Vtemp_296;
    VlWide<4>/*127:0*/ __Vtemp_298;
    VlWide<4>/*127:0*/ __Vtemp_299;
    VlWide<4>/*127:0*/ __Vtemp_300;
    VlWide<4>/*127:0*/ __Vtemp_302;
    VlWide<4>/*127:0*/ __Vtemp_303;
    VlWide<4>/*127:0*/ __Vtemp_304;
    VlWide<4>/*127:0*/ __Vtemp_306;
    VlWide<4>/*127:0*/ __Vtemp_307;
    VlWide<4>/*127:0*/ __Vtemp_308;
    VlWide<4>/*127:0*/ __Vtemp_310;
    VlWide<4>/*127:0*/ __Vtemp_311;
    VlWide<4>/*127:0*/ __Vtemp_312;
    VlWide<4>/*127:0*/ __Vtemp_314;
    VlWide<4>/*127:0*/ __Vtemp_315;
    VlWide<4>/*127:0*/ __Vtemp_316;
    VlWide<4>/*127:0*/ __Vtemp_318;
    VlWide<4>/*127:0*/ __Vtemp_319;
    VlWide<4>/*127:0*/ __Vtemp_320;
    VlWide<4>/*127:0*/ __Vtemp_322;
    VlWide<4>/*127:0*/ __Vtemp_323;
    VlWide<4>/*127:0*/ __Vtemp_324;
    VlWide<4>/*127:0*/ __Vtemp_326;
    VlWide<4>/*127:0*/ __Vtemp_327;
    VlWide<4>/*127:0*/ __Vtemp_328;
    VlWide<4>/*127:0*/ __Vtemp_330;
    VlWide<4>/*127:0*/ __Vtemp_331;
    VlWide<4>/*127:0*/ __Vtemp_332;
    VlWide<4>/*127:0*/ __Vtemp_334;
    VlWide<4>/*127:0*/ __Vtemp_335;
    VlWide<4>/*127:0*/ __Vtemp_336;
    VlWide<4>/*127:0*/ __Vtemp_338;
    VlWide<4>/*127:0*/ __Vtemp_339;
    VlWide<4>/*127:0*/ __Vtemp_340;
    VlWide<4>/*127:0*/ __Vtemp_342;
    VlWide<4>/*127:0*/ __Vtemp_343;
    VlWide<4>/*127:0*/ __Vtemp_344;
    VlWide<4>/*127:0*/ __Vtemp_346;
    VlWide<4>/*127:0*/ __Vtemp_347;
    VlWide<4>/*127:0*/ __Vtemp_348;
    VlWide<4>/*127:0*/ __Vtemp_350;
    VlWide<4>/*127:0*/ __Vtemp_351;
    VlWide<4>/*127:0*/ __Vtemp_352;
    VlWide<4>/*127:0*/ __Vtemp_354;
    VlWide<4>/*127:0*/ __Vtemp_355;
    VlWide<4>/*127:0*/ __Vtemp_356;
    VlWide<4>/*127:0*/ __Vtemp_358;
    VlWide<4>/*127:0*/ __Vtemp_359;
    VlWide<4>/*127:0*/ __Vtemp_360;
    VlWide<4>/*127:0*/ __Vtemp_362;
    VlWide<4>/*127:0*/ __Vtemp_363;
    VlWide<4>/*127:0*/ __Vtemp_364;
    VlWide<4>/*127:0*/ __Vtemp_366;
    VlWide<4>/*127:0*/ __Vtemp_367;
    VlWide<4>/*127:0*/ __Vtemp_368;
    VlWide<4>/*127:0*/ __Vtemp_370;
    VlWide<4>/*127:0*/ __Vtemp_371;
    VlWide<4>/*127:0*/ __Vtemp_372;
    VlWide<4>/*127:0*/ __Vtemp_374;
    VlWide<4>/*127:0*/ __Vtemp_375;
    VlWide<4>/*127:0*/ __Vtemp_376;
    VlWide<4>/*127:0*/ __Vtemp_378;
    VlWide<4>/*127:0*/ __Vtemp_379;
    VlWide<4>/*127:0*/ __Vtemp_380;
    VlWide<4>/*127:0*/ __Vtemp_382;
    VlWide<4>/*127:0*/ __Vtemp_383;
    VlWide<4>/*127:0*/ __Vtemp_384;
    VlWide<4>/*127:0*/ __Vtemp_386;
    VlWide<4>/*127:0*/ __Vtemp_387;
    VlWide<4>/*127:0*/ __Vtemp_388;
    VlWide<4>/*127:0*/ __Vtemp_390;
    VlWide<4>/*127:0*/ __Vtemp_391;
    VlWide<4>/*127:0*/ __Vtemp_392;
    VlWide<4>/*127:0*/ __Vtemp_394;
    VlWide<4>/*127:0*/ __Vtemp_395;
    VlWide<4>/*127:0*/ __Vtemp_396;
    VlWide<4>/*127:0*/ __Vtemp_398;
    VlWide<4>/*127:0*/ __Vtemp_399;
    VlWide<4>/*127:0*/ __Vtemp_400;
    VlWide<4>/*127:0*/ __Vtemp_402;
    VlWide<4>/*127:0*/ __Vtemp_403;
    VlWide<4>/*127:0*/ __Vtemp_404;
    VlWide<4>/*127:0*/ __Vtemp_406;
    VlWide<4>/*127:0*/ __Vtemp_407;
    VlWide<4>/*127:0*/ __Vtemp_408;
    VlWide<4>/*127:0*/ __Vtemp_410;
    VlWide<4>/*127:0*/ __Vtemp_411;
    VlWide<4>/*127:0*/ __Vtemp_412;
    VlWide<4>/*127:0*/ __Vtemp_414;
    VlWide<4>/*127:0*/ __Vtemp_415;
    VlWide<4>/*127:0*/ __Vtemp_416;
    VlWide<4>/*127:0*/ __Vtemp_418;
    VlWide<4>/*127:0*/ __Vtemp_419;
    VlWide<4>/*127:0*/ __Vtemp_420;
    VlWide<4>/*127:0*/ __Vtemp_422;
    VlWide<4>/*127:0*/ __Vtemp_423;
    VlWide<4>/*127:0*/ __Vtemp_424;
    VlWide<4>/*127:0*/ __Vtemp_426;
    VlWide<4>/*127:0*/ __Vtemp_427;
    VlWide<4>/*127:0*/ __Vtemp_428;
    VlWide<4>/*127:0*/ __Vtemp_430;
    VlWide<4>/*127:0*/ __Vtemp_431;
    VlWide<4>/*127:0*/ __Vtemp_432;
    VlWide<4>/*127:0*/ __Vtemp_434;
    VlWide<4>/*127:0*/ __Vtemp_435;
    VlWide<4>/*127:0*/ __Vtemp_436;
    VlWide<4>/*127:0*/ __Vtemp_438;
    VlWide<4>/*127:0*/ __Vtemp_439;
    VlWide<4>/*127:0*/ __Vtemp_440;
    VlWide<4>/*127:0*/ __Vtemp_442;
    VlWide<4>/*127:0*/ __Vtemp_443;
    VlWide<4>/*127:0*/ __Vtemp_444;
    VlWide<4>/*127:0*/ __Vtemp_446;
    VlWide<4>/*127:0*/ __Vtemp_447;
    VlWide<4>/*127:0*/ __Vtemp_448;
    VlWide<4>/*127:0*/ __Vtemp_450;
    VlWide<4>/*127:0*/ __Vtemp_451;
    VlWide<4>/*127:0*/ __Vtemp_452;
    VlWide<4>/*127:0*/ __Vtemp_454;
    VlWide<4>/*127:0*/ __Vtemp_455;
    VlWide<4>/*127:0*/ __Vtemp_456;
    VlWide<4>/*127:0*/ __Vtemp_458;
    VlWide<4>/*127:0*/ __Vtemp_459;
    VlWide<4>/*127:0*/ __Vtemp_460;
    VlWide<4>/*127:0*/ __Vtemp_462;
    VlWide<4>/*127:0*/ __Vtemp_463;
    VlWide<4>/*127:0*/ __Vtemp_464;
    VlWide<4>/*127:0*/ __Vtemp_466;
    VlWide<4>/*127:0*/ __Vtemp_467;
    VlWide<4>/*127:0*/ __Vtemp_468;
    VlWide<4>/*127:0*/ __Vtemp_470;
    VlWide<4>/*127:0*/ __Vtemp_471;
    VlWide<4>/*127:0*/ __Vtemp_472;
    VlWide<4>/*127:0*/ __Vtemp_474;
    VlWide<4>/*127:0*/ __Vtemp_475;
    VlWide<4>/*127:0*/ __Vtemp_476;
    VlWide<4>/*127:0*/ __Vtemp_478;
    VlWide<4>/*127:0*/ __Vtemp_479;
    VlWide<4>/*127:0*/ __Vtemp_480;
    VlWide<4>/*127:0*/ __Vtemp_482;
    VlWide<4>/*127:0*/ __Vtemp_483;
    VlWide<4>/*127:0*/ __Vtemp_484;
    VlWide<4>/*127:0*/ __Vtemp_486;
    VlWide<4>/*127:0*/ __Vtemp_487;
    VlWide<4>/*127:0*/ __Vtemp_488;
    VlWide<4>/*127:0*/ __Vtemp_490;
    VlWide<4>/*127:0*/ __Vtemp_491;
    VlWide<4>/*127:0*/ __Vtemp_492;
    VlWide<4>/*127:0*/ __Vtemp_494;
    VlWide<4>/*127:0*/ __Vtemp_495;
    VlWide<4>/*127:0*/ __Vtemp_496;
    VlWide<4>/*127:0*/ __Vtemp_498;
    VlWide<4>/*127:0*/ __Vtemp_499;
    VlWide<4>/*127:0*/ __Vtemp_500;
    VlWide<4>/*127:0*/ __Vtemp_502;
    VlWide<4>/*127:0*/ __Vtemp_503;
    VlWide<4>/*127:0*/ __Vtemp_504;
    VlWide<4>/*127:0*/ __Vtemp_506;
    VlWide<4>/*127:0*/ __Vtemp_507;
    VlWide<4>/*127:0*/ __Vtemp_508;
    VlWide<4>/*127:0*/ __Vtemp_510;
    VlWide<4>/*127:0*/ __Vtemp_511;
    VlWide<4>/*127:0*/ __Vtemp_512;
    VlWide<4>/*127:0*/ __Vtemp_513;
    VlWide<4>/*127:0*/ __Vtemp_514;
    VlWide<4>/*127:0*/ __Vtemp_515;
    VlWide<4>/*127:0*/ __Vtemp_516;
    VlWide<4>/*127:0*/ __Vtemp_517;
    VlWide<4>/*127:0*/ __Vtemp_518;
    VlWide<4>/*127:0*/ __Vtemp_519;
    VlWide<4>/*127:0*/ __Vtemp_520;
    VlWide<4>/*127:0*/ __Vtemp_521;
    VlWide<4>/*127:0*/ __Vtemp_522;
    VlWide<4>/*127:0*/ __Vtemp_523;
    VlWide<4>/*127:0*/ __Vtemp_525;
    VlWide<4>/*127:0*/ __Vtemp_526;
    VlWide<4>/*127:0*/ __Vtemp_527;
    VlWide<4>/*127:0*/ __Vtemp_529;
    VlWide<4>/*127:0*/ __Vtemp_530;
    VlWide<4>/*127:0*/ __Vtemp_531;
    VlWide<4>/*127:0*/ __Vtemp_533;
    VlWide<4>/*127:0*/ __Vtemp_534;
    VlWide<4>/*127:0*/ __Vtemp_535;
    VlWide<4>/*127:0*/ __Vtemp_537;
    VlWide<4>/*127:0*/ __Vtemp_538;
    VlWide<4>/*127:0*/ __Vtemp_539;
    VlWide<4>/*127:0*/ __Vtemp_541;
    VlWide<4>/*127:0*/ __Vtemp_542;
    VlWide<4>/*127:0*/ __Vtemp_543;
    VlWide<4>/*127:0*/ __Vtemp_545;
    VlWide<4>/*127:0*/ __Vtemp_546;
    VlWide<4>/*127:0*/ __Vtemp_547;
    VlWide<4>/*127:0*/ __Vtemp_549;
    VlWide<4>/*127:0*/ __Vtemp_550;
    VlWide<4>/*127:0*/ __Vtemp_551;
    VlWide<4>/*127:0*/ __Vtemp_553;
    VlWide<4>/*127:0*/ __Vtemp_554;
    VlWide<4>/*127:0*/ __Vtemp_555;
    VlWide<4>/*127:0*/ __Vtemp_557;
    VlWide<4>/*127:0*/ __Vtemp_558;
    VlWide<4>/*127:0*/ __Vtemp_559;
    VlWide<4>/*127:0*/ __Vtemp_561;
    VlWide<4>/*127:0*/ __Vtemp_562;
    VlWide<4>/*127:0*/ __Vtemp_563;
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
    VlWide<4>/*127:0*/ __Vtemp_822;
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
    VlWide<4>/*127:0*/ __Vtemp_1036;
    VlWide<4>/*127:0*/ __Vtemp_1038;
    VlWide<4>/*127:0*/ __Vtemp_1039;
    VlWide<4>/*127:0*/ __Vtemp_1040;
    VlWide<4>/*127:0*/ __Vtemp_1041;
    VlWide<4>/*127:0*/ __Vtemp_1042;
    VlWide<4>/*127:0*/ __Vtemp_1043;
    VlWide<4>/*127:0*/ __Vtemp_1044;
    VlWide<4>/*127:0*/ __Vtemp_1045;
    VlWide<4>/*127:0*/ __Vtemp_1046;
    VlWide<4>/*127:0*/ __Vtemp_1047;
    VlWide<4>/*127:0*/ __Vtemp_1048;
    VlWide<4>/*127:0*/ __Vtemp_1049;
    VlWide<4>/*127:0*/ __Vtemp_1050;
    VlWide<4>/*127:0*/ __Vtemp_1051;
    VlWide<4>/*127:0*/ __Vtemp_1052;
    VlWide<4>/*127:0*/ __Vtemp_1053;
    VlWide<4>/*127:0*/ __Vtemp_1054;
    VlWide<4>/*127:0*/ __Vtemp_1055;
    VlWide<4>/*127:0*/ __Vtemp_1056;
    VlWide<4>/*127:0*/ __Vtemp_1057;
    VlWide<4>/*127:0*/ __Vtemp_1058;
    VlWide<4>/*127:0*/ __Vtemp_1059;
    VlWide<4>/*127:0*/ __Vtemp_1060;
    VlWide<4>/*127:0*/ __Vtemp_1061;
    VlWide<4>/*127:0*/ __Vtemp_1062;
    VlWide<4>/*127:0*/ __Vtemp_1063;
    VlWide<4>/*127:0*/ __Vtemp_1064;
    VlWide<4>/*127:0*/ __Vtemp_1065;
    VlWide<4>/*127:0*/ __Vtemp_1067;
    VlWide<4>/*127:0*/ __Vtemp_1068;
    VlWide<4>/*127:0*/ __Vtemp_1069;
    VlWide<4>/*127:0*/ __Vtemp_1071;
    VlWide<4>/*127:0*/ __Vtemp_1072;
    VlWide<4>/*127:0*/ __Vtemp_1073;
    VlWide<4>/*127:0*/ __Vtemp_1075;
    VlWide<4>/*127:0*/ __Vtemp_1076;
    VlWide<4>/*127:0*/ __Vtemp_1077;
    VlWide<4>/*127:0*/ __Vtemp_1079;
    VlWide<4>/*127:0*/ __Vtemp_1080;
    VlWide<4>/*127:0*/ __Vtemp_1081;
    VlWide<4>/*127:0*/ __Vtemp_1083;
    VlWide<4>/*127:0*/ __Vtemp_1084;
    VlWide<4>/*127:0*/ __Vtemp_1085;
    VlWide<4>/*127:0*/ __Vtemp_1087;
    VlWide<4>/*127:0*/ __Vtemp_1088;
    VlWide<4>/*127:0*/ __Vtemp_1089;
    VlWide<4>/*127:0*/ __Vtemp_1091;
    VlWide<4>/*127:0*/ __Vtemp_1092;
    VlWide<4>/*127:0*/ __Vtemp_1093;
    VlWide<4>/*127:0*/ __Vtemp_1095;
    VlWide<4>/*127:0*/ __Vtemp_1096;
    VlWide<4>/*127:0*/ __Vtemp_1097;
    VlWide<4>/*127:0*/ __Vtemp_1099;
    VlWide<4>/*127:0*/ __Vtemp_1100;
    VlWide<4>/*127:0*/ __Vtemp_1101;
    VlWide<4>/*127:0*/ __Vtemp_1103;
    VlWide<4>/*127:0*/ __Vtemp_1104;
    VlWide<4>/*127:0*/ __Vtemp_1105;
    VlWide<4>/*127:0*/ __Vtemp_1107;
    VlWide<4>/*127:0*/ __Vtemp_1108;
    VlWide<4>/*127:0*/ __Vtemp_1109;
    VlWide<4>/*127:0*/ __Vtemp_1111;
    VlWide<4>/*127:0*/ __Vtemp_1112;
    VlWide<4>/*127:0*/ __Vtemp_1113;
    VlWide<4>/*127:0*/ __Vtemp_1115;
    VlWide<4>/*127:0*/ __Vtemp_1116;
    VlWide<4>/*127:0*/ __Vtemp_1117;
    VlWide<4>/*127:0*/ __Vtemp_1119;
    VlWide<4>/*127:0*/ __Vtemp_1120;
    VlWide<4>/*127:0*/ __Vtemp_1121;
    VlWide<4>/*127:0*/ __Vtemp_1123;
    VlWide<4>/*127:0*/ __Vtemp_1124;
    VlWide<4>/*127:0*/ __Vtemp_1125;
    VlWide<4>/*127:0*/ __Vtemp_1127;
    VlWide<4>/*127:0*/ __Vtemp_1128;
    VlWide<4>/*127:0*/ __Vtemp_1129;
    VlWide<4>/*127:0*/ __Vtemp_1131;
    VlWide<4>/*127:0*/ __Vtemp_1132;
    VlWide<4>/*127:0*/ __Vtemp_1133;
    VlWide<4>/*127:0*/ __Vtemp_1135;
    VlWide<4>/*127:0*/ __Vtemp_1136;
    VlWide<4>/*127:0*/ __Vtemp_1137;
    VlWide<4>/*127:0*/ __Vtemp_1139;
    VlWide<4>/*127:0*/ __Vtemp_1140;
    VlWide<4>/*127:0*/ __Vtemp_1141;
    VlWide<4>/*127:0*/ __Vtemp_1143;
    VlWide<4>/*127:0*/ __Vtemp_1144;
    VlWide<4>/*127:0*/ __Vtemp_1145;
    VlWide<4>/*127:0*/ __Vtemp_1147;
    VlWide<4>/*127:0*/ __Vtemp_1148;
    VlWide<4>/*127:0*/ __Vtemp_1149;
    VlWide<4>/*127:0*/ __Vtemp_1151;
    VlWide<4>/*127:0*/ __Vtemp_1152;
    VlWide<4>/*127:0*/ __Vtemp_1153;
    VlWide<4>/*127:0*/ __Vtemp_1155;
    VlWide<4>/*127:0*/ __Vtemp_1156;
    VlWide<4>/*127:0*/ __Vtemp_1157;
    VlWide<4>/*127:0*/ __Vtemp_1159;
    VlWide<4>/*127:0*/ __Vtemp_1160;
    VlWide<4>/*127:0*/ __Vtemp_1161;
    VlWide<4>/*127:0*/ __Vtemp_1163;
    VlWide<4>/*127:0*/ __Vtemp_1164;
    VlWide<4>/*127:0*/ __Vtemp_1165;
    VlWide<4>/*127:0*/ __Vtemp_1167;
    VlWide<4>/*127:0*/ __Vtemp_1168;
    VlWide<4>/*127:0*/ __Vtemp_1169;
    VlWide<4>/*127:0*/ __Vtemp_1171;
    VlWide<4>/*127:0*/ __Vtemp_1172;
    VlWide<4>/*127:0*/ __Vtemp_1173;
    VlWide<4>/*127:0*/ __Vtemp_1175;
    VlWide<4>/*127:0*/ __Vtemp_1176;
    VlWide<4>/*127:0*/ __Vtemp_1177;
    VlWide<4>/*127:0*/ __Vtemp_1179;
    VlWide<4>/*127:0*/ __Vtemp_1180;
    VlWide<4>/*127:0*/ __Vtemp_1181;
    VlWide<4>/*127:0*/ __Vtemp_1183;
    VlWide<4>/*127:0*/ __Vtemp_1184;
    VlWide<4>/*127:0*/ __Vtemp_1185;
    VlWide<4>/*127:0*/ __Vtemp_1187;
    VlWide<4>/*127:0*/ __Vtemp_1188;
    VlWide<4>/*127:0*/ __Vtemp_1189;
    VlWide<4>/*127:0*/ __Vtemp_1191;
    VlWide<4>/*127:0*/ __Vtemp_1192;
    VlWide<4>/*127:0*/ __Vtemp_1193;
    VlWide<4>/*127:0*/ __Vtemp_1195;
    VlWide<4>/*127:0*/ __Vtemp_1196;
    VlWide<4>/*127:0*/ __Vtemp_1197;
    VlWide<4>/*127:0*/ __Vtemp_1199;
    VlWide<4>/*127:0*/ __Vtemp_1200;
    VlWide<4>/*127:0*/ __Vtemp_1201;
    VlWide<4>/*127:0*/ __Vtemp_1203;
    VlWide<4>/*127:0*/ __Vtemp_1204;
    VlWide<4>/*127:0*/ __Vtemp_1205;
    VlWide<4>/*127:0*/ __Vtemp_1207;
    VlWide<4>/*127:0*/ __Vtemp_1208;
    VlWide<4>/*127:0*/ __Vtemp_1209;
    VlWide<4>/*127:0*/ __Vtemp_1211;
    VlWide<4>/*127:0*/ __Vtemp_1212;
    VlWide<4>/*127:0*/ __Vtemp_1213;
    VlWide<4>/*127:0*/ __Vtemp_1215;
    VlWide<4>/*127:0*/ __Vtemp_1216;
    VlWide<4>/*127:0*/ __Vtemp_1217;
    VlWide<4>/*127:0*/ __Vtemp_1219;
    VlWide<4>/*127:0*/ __Vtemp_1220;
    VlWide<4>/*127:0*/ __Vtemp_1221;
    VlWide<4>/*127:0*/ __Vtemp_1223;
    VlWide<4>/*127:0*/ __Vtemp_1224;
    VlWide<4>/*127:0*/ __Vtemp_1225;
    VlWide<4>/*127:0*/ __Vtemp_1227;
    VlWide<4>/*127:0*/ __Vtemp_1228;
    VlWide<4>/*127:0*/ __Vtemp_1229;
    VlWide<4>/*127:0*/ __Vtemp_1231;
    VlWide<4>/*127:0*/ __Vtemp_1232;
    VlWide<4>/*127:0*/ __Vtemp_1233;
    VlWide<4>/*127:0*/ __Vtemp_1235;
    VlWide<4>/*127:0*/ __Vtemp_1236;
    VlWide<4>/*127:0*/ __Vtemp_1237;
    VlWide<4>/*127:0*/ __Vtemp_1239;
    VlWide<4>/*127:0*/ __Vtemp_1240;
    VlWide<4>/*127:0*/ __Vtemp_1241;
    VlWide<4>/*127:0*/ __Vtemp_1243;
    VlWide<4>/*127:0*/ __Vtemp_1244;
    VlWide<4>/*127:0*/ __Vtemp_1245;
    VlWide<4>/*127:0*/ __Vtemp_1247;
    VlWide<4>/*127:0*/ __Vtemp_1248;
    VlWide<4>/*127:0*/ __Vtemp_1249;
    VlWide<4>/*127:0*/ __Vtemp_1251;
    VlWide<4>/*127:0*/ __Vtemp_1252;
    VlWide<4>/*127:0*/ __Vtemp_1253;
    VlWide<4>/*127:0*/ __Vtemp_1255;
    VlWide<4>/*127:0*/ __Vtemp_1256;
    VlWide<4>/*127:0*/ __Vtemp_1257;
    VlWide<4>/*127:0*/ __Vtemp_1259;
    VlWide<4>/*127:0*/ __Vtemp_1260;
    VlWide<4>/*127:0*/ __Vtemp_1261;
    VlWide<4>/*127:0*/ __Vtemp_1263;
    VlWide<4>/*127:0*/ __Vtemp_1264;
    VlWide<4>/*127:0*/ __Vtemp_1265;
    VlWide<4>/*127:0*/ __Vtemp_1267;
    VlWide<4>/*127:0*/ __Vtemp_1268;
    VlWide<4>/*127:0*/ __Vtemp_1269;
    VlWide<4>/*127:0*/ __Vtemp_1271;
    VlWide<4>/*127:0*/ __Vtemp_1272;
    VlWide<4>/*127:0*/ __Vtemp_1273;
    VlWide<4>/*127:0*/ __Vtemp_1275;
    VlWide<4>/*127:0*/ __Vtemp_1276;
    VlWide<4>/*127:0*/ __Vtemp_1277;
    VlWide<4>/*127:0*/ __Vtemp_1279;
    VlWide<4>/*127:0*/ __Vtemp_1280;
    VlWide<4>/*127:0*/ __Vtemp_1281;
    VlWide<4>/*127:0*/ __Vtemp_1283;
    VlWide<4>/*127:0*/ __Vtemp_1284;
    VlWide<4>/*127:0*/ __Vtemp_1285;
    VlWide<4>/*127:0*/ __Vtemp_1287;
    VlWide<4>/*127:0*/ __Vtemp_1288;
    VlWide<4>/*127:0*/ __Vtemp_1289;
    VlWide<4>/*127:0*/ __Vtemp_1291;
    VlWide<4>/*127:0*/ __Vtemp_1292;
    VlWide<4>/*127:0*/ __Vtemp_1293;
    VlWide<4>/*127:0*/ __Vtemp_1295;
    VlWide<4>/*127:0*/ __Vtemp_1296;
    VlWide<4>/*127:0*/ __Vtemp_1297;
    VlWide<4>/*127:0*/ __Vtemp_1299;
    VlWide<4>/*127:0*/ __Vtemp_1300;
    VlWide<4>/*127:0*/ __Vtemp_1301;
    VlWide<4>/*127:0*/ __Vtemp_1303;
    VlWide<4>/*127:0*/ __Vtemp_1304;
    VlWide<4>/*127:0*/ __Vtemp_1305;
    VlWide<4>/*127:0*/ __Vtemp_1307;
    VlWide<4>/*127:0*/ __Vtemp_1308;
    VlWide<4>/*127:0*/ __Vtemp_1309;
    VlWide<4>/*127:0*/ __Vtemp_1311;
    VlWide<4>/*127:0*/ __Vtemp_1312;
    VlWide<4>/*127:0*/ __Vtemp_1313;
    VlWide<4>/*127:0*/ __Vtemp_1315;
    VlWide<4>/*127:0*/ __Vtemp_1316;
    VlWide<4>/*127:0*/ __Vtemp_1317;
    VlWide<4>/*127:0*/ __Vtemp_1319;
    VlWide<4>/*127:0*/ __Vtemp_1321;
    VlWide<4>/*127:0*/ __Vtemp_1323;
    VlWide<4>/*127:0*/ __Vtemp_1324;
    VlWide<4>/*127:0*/ __Vtemp_1325;
    VlWide<4>/*127:0*/ __Vtemp_1327;
    VlWide<4>/*127:0*/ __Vtemp_1328;
    VlWide<4>/*127:0*/ __Vtemp_1329;
    VlWide<4>/*127:0*/ __Vtemp_1331;
    VlWide<4>/*127:0*/ __Vtemp_1332;
    VlWide<4>/*127:0*/ __Vtemp_1333;
    VlWide<4>/*127:0*/ __Vtemp_1335;
    VlWide<4>/*127:0*/ __Vtemp_1336;
    VlWide<4>/*127:0*/ __Vtemp_1337;
    VlWide<4>/*127:0*/ __Vtemp_1339;
    VlWide<4>/*127:0*/ __Vtemp_1340;
    VlWide<4>/*127:0*/ __Vtemp_1341;
    VlWide<4>/*127:0*/ __Vtemp_1343;
    VlWide<4>/*127:0*/ __Vtemp_1344;
    VlWide<4>/*127:0*/ __Vtemp_1345;
    VlWide<4>/*127:0*/ __Vtemp_1347;
    VlWide<4>/*127:0*/ __Vtemp_1348;
    VlWide<4>/*127:0*/ __Vtemp_1349;
    VlWide<4>/*127:0*/ __Vtemp_1351;
    VlWide<4>/*127:0*/ __Vtemp_1352;
    VlWide<4>/*127:0*/ __Vtemp_1353;
    VlWide<4>/*127:0*/ __Vtemp_1355;
    VlWide<4>/*127:0*/ __Vtemp_1356;
    VlWide<4>/*127:0*/ __Vtemp_1357;
    VlWide<4>/*127:0*/ __Vtemp_1359;
    VlWide<4>/*127:0*/ __Vtemp_1360;
    VlWide<4>/*127:0*/ __Vtemp_1361;
    VlWide<4>/*127:0*/ __Vtemp_1363;
    VlWide<4>/*127:0*/ __Vtemp_1364;
    VlWide<4>/*127:0*/ __Vtemp_1365;
    VlWide<4>/*127:0*/ __Vtemp_1367;
    VlWide<4>/*127:0*/ __Vtemp_1368;
    VlWide<4>/*127:0*/ __Vtemp_1369;
    VlWide<4>/*127:0*/ __Vtemp_1371;
    VlWide<4>/*127:0*/ __Vtemp_1372;
    VlWide<4>/*127:0*/ __Vtemp_1373;
    VlWide<4>/*127:0*/ __Vtemp_1375;
    VlWide<4>/*127:0*/ __Vtemp_1376;
    VlWide<4>/*127:0*/ __Vtemp_1377;
    VlWide<4>/*127:0*/ __Vtemp_1379;
    VlWide<4>/*127:0*/ __Vtemp_1380;
    VlWide<4>/*127:0*/ __Vtemp_1381;
    VlWide<4>/*127:0*/ __Vtemp_1383;
    VlWide<4>/*127:0*/ __Vtemp_1384;
    VlWide<4>/*127:0*/ __Vtemp_1385;
    VlWide<4>/*127:0*/ __Vtemp_1387;
    VlWide<4>/*127:0*/ __Vtemp_1388;
    VlWide<4>/*127:0*/ __Vtemp_1389;
    VlWide<4>/*127:0*/ __Vtemp_1391;
    VlWide<4>/*127:0*/ __Vtemp_1392;
    VlWide<4>/*127:0*/ __Vtemp_1393;
    VlWide<4>/*127:0*/ __Vtemp_1395;
    VlWide<4>/*127:0*/ __Vtemp_1396;
    VlWide<4>/*127:0*/ __Vtemp_1397;
    VlWide<4>/*127:0*/ __Vtemp_1399;
    VlWide<4>/*127:0*/ __Vtemp_1400;
    VlWide<4>/*127:0*/ __Vtemp_1401;
    VlWide<4>/*127:0*/ __Vtemp_1403;
    VlWide<4>/*127:0*/ __Vtemp_1404;
    VlWide<4>/*127:0*/ __Vtemp_1405;
    VlWide<4>/*127:0*/ __Vtemp_1407;
    VlWide<4>/*127:0*/ __Vtemp_1408;
    VlWide<4>/*127:0*/ __Vtemp_1409;
    VlWide<4>/*127:0*/ __Vtemp_1411;
    VlWide<4>/*127:0*/ __Vtemp_1412;
    VlWide<4>/*127:0*/ __Vtemp_1413;
    VlWide<4>/*127:0*/ __Vtemp_1415;
    VlWide<4>/*127:0*/ __Vtemp_1416;
    VlWide<4>/*127:0*/ __Vtemp_1417;
    VlWide<4>/*127:0*/ __Vtemp_1419;
    VlWide<4>/*127:0*/ __Vtemp_1420;
    VlWide<4>/*127:0*/ __Vtemp_1421;
    VlWide<4>/*127:0*/ __Vtemp_1423;
    VlWide<4>/*127:0*/ __Vtemp_1424;
    VlWide<4>/*127:0*/ __Vtemp_1425;
    VlWide<4>/*127:0*/ __Vtemp_1427;
    VlWide<4>/*127:0*/ __Vtemp_1428;
    VlWide<4>/*127:0*/ __Vtemp_1429;
    VlWide<4>/*127:0*/ __Vtemp_1431;
    VlWide<4>/*127:0*/ __Vtemp_1432;
    VlWide<4>/*127:0*/ __Vtemp_1433;
    VlWide<4>/*127:0*/ __Vtemp_1435;
    VlWide<4>/*127:0*/ __Vtemp_1436;
    VlWide<4>/*127:0*/ __Vtemp_1437;
    VlWide<4>/*127:0*/ __Vtemp_1439;
    VlWide<4>/*127:0*/ __Vtemp_1440;
    VlWide<4>/*127:0*/ __Vtemp_1441;
    VlWide<4>/*127:0*/ __Vtemp_1443;
    VlWide<4>/*127:0*/ __Vtemp_1444;
    VlWide<4>/*127:0*/ __Vtemp_1445;
    VlWide<4>/*127:0*/ __Vtemp_1447;
    VlWide<4>/*127:0*/ __Vtemp_1448;
    VlWide<4>/*127:0*/ __Vtemp_1449;
    VlWide<4>/*127:0*/ __Vtemp_1451;
    VlWide<4>/*127:0*/ __Vtemp_1452;
    VlWide<4>/*127:0*/ __Vtemp_1453;
    VlWide<4>/*127:0*/ __Vtemp_1455;
    VlWide<4>/*127:0*/ __Vtemp_1456;
    VlWide<4>/*127:0*/ __Vtemp_1457;
    VlWide<4>/*127:0*/ __Vtemp_1459;
    VlWide<4>/*127:0*/ __Vtemp_1460;
    VlWide<4>/*127:0*/ __Vtemp_1461;
    VlWide<4>/*127:0*/ __Vtemp_1463;
    VlWide<4>/*127:0*/ __Vtemp_1464;
    VlWide<4>/*127:0*/ __Vtemp_1465;
    VlWide<4>/*127:0*/ __Vtemp_1467;
    VlWide<4>/*127:0*/ __Vtemp_1468;
    VlWide<4>/*127:0*/ __Vtemp_1469;
    VlWide<4>/*127:0*/ __Vtemp_1471;
    VlWide<4>/*127:0*/ __Vtemp_1472;
    VlWide<4>/*127:0*/ __Vtemp_1473;
    VlWide<4>/*127:0*/ __Vtemp_1475;
    VlWide<4>/*127:0*/ __Vtemp_1476;
    VlWide<4>/*127:0*/ __Vtemp_1477;
    VlWide<4>/*127:0*/ __Vtemp_1479;
    VlWide<4>/*127:0*/ __Vtemp_1480;
    VlWide<4>/*127:0*/ __Vtemp_1481;
    VlWide<4>/*127:0*/ __Vtemp_1483;
    VlWide<4>/*127:0*/ __Vtemp_1484;
    VlWide<4>/*127:0*/ __Vtemp_1485;
    VlWide<4>/*127:0*/ __Vtemp_1487;
    VlWide<4>/*127:0*/ __Vtemp_1488;
    VlWide<4>/*127:0*/ __Vtemp_1489;
    VlWide<4>/*127:0*/ __Vtemp_1491;
    VlWide<4>/*127:0*/ __Vtemp_1492;
    VlWide<4>/*127:0*/ __Vtemp_1493;
    VlWide<4>/*127:0*/ __Vtemp_1495;
    VlWide<4>/*127:0*/ __Vtemp_1496;
    VlWide<4>/*127:0*/ __Vtemp_1497;
    VlWide<4>/*127:0*/ __Vtemp_1499;
    VlWide<4>/*127:0*/ __Vtemp_1500;
    VlWide<4>/*127:0*/ __Vtemp_1501;
    VlWide<4>/*127:0*/ __Vtemp_1503;
    VlWide<4>/*127:0*/ __Vtemp_1504;
    VlWide<4>/*127:0*/ __Vtemp_1505;
    VlWide<4>/*127:0*/ __Vtemp_1507;
    VlWide<4>/*127:0*/ __Vtemp_1508;
    VlWide<4>/*127:0*/ __Vtemp_1509;
    VlWide<4>/*127:0*/ __Vtemp_1511;
    VlWide<4>/*127:0*/ __Vtemp_1512;
    VlWide<4>/*127:0*/ __Vtemp_1513;
    VlWide<4>/*127:0*/ __Vtemp_1515;
    VlWide<4>/*127:0*/ __Vtemp_1516;
    VlWide<4>/*127:0*/ __Vtemp_1517;
    VlWide<4>/*127:0*/ __Vtemp_1519;
    VlWide<4>/*127:0*/ __Vtemp_1520;
    VlWide<4>/*127:0*/ __Vtemp_1521;
    VlWide<4>/*127:0*/ __Vtemp_1523;
    VlWide<4>/*127:0*/ __Vtemp_1524;
    VlWide<4>/*127:0*/ __Vtemp_1525;
    VlWide<4>/*127:0*/ __Vtemp_1527;
    VlWide<4>/*127:0*/ __Vtemp_1528;
    VlWide<4>/*127:0*/ __Vtemp_1529;
    VlWide<4>/*127:0*/ __Vtemp_1531;
    VlWide<4>/*127:0*/ __Vtemp_1532;
    VlWide<4>/*127:0*/ __Vtemp_1533;
    VlWide<4>/*127:0*/ __Vtemp_1535;
    VlWide<4>/*127:0*/ __Vtemp_1536;
    VlWide<4>/*127:0*/ __Vtemp_1537;
    VlWide<4>/*127:0*/ __Vtemp_1539;
    VlWide<4>/*127:0*/ __Vtemp_1540;
    VlWide<4>/*127:0*/ __Vtemp_1541;
    VlWide<4>/*127:0*/ __Vtemp_1543;
    VlWide<4>/*127:0*/ __Vtemp_1544;
    VlWide<4>/*127:0*/ __Vtemp_1545;
    VlWide<4>/*127:0*/ __Vtemp_1547;
    VlWide<4>/*127:0*/ __Vtemp_1548;
    VlWide<4>/*127:0*/ __Vtemp_1549;
    VlWide<4>/*127:0*/ __Vtemp_1551;
    VlWide<4>/*127:0*/ __Vtemp_1552;
    VlWide<4>/*127:0*/ __Vtemp_1553;
    VlWide<4>/*127:0*/ __Vtemp_1555;
    VlWide<4>/*127:0*/ __Vtemp_1556;
    VlWide<4>/*127:0*/ __Vtemp_1557;
    VlWide<4>/*127:0*/ __Vtemp_1559;
    VlWide<4>/*127:0*/ __Vtemp_1560;
    VlWide<4>/*127:0*/ __Vtemp_1561;
    VlWide<4>/*127:0*/ __Vtemp_1563;
    VlWide<4>/*127:0*/ __Vtemp_1564;
    VlWide<4>/*127:0*/ __Vtemp_1565;
    VlWide<4>/*127:0*/ __Vtemp_1567;
    VlWide<4>/*127:0*/ __Vtemp_1568;
    VlWide<4>/*127:0*/ __Vtemp_1569;
    VlWide<4>/*127:0*/ __Vtemp_1571;
    VlWide<4>/*127:0*/ __Vtemp_1572;
    VlWide<4>/*127:0*/ __Vtemp_1573;
    VlWide<4>/*127:0*/ __Vtemp_1575;
    VlWide<4>/*127:0*/ __Vtemp_1576;
    VlWide<4>/*127:0*/ __Vtemp_1577;
    VlWide<4>/*127:0*/ __Vtemp_1578;
    VlWide<4>/*127:0*/ __Vtemp_1580;
    VlWide<4>/*127:0*/ __Vtemp_1581;
    VlWide<4>/*127:0*/ __Vtemp_1582;
    VlWide<4>/*127:0*/ __Vtemp_1583;
    VlWide<4>/*127:0*/ __Vtemp_1584;
    VlWide<4>/*127:0*/ __Vtemp_1585;
    VlWide<4>/*127:0*/ __Vtemp_1586;
    VlWide<4>/*127:0*/ __Vtemp_1587;
    VlWide<4>/*127:0*/ __Vtemp_1588;
    VlWide<4>/*127:0*/ __Vtemp_1589;
    VlWide<4>/*127:0*/ __Vtemp_1590;
    VlWide<4>/*127:0*/ __Vtemp_1591;
    VlWide<4>/*127:0*/ __Vtemp_1592;
    VlWide<4>/*127:0*/ __Vtemp_1593;
    VlWide<4>/*127:0*/ __Vtemp_1594;
    VlWide<4>/*127:0*/ __Vtemp_1595;
    VlWide<4>/*127:0*/ __Vtemp_1596;
    VlWide<4>/*127:0*/ __Vtemp_1597;
    VlWide<4>/*127:0*/ __Vtemp_1598;
    VlWide<4>/*127:0*/ __Vtemp_1599;
    VlWide<4>/*127:0*/ __Vtemp_1600;
    VlWide<4>/*127:0*/ __Vtemp_1601;
    VlWide<4>/*127:0*/ __Vtemp_1602;
    VlWide<4>/*127:0*/ __Vtemp_1603;
    VlWide<4>/*127:0*/ __Vtemp_1604;
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
    VlWide<4>/*127:0*/ __Vtemp_1629;
    VlWide<4>/*127:0*/ __Vtemp_1630;
    VlWide<4>/*127:0*/ __Vtemp_1631;
    VlWide<4>/*127:0*/ __Vtemp_1633;
    VlWide<4>/*127:0*/ __Vtemp_1634;
    VlWide<4>/*127:0*/ __Vtemp_1635;
    VlWide<4>/*127:0*/ __Vtemp_1637;
    VlWide<4>/*127:0*/ __Vtemp_1638;
    VlWide<4>/*127:0*/ __Vtemp_1639;
    VlWide<4>/*127:0*/ __Vtemp_1641;
    VlWide<4>/*127:0*/ __Vtemp_1642;
    VlWide<4>/*127:0*/ __Vtemp_1643;
    VlWide<4>/*127:0*/ __Vtemp_1645;
    VlWide<4>/*127:0*/ __Vtemp_1646;
    VlWide<4>/*127:0*/ __Vtemp_1647;
    VlWide<4>/*127:0*/ __Vtemp_1649;
    VlWide<4>/*127:0*/ __Vtemp_1650;
    VlWide<4>/*127:0*/ __Vtemp_1651;
    VlWide<4>/*127:0*/ __Vtemp_1653;
    VlWide<4>/*127:0*/ __Vtemp_1654;
    VlWide<4>/*127:0*/ __Vtemp_1655;
    VlWide<4>/*127:0*/ __Vtemp_1657;
    VlWide<4>/*127:0*/ __Vtemp_1658;
    VlWide<4>/*127:0*/ __Vtemp_1659;
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
    VlWide<4>/*127:0*/ __Vtemp_1918;
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
    VlWide<4>/*127:0*/ __Vtemp_2120;
    VlWide<4>/*127:0*/ __Vtemp_2122;
    VlWide<4>/*127:0*/ __Vtemp_2123;
    VlWide<4>/*127:0*/ __Vtemp_2124;
    VlWide<4>/*127:0*/ __Vtemp_2125;
    VlWide<4>/*127:0*/ __Vtemp_2126;
    VlWide<4>/*127:0*/ __Vtemp_2127;
    VlWide<4>/*127:0*/ __Vtemp_2128;
    VlWide<4>/*127:0*/ __Vtemp_2129;
    VlWide<4>/*127:0*/ __Vtemp_2130;
    VlWide<4>/*127:0*/ __Vtemp_2131;
    VlWide<4>/*127:0*/ __Vtemp_2132;
    VlWide<4>/*127:0*/ __Vtemp_2133;
    VlWide<4>/*127:0*/ __Vtemp_2134;
    VlWide<4>/*127:0*/ __Vtemp_2135;
    VlWide<4>/*127:0*/ __Vtemp_2136;
    // Body
    vlSelfRef.BenchMLP__DOT__prediction[0U] = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__prediction;
    BenchMLP__DOT__mlp__DOT____Vlvbound_hadc1fea3__0 
        = (- ([&]() {
                vlSelfRef.__Vfunc_sfp_add__3__a = vlSelfRef.BenchMLP__DOT__prediction
                    [0U];
                vlSelfRef.__Vfunc_sfp_add__3__Vfuncout 
                    = (0x2aULL + vlSelfRef.__Vfunc_sfp_add__3__a);
                vlSelfRef.__Vfunc_sfp_sub__2__b = vlSelfRef.__Vfunc_sfp_add__3__Vfuncout;
                vlSelfRef.__Vfunc_sfp_sub__2__a = vlSymsp->TOP__FixedPoint.ONE;
                vlSelfRef.__Vfunc_sfp_sub__2__Vfuncout 
                    = (vlSelfRef.__Vfunc_sfp_sub__2__a 
                       - vlSelfRef.__Vfunc_sfp_sub__2__b);
                vlSelfRef.__Vfunc_sfp_div__1__b = vlSelfRef.__Vfunc_sfp_sub__2__Vfuncout;
                vlSelfRef.__Vfunc_sfp_sub__4__b = vlSelfRef.BenchMLP__DOT__expected
                    [0U];
                vlSelfRef.__Vfunc_sfp_sub__4__a = vlSymsp->TOP__FixedPoint.ONE;
                vlSelfRef.__Vfunc_sfp_sub__4__Vfuncout 
                    = (vlSelfRef.__Vfunc_sfp_sub__4__a 
                       - vlSelfRef.__Vfunc_sfp_sub__4__b);
                vlSelfRef.__Vfunc_sfp_div__1__a = vlSelfRef.__Vfunc_sfp_sub__4__Vfuncout;
                __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__1__remainder);
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__1__b_ext);
                vlSelf->__Vfunc_sfp_div__1__result = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__1__sign_bit = VL_RAND_RESET_I(1);
                vlSelf->__Vfunc_sfp_div__1__abs_a = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__1__abs_b = VL_RAND_RESET_Q(64);
                {
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__1__b)) {
                        vlSelfRef.__Vfunc_sfp_div__1__Vfuncout 
                            = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__1__a)
                                ? 0x7fffffffffffffffULL
                                : 0x8000000000000000ULL);
                        goto __Vlabel48;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__1__a)) {
                        vlSelfRef.__Vfunc_sfp_div__1__Vfuncout = 0ULL;
                        goto __Vlabel48;
                    }
                    vlSelfRef.__Vfunc_sfp_div__1__abs_a 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__1__a 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__1__a)
                            : vlSelfRef.__Vfunc_sfp_div__1__a);
                    vlSelfRef.__Vfunc_sfp_div__1__abs_b 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__1__b 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__1__b)
                            : vlSelfRef.__Vfunc_sfp_div__1__b);
                    vlSelfRef.__Vfunc_sfp_div__1__sign_bit 
                        = (IData)(((vlSelfRef.__Vfunc_sfp_div__1__a 
                                    ^ vlSelfRef.__Vfunc_sfp_div__1__b) 
                                   >> 0x3fU));
                    __Vtemp_1[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__1__abs_a);
                    __Vtemp_1[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__1__abs_a 
                                             >> 0x20U));
                    __Vtemp_1[2U] = 0U;
                    __Vtemp_1[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_1, 0x20U);
                    vlSelfRef.__Vfunc_sfp_div__1__b_ext[0U] 
                        = (IData)(vlSelfRef.__Vfunc_sfp_div__1__abs_b);
                    vlSelfRef.__Vfunc_sfp_div__1__b_ext[1U] 
                        = (IData)((vlSelfRef.__Vfunc_sfp_div__1__abs_b 
                                   >> 0x20U));
                    vlSelfRef.__Vfunc_sfp_div__1__b_ext[2U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__1__b_ext[3U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__1__result = 0ULL;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_3, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_3)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_5, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_4, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_5);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_4[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_4[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_4[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_4[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_7, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_7)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_9, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_8, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_9);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_8[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_8[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_8[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_8[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_11, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_11)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_13, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_12, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_13);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_12[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_12[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_12[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_12[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_15, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_15)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_17, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_16, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_17);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_16[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_16[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_16[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_16[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_19, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_19)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_21, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_20, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_21);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_20[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_20[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_20[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_20[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_23, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_23)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_25, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_24, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_25);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_24[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_24[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_24[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_24[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_27, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_27)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_29, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_28, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_29);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_28[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_28[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_28[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_28[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_31, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_31)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_33, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_32, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_33);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_32[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_32[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_32[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_32[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_35, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_35)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_37, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_36, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_37);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_36[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_36[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_36[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_36[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_39, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_39)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_41, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_40, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_41);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_40[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_40[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_40[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_40[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_43, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_43)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_45, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_44, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_45);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_44[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_44[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_44[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_44[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_47, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_47)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_49, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_48, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_49);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_48[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_48[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_48[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_48[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_51, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_51)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_53, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_52, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_53);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_52[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_52[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_52[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_52[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_55, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_55)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_57, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_56, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_57);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_56[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_56[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_56[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_56[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_59, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_59)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_61, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_60, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_61);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_60[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_60[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_60[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_60[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_63, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_63)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_65, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_64, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_65);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_64[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_64[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_64[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_64[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_67, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_67)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_69, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_68, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_69);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_68[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_68[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_68[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_68[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_71, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_71)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_73, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_72, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_73);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_72[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_72[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_72[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_72[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_75, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_75)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_77, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_76, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_77);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_76[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_76[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_76[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_76[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_79, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_79)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_81, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_80, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_81);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_80[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_80[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_80[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_80[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_83, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_83)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_85, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_84, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_85);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_84[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_84[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_84[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_84[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_87, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_87)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_89, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_88, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_89);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_88[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_88[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_88[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_88[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_91, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_91)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_93, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_92, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_93);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_92[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_92[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_92[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_92[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_95, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_95)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_97, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_96, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_97);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_96[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_96[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_96[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_96[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_99, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_99)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_101, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_100, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_101);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_100[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_100[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_100[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_100[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_103, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_103)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_105, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_104, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_105);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_104[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_104[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_104[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_104[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_107, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_107)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_109, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_108, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_109);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_108[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_108[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_108[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_108[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_111, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_111)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_113, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_112, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_113);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_112[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_112[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_112[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_112[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_115, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_115)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_117, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_116, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_117);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_116[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_116[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_116[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_116[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_119, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_119)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_121, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_120, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_121);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_120[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_120[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_120[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_120[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_123, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_123)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_125, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_124, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_125);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_124[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_124[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_124[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_124[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_127, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_127)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_129, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_129);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_128[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_128[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_128[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_128[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_131, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_131)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_133, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_132, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_133);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_132[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_132[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_132[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_132[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_135, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_135)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_137, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_136, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_137);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_136[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_136[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_136[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_136[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_139, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_139)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_141, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_140, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_141);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_140[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_140[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_140[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_140[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_143, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_143)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_145, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_144, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_145);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_144[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_144[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_144[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_144[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_147, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_147)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_149, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_148, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_149);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_148[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_148[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_148[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_148[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_151, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_151)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_153, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_152, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_153);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_152[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_152[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_152[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_152[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_155, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_155)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_157, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_156, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_157);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_156[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_156[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_156[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_156[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_159, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_159)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_161, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_160, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_161);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_160[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_160[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_160[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_160[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_163, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_163)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_165, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_164, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_165);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_164[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_164[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_164[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_164[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_167, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_167)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_169, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_168, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_169);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_168[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_168[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_168[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_168[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_171, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_171)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_173, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_172, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_173);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_172[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_172[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_172[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_172[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_175, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_175)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_177, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_176, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_177);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_176[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_176[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_176[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_176[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_179, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_179)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_181, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_180, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_181);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_180[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_180[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_180[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_180[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_183, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_183)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_185, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_184, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_185);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_184[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_184[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_184[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_184[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_187, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_187)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_189, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_188, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_189);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_188[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_188[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_188[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_188[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_191, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_191)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_193, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_192, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_193);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_192[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_192[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_192[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_192[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_195, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_195)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_197, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_196, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_197);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_196[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_196[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_196[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_196[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_199, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_199)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_201, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_200, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_201);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_200[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_200[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_200[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_200[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_203, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_203)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_205, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_204, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_205);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_204[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_204[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_204[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_204[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_207, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_207)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_209, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_208, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_209);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_208[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_208[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_208[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_208[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_211, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_211)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_213, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_212, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_213);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_212[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_212[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_212[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_212[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_215, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_215)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_217, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_216, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_217);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_216[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_216[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_216[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_216[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_219, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_219)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_221, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_220, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_221);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_220[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_220[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_220[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_220[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_223, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_223)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_225, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_224, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_225);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_224[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_224[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_224[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_224[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_227, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_227)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_229, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_228, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_229);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_228[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_228[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_228[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_228[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_231, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_231)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_233, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_232, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_233);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_232[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_232[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_232[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_232[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_235, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_235)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_237, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_236, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_237);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_236[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_236[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_236[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_236[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_239, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_239)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_241, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_240, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_241);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_240[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_240[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_240[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_240[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_243, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_243)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_245, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_244, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_245);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_244[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_244[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_244[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_244[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_247, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_247)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_249, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_248, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_249);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_248[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_248[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_248[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_248[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_251, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_251)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_253, vlSelfRef.__Vfunc_sfp_div__1__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_252, vlSelfRef.__Vfunc_sfp_div__1__remainder, __Vtemp_253);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_252[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_252[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_252[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_252[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__1__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__1__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__1__remainder, vlSelfRef.__Vfunc_sfp_div__1__b_ext)) {
                        VL_SUB_W(4, __Vtemp_255, vlSelfRef.__Vfunc_sfp_div__1__remainder, vlSelfRef.__Vfunc_sfp_div__1__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[0U] 
                            = __Vtemp_255[0U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[1U] 
                            = __Vtemp_255[1U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[2U] 
                            = __Vtemp_255[2U];
                        vlSelfRef.__Vfunc_sfp_div__1__remainder[3U] 
                            = __Vtemp_255[3U];
                        vlSelfRef.__Vfunc_sfp_div__1__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__1__result);
                    }
                    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__1__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__1__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__1__result)
                            : vlSelfRef.__Vfunc_sfp_div__1__result);
                    __Vlabel48: ;
                }
                vlSelfRef.__Vfunc_sfp_sub__0__b = vlSelfRef.__Vfunc_sfp_div__1__Vfuncout;
                vlSelfRef.__Vfunc_sfp_add__6__a = vlSelfRef.BenchMLP__DOT__prediction
                    [0U];
                vlSelfRef.__Vfunc_sfp_add__6__Vfuncout 
                    = (0x2aULL + vlSelfRef.__Vfunc_sfp_add__6__a);
                vlSelfRef.__Vfunc_sfp_div__5__b = vlSelfRef.__Vfunc_sfp_add__6__Vfuncout;
                vlSelfRef.__Vfunc_sfp_div__5__a = vlSelfRef.BenchMLP__DOT__expected
                    [0U];
                __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__5__remainder);
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__5__b_ext);
                vlSelf->__Vfunc_sfp_div__5__result = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__5__sign_bit = VL_RAND_RESET_I(1);
                vlSelf->__Vfunc_sfp_div__5__abs_a = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__5__abs_b = VL_RAND_RESET_Q(64);
                {
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__5__b)) {
                        vlSelfRef.__Vfunc_sfp_div__5__Vfuncout 
                            = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__5__a)
                                ? 0x7fffffffffffffffULL
                                : 0x8000000000000000ULL);
                        goto __Vlabel49;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__5__a)) {
                        vlSelfRef.__Vfunc_sfp_div__5__Vfuncout = 0ULL;
                        goto __Vlabel49;
                    }
                    vlSelfRef.__Vfunc_sfp_div__5__abs_a 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__5__a 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__5__a)
                            : vlSelfRef.__Vfunc_sfp_div__5__a);
                    vlSelfRef.__Vfunc_sfp_div__5__abs_b 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__5__b 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__5__b)
                            : vlSelfRef.__Vfunc_sfp_div__5__b);
                    vlSelfRef.__Vfunc_sfp_div__5__sign_bit 
                        = (IData)(((vlSelfRef.__Vfunc_sfp_div__5__a 
                                    ^ vlSelfRef.__Vfunc_sfp_div__5__b) 
                                   >> 0x3fU));
                    __Vtemp_256[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__5__abs_a);
                    __Vtemp_256[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__5__abs_a 
                                               >> 0x20U));
                    __Vtemp_256[2U] = 0U;
                    __Vtemp_256[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_256, 0x20U);
                    vlSelfRef.__Vfunc_sfp_div__5__b_ext[0U] 
                        = (IData)(vlSelfRef.__Vfunc_sfp_div__5__abs_b);
                    vlSelfRef.__Vfunc_sfp_div__5__b_ext[1U] 
                        = (IData)((vlSelfRef.__Vfunc_sfp_div__5__abs_b 
                                   >> 0x20U));
                    vlSelfRef.__Vfunc_sfp_div__5__b_ext[2U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__5__b_ext[3U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__5__result = 0ULL;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_258, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_258)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_260, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_259, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_260);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_259[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_259[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_259[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_259[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_262, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_262)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_264, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_263, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_264);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_263[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_263[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_263[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_263[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_266, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_266)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_268, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_267, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_268);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_267[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_267[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_267[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_267[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_270, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_270)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_272, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_271, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_272);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_271[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_271[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_271[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_271[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_274, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_274)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_276, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_275, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_276);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_275[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_275[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_275[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_275[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_278, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_278)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_280, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_279, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_280);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_279[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_279[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_279[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_279[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_282, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_282)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_284, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_283, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_284);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_283[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_283[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_283[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_283[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_286, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_286)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_288, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_287, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_288);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_287[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_287[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_287[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_287[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_290, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_290)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_292, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_291, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_292);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_291[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_291[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_291[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_291[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_294, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_294)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_296, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_295, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_296);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_295[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_295[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_295[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_295[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_298, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_298)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_300, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_299, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_300);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_299[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_299[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_299[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_299[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_302, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_302)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_304, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_303, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_304);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_303[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_303[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_303[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_303[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_306, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_306)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_308, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_307, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_308);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_307[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_307[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_307[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_307[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_310, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_310)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_312, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_311, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_312);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_311[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_311[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_311[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_311[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_314, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_314)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_316, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_315, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_316);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_315[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_315[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_315[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_315[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_318, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_318)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_320, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_319, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_320);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_319[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_319[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_319[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_319[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_322, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_322)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_324, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_323, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_324);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_323[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_323[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_323[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_323[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_326, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_326)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_328, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_327, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_328);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_327[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_327[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_327[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_327[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_330, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_330)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_332, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_331, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_332);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_331[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_331[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_331[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_331[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_334, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_334)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_336, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_335, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_336);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_335[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_335[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_335[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_335[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_338, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_338)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_340, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_339, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_340);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_339[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_339[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_339[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_339[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_342, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_342)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_344, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_343, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_344);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_343[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_343[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_343[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_343[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_346, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_346)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_348, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_347, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_348);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_347[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_347[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_347[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_347[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_350, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_350)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_352, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_351, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_352);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_351[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_351[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_351[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_351[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_354, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_354)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_356, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_355, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_356);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_355[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_355[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_355[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_355[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_358, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_358)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_360, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_359, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_360);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_359[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_359[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_359[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_359[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_362, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_362)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_364, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_363, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_364);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_363[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_363[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_363[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_363[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_366, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_366)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_368, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_367, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_368);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_367[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_367[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_367[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_367[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_370, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_370)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_372, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_371, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_372);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_371[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_371[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_371[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_371[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_374, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_374)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_376, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_375, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_376);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_375[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_375[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_375[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_375[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_378, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_378)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_380, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_379, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_380);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_379[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_379[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_379[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_379[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_382, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_382)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_384, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_383, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_384);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_383[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_383[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_383[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_383[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_386, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_386)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_388, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_387, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_388);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_387[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_387[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_387[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_387[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_390, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_390)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_392, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_391, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_392);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_391[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_391[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_391[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_391[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_394, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_394)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_396, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_395, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_396);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_395[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_395[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_395[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_395[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_398, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_398)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_400, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_399, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_400);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_399[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_399[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_399[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_399[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_402, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_402)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_404, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_403, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_404);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_403[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_403[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_403[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_403[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_406, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_406)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_408, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_407, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_408);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_407[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_407[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_407[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_407[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_410, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_410)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_412, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_411, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_412);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_411[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_411[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_411[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_411[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_414, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_414)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_416, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_415, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_416);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_415[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_415[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_415[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_415[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_418, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_418)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_420, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_419, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_420);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_419[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_419[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_419[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_419[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_422, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_422)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_424, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_423, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_424);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_423[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_423[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_423[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_423[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_426, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_426)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_428, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_427, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_428);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_427[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_427[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_427[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_427[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_430, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_430)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_432, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_431, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_432);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_431[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_431[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_431[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_431[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_434, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_434)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_436, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_435, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_436);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_435[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_435[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_435[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_435[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_438, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_438)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_440, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_439, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_440);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_439[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_439[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_439[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_439[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_442, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_442)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_444, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_443, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_444);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_443[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_443[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_443[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_443[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_446, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_446)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_448, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_447, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_448);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_447[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_447[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_447[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_447[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_450, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_450)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_452, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_451, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_452);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_451[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_451[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_451[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_451[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_454, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_454)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_456, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_455, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_456);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_455[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_455[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_455[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_455[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_458, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_458)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_460, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_459, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_460);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_459[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_459[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_459[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_459[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_462, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_462)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_464, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_463, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_464);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_463[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_463[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_463[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_463[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_466, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_466)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_468, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_467, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_468);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_467[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_467[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_467[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_467[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_470, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_470)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_472, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_471, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_472);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_471[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_471[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_471[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_471[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_474, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_474)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_476, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_475, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_476);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_475[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_475[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_475[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_475[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_478, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_478)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_480, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_479, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_480);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_479[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_479[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_479[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_479[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_482, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_482)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_484, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_483, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_484);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_483[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_483[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_483[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_483[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_486, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_486)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_488, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_487, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_488);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_487[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_487[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_487[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_487[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_490, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_490)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_492, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_491, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_492);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_491[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_491[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_491[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_491[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_494, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_494)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_496, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_495, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_496);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_495[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_495[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_495[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_495[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_498, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_498)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_500, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_499, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_500);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_499[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_499[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_499[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_499[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_502, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_502)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_504, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_503, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_504);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_503[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_503[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_503[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_503[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_506, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_506)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_508, vlSelfRef.__Vfunc_sfp_div__5__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_507, vlSelfRef.__Vfunc_sfp_div__5__remainder, __Vtemp_508);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_507[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_507[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_507[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_507[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__5__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__5__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__5__remainder, vlSelfRef.__Vfunc_sfp_div__5__b_ext)) {
                        VL_SUB_W(4, __Vtemp_510, vlSelfRef.__Vfunc_sfp_div__5__remainder, vlSelfRef.__Vfunc_sfp_div__5__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[0U] 
                            = __Vtemp_510[0U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[1U] 
                            = __Vtemp_510[1U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[2U] 
                            = __Vtemp_510[2U];
                        vlSelfRef.__Vfunc_sfp_div__5__remainder[3U] 
                            = __Vtemp_510[3U];
                        vlSelfRef.__Vfunc_sfp_div__5__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__5__result);
                    }
                    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__5__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__5__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__5__result)
                            : vlSelfRef.__Vfunc_sfp_div__5__result);
                    __Vlabel49: ;
                }
                vlSelfRef.__Vfunc_sfp_sub__0__a = vlSelfRef.__Vfunc_sfp_div__5__Vfuncout;
                vlSelfRef.__Vfunc_sfp_sub__0__Vfuncout 
                    = (vlSelfRef.__Vfunc_sfp_sub__0__a 
                       - vlSelfRef.__Vfunc_sfp_sub__0__b);
            }(), vlSelfRef.__Vfunc_sfp_sub__0__Vfuncout));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__activation_gradients[0U] 
        = BenchMLP__DOT__mlp__DOT____Vlvbound_hadc1fea3__0;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__unnamedblk2__DOT__i = 1U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__activation_gradients
        [0U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient = 0ULL;
    if ((1U == vlSelfRef.BenchMLP__DOT__output_activation)) {
        vlSelfRef.__Vfunc_sfp_sub__129__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__prediction;
        vlSelfRef.__Vfunc_sfp_sub__129__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.__Vfunc_sfp_sub__129__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__129__a - vlSelfRef.__Vfunc_sfp_sub__129__b);
        vlSelfRef.__Vfunc_sfp_mul__128__b = vlSelfRef.__Vfunc_sfp_sub__129__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__128__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__prediction;
        VL_EXTENDS_WQ(128,64, __Vtemp_511, vlSelfRef.__Vfunc_sfp_mul__128__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_512, vlSelfRef.__Vfunc_sfp_mul__128__b);
        VL_MULS_WWW(128, __Vtemp_513, __Vtemp_511, __Vtemp_512);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__128__tmp, __Vtemp_513, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__128__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__128__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__128__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__127__b = vlSelfRef.__Vfunc_sfp_mul__128__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__127__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_514, vlSelfRef.__Vfunc_sfp_mul__127__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_515, vlSelfRef.__Vfunc_sfp_mul__127__b);
        VL_MULS_WWW(128, __Vtemp_516, __Vtemp_514, __Vtemp_515);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__127__tmp, __Vtemp_516, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__127__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__127__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__127__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__126__b = vlSelfRef.__Vfunc_sfp_mul__127__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__126__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_517, vlSelfRef.__Vfunc_sfp_mul__126__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_518, vlSelfRef.__Vfunc_sfp_mul__126__b);
        VL_MULS_WWW(128, __Vtemp_519, __Vtemp_517, __Vtemp_518);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__126__tmp, __Vtemp_519, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__126__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__126__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__126__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__125__b = vlSelfRef.__Vfunc_sfp_mul__126__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__125__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__125__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__125__a + vlSelfRef.__Vfunc_sfp_add__125__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__125__Vfuncout;
    } else if ((2U == vlSelfRef.BenchMLP__DOT__output_activation)) {
        vlSelfRef.__Vfunc_sfp_pow__134__b = 2U;
        vlSelfRef.__Vfunc_sfp_tanh__135__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__prediction;
        {
            if (VL_GTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__135__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__136__n = 3U;
                            vlSelfRef.__Vfunc_int_to_sfp__136__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__136__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__136__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__135__Vfuncout 
                    = vlSymsp->TOP__FixedPoint.ONE;
                goto __Vlabel50;
            }
            if (VL_LTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__135__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__137__n = 0xfffffffdU;
                            vlSelfRef.__Vfunc_int_to_sfp__137__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__137__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__137__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__135__Vfuncout 
                    = (- vlSymsp->TOP__FixedPoint.ONE);
                goto __Vlabel50;
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
            while (VL_GTS_III(32, 0x14U, vlSelfRef.__Vfunc_sfp_exp__141__unnamedblk3__DOT__i)) {
                vlSelfRef.__Vfunc_int_to_sfp__143__n 
                    = vlSelfRef.__Vfunc_sfp_exp__141__unnamedblk3__DOT__i;
                vlSelfRef.__Vfunc_int_to_sfp__143__Vfuncout 
                    = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__143__n), 0x20U);
                vlSelfRef.__Vfunc_sfp_div__142__b = vlSelfRef.__Vfunc_int_to_sfp__143__Vfuncout;
                vlSelfRef.__Vfunc_sfp_mul__144__b = vlSelfRef.__Vfunc_sfp_exp__141__a;
                vlSelfRef.__Vfunc_sfp_mul__144__a = vlSelfRef.__Vfunc_sfp_exp__141__term;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__144__tmp);
                VL_EXTENDS_WQ(128,64, __Vtemp_520, vlSelfRef.__Vfunc_sfp_mul__144__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_521, vlSelfRef.__Vfunc_sfp_mul__144__b);
                VL_MULS_WWW(128, __Vtemp_522, __Vtemp_520, __Vtemp_521);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__144__tmp, __Vtemp_522, 0x20U);
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
                        goto __Vlabel51;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__142__a)) {
                        vlSelfRef.__Vfunc_sfp_div__142__Vfuncout = 0ULL;
                        goto __Vlabel51;
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
                    __Vtemp_523[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__142__abs_a);
                    __Vtemp_523[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__142__abs_a 
                                               >> 0x20U));
                    __Vtemp_523[2U] = 0U;
                    __Vtemp_523[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_523, 0x20U);
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
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_525, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_525)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_527, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_526, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_527);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_526[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_526[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_526[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_526[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_529, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_529)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_531, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_530, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_531);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_530[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_530[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_530[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_530[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_533, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_533)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_535, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_534, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_535);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_534[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_534[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_534[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_534[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_537, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_537)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_539, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_538, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_539);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_538[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_538[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_538[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_538[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_541, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_541)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_543, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_542, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_543);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_542[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_542[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_542[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_542[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_545, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_545)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_547, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_546, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_547);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_546[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_546[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_546[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_546[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_549, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_549)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_551, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_550, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_551);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_550[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_550[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_550[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_550[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_553, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_553)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_555, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_554, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_555);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_554[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_554[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_554[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_554[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_557, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_557)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_559, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_558, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_559);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_558[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_558[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_558[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_558[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_561, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_561)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_563, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_562, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_563);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_562[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_562[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_562[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_562[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_565, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_565)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_567, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_566, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_567);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_566[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_566[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_566[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_566[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_569, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_569)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_571, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_570, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_571);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_570[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_570[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_570[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_570[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_573, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_573)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_575, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_574, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_575);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_574[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_574[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_574[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_574[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_577, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_577)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_579, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_578, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_579);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_578[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_578[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_578[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_578[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_581, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_581)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_583, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_582, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_583);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_582[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_582[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_582[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_582[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_585, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_585)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_587, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_586, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_587);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_586[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_586[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_586[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_586[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_589, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_589)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_591, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_590, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_591);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_590[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_590[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_590[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_590[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_593, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_593)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_595, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_594, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_595);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_594[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_594[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_594[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_594[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_597, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_597)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_599, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_598, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_599);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_598[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_598[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_598[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_598[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_601, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_601)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_603, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_602, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_603);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_602[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_602[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_602[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_602[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_605, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_605)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_607, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_606, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_607);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_606[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_606[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_606[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_606[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_609, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_609)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_611, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_610, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_611);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_610[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_610[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_610[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_610[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_613, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_613)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_615, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_614, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_615);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_614[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_614[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_614[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_614[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_617, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_617)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_619, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_618, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_619);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_618[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_618[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_618[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_618[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_621, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_621)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_623, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_622, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_623);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_622[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_622[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_622[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_622[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_625, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_625)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_627, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_626, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_627);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_626[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_626[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_626[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_626[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_629, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_629)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_631, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_630, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_631);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_630[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_630[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_630[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_630[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_633, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_633)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_635, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_634, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_635);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_634[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_634[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_634[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_634[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_637, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_637)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_639, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_638, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_639);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_638[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_638[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_638[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_638[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_641, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_641)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_643, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_642, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_643);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_642[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_642[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_642[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_642[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_645, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_645)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_647, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_646, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_647);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_646[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_646[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_646[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_646[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_649, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_649)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_651, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_650, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_651);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_650[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_650[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_650[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_650[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_653, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_653)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_655, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_654, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_655);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_654[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_654[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_654[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_654[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_657, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_657)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_659, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_658, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_659);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_658[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_658[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_658[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_658[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_661, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_661)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_663, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_662, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_663);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_662[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_662[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_662[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_662[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_665, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_665)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_667, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_666, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_667);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_666[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_666[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_666[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_666[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_669, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_669)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_671, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_670, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_671);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_670[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_670[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_670[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_670[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_673, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_673)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_675, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_674, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_675);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_674[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_674[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_674[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_674[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_677, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_677)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_679, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_678, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_679);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_678[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_678[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_678[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_678[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_681, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_681)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_683, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_682, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_683);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_682[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_682[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_682[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_682[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_685, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_685)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_687, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_686, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_687);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_686[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_686[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_686[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_686[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_689, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_689)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_691, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_690, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_691);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_690[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_690[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_690[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_690[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_693, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_693)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_695, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_694, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_695);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_694[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_694[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_694[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_694[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_697, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_697)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_699, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_698, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_699);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_698[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_698[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_698[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_698[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_701, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_701)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_703, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_702, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_703);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_702[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_702[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_702[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_702[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_705, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_705)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_707, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_706, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_707);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_706[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_706[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_706[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_706[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_709, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_709)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_711, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_710, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_711);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_710[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_710[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_710[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_710[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_713, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_713)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_715, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_714, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_715);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_714[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_714[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_714[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_714[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_717, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_717)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_719, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_718, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_719);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_718[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_718[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_718[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_718[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_721, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_721)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_723, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_722, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_723);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_722[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_722[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_722[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_722[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_725, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_725)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_727, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_726, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_727);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_726[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_726[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_726[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_726[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_729, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_729)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_731, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_730, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_731);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_730[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_730[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_730[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_730[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_733, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_733)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_735, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_734, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_735);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_734[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_734[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_734[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_734[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_737, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_737)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_739, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_738, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_739);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_738[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_738[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_738[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_738[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_741, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_741)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_743, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_742, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_743);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_742[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_742[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_742[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_742[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_745, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_745)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_747, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_746, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_747);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_746[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_746[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_746[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_746[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_749, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_749)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_751, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_750, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_751);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_750[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_750[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_750[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_750[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_753, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_753)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_755, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_754, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_755);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_754[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_754[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_754[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_754[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_757, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_757)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_759, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_758, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_759);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_758[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_758[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_758[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_758[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_761, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_761)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_763, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_762, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_763);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_762[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_762[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_762[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_762[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_765, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_765)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_767, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_766, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_767);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_766[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_766[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_766[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_766[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_769, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_769)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_771, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_770, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_771);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_770[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_770[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_770[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_770[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_773, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_773)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_775, vlSelfRef.__Vfunc_sfp_div__142__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_774, vlSelfRef.__Vfunc_sfp_div__142__remainder, __Vtemp_775);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_774[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_774[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_774[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_774[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__142__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__142__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__142__remainder, vlSelfRef.__Vfunc_sfp_div__142__b_ext)) {
                        VL_SUB_W(4, __Vtemp_777, vlSelfRef.__Vfunc_sfp_div__142__remainder, vlSelfRef.__Vfunc_sfp_div__142__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[0U] 
                            = __Vtemp_777[0U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[1U] 
                            = __Vtemp_777[1U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[2U] 
                            = __Vtemp_777[2U];
                        vlSelfRef.__Vfunc_sfp_div__142__remainder[3U] 
                            = __Vtemp_777[3U];
                        vlSelfRef.__Vfunc_sfp_div__142__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__142__result);
                    }
                    __Vfunc_sfp_div__142__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__142__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__142__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__142__result)
                            : vlSelfRef.__Vfunc_sfp_div__142__result);
                    __Vlabel51: ;
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
                    goto __Vlabel52;
                }
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__139__a)) {
                    vlSelfRef.__Vfunc_sfp_div__139__Vfuncout = 0ULL;
                    goto __Vlabel52;
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
                __Vtemp_779[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__139__abs_a);
                __Vtemp_779[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__139__abs_a 
                                           >> 0x20U));
                __Vtemp_779[2U] = 0U;
                __Vtemp_779[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_779, 0x20U);
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
                VL_SHIFTL_WWI(128,128,32, __Vtemp_781, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_781)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_783, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_782, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_783);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_782[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_782[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_782[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_782[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_785, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_785)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_787, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_786, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_787);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_786[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_786[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_786[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_786[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_789, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_789)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_791, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_790, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_791);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_790[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_790[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_790[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_790[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_793, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_793)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_795, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_794, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_795);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_794[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_794[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_794[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_794[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_797, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_797)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_799, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_798, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_799);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_798[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_798[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_798[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_798[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_801, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_801)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_803, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_802, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_803);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_802[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_802[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_802[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_802[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_805, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_805)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_807, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_806, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_807);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_806[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_806[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_806[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_806[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_809, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_809)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_811, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_810, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_811);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_810[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_810[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_810[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_810[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_813, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_813)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_815, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_814, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_815);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_814[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_814[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_814[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_814[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_817, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_817)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_819, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_818, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_819);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_818[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_818[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_818[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_818[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_821, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_821)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_823, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_822, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_823);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_822[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_822[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_822[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_822[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_825, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_825)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_827, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_826, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_827);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_826[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_826[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_826[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_826[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_829, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_829)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_831, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_830, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_831);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_830[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_830[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_830[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_830[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_833, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_833)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_835, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_834, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_835);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_834[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_834[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_834[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_834[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_837, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_837)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_839, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_838, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_839);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_838[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_838[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_838[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_838[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_841, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_841)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_843, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_842, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_843);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_842[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_842[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_842[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_842[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_845, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_845)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_847, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_846, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_847);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_846[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_846[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_846[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_846[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_849, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_849)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_851, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_850, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_851);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_850[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_850[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_850[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_850[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_853, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_853)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_855, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_854, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_855);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_854[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_854[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_854[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_854[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_857, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_857)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_859, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_858, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_859);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_858[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_858[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_858[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_858[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_861, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_861)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_863, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_862, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_863);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_862[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_862[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_862[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_862[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_865, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_865)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_867, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_866, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_867);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_866[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_866[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_866[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_866[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_869, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_869)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_871, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_870, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_871);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_870[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_870[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_870[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_870[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_873, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_873)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_875, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_874, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_875);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_874[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_874[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_874[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_874[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_877, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_877)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_879, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_878, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_879);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_878[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_878[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_878[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_878[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_881, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_881)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_883, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_882, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_883);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_882[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_882[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_882[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_882[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_885, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_885)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_887, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_886, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_887);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_886[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_886[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_886[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_886[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_889, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_889)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_891, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_890, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_891);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_890[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_890[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_890[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_890[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_893, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_893)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_895, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_894, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_895);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_894[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_894[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_894[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_894[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_897, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_897)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_899, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_898, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_899);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_898[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_898[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_898[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_898[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_901, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_901)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_903, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_902, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_903);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_902[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_902[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_902[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_902[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_905, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_905)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_907, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_906, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_907);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_906[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_906[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_906[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_906[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_909, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_909)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_911, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_910, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_911);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_910[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_910[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_910[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_910[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_913, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_913)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_915, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_914, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_915);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_914[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_914[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_914[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_914[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_917, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_917)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_919, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_918, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_919);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_918[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_918[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_918[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_918[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_921, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_921)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_923, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_922, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_923);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_922[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_922[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_922[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_922[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_925, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_925)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_927, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_926, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_927);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_926[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_926[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_926[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_926[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_929, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_929)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_931, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_930, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_931);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_930[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_930[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_930[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_930[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_933, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_933)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_935, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_934, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_935);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_934[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_934[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_934[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_934[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_937, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_937)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_939, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_938, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_939);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_938[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_938[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_938[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_938[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_941, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_941)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_943, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_942, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_943);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_942[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_942[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_942[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_942[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_945, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_945)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_947, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_946, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_947);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_946[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_946[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_946[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_946[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_949, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_949)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_951, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_950, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_951);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_950[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_950[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_950[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_950[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_953, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_953)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_955, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_954, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_955);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_954[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_954[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_954[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_954[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_957, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_957)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_959, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_958, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_959);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_958[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_958[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_958[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_958[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_961, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_961)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_963, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_962, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_963);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_962[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_962[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_962[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_962[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_965, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_965)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_967, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_966, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_967);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_966[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_966[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_966[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_966[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_969, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_969)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_971, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_970, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_971);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_970[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_970[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_970[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_970[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_973, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_973)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_975, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_974, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_975);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_974[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_974[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_974[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_974[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_977, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_977)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_979, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_978, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_979);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_978[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_978[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_978[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_978[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_981, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_981)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_983, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_982, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_983);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_982[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_982[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_982[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_982[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_985, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_985)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_987, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_986, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_987);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_986[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_986[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_986[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_986[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_989, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_989)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_991, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_990, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_991);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_990[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_990[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_990[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_990[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_993, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_993)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_995, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_994, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_995);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_994[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_994[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_994[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_994[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_997, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_997)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_999, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_998, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_999);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_998[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_998[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_998[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_998[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1001, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1001)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1003, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_1002, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1003);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1002[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1002[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1002[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1002[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1005, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1005)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1007, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_1006, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1007);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1006[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1006[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1006[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1006[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1009, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1009)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1011, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_1010, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1011);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1010[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1010[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1010[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1010[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1013, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1013)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1015, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_1014, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1015);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1014[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1014[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1014[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1014[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1017, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1017)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1019, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_1018, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1019);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1018[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1018[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1018[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1018[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1021, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1021)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1023, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_1022, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1023);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1022[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1022[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1022[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1022[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1025, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1025)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1027, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_1026, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1027);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1026[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1026[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1026[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1026[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1029, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1029)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1031, vlSelfRef.__Vfunc_sfp_div__139__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_1030, vlSelfRef.__Vfunc_sfp_div__139__remainder, __Vtemp_1031);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1030[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1030[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1030[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1030[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__139__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__139__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__139__remainder, vlSelfRef.__Vfunc_sfp_div__139__b_ext)) {
                    VL_SUB_W(4, __Vtemp_1033, vlSelfRef.__Vfunc_sfp_div__139__remainder, vlSelfRef.__Vfunc_sfp_div__139__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[0U] 
                        = __Vtemp_1033[0U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[1U] 
                        = __Vtemp_1033[1U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[2U] 
                        = __Vtemp_1033[2U];
                    vlSelfRef.__Vfunc_sfp_div__139__remainder[3U] 
                        = __Vtemp_1033[3U];
                    vlSelfRef.__Vfunc_sfp_div__139__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__139__result);
                }
                __Vfunc_sfp_div__139__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_sfp_div__139__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_sfp_div__139__sign_bit)
                        ? (- vlSelfRef.__Vfunc_sfp_div__139__result)
                        : vlSelfRef.__Vfunc_sfp_div__139__result);
                __Vlabel52: ;
            }
            vlSelfRef.__Vfunc_sfp_sub__138__a = vlSelfRef.__Vfunc_sfp_div__139__Vfuncout;
            vlSelfRef.__Vfunc_sfp_sub__138__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_sub__138__a 
                   - vlSelfRef.__Vfunc_sfp_sub__138__b);
            vlSelfRef.__Vfunc_sfp_tanh__135__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_sub__138__Vfuncout;
            __Vlabel50: ;
        }
        vlSelfRef.__Vfunc_sfp_pow__134__a = vlSelfRef.__Vfunc_sfp_tanh__135__Vfuncout;
        vlSelfRef.__Vfunc_sfp_pow__134__result = 1ULL;
        vlSelfRef.__Vfunc_sfp_pow__134__unnamedblk2__DOT__i = 1U;
        while (VL_LTES_III(32, vlSelfRef.__Vfunc_sfp_pow__134__unnamedblk2__DOT__i, vlSelfRef.__Vfunc_sfp_pow__134__b)) {
            vlSelfRef.__Vfunc_sfp_mul__147__b = vlSelfRef.__Vfunc_sfp_pow__134__a;
            vlSelfRef.__Vfunc_sfp_mul__147__a = vlSelfRef.__Vfunc_sfp_pow__134__result;
            VL_EXTENDS_WQ(128,64, __Vtemp_1034, vlSelfRef.__Vfunc_sfp_mul__147__a);
            VL_EXTENDS_WQ(128,64, __Vtemp_1035, vlSelfRef.__Vfunc_sfp_mul__147__b);
            VL_MULS_WWW(128, __Vtemp_1036, __Vtemp_1034, __Vtemp_1035);
            VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__147__tmp, __Vtemp_1036, 0x20U);
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
        vlSelfRef.__Vfunc_sfp_mul__132__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1038, vlSelfRef.__Vfunc_sfp_mul__132__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1039, vlSelfRef.__Vfunc_sfp_mul__132__b);
        VL_MULS_WWW(128, __Vtemp_1040, __Vtemp_1038, __Vtemp_1039);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__132__tmp, __Vtemp_1040, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__132__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__132__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__132__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__131__b = vlSelfRef.__Vfunc_sfp_mul__132__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__131__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1041, vlSelfRef.__Vfunc_sfp_mul__131__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1042, vlSelfRef.__Vfunc_sfp_mul__131__b);
        VL_MULS_WWW(128, __Vtemp_1043, __Vtemp_1041, __Vtemp_1042);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__131__tmp, __Vtemp_1043, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__131__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__131__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__131__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__130__b = vlSelfRef.__Vfunc_sfp_mul__131__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__130__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__130__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__130__a + vlSelfRef.__Vfunc_sfp_add__130__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__130__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk4__DOT__i = 1U;
    } else if ((3U == vlSelfRef.BenchMLP__DOT__output_activation)) {
        vlSelfRef.__Vfunc_sfp_mul__149__b = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum)
                                              ? vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer
                                             [0U] : 0ULL);
        vlSelfRef.__Vfunc_sfp_mul__149__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1044, vlSelfRef.__Vfunc_sfp_mul__149__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1045, vlSelfRef.__Vfunc_sfp_mul__149__b);
        VL_MULS_WWW(128, __Vtemp_1046, __Vtemp_1044, __Vtemp_1045);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__149__tmp, __Vtemp_1046, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__149__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__149__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__149__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__148__b = vlSelfRef.__Vfunc_sfp_mul__149__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__148__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__148__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__148__a + vlSelfRef.__Vfunc_sfp_add__148__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__148__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk5__DOT__i = 1U;
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient = 0ULL;
    }
    __Vfunc_sfp_mul__150__b = vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
        [0U];
    __Vfunc_sfp_mul__150__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1047, __Vfunc_sfp_mul__150__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1048, __Vfunc_sfp_mul__150__b);
    VL_MULS_WWW(128, __Vtemp_1049, __Vtemp_1047, __Vtemp_1048);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__150__tmp, __Vtemp_1049, 0x20U);
    __Vfunc_sfp_mul__150__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__150__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__150__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__150__Vfuncout;
    __Vfunc_sfp_mul__150__b = vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
        [1U];
    __Vfunc_sfp_mul__150__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1050, __Vfunc_sfp_mul__150__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1051, __Vfunc_sfp_mul__150__b);
    VL_MULS_WWW(128, __Vtemp_1052, __Vtemp_1050, __Vtemp_1051);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__150__tmp, __Vtemp_1052, 0x20U);
    __Vfunc_sfp_mul__150__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__150__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__150__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__150__Vfuncout;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk6__DOT__i = 2U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    if ((1U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_sub__13__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction;
        vlSelfRef.__Vfunc_sfp_sub__13__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.__Vfunc_sfp_sub__13__Vfuncout = (vlSelfRef.__Vfunc_sfp_sub__13__a 
                                                   - vlSelfRef.__Vfunc_sfp_sub__13__b);
        vlSelfRef.__Vfunc_sfp_mul__12__b = vlSelfRef.__Vfunc_sfp_sub__13__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__12__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction;
        VL_EXTENDS_WQ(128,64, __Vtemp_1053, vlSelfRef.__Vfunc_sfp_mul__12__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1054, vlSelfRef.__Vfunc_sfp_mul__12__b);
        VL_MULS_WWW(128, __Vtemp_1055, __Vtemp_1053, __Vtemp_1054);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__12__tmp, __Vtemp_1055, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__12__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__12__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__12__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__11__b = vlSelfRef.__Vfunc_sfp_mul__12__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__11__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1056, vlSelfRef.__Vfunc_sfp_mul__11__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1057, vlSelfRef.__Vfunc_sfp_mul__11__b);
        VL_MULS_WWW(128, __Vtemp_1058, __Vtemp_1056, __Vtemp_1057);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__11__tmp, __Vtemp_1058, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__11__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__11__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__11__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__10__b = vlSelfRef.__Vfunc_sfp_mul__11__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__10__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1059, vlSelfRef.__Vfunc_sfp_mul__10__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1060, vlSelfRef.__Vfunc_sfp_mul__10__b);
        VL_MULS_WWW(128, __Vtemp_1061, __Vtemp_1059, __Vtemp_1060);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__10__tmp, __Vtemp_1061, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__10__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__10__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__10__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__9__b = vlSelfRef.__Vfunc_sfp_mul__10__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__9__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__9__Vfuncout = (vlSelfRef.__Vfunc_sfp_add__9__a 
                                                  + vlSelfRef.__Vfunc_sfp_add__9__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__9__Vfuncout;
    } else if ((2U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_pow__18__b = 2U;
        vlSelfRef.__Vfunc_sfp_tanh__19__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction;
        {
            if (VL_GTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__19__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__20__n = 3U;
                            vlSelfRef.__Vfunc_int_to_sfp__20__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__20__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__20__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__19__Vfuncout 
                    = vlSymsp->TOP__FixedPoint.ONE;
                goto __Vlabel53;
            }
            if (VL_LTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__19__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__21__n = 0xfffffffdU;
                            vlSelfRef.__Vfunc_int_to_sfp__21__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__21__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__21__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__19__Vfuncout 
                    = (- vlSymsp->TOP__FixedPoint.ONE);
                goto __Vlabel53;
            }
            vlSelfRef.__Vfunc_sfp_sub__22__b = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__25__a = VL_SHIFTL_QQI(64,64,32, 
                                                             (- vlSelfRef.__Vfunc_sfp_tanh__19__a), 1U);
            vlSelf->__Vfunc_sfp_exp__25__unnamedblk3__DOT__i = 0;
            vlSelf->__Vfunc_sfp_exp__25__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_exp__25__term = VL_RAND_RESET_Q(64);
            vlSelfRef.__Vfunc_sfp_exp__25__result = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__25__term = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__25__unnamedblk3__DOT__i = 1U;
            while (VL_GTS_III(32, 0x14U, vlSelfRef.__Vfunc_sfp_exp__25__unnamedblk3__DOT__i)) {
                vlSelfRef.__Vfunc_int_to_sfp__27__n 
                    = vlSelfRef.__Vfunc_sfp_exp__25__unnamedblk3__DOT__i;
                vlSelfRef.__Vfunc_int_to_sfp__27__Vfuncout 
                    = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__27__n), 0x20U);
                vlSelfRef.__Vfunc_sfp_div__26__b = vlSelfRef.__Vfunc_int_to_sfp__27__Vfuncout;
                vlSelfRef.__Vfunc_sfp_mul__28__b = vlSelfRef.__Vfunc_sfp_exp__25__a;
                vlSelfRef.__Vfunc_sfp_mul__28__a = vlSelfRef.__Vfunc_sfp_exp__25__term;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__28__tmp);
                VL_EXTENDS_WQ(128,64, __Vtemp_1062, vlSelfRef.__Vfunc_sfp_mul__28__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_1063, vlSelfRef.__Vfunc_sfp_mul__28__b);
                VL_MULS_WWW(128, __Vtemp_1064, __Vtemp_1062, __Vtemp_1063);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__28__tmp, __Vtemp_1064, 0x20U);
                vlSelfRef.__Vfunc_sfp_mul__28__Vfuncout 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__28__tmp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__Vfunc_sfp_mul__28__tmp[0U])));
                vlSelfRef.__Vfunc_sfp_div__26__a = vlSelfRef.__Vfunc_sfp_mul__28__Vfuncout;
                __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__26__remainder);
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__26__b_ext);
                vlSelf->__Vfunc_sfp_div__26__result = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__26__sign_bit = VL_RAND_RESET_I(1);
                vlSelf->__Vfunc_sfp_div__26__abs_a = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__26__abs_b = VL_RAND_RESET_Q(64);
                {
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__26__b)) {
                        vlSelfRef.__Vfunc_sfp_div__26__Vfuncout 
                            = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__26__a)
                                ? 0x7fffffffffffffffULL
                                : 0x8000000000000000ULL);
                        goto __Vlabel54;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__26__a)) {
                        vlSelfRef.__Vfunc_sfp_div__26__Vfuncout = 0ULL;
                        goto __Vlabel54;
                    }
                    vlSelfRef.__Vfunc_sfp_div__26__abs_a 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__26__a 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__26__a)
                            : vlSelfRef.__Vfunc_sfp_div__26__a);
                    vlSelfRef.__Vfunc_sfp_div__26__abs_b 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__26__b 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__26__b)
                            : vlSelfRef.__Vfunc_sfp_div__26__b);
                    vlSelfRef.__Vfunc_sfp_div__26__sign_bit 
                        = (IData)(((vlSelfRef.__Vfunc_sfp_div__26__a 
                                    ^ vlSelfRef.__Vfunc_sfp_div__26__b) 
                                   >> 0x3fU));
                    __Vtemp_1065[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__26__abs_a);
                    __Vtemp_1065[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__26__abs_a 
                                                >> 0x20U));
                    __Vtemp_1065[2U] = 0U;
                    __Vtemp_1065[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1065, 0x20U);
                    vlSelfRef.__Vfunc_sfp_div__26__b_ext[0U] 
                        = (IData)(vlSelfRef.__Vfunc_sfp_div__26__abs_b);
                    vlSelfRef.__Vfunc_sfp_div__26__b_ext[1U] 
                        = (IData)((vlSelfRef.__Vfunc_sfp_div__26__abs_b 
                                   >> 0x20U));
                    vlSelfRef.__Vfunc_sfp_div__26__b_ext[2U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__26__b_ext[3U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__26__result = 0ULL;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1067, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1067)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1069, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_1068, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1069);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1068[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1068[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1068[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1068[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1071, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1071)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1073, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_1072, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1073);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1072[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1072[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1072[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1072[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1075, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1075)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1077, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_1076, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1077);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1076[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1076[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1076[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1076[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1079, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1079)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1081, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_1080, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1081);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1080[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1080[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1080[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1080[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1083, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1083)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1085, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_1084, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1085);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1084[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1084[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1084[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1084[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1087, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1087)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1089, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_1088, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1089);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1088[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1088[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1088[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1088[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1091, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1091)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1093, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_1092, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1093);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1092[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1092[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1092[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1092[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1095, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1095)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1097, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_1096, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1097);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1096[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1096[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1096[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1096[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1099, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1099)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1101, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_1100, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1101);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1100[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1100[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1100[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1100[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1103, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1103)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1105, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_1104, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1105);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1104[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1104[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1104[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1104[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1107, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1107)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1109, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_1108, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1109);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1108[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1108[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1108[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1108[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1111, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1111)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1113, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_1112, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1113);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1112[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1112[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1112[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1112[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1115, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1115)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1117, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_1116, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1117);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1116[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1116[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1116[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1116[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1119, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1119)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1121, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_1120, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1121);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1120[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1120[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1120[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1120[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1123, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1123)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1125, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_1124, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1125);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1124[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1124[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1124[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1124[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1127, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1127)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1129, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_1128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1129);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1128[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1128[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1128[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1128[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1131, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1131)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1133, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_1132, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1133);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1132[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1132[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1132[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1132[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1135, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1135)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1137, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_1136, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1137);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1136[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1136[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1136[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1136[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1139, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1139)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1141, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_1140, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1141);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1140[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1140[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1140[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1140[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1143, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1143)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1145, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_1144, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1145);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1144[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1144[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1144[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1144[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1147, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1147)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1149, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_1148, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1149);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1148[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1148[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1148[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1148[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1151, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1151)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1153, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_1152, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1153);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1152[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1152[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1152[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1152[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1155, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1155)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1157, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_1156, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1157);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1156[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1156[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1156[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1156[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1159, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1159)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1161, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_1160, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1161);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1160[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1160[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1160[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1160[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1163, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1163)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1165, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_1164, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1165);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1164[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1164[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1164[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1164[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1167, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1167)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1169, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_1168, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1169);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1168[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1168[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1168[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1168[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1171, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1171)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1173, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_1172, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1173);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1172[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1172[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1172[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1172[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1175, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1175)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1177, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_1176, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1177);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1176[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1176[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1176[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1176[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1179, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1179)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1181, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_1180, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1181);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1180[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1180[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1180[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1180[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1183, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1183)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1185, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_1184, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1185);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1184[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1184[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1184[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1184[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1187, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1187)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1189, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_1188, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1189);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1188[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1188[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1188[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1188[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1191, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1191)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1193, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_1192, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1193);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1192[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1192[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1192[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1192[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1195, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1195)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1197, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_1196, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1197);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1196[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1196[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1196[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1196[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1199, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1199)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1201, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_1200, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1201);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1200[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1200[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1200[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1200[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1203, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1203)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1205, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_1204, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1205);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1204[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1204[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1204[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1204[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1207, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1207)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1209, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_1208, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1209);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1208[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1208[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1208[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1208[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1211, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1211)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1213, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_1212, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1213);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1212[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1212[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1212[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1212[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1215, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1215)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1217, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_1216, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1217);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1216[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1216[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1216[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1216[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1219, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1219)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1221, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_1220, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1221);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1220[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1220[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1220[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1220[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1223, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1223)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1225, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_1224, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1225);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1224[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1224[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1224[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1224[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1227, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1227)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1229, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_1228, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1229);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1228[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1228[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1228[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1228[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1231, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1231)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1233, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_1232, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1233);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1232[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1232[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1232[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1232[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1235, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1235)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1237, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_1236, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1237);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1236[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1236[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1236[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1236[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1239, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1239)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1241, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_1240, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1241);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1240[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1240[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1240[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1240[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1243, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1243)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1245, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_1244, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1245);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1244[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1244[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1244[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1244[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1247, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1247)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1249, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_1248, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1249);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1248[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1248[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1248[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1248[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1251, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1251)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1253, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_1252, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1253);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1252[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1252[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1252[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1252[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1255, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1255)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1257, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_1256, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1257);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1256[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1256[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1256[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1256[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1259, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1259)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1261, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_1260, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1261);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1260[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1260[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1260[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1260[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1263, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1263)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1265, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_1264, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1265);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1264[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1264[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1264[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1264[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1267, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1267)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1269, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_1268, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1269);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1268[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1268[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1268[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1268[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1271, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1271)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1273, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_1272, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1273);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1272[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1272[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1272[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1272[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1275, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1275)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1277, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_1276, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1277);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1276[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1276[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1276[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1276[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1279, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1279)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1281, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_1280, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1281);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1280[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1280[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1280[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1280[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1283, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1283)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1285, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_1284, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1285);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1284[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1284[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1284[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1284[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1287, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1287)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1289, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_1288, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1289);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1288[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1288[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1288[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1288[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1291, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1291)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1293, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_1292, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1293);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1292[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1292[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1292[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1292[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1295, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1295)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1297, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_1296, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1297);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1296[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1296[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1296[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1296[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1299, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1299)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1301, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_1300, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1301);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1300[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1300[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1300[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1300[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1303, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1303)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1305, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_1304, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1305);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1304[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1304[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1304[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1304[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1307, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1307)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1309, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_1308, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1309);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1308[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1308[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1308[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1308[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1311, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1311)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1313, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_1312, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1313);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1312[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1312[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1312[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1312[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1315, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1315)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1317, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_1316, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_1317);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1316[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1316[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1316[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1316[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, vlSelfRef.__Vfunc_sfp_div__26__b_ext)) {
                        VL_SUB_W(4, __Vtemp_1319, vlSelfRef.__Vfunc_sfp_div__26__remainder, vlSelfRef.__Vfunc_sfp_div__26__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_1319[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_1319[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_1319[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_1319[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__26__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__26__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__26__result)
                            : vlSelfRef.__Vfunc_sfp_div__26__result);
                    __Vlabel54: ;
                }
                vlSelfRef.__Vfunc_sfp_exp__25__term 
                    = vlSelfRef.__Vfunc_sfp_div__26__Vfuncout;
                vlSelfRef.__Vfunc_sfp_add__29__b = vlSelfRef.__Vfunc_sfp_exp__25__term;
                vlSelfRef.__Vfunc_sfp_add__29__a = vlSelfRef.__Vfunc_sfp_exp__25__result;
                vlSelfRef.__Vfunc_sfp_add__29__Vfuncout 
                    = (vlSelfRef.__Vfunc_sfp_add__29__a 
                       + vlSelfRef.__Vfunc_sfp_add__29__b);
                vlSelfRef.__Vfunc_sfp_exp__25__result 
                    = vlSelfRef.__Vfunc_sfp_add__29__Vfuncout;
                vlSelfRef.__Vfunc_sfp_exp__25__unnamedblk3__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_exp__25__unnamedblk3__DOT__i);
            }
            vlSelfRef.__Vfunc_sfp_exp__25__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_exp__25__result;
            vlSelfRef.__Vfunc_sfp_add__24__b = vlSelfRef.__Vfunc_sfp_exp__25__Vfuncout;
            vlSelfRef.__Vfunc_sfp_add__24__a = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_add__24__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_add__24__a 
                   + vlSelfRef.__Vfunc_sfp_add__24__b);
            vlSelfRef.__Vfunc_sfp_div__23__b = vlSelfRef.__Vfunc_sfp_add__24__Vfuncout;
            vlSelfRef.__Vfunc_int_to_sfp__30__n = 2U;
            vlSelfRef.__Vfunc_int_to_sfp__30__Vfuncout 
                = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__30__n), 0x20U);
            vlSelfRef.__Vfunc_sfp_div__23__a = vlSelfRef.__Vfunc_int_to_sfp__30__Vfuncout;
            __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0;
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__23__remainder);
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__23__b_ext);
            vlSelf->__Vfunc_sfp_div__23__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__23__sign_bit = VL_RAND_RESET_I(1);
            vlSelf->__Vfunc_sfp_div__23__abs_a = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__23__abs_b = VL_RAND_RESET_Q(64);
            {
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__23__b)) {
                    vlSelfRef.__Vfunc_sfp_div__23__Vfuncout 
                        = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__23__a)
                            ? 0x7fffffffffffffffULL
                            : 0x8000000000000000ULL);
                    goto __Vlabel55;
                }
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__23__a)) {
                    vlSelfRef.__Vfunc_sfp_div__23__Vfuncout = 0ULL;
                    goto __Vlabel55;
                }
                vlSelfRef.__Vfunc_sfp_div__23__abs_a 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__23__a 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__23__a)
                        : vlSelfRef.__Vfunc_sfp_div__23__a);
                vlSelfRef.__Vfunc_sfp_div__23__abs_b 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__23__b 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__23__b)
                        : vlSelfRef.__Vfunc_sfp_div__23__b);
                vlSelfRef.__Vfunc_sfp_div__23__sign_bit 
                    = (IData)(((vlSelfRef.__Vfunc_sfp_div__23__a 
                                ^ vlSelfRef.__Vfunc_sfp_div__23__b) 
                               >> 0x3fU));
                __Vtemp_1321[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__23__abs_a);
                __Vtemp_1321[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__23__abs_a 
                                            >> 0x20U));
                __Vtemp_1321[2U] = 0U;
                __Vtemp_1321[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1321, 0x20U);
                vlSelfRef.__Vfunc_sfp_div__23__b_ext[0U] 
                    = (IData)(vlSelfRef.__Vfunc_sfp_div__23__abs_b);
                vlSelfRef.__Vfunc_sfp_div__23__b_ext[1U] 
                    = (IData)((vlSelfRef.__Vfunc_sfp_div__23__abs_b 
                               >> 0x20U));
                vlSelfRef.__Vfunc_sfp_div__23__b_ext[2U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__23__b_ext[3U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__23__result = 0ULL;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1323, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1323)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1325, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_1324, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1325);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1324[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1324[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1324[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1324[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1327, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1327)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1329, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_1328, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1329);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1328[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1328[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1328[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1328[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1331, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1331)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1333, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_1332, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1333);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1332[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1332[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1332[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1332[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1335, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1335)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1337, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_1336, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1337);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1336[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1336[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1336[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1336[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1339, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1339)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1341, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_1340, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1341);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1340[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1340[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1340[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1340[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1343, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1343)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1345, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_1344, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1345);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1344[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1344[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1344[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1344[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1347, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1347)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1349, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_1348, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1349);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1348[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1348[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1348[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1348[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1351, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1351)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1353, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_1352, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1353);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1352[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1352[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1352[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1352[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1355, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1355)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1357, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_1356, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1357);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1356[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1356[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1356[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1356[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1359, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1359)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1361, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_1360, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1361);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1360[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1360[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1360[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1360[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1363, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1363)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1365, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_1364, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1365);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1364[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1364[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1364[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1364[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1367, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1367)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1369, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_1368, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1369);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1368[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1368[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1368[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1368[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1371, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1371)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1373, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_1372, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1373);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1372[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1372[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1372[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1372[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1375, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1375)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1377, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_1376, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1377);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1376[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1376[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1376[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1376[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1379, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1379)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1381, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_1380, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1381);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1380[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1380[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1380[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1380[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1383, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1383)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1385, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_1384, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1385);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1384[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1384[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1384[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1384[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1387, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1387)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1389, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_1388, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1389);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1388[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1388[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1388[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1388[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1391, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1391)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1393, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_1392, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1393);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1392[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1392[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1392[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1392[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1395, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1395)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1397, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_1396, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1397);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1396[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1396[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1396[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1396[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1399, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1399)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1401, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_1400, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1401);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1400[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1400[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1400[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1400[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1403, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1403)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1405, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_1404, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1405);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1404[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1404[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1404[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1404[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1407, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1407)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1409, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_1408, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1409);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1408[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1408[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1408[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1408[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1411, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1411)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1413, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_1412, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1413);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1412[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1412[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1412[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1412[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1415, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1415)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1417, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_1416, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1417);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1416[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1416[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1416[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1416[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1419, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1419)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1421, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_1420, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1421);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1420[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1420[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1420[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1420[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1423, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1423)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1425, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_1424, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1425);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1424[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1424[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1424[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1424[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1427, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1427)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1429, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_1428, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1429);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1428[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1428[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1428[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1428[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1431, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1431)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1433, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_1432, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1433);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1432[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1432[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1432[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1432[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1435, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1435)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1437, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_1436, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1437);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1436[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1436[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1436[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1436[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1439, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1439)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1441, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_1440, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1441);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1440[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1440[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1440[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1440[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1443, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1443)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1445, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_1444, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1445);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1444[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1444[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1444[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1444[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1447, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1447)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1449, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_1448, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1449);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1448[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1448[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1448[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1448[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1451, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1451)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1453, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_1452, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1453);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1452[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1452[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1452[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1452[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1455, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1455)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1457, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_1456, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1457);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1456[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1456[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1456[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1456[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1459, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1459)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1461, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_1460, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1461);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1460[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1460[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1460[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1460[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1463, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1463)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1465, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_1464, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1465);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1464[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1464[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1464[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1464[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1467, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1467)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1469, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_1468, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1469);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1468[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1468[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1468[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1468[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1471, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1471)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1473, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_1472, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1473);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1472[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1472[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1472[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1472[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1475, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1475)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1477, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_1476, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1477);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1476[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1476[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1476[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1476[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1479, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1479)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1481, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_1480, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1481);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1480[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1480[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1480[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1480[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1483, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1483)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1485, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_1484, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1485);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1484[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1484[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1484[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1484[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1487, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1487)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1489, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_1488, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1489);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1488[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1488[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1488[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1488[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1491, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1491)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1493, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_1492, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1493);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1492[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1492[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1492[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1492[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1495, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1495)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1497, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_1496, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1497);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1496[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1496[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1496[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1496[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1499, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1499)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1501, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_1500, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1501);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1500[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1500[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1500[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1500[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1503, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1503)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1505, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_1504, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1505);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1504[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1504[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1504[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1504[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1507, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1507)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1509, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_1508, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1509);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1508[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1508[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1508[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1508[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1511, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1511)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1513, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_1512, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1513);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1512[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1512[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1512[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1512[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1515, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1515)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1517, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_1516, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1517);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1516[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1516[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1516[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1516[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1519, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1519)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1521, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_1520, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1521);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1520[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1520[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1520[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1520[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1523, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1523)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1525, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_1524, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1525);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1524[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1524[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1524[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1524[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1527, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1527)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1529, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_1528, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1529);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1528[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1528[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1528[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1528[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1531, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1531)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1533, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_1532, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1533);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1532[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1532[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1532[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1532[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1535, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1535)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1537, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_1536, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1537);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1536[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1536[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1536[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1536[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1539, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1539)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1541, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_1540, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1541);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1540[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1540[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1540[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1540[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1543, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1543)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1545, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_1544, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1545);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1544[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1544[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1544[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1544[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1547, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1547)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1549, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_1548, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1549);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1548[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1548[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1548[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1548[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1551, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1551)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1553, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_1552, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1553);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1552[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1552[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1552[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1552[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1555, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1555)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1557, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_1556, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1557);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1556[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1556[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1556[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1556[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1559, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1559)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1561, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_1560, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1561);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1560[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1560[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1560[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1560[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1563, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1563)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1565, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_1564, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1565);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1564[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1564[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1564[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1564[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1567, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1567)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1569, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_1568, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1569);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1568[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1568[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1568[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1568[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1571, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1571)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1573, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_1572, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_1573);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1572[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1572[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1572[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1572[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, vlSelfRef.__Vfunc_sfp_div__23__b_ext)) {
                    VL_SUB_W(4, __Vtemp_1575, vlSelfRef.__Vfunc_sfp_div__23__remainder, vlSelfRef.__Vfunc_sfp_div__23__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_1575[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_1575[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_1575[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_1575[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_sfp_div__23__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_sfp_div__23__sign_bit)
                        ? (- vlSelfRef.__Vfunc_sfp_div__23__result)
                        : vlSelfRef.__Vfunc_sfp_div__23__result);
                __Vlabel55: ;
            }
            vlSelfRef.__Vfunc_sfp_sub__22__a = vlSelfRef.__Vfunc_sfp_div__23__Vfuncout;
            vlSelfRef.__Vfunc_sfp_sub__22__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_sub__22__a 
                   - vlSelfRef.__Vfunc_sfp_sub__22__b);
            vlSelfRef.__Vfunc_sfp_tanh__19__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_sub__22__Vfuncout;
            __Vlabel53: ;
        }
        vlSelfRef.__Vfunc_sfp_pow__18__a = vlSelfRef.__Vfunc_sfp_tanh__19__Vfuncout;
        vlSelfRef.__Vfunc_sfp_pow__18__result = 1ULL;
        vlSelfRef.__Vfunc_sfp_pow__18__unnamedblk2__DOT__i = 1U;
        while (VL_LTES_III(32, vlSelfRef.__Vfunc_sfp_pow__18__unnamedblk2__DOT__i, vlSelfRef.__Vfunc_sfp_pow__18__b)) {
            vlSelfRef.__Vfunc_sfp_mul__31__b = vlSelfRef.__Vfunc_sfp_pow__18__a;
            vlSelfRef.__Vfunc_sfp_mul__31__a = vlSelfRef.__Vfunc_sfp_pow__18__result;
            VL_EXTENDS_WQ(128,64, __Vtemp_1576, vlSelfRef.__Vfunc_sfp_mul__31__a);
            VL_EXTENDS_WQ(128,64, __Vtemp_1577, vlSelfRef.__Vfunc_sfp_mul__31__b);
            VL_MULS_WWW(128, __Vtemp_1578, __Vtemp_1576, __Vtemp_1577);
            VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__31__tmp, __Vtemp_1578, 0x20U);
            vlSelfRef.__Vfunc_sfp_mul__31__Vfuncout 
                = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__31__tmp[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__31__tmp[0U])));
            vlSelfRef.__Vfunc_sfp_pow__18__result = vlSelfRef.__Vfunc_sfp_mul__31__Vfuncout;
            vlSelfRef.__Vfunc_sfp_pow__18__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_pow__18__unnamedblk2__DOT__i);
        }
        vlSelfRef.__Vfunc_sfp_pow__18__Vfuncout = vlSelfRef.__Vfunc_sfp_pow__18__result;
        vlSelfRef.__Vfunc_sfp_sub__17__b = vlSelfRef.__Vfunc_sfp_pow__18__Vfuncout;
        vlSelfRef.__Vfunc_sfp_sub__17__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.__Vfunc_sfp_sub__17__Vfuncout = (vlSelfRef.__Vfunc_sfp_sub__17__a 
                                                   - vlSelfRef.__Vfunc_sfp_sub__17__b);
        vlSelfRef.__Vfunc_sfp_mul__16__b = vlSelfRef.__Vfunc_sfp_sub__17__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__16__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1580, vlSelfRef.__Vfunc_sfp_mul__16__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1581, vlSelfRef.__Vfunc_sfp_mul__16__b);
        VL_MULS_WWW(128, __Vtemp_1582, __Vtemp_1580, __Vtemp_1581);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__16__tmp, __Vtemp_1582, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__16__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__16__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__16__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__15__b = vlSelfRef.__Vfunc_sfp_mul__16__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__15__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1583, vlSelfRef.__Vfunc_sfp_mul__15__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1584, vlSelfRef.__Vfunc_sfp_mul__15__b);
        VL_MULS_WWW(128, __Vtemp_1585, __Vtemp_1583, __Vtemp_1584);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__15__tmp, __Vtemp_1585, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__15__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__15__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__15__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__14__b = vlSelfRef.__Vfunc_sfp_mul__15__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__14__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__14__Vfuncout = (vlSelfRef.__Vfunc_sfp_add__14__a 
                                                   + vlSelfRef.__Vfunc_sfp_add__14__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__14__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 1U;
    } else if ((3U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_mul__33__b = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum)
                                             ? vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                                            [0U] : 0ULL);
        vlSelfRef.__Vfunc_sfp_mul__33__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1586, vlSelfRef.__Vfunc_sfp_mul__33__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1587, vlSelfRef.__Vfunc_sfp_mul__33__b);
        VL_MULS_WWW(128, __Vtemp_1588, __Vtemp_1586, __Vtemp_1587);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__33__tmp, __Vtemp_1588, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__33__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__33__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__33__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__32__b = vlSelfRef.__Vfunc_sfp_mul__33__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__32__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__32__Vfuncout = (vlSelfRef.__Vfunc_sfp_add__32__a 
                                                   + vlSelfRef.__Vfunc_sfp_add__32__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__32__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 1U;
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    }
    __Vfunc_sfp_mul__34__b = vlSelfRef.BenchMLP__DOT__values
        [0U];
    __Vfunc_sfp_mul__34__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1589, __Vfunc_sfp_mul__34__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1590, __Vfunc_sfp_mul__34__b);
    VL_MULS_WWW(128, __Vtemp_1591, __Vtemp_1589, __Vtemp_1590);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__34__tmp, __Vtemp_1591, 0x20U);
    __Vfunc_sfp_mul__34__Vfuncout = (((QData)((IData)(
                                                      __Vfunc_sfp_mul__34__tmp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vfunc_sfp_mul__34__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__34__Vfuncout;
    __Vfunc_sfp_mul__34__b = vlSelfRef.BenchMLP__DOT__values
        [1U];
    __Vfunc_sfp_mul__34__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1592, __Vfunc_sfp_mul__34__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1593, __Vfunc_sfp_mul__34__b);
    VL_MULS_WWW(128, __Vtemp_1594, __Vtemp_1592, __Vtemp_1593);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__34__tmp, __Vtemp_1594, 0x20U);
    __Vfunc_sfp_mul__34__Vfuncout = (((QData)((IData)(
                                                      __Vfunc_sfp_mul__34__tmp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vfunc_sfp_mul__34__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__34__Vfuncout;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i = 2U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__error_gradient 
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
        VL_EXTENDS_WQ(128,64, __Vtemp_1595, vlSelfRef.__Vfunc_sfp_mul__70__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1596, vlSelfRef.__Vfunc_sfp_mul__70__b);
        VL_MULS_WWW(128, __Vtemp_1597, __Vtemp_1595, __Vtemp_1596);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__70__tmp, __Vtemp_1597, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__70__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__70__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__70__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__69__b = vlSelfRef.__Vfunc_sfp_mul__70__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__69__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1598, vlSelfRef.__Vfunc_sfp_mul__69__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1599, vlSelfRef.__Vfunc_sfp_mul__69__b);
        VL_MULS_WWW(128, __Vtemp_1600, __Vtemp_1598, __Vtemp_1599);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__69__tmp, __Vtemp_1600, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__69__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__69__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__69__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__68__b = vlSelfRef.__Vfunc_sfp_mul__69__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__68__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1601, vlSelfRef.__Vfunc_sfp_mul__68__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1602, vlSelfRef.__Vfunc_sfp_mul__68__b);
        VL_MULS_WWW(128, __Vtemp_1603, __Vtemp_1601, __Vtemp_1602);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__68__tmp, __Vtemp_1603, 0x20U);
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
                            vlSelfRef.__Vfunc_int_to_sfp__78__n = 3U;
                            vlSelfRef.__Vfunc_int_to_sfp__78__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__78__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__78__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__77__Vfuncout 
                    = vlSymsp->TOP__FixedPoint.ONE;
                goto __Vlabel56;
            }
            if (VL_LTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__77__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__79__n = 0xfffffffdU;
                            vlSelfRef.__Vfunc_int_to_sfp__79__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__79__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__79__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__77__Vfuncout 
                    = (- vlSymsp->TOP__FixedPoint.ONE);
                goto __Vlabel56;
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
            while (VL_GTS_III(32, 0x14U, vlSelfRef.__Vfunc_sfp_exp__83__unnamedblk3__DOT__i)) {
                vlSelfRef.__Vfunc_int_to_sfp__85__n 
                    = vlSelfRef.__Vfunc_sfp_exp__83__unnamedblk3__DOT__i;
                vlSelfRef.__Vfunc_int_to_sfp__85__Vfuncout 
                    = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__85__n), 0x20U);
                vlSelfRef.__Vfunc_sfp_div__84__b = vlSelfRef.__Vfunc_int_to_sfp__85__Vfuncout;
                vlSelfRef.__Vfunc_sfp_mul__86__b = vlSelfRef.__Vfunc_sfp_exp__83__a;
                vlSelfRef.__Vfunc_sfp_mul__86__a = vlSelfRef.__Vfunc_sfp_exp__83__term;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__86__tmp);
                VL_EXTENDS_WQ(128,64, __Vtemp_1604, vlSelfRef.__Vfunc_sfp_mul__86__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_1605, vlSelfRef.__Vfunc_sfp_mul__86__b);
                VL_MULS_WWW(128, __Vtemp_1606, __Vtemp_1604, __Vtemp_1605);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__86__tmp, __Vtemp_1606, 0x20U);
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
                        goto __Vlabel57;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__84__a)) {
                        vlSelfRef.__Vfunc_sfp_div__84__Vfuncout = 0ULL;
                        goto __Vlabel57;
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
                    __Vtemp_1607[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__84__abs_a);
                    __Vtemp_1607[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__84__abs_a 
                                                >> 0x20U));
                    __Vtemp_1607[2U] = 0U;
                    __Vtemp_1607[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1607, 0x20U);
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
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1609, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1609)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1611, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_1610, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1611);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1610[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1610[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1610[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1610[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1613, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1613)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1615, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_1614, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1615);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1614[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1614[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1614[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1614[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1617, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1617)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1619, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_1618, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1619);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1618[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1618[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1618[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1618[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1621, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1621)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1623, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_1622, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1623);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1622[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1622[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1622[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1622[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1625, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1625)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1627, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_1626, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1627);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1626[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1626[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1626[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1626[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1629, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1629)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1631, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_1630, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1631);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1630[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1630[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1630[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1630[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1633, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1633)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1635, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_1634, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1635);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1634[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1634[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1634[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1634[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1637, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1637)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1639, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_1638, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1639);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1638[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1638[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1638[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1638[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1641, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1641)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1643, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_1642, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1643);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1642[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1642[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1642[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1642[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1645, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1645)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1647, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_1646, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1647);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1646[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1646[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1646[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1646[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1649, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1649)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1651, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_1650, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1651);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1650[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1650[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1650[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1650[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1653, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1653)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1655, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_1654, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1655);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1654[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1654[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1654[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1654[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1657, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1657)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1659, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_1658, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1659);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1658[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1658[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1658[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1658[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1661, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1661)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1663, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_1662, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1663);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1662[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1662[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1662[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1662[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1665, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1665)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1667, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_1666, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1667);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1666[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1666[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1666[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1666[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1669, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1669)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1671, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_1670, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1671);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1670[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1670[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1670[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1670[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1673, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1673)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1675, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_1674, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1675);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1674[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1674[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1674[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1674[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1677, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1677)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1679, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_1678, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1679);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1678[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1678[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1678[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1678[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1681, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1681)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1683, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_1682, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1683);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1682[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1682[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1682[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1682[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1685, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1685)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1687, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_1686, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1687);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1686[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1686[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1686[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1686[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1689, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1689)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1691, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_1690, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1691);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1690[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1690[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1690[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1690[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1693, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1693)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1695, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_1694, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1695);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1694[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1694[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1694[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1694[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1697, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1697)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1699, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_1698, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1699);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1698[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1698[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1698[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1698[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1701, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1701)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1703, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_1702, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1703);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1702[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1702[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1702[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1702[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1705, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1705)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1707, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_1706, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1707);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1706[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1706[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1706[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1706[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1709, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1709)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1711, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_1710, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1711);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1710[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1710[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1710[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1710[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1713, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1713)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1715, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_1714, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1715);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1714[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1714[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1714[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1714[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1717, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1717)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1719, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_1718, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1719);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1718[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1718[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1718[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1718[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1721, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1721)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1723, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_1722, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1723);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1722[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1722[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1722[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1722[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1725, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1725)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1727, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_1726, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1727);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1726[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1726[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1726[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1726[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1729, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1729)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1731, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_1730, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1731);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1730[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1730[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1730[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1730[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1733, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1733)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1735, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_1734, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1735);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1734[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1734[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1734[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1734[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1737, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1737)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1739, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_1738, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1739);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1738[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1738[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1738[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1738[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1741, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1741)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1743, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_1742, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1743);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1742[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1742[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1742[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1742[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1745, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1745)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1747, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_1746, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1747);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1746[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1746[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1746[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1746[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1749, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1749)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1751, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_1750, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1751);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1750[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1750[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1750[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1750[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1753, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1753)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1755, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_1754, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1755);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1754[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1754[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1754[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1754[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1757, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1757)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1759, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_1758, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1759);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1758[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1758[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1758[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1758[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1761, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1761)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1763, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_1762, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1763);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1762[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1762[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1762[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1762[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1765, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1765)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1767, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_1766, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1767);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1766[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1766[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1766[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1766[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1769, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1769)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1771, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_1770, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1771);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1770[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1770[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1770[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1770[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1773, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1773)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1775, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_1774, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1775);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1774[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1774[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1774[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1774[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1777, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1777)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1779, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_1778, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1779);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1778[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1778[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1778[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1778[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1781, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1781)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1783, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_1782, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1783);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1782[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1782[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1782[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1782[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1785, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1785)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1787, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_1786, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1787);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1786[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1786[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1786[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1786[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1789, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1789)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1791, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_1790, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1791);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1790[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1790[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1790[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1790[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1793, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1793)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1795, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_1794, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1795);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1794[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1794[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1794[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1794[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1797, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1797)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1799, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_1798, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1799);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1798[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1798[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1798[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1798[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1801, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1801)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1803, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_1802, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1803);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1802[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1802[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1802[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1802[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1805, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1805)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1807, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_1806, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1807);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1806[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1806[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1806[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1806[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1809, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1809)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1811, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_1810, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1811);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1810[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1810[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1810[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1810[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1813, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1813)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1815, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_1814, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1815);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1814[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1814[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1814[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1814[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1817, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1817)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1819, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_1818, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1819);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1818[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1818[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1818[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1818[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1821, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1821)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1823, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_1822, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1823);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1822[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1822[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1822[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1822[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1825, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1825)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1827, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_1826, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1827);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1826[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1826[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1826[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1826[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1829, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1829)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1831, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_1830, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1831);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1830[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1830[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1830[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1830[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1833, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1833)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1835, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_1834, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1835);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1834[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1834[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1834[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1834[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1837, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1837)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1839, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_1838, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1839);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1838[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1838[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1838[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1838[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1841, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1841)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1843, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_1842, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1843);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1842[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1842[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1842[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1842[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1845, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1845)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1847, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_1846, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1847);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1846[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1846[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1846[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1846[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1849, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1849)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1851, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_1850, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1851);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1850[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1850[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1850[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1850[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1853, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1853)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1855, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_1854, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1855);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1854[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1854[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1854[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1854[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1857, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1857)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1859, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_1858, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_1859);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1858[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1858[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1858[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1858[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, vlSelfRef.__Vfunc_sfp_div__84__b_ext)) {
                        VL_SUB_W(4, __Vtemp_1861, vlSelfRef.__Vfunc_sfp_div__84__remainder, vlSelfRef.__Vfunc_sfp_div__84__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_1861[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_1861[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_1861[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_1861[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__84__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__84__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__84__result)
                            : vlSelfRef.__Vfunc_sfp_div__84__result);
                    __Vlabel57: ;
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
                    goto __Vlabel58;
                }
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__81__a)) {
                    vlSelfRef.__Vfunc_sfp_div__81__Vfuncout = 0ULL;
                    goto __Vlabel58;
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
                __Vtemp_1863[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__81__abs_a);
                __Vtemp_1863[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__81__abs_a 
                                            >> 0x20U));
                __Vtemp_1863[2U] = 0U;
                __Vtemp_1863[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1863, 0x20U);
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
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1865, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1865)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1867, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_1866, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1867);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1866[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1866[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1866[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1866[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1869, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1869)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1871, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_1870, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1871);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1870[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1870[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1870[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1870[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1873, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1873)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1875, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_1874, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1875);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1874[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1874[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1874[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1874[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1877, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1877)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1879, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_1878, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1879);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1878[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1878[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1878[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1878[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1881, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1881)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1883, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_1882, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1883);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1882[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1882[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1882[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1882[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1885, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1885)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1887, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_1886, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1887);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1886[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1886[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1886[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1886[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1889, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1889)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1891, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_1890, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1891);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1890[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1890[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1890[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1890[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1893, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1893)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1895, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_1894, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1895);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1894[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1894[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1894[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1894[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1897, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1897)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1899, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_1898, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1899);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1898[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1898[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1898[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1898[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1901, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1901)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1903, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_1902, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1903);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1902[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1902[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1902[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1902[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1905, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1905)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1907, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_1906, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1907);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1906[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1906[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1906[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1906[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1909, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1909)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1911, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_1910, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1911);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1910[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1910[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1910[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1910[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1913, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1913)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1915, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_1914, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1915);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1914[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1914[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1914[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1914[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1917, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1917)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1919, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_1918, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1919);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1918[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1918[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1918[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1918[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1921, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1921)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1923, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_1922, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1923);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1922[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1922[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1922[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1922[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1925, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1925)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1927, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_1926, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1927);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1926[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1926[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1926[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1926[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1929, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1929)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1931, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_1930, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1931);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1930[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1930[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1930[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1930[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1933, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1933)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1935, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_1934, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1935);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1934[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1934[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1934[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1934[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1937, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1937)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1939, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_1938, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1939);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1938[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1938[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1938[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1938[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1941, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1941)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1943, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_1942, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1943);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1942[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1942[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1942[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1942[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1945, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1945)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1947, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_1946, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1947);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1946[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1946[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1946[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1946[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1949, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1949)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1951, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_1950, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1951);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1950[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1950[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1950[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1950[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1953, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1953)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1955, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_1954, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1955);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1954[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1954[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1954[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1954[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1957, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1957)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1959, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_1958, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1959);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1958[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1958[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1958[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1958[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1961, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1961)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1963, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_1962, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1963);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1962[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1962[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1962[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1962[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1965, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1965)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1967, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_1966, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1967);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1966[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1966[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1966[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1966[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1969, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1969)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1971, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_1970, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1971);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1970[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1970[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1970[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1970[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1973, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1973)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1975, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_1974, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1975);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1974[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1974[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1974[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1974[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1977, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1977)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1979, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_1978, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1979);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1978[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1978[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1978[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1978[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1981, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1981)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1983, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_1982, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1983);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1982[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1982[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1982[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1982[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1985, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1985)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1987, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_1986, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1987);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1986[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1986[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1986[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1986[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1989, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1989)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1991, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_1990, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1991);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1990[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1990[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1990[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1990[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1993, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1993)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1995, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_1994, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1995);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1994[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1994[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1994[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1994[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1997, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1997)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1999, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_1998, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_1999);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_1998[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_1998[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_1998[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_1998[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2001, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2001)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2003, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_2002, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2003);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2002[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2002[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2002[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2002[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2005, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2005)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2007, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_2006, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2007);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2006[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2006[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2006[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2006[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2009, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2009)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2011, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_2010, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2011);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2010[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2010[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2010[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2010[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2013, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2013)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2015, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_2014, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2015);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2014[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2014[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2014[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2014[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2017, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2017)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2019, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_2018, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2019);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2018[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2018[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2018[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2018[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2021, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2021)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2023, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_2022, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2023);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2022[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2022[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2022[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2022[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2025, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2025)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2027, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_2026, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2027);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2026[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2026[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2026[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2026[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2029, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2029)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2031, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_2030, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2031);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2030[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2030[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2030[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2030[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2033, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2033)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2035, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_2034, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2035);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2034[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2034[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2034[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2034[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2037, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2037)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2039, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_2038, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2039);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2038[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2038[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2038[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2038[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2041, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2041)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2043, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_2042, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2043);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2042[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2042[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2042[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2042[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2045, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2045)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2047, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_2046, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2047);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2046[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2046[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2046[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2046[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2049, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2049)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2051, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_2050, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2051);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2050[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2050[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2050[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2050[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2053, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2053)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2055, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_2054, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2055);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2054[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2054[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2054[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2054[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2057, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2057)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2059, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_2058, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2059);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2058[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2058[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2058[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2058[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2061, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2061)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2063, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_2062, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2063);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2062[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2062[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2062[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2062[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2065, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2065)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2067, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_2066, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2067);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2066[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2066[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2066[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2066[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2069, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2069)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2071, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_2070, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2071);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2070[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2070[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2070[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2070[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2073, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2073)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2075, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_2074, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2075);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2074[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2074[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2074[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2074[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2077, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2077)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2079, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_2078, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2079);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2078[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2078[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2078[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2078[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2081, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2081)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2083, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_2082, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2083);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2082[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2082[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2082[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2082[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2085, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2085)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2087, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_2086, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2087);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2086[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2086[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2086[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2086[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2089, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2089)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2091, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_2090, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2091);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2090[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2090[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2090[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2090[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2093, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2093)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2095, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_2094, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2095);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2094[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2094[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2094[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2094[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2097, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2097)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2099, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_2098, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2099);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2098[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2098[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2098[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2098[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2101, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2101)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2103, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_2102, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2103);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2102[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2102[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2102[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2102[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2105, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2105)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2107, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_2106, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2107);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2106[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2106[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2106[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2106[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2109, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2109)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2111, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_2110, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2111);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2110[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2110[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2110[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2110[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2113, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2113)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2115, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_2114, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_2115);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2114[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2114[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2114[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2114[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, vlSelfRef.__Vfunc_sfp_div__81__b_ext)) {
                    VL_SUB_W(4, __Vtemp_2117, vlSelfRef.__Vfunc_sfp_div__81__remainder, vlSelfRef.__Vfunc_sfp_div__81__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_2117[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_2117[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_2117[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_2117[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_sfp_div__81__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_sfp_div__81__sign_bit)
                        ? (- vlSelfRef.__Vfunc_sfp_div__81__result)
                        : vlSelfRef.__Vfunc_sfp_div__81__result);
                __Vlabel58: ;
            }
            vlSelfRef.__Vfunc_sfp_sub__80__a = vlSelfRef.__Vfunc_sfp_div__81__Vfuncout;
            vlSelfRef.__Vfunc_sfp_sub__80__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_sub__80__a 
                   - vlSelfRef.__Vfunc_sfp_sub__80__b);
            vlSelfRef.__Vfunc_sfp_tanh__77__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_sub__80__Vfuncout;
            __Vlabel56: ;
        }
        vlSelfRef.__Vfunc_sfp_pow__76__a = vlSelfRef.__Vfunc_sfp_tanh__77__Vfuncout;
        vlSelfRef.__Vfunc_sfp_pow__76__result = 1ULL;
        vlSelfRef.__Vfunc_sfp_pow__76__unnamedblk2__DOT__i = 1U;
        while (VL_LTES_III(32, vlSelfRef.__Vfunc_sfp_pow__76__unnamedblk2__DOT__i, vlSelfRef.__Vfunc_sfp_pow__76__b)) {
            vlSelfRef.__Vfunc_sfp_mul__89__b = vlSelfRef.__Vfunc_sfp_pow__76__a;
            vlSelfRef.__Vfunc_sfp_mul__89__a = vlSelfRef.__Vfunc_sfp_pow__76__result;
            VL_EXTENDS_WQ(128,64, __Vtemp_2118, vlSelfRef.__Vfunc_sfp_mul__89__a);
            VL_EXTENDS_WQ(128,64, __Vtemp_2119, vlSelfRef.__Vfunc_sfp_mul__89__b);
            VL_MULS_WWW(128, __Vtemp_2120, __Vtemp_2118, __Vtemp_2119);
            VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__89__tmp, __Vtemp_2120, 0x20U);
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
        VL_EXTENDS_WQ(128,64, __Vtemp_2122, vlSelfRef.__Vfunc_sfp_mul__74__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_2123, vlSelfRef.__Vfunc_sfp_mul__74__b);
        VL_MULS_WWW(128, __Vtemp_2124, __Vtemp_2122, __Vtemp_2123);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__74__tmp, __Vtemp_2124, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__74__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__74__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__74__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__73__b = vlSelfRef.__Vfunc_sfp_mul__74__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__73__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_2125, vlSelfRef.__Vfunc_sfp_mul__73__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_2126, vlSelfRef.__Vfunc_sfp_mul__73__b);
        VL_MULS_WWW(128, __Vtemp_2127, __Vtemp_2125, __Vtemp_2126);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__73__tmp, __Vtemp_2127, 0x20U);
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
        VL_EXTENDS_WQ(128,64, __Vtemp_2128, vlSelfRef.__Vfunc_sfp_mul__91__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_2129, vlSelfRef.__Vfunc_sfp_mul__91__b);
        VL_MULS_WWW(128, __Vtemp_2130, __Vtemp_2128, __Vtemp_2129);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__91__tmp, __Vtemp_2130, 0x20U);
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
    VL_EXTENDS_WQ(128,64, __Vtemp_2131, __Vfunc_sfp_mul__92__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_2132, __Vfunc_sfp_mul__92__b);
    VL_MULS_WWW(128, __Vtemp_2133, __Vtemp_2131, __Vtemp_2132);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__92__tmp, __Vtemp_2133, 0x20U);
    __Vfunc_sfp_mul__92__Vfuncout = (((QData)((IData)(
                                                      __Vfunc_sfp_mul__92__tmp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vfunc_sfp_mul__92__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__92__Vfuncout;
    __Vfunc_sfp_mul__92__b = vlSelfRef.BenchMLP__DOT__values
        [1U];
    __Vfunc_sfp_mul__92__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_2134, __Vfunc_sfp_mul__92__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_2135, __Vfunc_sfp_mul__92__b);
    VL_MULS_WWW(128, __Vtemp_2136, __Vtemp_2134, __Vtemp_2135);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__92__tmp, __Vtemp_2136, 0x20U);
    __Vfunc_sfp_mul__92__Vfuncout = (((QData)((IData)(
                                                      __Vfunc_sfp_mul__92__tmp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vfunc_sfp_mul__92__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__92__Vfuncout;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i = 2U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
}
