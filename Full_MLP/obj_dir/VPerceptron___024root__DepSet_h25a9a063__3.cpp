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
    QData/*63:0*/ BenchMLP__DOT__mlp__DOT____Vlvbound_hbeb0227a__0;
    BenchMLP__DOT__mlp__DOT____Vlvbound_hbeb0227a__0 = 0;
    IData/*31:0*/ __Vfunc_sfp_div__1__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__1__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_sfp_div__5__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__5__unnamedblk1__DOT__i = 0;
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
    // Body
    vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights[0U][0U][0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
        [1U][0U][0U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights[0U][1U][0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
        [1U][0U][1U];
    vlSelfRef.BenchMLP__DOT__prediction[0U] = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__prediction;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights
        [0U][0U][0U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights
        [0U][1U][0U];
    BenchMLP__DOT__mlp__DOT____Vlvbound_hbeb0227a__0 
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
    vlSelfRef.BenchMLP__DOT__mlp__DOT__cost_gradients[0U] 
        = BenchMLP__DOT__mlp__DOT____Vlvbound_hbeb0227a__0;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__unnamedblk5__DOT__i = 1U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__cost_gradients
        [0U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient = 0ULL;
    if ((1U == vlSelfRef.BenchMLP__DOT__output_activation)) {
        vlSelfRef.__Vfunc_sfp_sub__129__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__prediction;
        vlSelfRef.__Vfunc_sfp_sub__129__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.__Vfunc_sfp_sub__129__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__129__a - vlSelfRef.__Vfunc_sfp_sub__129__b);
        vlSelfRef.__Vfunc_sfp_mul__128__b = vlSelfRef.__Vfunc_sfp_sub__129__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__128__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__prediction;
        VL_EXTENDS_WQ(128,64, __Vtemp_511, vlSelfRef.__Vfunc_sfp_mul__128__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_512, vlSelfRef.__Vfunc_sfp_mul__128__b);
        VL_MULS_WWW(128, __Vtemp_513, __Vtemp_511, __Vtemp_512);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__128__tmp, __Vtemp_513, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__128__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__128__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__128__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__127__b = vlSelfRef.__Vfunc_sfp_mul__128__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__127__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_514, vlSelfRef.__Vfunc_sfp_mul__127__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_515, vlSelfRef.__Vfunc_sfp_mul__127__b);
        VL_MULS_WWW(128, __Vtemp_516, __Vtemp_514, __Vtemp_515);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__127__tmp, __Vtemp_516, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__127__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__127__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__127__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__126__b = vlSelfRef.__Vfunc_sfp_mul__127__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__126__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_517, vlSelfRef.__Vfunc_sfp_mul__126__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_518, vlSelfRef.__Vfunc_sfp_mul__126__b);
        VL_MULS_WWW(128, __Vtemp_519, __Vtemp_517, __Vtemp_518);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__126__tmp, __Vtemp_519, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__126__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__126__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__126__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__125__b = vlSelfRef.__Vfunc_sfp_mul__126__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__125__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__125__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__125__a + vlSelfRef.__Vfunc_sfp_add__125__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__125__Vfuncout;
    } else if ((2U == vlSelfRef.BenchMLP__DOT__output_activation)) {
        vlSelfRef.__Vfunc_sfp_pow__134__b = 2U;
        vlSelfRef.__Vfunc_sfp_tanh__135__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__prediction;
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
        vlSelfRef.__Vfunc_sfp_mul__132__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1038, vlSelfRef.__Vfunc_sfp_mul__132__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1039, vlSelfRef.__Vfunc_sfp_mul__132__b);
        VL_MULS_WWW(128, __Vtemp_1040, __Vtemp_1038, __Vtemp_1039);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__132__tmp, __Vtemp_1040, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__132__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__132__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__132__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__131__b = vlSelfRef.__Vfunc_sfp_mul__132__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__131__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1041, vlSelfRef.__Vfunc_sfp_mul__131__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1042, vlSelfRef.__Vfunc_sfp_mul__131__b);
        VL_MULS_WWW(128, __Vtemp_1043, __Vtemp_1041, __Vtemp_1042);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__131__tmp, __Vtemp_1043, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__131__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__131__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__131__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__130__b = vlSelfRef.__Vfunc_sfp_mul__131__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__130__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__130__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__130__a + vlSelfRef.__Vfunc_sfp_add__130__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__130__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk4__DOT__i = 1U;
    } else if ((3U == vlSelfRef.BenchMLP__DOT__output_activation)) {
        vlSelfRef.__Vfunc_sfp_mul__149__b = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__sum)
                                              ? vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer
                                             [0U] : 0ULL);
        vlSelfRef.__Vfunc_sfp_mul__149__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1044, vlSelfRef.__Vfunc_sfp_mul__149__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1045, vlSelfRef.__Vfunc_sfp_mul__149__b);
        VL_MULS_WWW(128, __Vtemp_1046, __Vtemp_1044, __Vtemp_1045);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__149__tmp, __Vtemp_1046, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__149__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__149__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__149__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__148__b = vlSelfRef.__Vfunc_sfp_mul__149__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__148__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__148__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__148__a + vlSelfRef.__Vfunc_sfp_add__148__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__148__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk5__DOT__i = 1U;
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient = 0ULL;
    }
    __Vfunc_sfp_mul__150__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__values
        [0U];
    __Vfunc_sfp_mul__150__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1047, __Vfunc_sfp_mul__150__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1048, __Vfunc_sfp_mul__150__b);
    VL_MULS_WWW(128, __Vtemp_1049, __Vtemp_1047, __Vtemp_1048);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__150__tmp, __Vtemp_1049, 0x20U);
    __Vfunc_sfp_mul__150__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__150__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__150__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__150__Vfuncout;
    __Vfunc_sfp_mul__150__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__values
        [1U];
    __Vfunc_sfp_mul__150__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1050, __Vfunc_sfp_mul__150__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1051, __Vfunc_sfp_mul__150__b);
    VL_MULS_WWW(128, __Vtemp_1052, __Vtemp_1050, __Vtemp_1051);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__150__tmp, __Vtemp_1052, 0x20U);
    __Vfunc_sfp_mul__150__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__150__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__150__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__150__Vfuncout;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk6__DOT__i = 2U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients[1U][0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__error_gradient;
}

VL_INLINE_OPT void VPerceptron___024root___nba_comb__TOP__0(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___nba_comb__TOP__0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
    VlWide<4>/*127:0*/ __Vtemp_257;
    VlWide<4>/*127:0*/ __Vtemp_259;
    VlWide<4>/*127:0*/ __Vtemp_260;
    VlWide<4>/*127:0*/ __Vtemp_261;
    VlWide<4>/*127:0*/ __Vtemp_263;
    VlWide<4>/*127:0*/ __Vtemp_264;
    VlWide<4>/*127:0*/ __Vtemp_265;
    VlWide<4>/*127:0*/ __Vtemp_267;
    VlWide<4>/*127:0*/ __Vtemp_269;
    VlWide<4>/*127:0*/ __Vtemp_271;
    VlWide<4>/*127:0*/ __Vtemp_272;
    VlWide<4>/*127:0*/ __Vtemp_273;
    VlWide<4>/*127:0*/ __Vtemp_275;
    VlWide<4>/*127:0*/ __Vtemp_276;
    VlWide<4>/*127:0*/ __Vtemp_277;
    VlWide<4>/*127:0*/ __Vtemp_279;
    VlWide<4>/*127:0*/ __Vtemp_280;
    VlWide<4>/*127:0*/ __Vtemp_281;
    VlWide<4>/*127:0*/ __Vtemp_283;
    VlWide<4>/*127:0*/ __Vtemp_284;
    VlWide<4>/*127:0*/ __Vtemp_285;
    VlWide<4>/*127:0*/ __Vtemp_287;
    VlWide<4>/*127:0*/ __Vtemp_288;
    VlWide<4>/*127:0*/ __Vtemp_289;
    VlWide<4>/*127:0*/ __Vtemp_291;
    VlWide<4>/*127:0*/ __Vtemp_292;
    VlWide<4>/*127:0*/ __Vtemp_293;
    VlWide<4>/*127:0*/ __Vtemp_295;
    VlWide<4>/*127:0*/ __Vtemp_296;
    VlWide<4>/*127:0*/ __Vtemp_297;
    VlWide<4>/*127:0*/ __Vtemp_299;
    VlWide<4>/*127:0*/ __Vtemp_300;
    VlWide<4>/*127:0*/ __Vtemp_301;
    VlWide<4>/*127:0*/ __Vtemp_303;
    VlWide<4>/*127:0*/ __Vtemp_304;
    VlWide<4>/*127:0*/ __Vtemp_305;
    VlWide<4>/*127:0*/ __Vtemp_307;
    VlWide<4>/*127:0*/ __Vtemp_308;
    VlWide<4>/*127:0*/ __Vtemp_309;
    VlWide<4>/*127:0*/ __Vtemp_311;
    VlWide<4>/*127:0*/ __Vtemp_312;
    VlWide<4>/*127:0*/ __Vtemp_313;
    VlWide<4>/*127:0*/ __Vtemp_315;
    VlWide<4>/*127:0*/ __Vtemp_316;
    VlWide<4>/*127:0*/ __Vtemp_317;
    VlWide<4>/*127:0*/ __Vtemp_319;
    VlWide<4>/*127:0*/ __Vtemp_320;
    VlWide<4>/*127:0*/ __Vtemp_321;
    VlWide<4>/*127:0*/ __Vtemp_323;
    VlWide<4>/*127:0*/ __Vtemp_324;
    VlWide<4>/*127:0*/ __Vtemp_325;
    VlWide<4>/*127:0*/ __Vtemp_327;
    VlWide<4>/*127:0*/ __Vtemp_328;
    VlWide<4>/*127:0*/ __Vtemp_329;
    VlWide<4>/*127:0*/ __Vtemp_331;
    VlWide<4>/*127:0*/ __Vtemp_332;
    VlWide<4>/*127:0*/ __Vtemp_333;
    VlWide<4>/*127:0*/ __Vtemp_335;
    VlWide<4>/*127:0*/ __Vtemp_336;
    VlWide<4>/*127:0*/ __Vtemp_337;
    VlWide<4>/*127:0*/ __Vtemp_339;
    VlWide<4>/*127:0*/ __Vtemp_340;
    VlWide<4>/*127:0*/ __Vtemp_341;
    VlWide<4>/*127:0*/ __Vtemp_343;
    VlWide<4>/*127:0*/ __Vtemp_344;
    VlWide<4>/*127:0*/ __Vtemp_345;
    VlWide<4>/*127:0*/ __Vtemp_347;
    VlWide<4>/*127:0*/ __Vtemp_348;
    VlWide<4>/*127:0*/ __Vtemp_349;
    VlWide<4>/*127:0*/ __Vtemp_351;
    VlWide<4>/*127:0*/ __Vtemp_352;
    VlWide<4>/*127:0*/ __Vtemp_353;
    VlWide<4>/*127:0*/ __Vtemp_355;
    VlWide<4>/*127:0*/ __Vtemp_356;
    VlWide<4>/*127:0*/ __Vtemp_357;
    VlWide<4>/*127:0*/ __Vtemp_359;
    VlWide<4>/*127:0*/ __Vtemp_360;
    VlWide<4>/*127:0*/ __Vtemp_361;
    VlWide<4>/*127:0*/ __Vtemp_363;
    VlWide<4>/*127:0*/ __Vtemp_364;
    VlWide<4>/*127:0*/ __Vtemp_365;
    VlWide<4>/*127:0*/ __Vtemp_367;
    VlWide<4>/*127:0*/ __Vtemp_368;
    VlWide<4>/*127:0*/ __Vtemp_369;
    VlWide<4>/*127:0*/ __Vtemp_371;
    VlWide<4>/*127:0*/ __Vtemp_372;
    VlWide<4>/*127:0*/ __Vtemp_373;
    VlWide<4>/*127:0*/ __Vtemp_375;
    VlWide<4>/*127:0*/ __Vtemp_376;
    VlWide<4>/*127:0*/ __Vtemp_377;
    VlWide<4>/*127:0*/ __Vtemp_379;
    VlWide<4>/*127:0*/ __Vtemp_380;
    VlWide<4>/*127:0*/ __Vtemp_381;
    VlWide<4>/*127:0*/ __Vtemp_383;
    VlWide<4>/*127:0*/ __Vtemp_384;
    VlWide<4>/*127:0*/ __Vtemp_385;
    VlWide<4>/*127:0*/ __Vtemp_387;
    VlWide<4>/*127:0*/ __Vtemp_388;
    VlWide<4>/*127:0*/ __Vtemp_389;
    VlWide<4>/*127:0*/ __Vtemp_391;
    VlWide<4>/*127:0*/ __Vtemp_392;
    VlWide<4>/*127:0*/ __Vtemp_393;
    VlWide<4>/*127:0*/ __Vtemp_395;
    VlWide<4>/*127:0*/ __Vtemp_396;
    VlWide<4>/*127:0*/ __Vtemp_397;
    VlWide<4>/*127:0*/ __Vtemp_399;
    VlWide<4>/*127:0*/ __Vtemp_400;
    VlWide<4>/*127:0*/ __Vtemp_401;
    VlWide<4>/*127:0*/ __Vtemp_403;
    VlWide<4>/*127:0*/ __Vtemp_404;
    VlWide<4>/*127:0*/ __Vtemp_405;
    VlWide<4>/*127:0*/ __Vtemp_407;
    VlWide<4>/*127:0*/ __Vtemp_408;
    VlWide<4>/*127:0*/ __Vtemp_409;
    VlWide<4>/*127:0*/ __Vtemp_411;
    VlWide<4>/*127:0*/ __Vtemp_412;
    VlWide<4>/*127:0*/ __Vtemp_413;
    VlWide<4>/*127:0*/ __Vtemp_415;
    VlWide<4>/*127:0*/ __Vtemp_416;
    VlWide<4>/*127:0*/ __Vtemp_417;
    VlWide<4>/*127:0*/ __Vtemp_419;
    VlWide<4>/*127:0*/ __Vtemp_420;
    VlWide<4>/*127:0*/ __Vtemp_421;
    VlWide<4>/*127:0*/ __Vtemp_423;
    VlWide<4>/*127:0*/ __Vtemp_424;
    VlWide<4>/*127:0*/ __Vtemp_425;
    VlWide<4>/*127:0*/ __Vtemp_427;
    VlWide<4>/*127:0*/ __Vtemp_428;
    VlWide<4>/*127:0*/ __Vtemp_429;
    VlWide<4>/*127:0*/ __Vtemp_431;
    VlWide<4>/*127:0*/ __Vtemp_432;
    VlWide<4>/*127:0*/ __Vtemp_433;
    VlWide<4>/*127:0*/ __Vtemp_435;
    VlWide<4>/*127:0*/ __Vtemp_436;
    VlWide<4>/*127:0*/ __Vtemp_437;
    VlWide<4>/*127:0*/ __Vtemp_439;
    VlWide<4>/*127:0*/ __Vtemp_440;
    VlWide<4>/*127:0*/ __Vtemp_441;
    VlWide<4>/*127:0*/ __Vtemp_443;
    VlWide<4>/*127:0*/ __Vtemp_444;
    VlWide<4>/*127:0*/ __Vtemp_445;
    VlWide<4>/*127:0*/ __Vtemp_447;
    VlWide<4>/*127:0*/ __Vtemp_448;
    VlWide<4>/*127:0*/ __Vtemp_449;
    VlWide<4>/*127:0*/ __Vtemp_451;
    VlWide<4>/*127:0*/ __Vtemp_452;
    VlWide<4>/*127:0*/ __Vtemp_453;
    VlWide<4>/*127:0*/ __Vtemp_455;
    VlWide<4>/*127:0*/ __Vtemp_456;
    VlWide<4>/*127:0*/ __Vtemp_457;
    VlWide<4>/*127:0*/ __Vtemp_459;
    VlWide<4>/*127:0*/ __Vtemp_460;
    VlWide<4>/*127:0*/ __Vtemp_461;
    VlWide<4>/*127:0*/ __Vtemp_463;
    VlWide<4>/*127:0*/ __Vtemp_464;
    VlWide<4>/*127:0*/ __Vtemp_465;
    VlWide<4>/*127:0*/ __Vtemp_467;
    VlWide<4>/*127:0*/ __Vtemp_468;
    VlWide<4>/*127:0*/ __Vtemp_469;
    VlWide<4>/*127:0*/ __Vtemp_471;
    VlWide<4>/*127:0*/ __Vtemp_472;
    VlWide<4>/*127:0*/ __Vtemp_473;
    VlWide<4>/*127:0*/ __Vtemp_475;
    VlWide<4>/*127:0*/ __Vtemp_476;
    VlWide<4>/*127:0*/ __Vtemp_477;
    VlWide<4>/*127:0*/ __Vtemp_479;
    VlWide<4>/*127:0*/ __Vtemp_480;
    VlWide<4>/*127:0*/ __Vtemp_481;
    VlWide<4>/*127:0*/ __Vtemp_483;
    VlWide<4>/*127:0*/ __Vtemp_484;
    VlWide<4>/*127:0*/ __Vtemp_485;
    VlWide<4>/*127:0*/ __Vtemp_487;
    VlWide<4>/*127:0*/ __Vtemp_488;
    VlWide<4>/*127:0*/ __Vtemp_489;
    VlWide<4>/*127:0*/ __Vtemp_491;
    VlWide<4>/*127:0*/ __Vtemp_492;
    VlWide<4>/*127:0*/ __Vtemp_493;
    VlWide<4>/*127:0*/ __Vtemp_495;
    VlWide<4>/*127:0*/ __Vtemp_496;
    VlWide<4>/*127:0*/ __Vtemp_497;
    VlWide<4>/*127:0*/ __Vtemp_499;
    VlWide<4>/*127:0*/ __Vtemp_500;
    VlWide<4>/*127:0*/ __Vtemp_501;
    VlWide<4>/*127:0*/ __Vtemp_503;
    VlWide<4>/*127:0*/ __Vtemp_504;
    VlWide<4>/*127:0*/ __Vtemp_505;
    VlWide<4>/*127:0*/ __Vtemp_507;
    VlWide<4>/*127:0*/ __Vtemp_508;
    VlWide<4>/*127:0*/ __Vtemp_509;
    VlWide<4>/*127:0*/ __Vtemp_511;
    VlWide<4>/*127:0*/ __Vtemp_512;
    VlWide<4>/*127:0*/ __Vtemp_513;
    VlWide<4>/*127:0*/ __Vtemp_515;
    VlWide<4>/*127:0*/ __Vtemp_516;
    VlWide<4>/*127:0*/ __Vtemp_517;
    VlWide<4>/*127:0*/ __Vtemp_519;
    VlWide<4>/*127:0*/ __Vtemp_520;
    VlWide<4>/*127:0*/ __Vtemp_521;
    VlWide<4>/*127:0*/ __Vtemp_523;
    VlWide<4>/*127:0*/ __Vtemp_524;
    VlWide<4>/*127:0*/ __Vtemp_525;
    VlWide<4>/*127:0*/ __Vtemp_526;
    VlWide<4>/*127:0*/ __Vtemp_528;
    VlWide<4>/*127:0*/ __Vtemp_529;
    VlWide<4>/*127:0*/ __Vtemp_530;
    VlWide<4>/*127:0*/ __Vtemp_531;
    VlWide<4>/*127:0*/ __Vtemp_532;
    VlWide<4>/*127:0*/ __Vtemp_533;
    VlWide<4>/*127:0*/ __Vtemp_534;
    VlWide<4>/*127:0*/ __Vtemp_535;
    VlWide<4>/*127:0*/ __Vtemp_536;
    VlWide<4>/*127:0*/ __Vtemp_537;
    VlWide<4>/*127:0*/ __Vtemp_538;
    VlWide<4>/*127:0*/ __Vtemp_539;
    VlWide<4>/*127:0*/ __Vtemp_540;
    VlWide<4>/*127:0*/ __Vtemp_541;
    VlWide<4>/*127:0*/ __Vtemp_542;
    // Body
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    if ((1U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_sub__13__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction;
        vlSelfRef.__Vfunc_sfp_sub__13__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.__Vfunc_sfp_sub__13__Vfuncout = (vlSelfRef.__Vfunc_sfp_sub__13__a 
                                                   - vlSelfRef.__Vfunc_sfp_sub__13__b);
        vlSelfRef.__Vfunc_sfp_mul__12__b = vlSelfRef.__Vfunc_sfp_sub__13__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__12__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction;
        VL_EXTENDS_WQ(128,64, __Vtemp_1, vlSelfRef.__Vfunc_sfp_mul__12__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_2, vlSelfRef.__Vfunc_sfp_mul__12__b);
        VL_MULS_WWW(128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__12__tmp, __Vtemp_3, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__12__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__12__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__12__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__11__b = vlSelfRef.__Vfunc_sfp_mul__12__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__11__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_4, vlSelfRef.__Vfunc_sfp_mul__11__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_5, vlSelfRef.__Vfunc_sfp_mul__11__b);
        VL_MULS_WWW(128, __Vtemp_6, __Vtemp_4, __Vtemp_5);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__11__tmp, __Vtemp_6, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__11__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__11__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__11__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__10__b = vlSelfRef.__Vfunc_sfp_mul__11__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__10__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_7, vlSelfRef.__Vfunc_sfp_mul__10__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_8, vlSelfRef.__Vfunc_sfp_mul__10__b);
        VL_MULS_WWW(128, __Vtemp_9, __Vtemp_7, __Vtemp_8);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__10__tmp, __Vtemp_9, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__10__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__10__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__10__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__9__b = vlSelfRef.__Vfunc_sfp_mul__10__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__9__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__9__Vfuncout = (vlSelfRef.__Vfunc_sfp_add__9__a 
                                                  + vlSelfRef.__Vfunc_sfp_add__9__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__9__Vfuncout;
    } else if ((2U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_pow__18__b = 2U;
        vlSelfRef.__Vfunc_sfp_tanh__19__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction;
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
                VL_EXTENDS_WQ(128,64, __Vtemp_10, vlSelfRef.__Vfunc_sfp_mul__28__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_11, vlSelfRef.__Vfunc_sfp_mul__28__b);
                VL_MULS_WWW(128, __Vtemp_12, __Vtemp_10, __Vtemp_11);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__28__tmp, __Vtemp_12, 0x20U);
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
                    __Vtemp_13[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__26__abs_a);
                    __Vtemp_13[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__26__abs_a 
                                              >> 0x20U));
                    __Vtemp_13[2U] = 0U;
                    __Vtemp_13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_13, 0x20U);
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
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_15, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_15)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_17, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_16, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_17);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_16[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_16[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_16[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_16[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_19, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_19)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_21, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_20, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_21);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_20[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_20[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_20[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_20[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_23, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_23)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_25, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_24, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_25);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_24[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_24[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_24[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_24[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_27, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_27)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_29, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_28, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_29);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_28[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_28[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_28[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_28[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_31, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_31)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_33, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_32, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_33);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_32[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_32[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_32[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_32[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_35, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_35)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_37, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_36, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_37);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_36[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_36[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_36[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_36[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_39, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_39)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_41, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_40, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_41);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_40[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_40[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_40[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_40[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_43, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_43)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_45, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_44, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_45);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_44[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_44[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_44[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_44[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_47, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_47)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_49, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_48, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_49);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_48[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_48[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_48[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_48[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_51, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_51)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_53, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_52, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_53);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_52[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_52[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_52[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_52[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_55, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_55)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_57, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_56, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_57);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_56[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_56[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_56[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_56[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_59, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_59)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_61, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_60, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_61);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_60[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_60[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_60[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_60[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_63, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_63)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_65, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_64, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_65);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_64[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_64[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_64[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_64[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_67, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_67)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_69, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_68, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_69);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_68[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_68[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_68[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_68[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_71, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_71)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_73, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_72, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_73);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_72[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_72[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_72[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_72[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_75, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_75)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_77, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_76, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_77);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_76[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_76[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_76[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_76[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_79, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_79)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_81, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_80, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_81);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_80[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_80[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_80[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_80[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_83, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_83)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_85, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_84, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_85);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_84[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_84[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_84[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_84[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_87, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_87)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_89, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_88, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_89);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_88[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_88[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_88[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_88[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_91, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_91)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_93, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_92, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_93);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_92[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_92[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_92[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_92[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_95, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_95)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_97, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_96, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_97);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_96[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_96[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_96[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_96[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_99, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_99)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_101, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_100, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_101);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_100[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_100[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_100[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_100[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_103, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_103)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_105, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_104, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_105);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_104[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_104[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_104[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_104[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_107, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_107)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_109, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_108, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_109);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_108[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_108[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_108[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_108[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_111, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_111)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_113, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_112, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_113);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_112[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_112[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_112[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_112[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_115, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_115)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_117, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_116, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_117);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_116[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_116[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_116[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_116[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_119, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_119)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_121, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_120, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_121);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_120[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_120[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_120[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_120[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_123, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_123)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_125, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_124, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_125);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_124[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_124[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_124[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_124[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_127, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_127)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_129, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_129);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_128[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_128[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_128[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_128[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_131, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_131)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_133, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_132, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_133);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_132[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_132[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_132[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_132[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_135, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_135)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_137, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_136, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_137);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_136[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_136[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_136[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_136[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_139, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_139)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_141, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_140, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_141);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_140[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_140[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_140[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_140[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_143, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_143)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_145, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_144, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_145);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_144[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_144[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_144[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_144[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_147, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_147)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_149, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_148, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_149);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_148[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_148[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_148[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_148[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_151, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_151)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_153, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_152, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_153);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_152[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_152[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_152[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_152[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_155, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_155)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_157, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_156, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_157);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_156[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_156[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_156[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_156[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_159, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_159)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_161, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_160, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_161);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_160[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_160[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_160[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_160[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_163, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_163)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_165, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_164, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_165);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_164[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_164[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_164[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_164[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_167, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_167)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_169, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_168, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_169);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_168[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_168[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_168[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_168[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_171, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_171)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_173, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_172, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_173);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_172[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_172[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_172[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_172[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_175, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_175)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_177, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_176, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_177);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_176[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_176[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_176[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_176[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_179, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_179)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_181, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_180, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_181);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_180[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_180[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_180[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_180[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_183, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_183)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_185, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_184, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_185);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_184[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_184[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_184[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_184[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_187, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_187)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_189, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_188, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_189);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_188[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_188[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_188[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_188[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_191, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_191)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_193, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_192, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_193);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_192[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_192[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_192[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_192[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_195, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_195)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_197, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_196, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_197);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_196[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_196[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_196[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_196[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_199, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_199)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_201, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_200, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_201);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_200[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_200[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_200[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_200[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_203, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_203)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_205, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_204, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_205);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_204[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_204[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_204[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_204[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_207, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_207)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_209, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_208, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_209);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_208[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_208[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_208[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_208[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_211, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_211)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_213, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_212, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_213);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_212[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_212[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_212[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_212[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_215, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_215)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_217, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_216, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_217);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_216[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_216[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_216[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_216[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_219, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_219)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_221, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_220, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_221);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_220[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_220[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_220[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_220[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_223, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_223)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_225, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_224, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_225);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_224[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_224[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_224[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_224[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_227, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_227)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_229, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_228, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_229);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_228[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_228[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_228[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_228[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_231, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_231)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_233, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_232, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_233);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_232[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_232[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_232[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_232[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_235, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_235)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_237, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_236, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_237);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_236[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_236[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_236[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_236[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_239, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_239)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_241, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_240, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_241);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_240[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_240[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_240[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_240[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_243, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_243)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_245, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_244, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_245);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_244[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_244[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_244[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_244[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_247, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_247)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_249, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_248, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_249);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_248[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_248[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_248[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_248[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_251, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_251)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_253, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_252, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_253);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_252[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_252[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_252[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_252[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_255, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_255)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_257, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_256, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_257);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_256[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_256[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_256[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_256[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_259, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_259)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_261, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_260, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_261);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_260[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_260[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_260[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_260[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_263, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_263)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_265, vlSelfRef.__Vfunc_sfp_div__26__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_264, vlSelfRef.__Vfunc_sfp_div__26__remainder, __Vtemp_265);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_264[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_264[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_264[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_264[3U];
                        vlSelfRef.__Vfunc_sfp_div__26__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__26__result);
                    }
                    __Vfunc_sfp_div__26__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__26__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__26__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__26__remainder, vlSelfRef.__Vfunc_sfp_div__26__b_ext)) {
                        VL_SUB_W(4, __Vtemp_267, vlSelfRef.__Vfunc_sfp_div__26__remainder, vlSelfRef.__Vfunc_sfp_div__26__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[0U] 
                            = __Vtemp_267[0U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[1U] 
                            = __Vtemp_267[1U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[2U] 
                            = __Vtemp_267[2U];
                        vlSelfRef.__Vfunc_sfp_div__26__remainder[3U] 
                            = __Vtemp_267[3U];
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
                __Vtemp_269[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__23__abs_a);
                __Vtemp_269[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__23__abs_a 
                                           >> 0x20U));
                __Vtemp_269[2U] = 0U;
                __Vtemp_269[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_269, 0x20U);
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
                VL_SHIFTL_WWI(128,128,32, __Vtemp_271, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_271)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_273, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_272, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_273);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_272[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_272[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_272[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_272[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_275, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_275)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_277, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_276, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_277);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_276[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_276[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_276[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_276[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_279, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_279)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_281, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_280, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_281);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_280[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_280[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_280[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_280[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_283, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_283)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_285, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_284, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_285);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_284[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_284[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_284[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_284[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_287, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_287)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_289, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_288, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_289);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_288[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_288[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_288[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_288[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_291, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_291)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_293, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_292, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_293);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_292[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_292[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_292[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_292[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_295, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_295)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_297, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_296, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_297);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_296[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_296[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_296[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_296[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_299, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_299)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_301, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_300, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_301);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_300[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_300[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_300[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_300[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_303, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_303)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_305, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_304, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_305);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_304[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_304[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_304[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_304[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_307, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_307)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_309, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_308, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_309);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_308[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_308[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_308[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_308[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_311, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_311)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_313, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_312, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_313);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_312[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_312[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_312[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_312[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_315, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_315)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_317, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_316, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_317);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_316[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_316[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_316[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_316[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_319, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_319)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_321, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_320, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_321);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_320[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_320[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_320[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_320[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_323, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_323)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_325, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_324, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_325);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_324[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_324[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_324[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_324[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_327, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_327)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_329, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_328, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_329);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_328[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_328[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_328[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_328[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_331, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_331)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_333, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_332, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_333);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_332[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_332[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_332[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_332[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_335, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_335)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_337, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_336, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_337);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_336[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_336[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_336[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_336[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_339, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_339)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_341, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_340, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_341);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_340[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_340[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_340[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_340[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_343, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_343)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_345, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_344, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_345);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_344[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_344[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_344[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_344[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_347, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_347)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_349, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_348, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_349);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_348[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_348[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_348[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_348[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_351, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_351)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_353, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_352, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_353);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_352[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_352[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_352[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_352[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_355, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_355)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_357, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_356, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_357);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_356[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_356[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_356[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_356[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_359, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_359)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_361, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_360, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_361);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_360[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_360[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_360[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_360[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_363, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_363)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_365, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_364, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_365);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_364[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_364[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_364[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_364[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_367, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_367)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_369, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_368, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_369);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_368[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_368[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_368[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_368[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_371, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_371)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_373, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_372, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_373);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_372[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_372[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_372[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_372[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_375, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_375)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_377, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_376, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_377);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_376[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_376[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_376[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_376[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_379, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_379)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_381, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_380, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_381);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_380[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_380[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_380[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_380[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_383, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_383)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_385, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_384, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_385);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_384[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_384[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_384[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_384[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_387, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_387)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_389, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_388, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_389);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_388[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_388[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_388[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_388[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_391, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_391)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_393, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_392, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_393);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_392[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_392[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_392[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_392[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_395, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_395)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_397, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_396, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_397);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_396[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_396[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_396[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_396[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_399, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_399)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_401, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_400, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_401);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_400[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_400[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_400[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_400[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_403, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_403)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_405, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_404, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_405);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_404[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_404[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_404[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_404[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_407, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_407)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_409, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_408, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_409);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_408[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_408[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_408[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_408[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_411, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_411)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_413, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_412, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_413);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_412[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_412[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_412[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_412[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_415, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_415)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_417, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_416, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_417);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_416[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_416[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_416[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_416[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_419, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_419)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_421, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_420, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_421);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_420[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_420[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_420[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_420[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_423, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_423)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_425, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_424, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_425);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_424[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_424[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_424[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_424[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_427, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_427)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_429, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_428, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_429);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_428[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_428[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_428[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_428[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_431, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_431)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_433, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_432, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_433);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_432[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_432[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_432[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_432[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_435, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_435)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_437, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_436, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_437);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_436[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_436[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_436[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_436[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_439, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_439)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_441, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_440, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_441);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_440[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_440[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_440[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_440[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_443, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_443)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_445, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_444, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_445);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_444[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_444[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_444[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_444[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_447, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_447)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_449, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_448, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_449);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_448[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_448[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_448[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_448[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_451, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_451)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_453, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_452, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_453);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_452[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_452[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_452[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_452[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_455, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_455)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_457, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_456, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_457);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_456[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_456[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_456[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_456[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_459, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_459)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_461, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_460, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_461);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_460[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_460[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_460[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_460[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_463, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_463)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_465, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_464, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_465);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_464[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_464[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_464[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_464[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_467, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_467)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_469, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_468, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_469);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_468[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_468[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_468[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_468[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_471, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_471)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_473, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_472, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_473);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_472[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_472[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_472[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_472[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_475, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_475)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_477, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_476, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_477);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_476[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_476[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_476[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_476[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_479, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_479)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_481, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_480, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_481);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_480[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_480[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_480[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_480[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_483, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_483)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_485, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_484, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_485);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_484[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_484[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_484[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_484[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_487, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_487)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_489, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_488, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_489);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_488[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_488[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_488[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_488[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_491, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_491)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_493, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_492, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_493);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_492[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_492[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_492[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_492[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_495, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_495)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_497, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_496, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_497);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_496[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_496[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_496[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_496[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_499, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_499)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_501, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_500, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_501);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_500[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_500[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_500[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_500[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_503, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_503)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_505, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_504, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_505);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_504[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_504[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_504[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_504[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_507, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_507)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_509, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_508, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_509);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_508[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_508[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_508[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_508[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_511, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_511)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_513, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_512, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_513);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_512[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_512[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_512[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_512[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_515, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_515)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_517, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_516, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_517);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_516[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_516[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_516[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_516[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_519, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_519)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_521, vlSelfRef.__Vfunc_sfp_div__23__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_520, vlSelfRef.__Vfunc_sfp_div__23__remainder, __Vtemp_521);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_520[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_520[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_520[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_520[3U];
                    vlSelfRef.__Vfunc_sfp_div__23__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__23__result);
                }
                __Vfunc_sfp_div__23__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__23__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__23__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__23__remainder, vlSelfRef.__Vfunc_sfp_div__23__b_ext)) {
                    VL_SUB_W(4, __Vtemp_523, vlSelfRef.__Vfunc_sfp_div__23__remainder, vlSelfRef.__Vfunc_sfp_div__23__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[0U] 
                        = __Vtemp_523[0U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[1U] 
                        = __Vtemp_523[1U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[2U] 
                        = __Vtemp_523[2U];
                    vlSelfRef.__Vfunc_sfp_div__23__remainder[3U] 
                        = __Vtemp_523[3U];
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
            VL_EXTENDS_WQ(128,64, __Vtemp_524, vlSelfRef.__Vfunc_sfp_mul__31__a);
            VL_EXTENDS_WQ(128,64, __Vtemp_525, vlSelfRef.__Vfunc_sfp_mul__31__b);
            VL_MULS_WWW(128, __Vtemp_526, __Vtemp_524, __Vtemp_525);
            VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__31__tmp, __Vtemp_526, 0x20U);
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
        vlSelfRef.__Vfunc_sfp_mul__16__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_528, vlSelfRef.__Vfunc_sfp_mul__16__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_529, vlSelfRef.__Vfunc_sfp_mul__16__b);
        VL_MULS_WWW(128, __Vtemp_530, __Vtemp_528, __Vtemp_529);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__16__tmp, __Vtemp_530, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__16__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__16__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__16__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__15__b = vlSelfRef.__Vfunc_sfp_mul__16__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__15__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_531, vlSelfRef.__Vfunc_sfp_mul__15__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_532, vlSelfRef.__Vfunc_sfp_mul__15__b);
        VL_MULS_WWW(128, __Vtemp_533, __Vtemp_531, __Vtemp_532);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__15__tmp, __Vtemp_533, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__15__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__15__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__15__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__14__b = vlSelfRef.__Vfunc_sfp_mul__15__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__14__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__14__Vfuncout = (vlSelfRef.__Vfunc_sfp_add__14__a 
                                                   + vlSelfRef.__Vfunc_sfp_add__14__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__14__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 1U;
    } else if ((3U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_mul__33__b = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__sum)
                                             ? vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient_next_layer
                                            [0U] : 0ULL);
        vlSelfRef.__Vfunc_sfp_mul__33__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_534, vlSelfRef.__Vfunc_sfp_mul__33__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_535, vlSelfRef.__Vfunc_sfp_mul__33__b);
        VL_MULS_WWW(128, __Vtemp_536, __Vtemp_534, __Vtemp_535);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__33__tmp, __Vtemp_536, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__33__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__33__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__33__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__32__b = vlSelfRef.__Vfunc_sfp_mul__33__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__32__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__32__Vfuncout = (vlSelfRef.__Vfunc_sfp_add__32__a 
                                                   + vlSelfRef.__Vfunc_sfp_add__32__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__32__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 1U;
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    }
    __Vfunc_sfp_mul__34__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__values
        [0U];
    __Vfunc_sfp_mul__34__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_537, __Vfunc_sfp_mul__34__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_538, __Vfunc_sfp_mul__34__b);
    VL_MULS_WWW(128, __Vtemp_539, __Vtemp_537, __Vtemp_538);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__34__tmp, __Vtemp_539, 0x20U);
    __Vfunc_sfp_mul__34__Vfuncout = (((QData)((IData)(
                                                      __Vfunc_sfp_mul__34__tmp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vfunc_sfp_mul__34__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__34__Vfuncout;
    __Vfunc_sfp_mul__34__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__values
        [1U];
    __Vfunc_sfp_mul__34__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_540, __Vfunc_sfp_mul__34__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_541, __Vfunc_sfp_mul__34__b);
    VL_MULS_WWW(128, __Vtemp_542, __Vtemp_540, __Vtemp_541);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__34__tmp, __Vtemp_542, 0x20U);
    __Vfunc_sfp_mul__34__Vfuncout = (((QData)((IData)(
                                                      __Vfunc_sfp_mul__34__tmp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vfunc_sfp_mul__34__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__34__Vfuncout;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i = 2U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients[0U][0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient;
}
