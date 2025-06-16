// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron__Syms.h"
#include "VPerceptron___024root.h"

VL_INLINE_OPT void VPerceptron___024root___nba_comb__TOP__3(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___nba_comb__TOP__3\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_sfp_div__111__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_sfp_div__114__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_sfp_div__123__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_sfp_div__126__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__133__Vfuncout;
    __Vfunc_sfp_mul__133__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__133__a;
    __Vfunc_sfp_mul__133__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__133__b;
    __Vfunc_sfp_mul__133__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__133__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__133__tmp);
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
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_22;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_25;
    VlWide<4>/*127:0*/ __Vtemp_26;
    VlWide<4>/*127:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_30;
    VlWide<4>/*127:0*/ __Vtemp_32;
    VlWide<4>/*127:0*/ __Vtemp_33;
    VlWide<4>/*127:0*/ __Vtemp_34;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_37;
    VlWide<4>/*127:0*/ __Vtemp_38;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_41;
    VlWide<4>/*127:0*/ __Vtemp_42;
    VlWide<4>/*127:0*/ __Vtemp_44;
    VlWide<4>/*127:0*/ __Vtemp_45;
    VlWide<4>/*127:0*/ __Vtemp_46;
    VlWide<4>/*127:0*/ __Vtemp_48;
    VlWide<4>/*127:0*/ __Vtemp_49;
    VlWide<4>/*127:0*/ __Vtemp_50;
    VlWide<4>/*127:0*/ __Vtemp_52;
    VlWide<4>/*127:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_56;
    VlWide<4>/*127:0*/ __Vtemp_57;
    VlWide<4>/*127:0*/ __Vtemp_58;
    VlWide<4>/*127:0*/ __Vtemp_60;
    VlWide<4>/*127:0*/ __Vtemp_61;
    VlWide<4>/*127:0*/ __Vtemp_62;
    VlWide<4>/*127:0*/ __Vtemp_64;
    VlWide<4>/*127:0*/ __Vtemp_65;
    VlWide<4>/*127:0*/ __Vtemp_66;
    VlWide<4>/*127:0*/ __Vtemp_68;
    VlWide<4>/*127:0*/ __Vtemp_69;
    VlWide<4>/*127:0*/ __Vtemp_70;
    VlWide<4>/*127:0*/ __Vtemp_72;
    VlWide<4>/*127:0*/ __Vtemp_73;
    VlWide<4>/*127:0*/ __Vtemp_74;
    VlWide<4>/*127:0*/ __Vtemp_76;
    VlWide<4>/*127:0*/ __Vtemp_77;
    VlWide<4>/*127:0*/ __Vtemp_78;
    VlWide<4>/*127:0*/ __Vtemp_80;
    VlWide<4>/*127:0*/ __Vtemp_81;
    VlWide<4>/*127:0*/ __Vtemp_82;
    VlWide<4>/*127:0*/ __Vtemp_84;
    VlWide<4>/*127:0*/ __Vtemp_85;
    VlWide<4>/*127:0*/ __Vtemp_86;
    VlWide<4>/*127:0*/ __Vtemp_88;
    VlWide<4>/*127:0*/ __Vtemp_89;
    VlWide<4>/*127:0*/ __Vtemp_90;
    VlWide<4>/*127:0*/ __Vtemp_92;
    VlWide<4>/*127:0*/ __Vtemp_93;
    VlWide<4>/*127:0*/ __Vtemp_94;
    VlWide<4>/*127:0*/ __Vtemp_96;
    VlWide<4>/*127:0*/ __Vtemp_97;
    VlWide<4>/*127:0*/ __Vtemp_98;
    VlWide<4>/*127:0*/ __Vtemp_100;
    VlWide<4>/*127:0*/ __Vtemp_101;
    VlWide<4>/*127:0*/ __Vtemp_102;
    VlWide<4>/*127:0*/ __Vtemp_104;
    VlWide<4>/*127:0*/ __Vtemp_105;
    VlWide<4>/*127:0*/ __Vtemp_106;
    VlWide<4>/*127:0*/ __Vtemp_108;
    VlWide<4>/*127:0*/ __Vtemp_109;
    VlWide<4>/*127:0*/ __Vtemp_110;
    VlWide<4>/*127:0*/ __Vtemp_112;
    VlWide<4>/*127:0*/ __Vtemp_113;
    VlWide<4>/*127:0*/ __Vtemp_114;
    VlWide<4>/*127:0*/ __Vtemp_116;
    VlWide<4>/*127:0*/ __Vtemp_117;
    VlWide<4>/*127:0*/ __Vtemp_118;
    VlWide<4>/*127:0*/ __Vtemp_120;
    VlWide<4>/*127:0*/ __Vtemp_121;
    VlWide<4>/*127:0*/ __Vtemp_122;
    VlWide<4>/*127:0*/ __Vtemp_124;
    VlWide<4>/*127:0*/ __Vtemp_125;
    VlWide<4>/*127:0*/ __Vtemp_126;
    VlWide<4>/*127:0*/ __Vtemp_128;
    VlWide<4>/*127:0*/ __Vtemp_129;
    VlWide<4>/*127:0*/ __Vtemp_130;
    VlWide<4>/*127:0*/ __Vtemp_132;
    VlWide<4>/*127:0*/ __Vtemp_133;
    VlWide<4>/*127:0*/ __Vtemp_134;
    VlWide<4>/*127:0*/ __Vtemp_136;
    VlWide<4>/*127:0*/ __Vtemp_137;
    VlWide<4>/*127:0*/ __Vtemp_138;
    VlWide<4>/*127:0*/ __Vtemp_140;
    VlWide<4>/*127:0*/ __Vtemp_141;
    VlWide<4>/*127:0*/ __Vtemp_142;
    VlWide<4>/*127:0*/ __Vtemp_144;
    VlWide<4>/*127:0*/ __Vtemp_145;
    VlWide<4>/*127:0*/ __Vtemp_146;
    VlWide<4>/*127:0*/ __Vtemp_148;
    VlWide<4>/*127:0*/ __Vtemp_149;
    VlWide<4>/*127:0*/ __Vtemp_150;
    VlWide<4>/*127:0*/ __Vtemp_152;
    VlWide<4>/*127:0*/ __Vtemp_153;
    VlWide<4>/*127:0*/ __Vtemp_154;
    VlWide<4>/*127:0*/ __Vtemp_156;
    VlWide<4>/*127:0*/ __Vtemp_157;
    VlWide<4>/*127:0*/ __Vtemp_158;
    VlWide<4>/*127:0*/ __Vtemp_160;
    VlWide<4>/*127:0*/ __Vtemp_161;
    VlWide<4>/*127:0*/ __Vtemp_162;
    VlWide<4>/*127:0*/ __Vtemp_164;
    VlWide<4>/*127:0*/ __Vtemp_165;
    VlWide<4>/*127:0*/ __Vtemp_166;
    VlWide<4>/*127:0*/ __Vtemp_168;
    VlWide<4>/*127:0*/ __Vtemp_169;
    VlWide<4>/*127:0*/ __Vtemp_170;
    VlWide<4>/*127:0*/ __Vtemp_172;
    VlWide<4>/*127:0*/ __Vtemp_173;
    VlWide<4>/*127:0*/ __Vtemp_174;
    VlWide<4>/*127:0*/ __Vtemp_176;
    VlWide<4>/*127:0*/ __Vtemp_177;
    VlWide<4>/*127:0*/ __Vtemp_178;
    VlWide<4>/*127:0*/ __Vtemp_180;
    VlWide<4>/*127:0*/ __Vtemp_181;
    VlWide<4>/*127:0*/ __Vtemp_182;
    VlWide<4>/*127:0*/ __Vtemp_184;
    VlWide<4>/*127:0*/ __Vtemp_185;
    VlWide<4>/*127:0*/ __Vtemp_186;
    VlWide<4>/*127:0*/ __Vtemp_188;
    VlWide<4>/*127:0*/ __Vtemp_189;
    VlWide<4>/*127:0*/ __Vtemp_190;
    VlWide<4>/*127:0*/ __Vtemp_192;
    VlWide<4>/*127:0*/ __Vtemp_193;
    VlWide<4>/*127:0*/ __Vtemp_194;
    VlWide<4>/*127:0*/ __Vtemp_196;
    VlWide<4>/*127:0*/ __Vtemp_197;
    VlWide<4>/*127:0*/ __Vtemp_198;
    VlWide<4>/*127:0*/ __Vtemp_200;
    VlWide<4>/*127:0*/ __Vtemp_201;
    VlWide<4>/*127:0*/ __Vtemp_202;
    VlWide<4>/*127:0*/ __Vtemp_204;
    VlWide<4>/*127:0*/ __Vtemp_205;
    VlWide<4>/*127:0*/ __Vtemp_206;
    VlWide<4>/*127:0*/ __Vtemp_208;
    VlWide<4>/*127:0*/ __Vtemp_209;
    VlWide<4>/*127:0*/ __Vtemp_210;
    VlWide<4>/*127:0*/ __Vtemp_212;
    VlWide<4>/*127:0*/ __Vtemp_213;
    VlWide<4>/*127:0*/ __Vtemp_214;
    VlWide<4>/*127:0*/ __Vtemp_216;
    VlWide<4>/*127:0*/ __Vtemp_217;
    VlWide<4>/*127:0*/ __Vtemp_218;
    VlWide<4>/*127:0*/ __Vtemp_220;
    VlWide<4>/*127:0*/ __Vtemp_221;
    VlWide<4>/*127:0*/ __Vtemp_222;
    VlWide<4>/*127:0*/ __Vtemp_224;
    VlWide<4>/*127:0*/ __Vtemp_225;
    VlWide<4>/*127:0*/ __Vtemp_226;
    VlWide<4>/*127:0*/ __Vtemp_228;
    VlWide<4>/*127:0*/ __Vtemp_229;
    VlWide<4>/*127:0*/ __Vtemp_230;
    VlWide<4>/*127:0*/ __Vtemp_232;
    VlWide<4>/*127:0*/ __Vtemp_233;
    VlWide<4>/*127:0*/ __Vtemp_234;
    VlWide<4>/*127:0*/ __Vtemp_236;
    VlWide<4>/*127:0*/ __Vtemp_237;
    VlWide<4>/*127:0*/ __Vtemp_238;
    VlWide<4>/*127:0*/ __Vtemp_240;
    VlWide<4>/*127:0*/ __Vtemp_241;
    VlWide<4>/*127:0*/ __Vtemp_242;
    VlWide<4>/*127:0*/ __Vtemp_244;
    VlWide<4>/*127:0*/ __Vtemp_245;
    VlWide<4>/*127:0*/ __Vtemp_246;
    VlWide<4>/*127:0*/ __Vtemp_248;
    VlWide<4>/*127:0*/ __Vtemp_249;
    VlWide<4>/*127:0*/ __Vtemp_250;
    VlWide<4>/*127:0*/ __Vtemp_252;
    VlWide<4>/*127:0*/ __Vtemp_253;
    VlWide<4>/*127:0*/ __Vtemp_254;
    VlWide<4>/*127:0*/ __Vtemp_256;
    VlWide<4>/*127:0*/ __Vtemp_257;
    VlWide<4>/*127:0*/ __Vtemp_258;
    VlWide<4>/*127:0*/ __Vtemp_260;
    VlWide<4>/*127:0*/ __Vtemp_261;
    VlWide<4>/*127:0*/ __Vtemp_262;
    VlWide<4>/*127:0*/ __Vtemp_264;
    VlWide<4>/*127:0*/ __Vtemp_265;
    VlWide<4>/*127:0*/ __Vtemp_266;
    VlWide<4>/*127:0*/ __Vtemp_268;
    VlWide<4>/*127:0*/ __Vtemp_269;
    VlWide<4>/*127:0*/ __Vtemp_270;
    VlWide<4>/*127:0*/ __Vtemp_272;
    VlWide<4>/*127:0*/ __Vtemp_273;
    VlWide<4>/*127:0*/ __Vtemp_274;
    VlWide<4>/*127:0*/ __Vtemp_276;
    VlWide<4>/*127:0*/ __Vtemp_278;
    VlWide<4>/*127:0*/ __Vtemp_280;
    VlWide<4>/*127:0*/ __Vtemp_281;
    VlWide<4>/*127:0*/ __Vtemp_282;
    VlWide<4>/*127:0*/ __Vtemp_284;
    VlWide<4>/*127:0*/ __Vtemp_285;
    VlWide<4>/*127:0*/ __Vtemp_286;
    VlWide<4>/*127:0*/ __Vtemp_288;
    VlWide<4>/*127:0*/ __Vtemp_289;
    VlWide<4>/*127:0*/ __Vtemp_290;
    VlWide<4>/*127:0*/ __Vtemp_292;
    VlWide<4>/*127:0*/ __Vtemp_293;
    VlWide<4>/*127:0*/ __Vtemp_294;
    VlWide<4>/*127:0*/ __Vtemp_296;
    VlWide<4>/*127:0*/ __Vtemp_297;
    VlWide<4>/*127:0*/ __Vtemp_298;
    VlWide<4>/*127:0*/ __Vtemp_300;
    VlWide<4>/*127:0*/ __Vtemp_301;
    VlWide<4>/*127:0*/ __Vtemp_302;
    VlWide<4>/*127:0*/ __Vtemp_304;
    VlWide<4>/*127:0*/ __Vtemp_305;
    VlWide<4>/*127:0*/ __Vtemp_306;
    VlWide<4>/*127:0*/ __Vtemp_308;
    VlWide<4>/*127:0*/ __Vtemp_309;
    VlWide<4>/*127:0*/ __Vtemp_310;
    VlWide<4>/*127:0*/ __Vtemp_312;
    VlWide<4>/*127:0*/ __Vtemp_313;
    VlWide<4>/*127:0*/ __Vtemp_314;
    VlWide<4>/*127:0*/ __Vtemp_316;
    VlWide<4>/*127:0*/ __Vtemp_317;
    VlWide<4>/*127:0*/ __Vtemp_318;
    VlWide<4>/*127:0*/ __Vtemp_320;
    VlWide<4>/*127:0*/ __Vtemp_321;
    VlWide<4>/*127:0*/ __Vtemp_322;
    VlWide<4>/*127:0*/ __Vtemp_324;
    VlWide<4>/*127:0*/ __Vtemp_325;
    VlWide<4>/*127:0*/ __Vtemp_326;
    VlWide<4>/*127:0*/ __Vtemp_328;
    VlWide<4>/*127:0*/ __Vtemp_329;
    VlWide<4>/*127:0*/ __Vtemp_330;
    VlWide<4>/*127:0*/ __Vtemp_332;
    VlWide<4>/*127:0*/ __Vtemp_333;
    VlWide<4>/*127:0*/ __Vtemp_334;
    VlWide<4>/*127:0*/ __Vtemp_336;
    VlWide<4>/*127:0*/ __Vtemp_337;
    VlWide<4>/*127:0*/ __Vtemp_338;
    VlWide<4>/*127:0*/ __Vtemp_340;
    VlWide<4>/*127:0*/ __Vtemp_341;
    VlWide<4>/*127:0*/ __Vtemp_342;
    VlWide<4>/*127:0*/ __Vtemp_344;
    VlWide<4>/*127:0*/ __Vtemp_345;
    VlWide<4>/*127:0*/ __Vtemp_346;
    VlWide<4>/*127:0*/ __Vtemp_348;
    VlWide<4>/*127:0*/ __Vtemp_349;
    VlWide<4>/*127:0*/ __Vtemp_350;
    VlWide<4>/*127:0*/ __Vtemp_352;
    VlWide<4>/*127:0*/ __Vtemp_353;
    VlWide<4>/*127:0*/ __Vtemp_354;
    VlWide<4>/*127:0*/ __Vtemp_356;
    VlWide<4>/*127:0*/ __Vtemp_357;
    VlWide<4>/*127:0*/ __Vtemp_358;
    VlWide<4>/*127:0*/ __Vtemp_360;
    VlWide<4>/*127:0*/ __Vtemp_361;
    VlWide<4>/*127:0*/ __Vtemp_362;
    VlWide<4>/*127:0*/ __Vtemp_364;
    VlWide<4>/*127:0*/ __Vtemp_365;
    VlWide<4>/*127:0*/ __Vtemp_366;
    VlWide<4>/*127:0*/ __Vtemp_368;
    VlWide<4>/*127:0*/ __Vtemp_369;
    VlWide<4>/*127:0*/ __Vtemp_370;
    VlWide<4>/*127:0*/ __Vtemp_372;
    VlWide<4>/*127:0*/ __Vtemp_373;
    VlWide<4>/*127:0*/ __Vtemp_374;
    VlWide<4>/*127:0*/ __Vtemp_376;
    VlWide<4>/*127:0*/ __Vtemp_377;
    VlWide<4>/*127:0*/ __Vtemp_378;
    VlWide<4>/*127:0*/ __Vtemp_380;
    VlWide<4>/*127:0*/ __Vtemp_381;
    VlWide<4>/*127:0*/ __Vtemp_382;
    VlWide<4>/*127:0*/ __Vtemp_384;
    VlWide<4>/*127:0*/ __Vtemp_385;
    VlWide<4>/*127:0*/ __Vtemp_386;
    VlWide<4>/*127:0*/ __Vtemp_388;
    VlWide<4>/*127:0*/ __Vtemp_389;
    VlWide<4>/*127:0*/ __Vtemp_390;
    VlWide<4>/*127:0*/ __Vtemp_392;
    VlWide<4>/*127:0*/ __Vtemp_393;
    VlWide<4>/*127:0*/ __Vtemp_394;
    VlWide<4>/*127:0*/ __Vtemp_396;
    VlWide<4>/*127:0*/ __Vtemp_397;
    VlWide<4>/*127:0*/ __Vtemp_398;
    VlWide<4>/*127:0*/ __Vtemp_400;
    VlWide<4>/*127:0*/ __Vtemp_401;
    VlWide<4>/*127:0*/ __Vtemp_402;
    VlWide<4>/*127:0*/ __Vtemp_404;
    VlWide<4>/*127:0*/ __Vtemp_405;
    VlWide<4>/*127:0*/ __Vtemp_406;
    VlWide<4>/*127:0*/ __Vtemp_408;
    VlWide<4>/*127:0*/ __Vtemp_409;
    VlWide<4>/*127:0*/ __Vtemp_410;
    VlWide<4>/*127:0*/ __Vtemp_412;
    VlWide<4>/*127:0*/ __Vtemp_413;
    VlWide<4>/*127:0*/ __Vtemp_414;
    VlWide<4>/*127:0*/ __Vtemp_416;
    VlWide<4>/*127:0*/ __Vtemp_417;
    VlWide<4>/*127:0*/ __Vtemp_418;
    VlWide<4>/*127:0*/ __Vtemp_420;
    VlWide<4>/*127:0*/ __Vtemp_421;
    VlWide<4>/*127:0*/ __Vtemp_422;
    VlWide<4>/*127:0*/ __Vtemp_424;
    VlWide<4>/*127:0*/ __Vtemp_425;
    VlWide<4>/*127:0*/ __Vtemp_426;
    VlWide<4>/*127:0*/ __Vtemp_428;
    VlWide<4>/*127:0*/ __Vtemp_429;
    VlWide<4>/*127:0*/ __Vtemp_430;
    VlWide<4>/*127:0*/ __Vtemp_432;
    VlWide<4>/*127:0*/ __Vtemp_433;
    VlWide<4>/*127:0*/ __Vtemp_434;
    VlWide<4>/*127:0*/ __Vtemp_436;
    VlWide<4>/*127:0*/ __Vtemp_437;
    VlWide<4>/*127:0*/ __Vtemp_438;
    VlWide<4>/*127:0*/ __Vtemp_440;
    VlWide<4>/*127:0*/ __Vtemp_441;
    VlWide<4>/*127:0*/ __Vtemp_442;
    VlWide<4>/*127:0*/ __Vtemp_444;
    VlWide<4>/*127:0*/ __Vtemp_445;
    VlWide<4>/*127:0*/ __Vtemp_446;
    VlWide<4>/*127:0*/ __Vtemp_448;
    VlWide<4>/*127:0*/ __Vtemp_449;
    VlWide<4>/*127:0*/ __Vtemp_450;
    VlWide<4>/*127:0*/ __Vtemp_452;
    VlWide<4>/*127:0*/ __Vtemp_453;
    VlWide<4>/*127:0*/ __Vtemp_454;
    VlWide<4>/*127:0*/ __Vtemp_456;
    VlWide<4>/*127:0*/ __Vtemp_457;
    VlWide<4>/*127:0*/ __Vtemp_458;
    VlWide<4>/*127:0*/ __Vtemp_460;
    VlWide<4>/*127:0*/ __Vtemp_461;
    VlWide<4>/*127:0*/ __Vtemp_462;
    VlWide<4>/*127:0*/ __Vtemp_464;
    VlWide<4>/*127:0*/ __Vtemp_465;
    VlWide<4>/*127:0*/ __Vtemp_466;
    VlWide<4>/*127:0*/ __Vtemp_468;
    VlWide<4>/*127:0*/ __Vtemp_469;
    VlWide<4>/*127:0*/ __Vtemp_470;
    VlWide<4>/*127:0*/ __Vtemp_472;
    VlWide<4>/*127:0*/ __Vtemp_473;
    VlWide<4>/*127:0*/ __Vtemp_474;
    VlWide<4>/*127:0*/ __Vtemp_476;
    VlWide<4>/*127:0*/ __Vtemp_477;
    VlWide<4>/*127:0*/ __Vtemp_478;
    VlWide<4>/*127:0*/ __Vtemp_480;
    VlWide<4>/*127:0*/ __Vtemp_481;
    VlWide<4>/*127:0*/ __Vtemp_482;
    VlWide<4>/*127:0*/ __Vtemp_484;
    VlWide<4>/*127:0*/ __Vtemp_485;
    VlWide<4>/*127:0*/ __Vtemp_486;
    VlWide<4>/*127:0*/ __Vtemp_488;
    VlWide<4>/*127:0*/ __Vtemp_489;
    VlWide<4>/*127:0*/ __Vtemp_490;
    VlWide<4>/*127:0*/ __Vtemp_492;
    VlWide<4>/*127:0*/ __Vtemp_493;
    VlWide<4>/*127:0*/ __Vtemp_494;
    VlWide<4>/*127:0*/ __Vtemp_496;
    VlWide<4>/*127:0*/ __Vtemp_497;
    VlWide<4>/*127:0*/ __Vtemp_498;
    VlWide<4>/*127:0*/ __Vtemp_500;
    VlWide<4>/*127:0*/ __Vtemp_501;
    VlWide<4>/*127:0*/ __Vtemp_502;
    VlWide<4>/*127:0*/ __Vtemp_504;
    VlWide<4>/*127:0*/ __Vtemp_505;
    VlWide<4>/*127:0*/ __Vtemp_506;
    VlWide<4>/*127:0*/ __Vtemp_508;
    VlWide<4>/*127:0*/ __Vtemp_509;
    VlWide<4>/*127:0*/ __Vtemp_510;
    VlWide<4>/*127:0*/ __Vtemp_512;
    VlWide<4>/*127:0*/ __Vtemp_513;
    VlWide<4>/*127:0*/ __Vtemp_514;
    VlWide<4>/*127:0*/ __Vtemp_516;
    VlWide<4>/*127:0*/ __Vtemp_517;
    VlWide<4>/*127:0*/ __Vtemp_518;
    VlWide<4>/*127:0*/ __Vtemp_520;
    VlWide<4>/*127:0*/ __Vtemp_521;
    VlWide<4>/*127:0*/ __Vtemp_522;
    VlWide<4>/*127:0*/ __Vtemp_524;
    VlWide<4>/*127:0*/ __Vtemp_525;
    VlWide<4>/*127:0*/ __Vtemp_526;
    VlWide<4>/*127:0*/ __Vtemp_528;
    VlWide<4>/*127:0*/ __Vtemp_529;
    VlWide<4>/*127:0*/ __Vtemp_530;
    VlWide<4>/*127:0*/ __Vtemp_532;
    VlWide<4>/*127:0*/ __Vtemp_533;
    VlWide<4>/*127:0*/ __Vtemp_534;
    VlWide<4>/*127:0*/ __Vtemp_535;
    VlWide<4>/*127:0*/ __Vtemp_536;
    VlWide<4>/*127:0*/ __Vtemp_538;
    VlWide<4>/*127:0*/ __Vtemp_539;
    VlWide<4>/*127:0*/ __Vtemp_540;
    VlWide<4>/*127:0*/ __Vtemp_542;
    VlWide<4>/*127:0*/ __Vtemp_543;
    VlWide<4>/*127:0*/ __Vtemp_544;
    VlWide<4>/*127:0*/ __Vtemp_546;
    VlWide<4>/*127:0*/ __Vtemp_547;
    VlWide<4>/*127:0*/ __Vtemp_548;
    VlWide<4>/*127:0*/ __Vtemp_550;
    VlWide<4>/*127:0*/ __Vtemp_551;
    VlWide<4>/*127:0*/ __Vtemp_552;
    VlWide<4>/*127:0*/ __Vtemp_554;
    VlWide<4>/*127:0*/ __Vtemp_555;
    VlWide<4>/*127:0*/ __Vtemp_556;
    VlWide<4>/*127:0*/ __Vtemp_558;
    VlWide<4>/*127:0*/ __Vtemp_559;
    VlWide<4>/*127:0*/ __Vtemp_560;
    VlWide<4>/*127:0*/ __Vtemp_562;
    VlWide<4>/*127:0*/ __Vtemp_563;
    VlWide<4>/*127:0*/ __Vtemp_564;
    VlWide<4>/*127:0*/ __Vtemp_566;
    VlWide<4>/*127:0*/ __Vtemp_567;
    VlWide<4>/*127:0*/ __Vtemp_568;
    VlWide<4>/*127:0*/ __Vtemp_570;
    VlWide<4>/*127:0*/ __Vtemp_571;
    VlWide<4>/*127:0*/ __Vtemp_572;
    VlWide<4>/*127:0*/ __Vtemp_574;
    VlWide<4>/*127:0*/ __Vtemp_575;
    VlWide<4>/*127:0*/ __Vtemp_576;
    VlWide<4>/*127:0*/ __Vtemp_578;
    VlWide<4>/*127:0*/ __Vtemp_579;
    VlWide<4>/*127:0*/ __Vtemp_580;
    VlWide<4>/*127:0*/ __Vtemp_582;
    VlWide<4>/*127:0*/ __Vtemp_583;
    VlWide<4>/*127:0*/ __Vtemp_584;
    VlWide<4>/*127:0*/ __Vtemp_586;
    VlWide<4>/*127:0*/ __Vtemp_587;
    VlWide<4>/*127:0*/ __Vtemp_588;
    VlWide<4>/*127:0*/ __Vtemp_590;
    VlWide<4>/*127:0*/ __Vtemp_591;
    VlWide<4>/*127:0*/ __Vtemp_592;
    VlWide<4>/*127:0*/ __Vtemp_594;
    VlWide<4>/*127:0*/ __Vtemp_595;
    VlWide<4>/*127:0*/ __Vtemp_596;
    VlWide<4>/*127:0*/ __Vtemp_598;
    VlWide<4>/*127:0*/ __Vtemp_599;
    VlWide<4>/*127:0*/ __Vtemp_600;
    VlWide<4>/*127:0*/ __Vtemp_602;
    VlWide<4>/*127:0*/ __Vtemp_603;
    VlWide<4>/*127:0*/ __Vtemp_604;
    VlWide<4>/*127:0*/ __Vtemp_606;
    VlWide<4>/*127:0*/ __Vtemp_607;
    VlWide<4>/*127:0*/ __Vtemp_608;
    VlWide<4>/*127:0*/ __Vtemp_610;
    VlWide<4>/*127:0*/ __Vtemp_611;
    VlWide<4>/*127:0*/ __Vtemp_612;
    VlWide<4>/*127:0*/ __Vtemp_614;
    VlWide<4>/*127:0*/ __Vtemp_615;
    VlWide<4>/*127:0*/ __Vtemp_616;
    VlWide<4>/*127:0*/ __Vtemp_618;
    VlWide<4>/*127:0*/ __Vtemp_619;
    VlWide<4>/*127:0*/ __Vtemp_620;
    VlWide<4>/*127:0*/ __Vtemp_622;
    VlWide<4>/*127:0*/ __Vtemp_623;
    VlWide<4>/*127:0*/ __Vtemp_624;
    VlWide<4>/*127:0*/ __Vtemp_626;
    VlWide<4>/*127:0*/ __Vtemp_627;
    VlWide<4>/*127:0*/ __Vtemp_628;
    VlWide<4>/*127:0*/ __Vtemp_630;
    VlWide<4>/*127:0*/ __Vtemp_631;
    VlWide<4>/*127:0*/ __Vtemp_632;
    VlWide<4>/*127:0*/ __Vtemp_634;
    VlWide<4>/*127:0*/ __Vtemp_635;
    VlWide<4>/*127:0*/ __Vtemp_636;
    VlWide<4>/*127:0*/ __Vtemp_638;
    VlWide<4>/*127:0*/ __Vtemp_639;
    VlWide<4>/*127:0*/ __Vtemp_640;
    VlWide<4>/*127:0*/ __Vtemp_642;
    VlWide<4>/*127:0*/ __Vtemp_643;
    VlWide<4>/*127:0*/ __Vtemp_644;
    VlWide<4>/*127:0*/ __Vtemp_646;
    VlWide<4>/*127:0*/ __Vtemp_647;
    VlWide<4>/*127:0*/ __Vtemp_648;
    VlWide<4>/*127:0*/ __Vtemp_650;
    VlWide<4>/*127:0*/ __Vtemp_651;
    VlWide<4>/*127:0*/ __Vtemp_652;
    VlWide<4>/*127:0*/ __Vtemp_654;
    VlWide<4>/*127:0*/ __Vtemp_655;
    VlWide<4>/*127:0*/ __Vtemp_656;
    VlWide<4>/*127:0*/ __Vtemp_658;
    VlWide<4>/*127:0*/ __Vtemp_659;
    VlWide<4>/*127:0*/ __Vtemp_660;
    VlWide<4>/*127:0*/ __Vtemp_662;
    VlWide<4>/*127:0*/ __Vtemp_663;
    VlWide<4>/*127:0*/ __Vtemp_664;
    VlWide<4>/*127:0*/ __Vtemp_666;
    VlWide<4>/*127:0*/ __Vtemp_667;
    VlWide<4>/*127:0*/ __Vtemp_668;
    VlWide<4>/*127:0*/ __Vtemp_670;
    VlWide<4>/*127:0*/ __Vtemp_671;
    VlWide<4>/*127:0*/ __Vtemp_672;
    VlWide<4>/*127:0*/ __Vtemp_674;
    VlWide<4>/*127:0*/ __Vtemp_675;
    VlWide<4>/*127:0*/ __Vtemp_676;
    VlWide<4>/*127:0*/ __Vtemp_678;
    VlWide<4>/*127:0*/ __Vtemp_679;
    VlWide<4>/*127:0*/ __Vtemp_680;
    VlWide<4>/*127:0*/ __Vtemp_682;
    VlWide<4>/*127:0*/ __Vtemp_683;
    VlWide<4>/*127:0*/ __Vtemp_684;
    VlWide<4>/*127:0*/ __Vtemp_686;
    VlWide<4>/*127:0*/ __Vtemp_687;
    VlWide<4>/*127:0*/ __Vtemp_688;
    VlWide<4>/*127:0*/ __Vtemp_690;
    VlWide<4>/*127:0*/ __Vtemp_691;
    VlWide<4>/*127:0*/ __Vtemp_692;
    VlWide<4>/*127:0*/ __Vtemp_694;
    VlWide<4>/*127:0*/ __Vtemp_695;
    VlWide<4>/*127:0*/ __Vtemp_696;
    VlWide<4>/*127:0*/ __Vtemp_698;
    VlWide<4>/*127:0*/ __Vtemp_699;
    VlWide<4>/*127:0*/ __Vtemp_700;
    VlWide<4>/*127:0*/ __Vtemp_702;
    VlWide<4>/*127:0*/ __Vtemp_703;
    VlWide<4>/*127:0*/ __Vtemp_704;
    VlWide<4>/*127:0*/ __Vtemp_706;
    VlWide<4>/*127:0*/ __Vtemp_707;
    VlWide<4>/*127:0*/ __Vtemp_708;
    VlWide<4>/*127:0*/ __Vtemp_710;
    VlWide<4>/*127:0*/ __Vtemp_711;
    VlWide<4>/*127:0*/ __Vtemp_712;
    VlWide<4>/*127:0*/ __Vtemp_714;
    VlWide<4>/*127:0*/ __Vtemp_715;
    VlWide<4>/*127:0*/ __Vtemp_716;
    VlWide<4>/*127:0*/ __Vtemp_718;
    VlWide<4>/*127:0*/ __Vtemp_719;
    VlWide<4>/*127:0*/ __Vtemp_720;
    VlWide<4>/*127:0*/ __Vtemp_722;
    VlWide<4>/*127:0*/ __Vtemp_723;
    VlWide<4>/*127:0*/ __Vtemp_724;
    VlWide<4>/*127:0*/ __Vtemp_726;
    VlWide<4>/*127:0*/ __Vtemp_727;
    VlWide<4>/*127:0*/ __Vtemp_728;
    VlWide<4>/*127:0*/ __Vtemp_730;
    VlWide<4>/*127:0*/ __Vtemp_731;
    VlWide<4>/*127:0*/ __Vtemp_732;
    VlWide<4>/*127:0*/ __Vtemp_734;
    VlWide<4>/*127:0*/ __Vtemp_735;
    VlWide<4>/*127:0*/ __Vtemp_736;
    VlWide<4>/*127:0*/ __Vtemp_738;
    VlWide<4>/*127:0*/ __Vtemp_739;
    VlWide<4>/*127:0*/ __Vtemp_740;
    VlWide<4>/*127:0*/ __Vtemp_742;
    VlWide<4>/*127:0*/ __Vtemp_743;
    VlWide<4>/*127:0*/ __Vtemp_744;
    VlWide<4>/*127:0*/ __Vtemp_746;
    VlWide<4>/*127:0*/ __Vtemp_747;
    VlWide<4>/*127:0*/ __Vtemp_748;
    VlWide<4>/*127:0*/ __Vtemp_750;
    VlWide<4>/*127:0*/ __Vtemp_751;
    VlWide<4>/*127:0*/ __Vtemp_752;
    VlWide<4>/*127:0*/ __Vtemp_754;
    VlWide<4>/*127:0*/ __Vtemp_755;
    VlWide<4>/*127:0*/ __Vtemp_756;
    VlWide<4>/*127:0*/ __Vtemp_758;
    VlWide<4>/*127:0*/ __Vtemp_759;
    VlWide<4>/*127:0*/ __Vtemp_760;
    VlWide<4>/*127:0*/ __Vtemp_762;
    VlWide<4>/*127:0*/ __Vtemp_763;
    VlWide<4>/*127:0*/ __Vtemp_764;
    VlWide<4>/*127:0*/ __Vtemp_766;
    VlWide<4>/*127:0*/ __Vtemp_767;
    VlWide<4>/*127:0*/ __Vtemp_768;
    VlWide<4>/*127:0*/ __Vtemp_770;
    VlWide<4>/*127:0*/ __Vtemp_771;
    VlWide<4>/*127:0*/ __Vtemp_772;
    VlWide<4>/*127:0*/ __Vtemp_774;
    VlWide<4>/*127:0*/ __Vtemp_775;
    VlWide<4>/*127:0*/ __Vtemp_776;
    VlWide<4>/*127:0*/ __Vtemp_778;
    VlWide<4>/*127:0*/ __Vtemp_779;
    VlWide<4>/*127:0*/ __Vtemp_780;
    VlWide<4>/*127:0*/ __Vtemp_782;
    VlWide<4>/*127:0*/ __Vtemp_783;
    VlWide<4>/*127:0*/ __Vtemp_784;
    VlWide<4>/*127:0*/ __Vtemp_786;
    VlWide<4>/*127:0*/ __Vtemp_787;
    VlWide<4>/*127:0*/ __Vtemp_788;
    VlWide<4>/*127:0*/ __Vtemp_790;
    VlWide<4>/*127:0*/ __Vtemp_792;
    VlWide<4>/*127:0*/ __Vtemp_794;
    VlWide<4>/*127:0*/ __Vtemp_795;
    VlWide<4>/*127:0*/ __Vtemp_796;
    VlWide<4>/*127:0*/ __Vtemp_798;
    VlWide<4>/*127:0*/ __Vtemp_799;
    VlWide<4>/*127:0*/ __Vtemp_800;
    VlWide<4>/*127:0*/ __Vtemp_802;
    VlWide<4>/*127:0*/ __Vtemp_803;
    VlWide<4>/*127:0*/ __Vtemp_804;
    VlWide<4>/*127:0*/ __Vtemp_806;
    VlWide<4>/*127:0*/ __Vtemp_807;
    VlWide<4>/*127:0*/ __Vtemp_808;
    VlWide<4>/*127:0*/ __Vtemp_810;
    VlWide<4>/*127:0*/ __Vtemp_811;
    VlWide<4>/*127:0*/ __Vtemp_812;
    VlWide<4>/*127:0*/ __Vtemp_814;
    VlWide<4>/*127:0*/ __Vtemp_815;
    VlWide<4>/*127:0*/ __Vtemp_816;
    VlWide<4>/*127:0*/ __Vtemp_818;
    VlWide<4>/*127:0*/ __Vtemp_819;
    VlWide<4>/*127:0*/ __Vtemp_820;
    VlWide<4>/*127:0*/ __Vtemp_822;
    VlWide<4>/*127:0*/ __Vtemp_823;
    VlWide<4>/*127:0*/ __Vtemp_824;
    VlWide<4>/*127:0*/ __Vtemp_826;
    VlWide<4>/*127:0*/ __Vtemp_827;
    VlWide<4>/*127:0*/ __Vtemp_828;
    VlWide<4>/*127:0*/ __Vtemp_830;
    VlWide<4>/*127:0*/ __Vtemp_831;
    VlWide<4>/*127:0*/ __Vtemp_832;
    VlWide<4>/*127:0*/ __Vtemp_834;
    VlWide<4>/*127:0*/ __Vtemp_835;
    VlWide<4>/*127:0*/ __Vtemp_836;
    VlWide<4>/*127:0*/ __Vtemp_838;
    VlWide<4>/*127:0*/ __Vtemp_839;
    VlWide<4>/*127:0*/ __Vtemp_840;
    VlWide<4>/*127:0*/ __Vtemp_842;
    VlWide<4>/*127:0*/ __Vtemp_843;
    VlWide<4>/*127:0*/ __Vtemp_844;
    VlWide<4>/*127:0*/ __Vtemp_846;
    VlWide<4>/*127:0*/ __Vtemp_847;
    VlWide<4>/*127:0*/ __Vtemp_848;
    VlWide<4>/*127:0*/ __Vtemp_850;
    VlWide<4>/*127:0*/ __Vtemp_851;
    VlWide<4>/*127:0*/ __Vtemp_852;
    VlWide<4>/*127:0*/ __Vtemp_854;
    VlWide<4>/*127:0*/ __Vtemp_855;
    VlWide<4>/*127:0*/ __Vtemp_856;
    VlWide<4>/*127:0*/ __Vtemp_858;
    VlWide<4>/*127:0*/ __Vtemp_859;
    VlWide<4>/*127:0*/ __Vtemp_860;
    VlWide<4>/*127:0*/ __Vtemp_862;
    VlWide<4>/*127:0*/ __Vtemp_863;
    VlWide<4>/*127:0*/ __Vtemp_864;
    VlWide<4>/*127:0*/ __Vtemp_866;
    VlWide<4>/*127:0*/ __Vtemp_867;
    VlWide<4>/*127:0*/ __Vtemp_868;
    VlWide<4>/*127:0*/ __Vtemp_870;
    VlWide<4>/*127:0*/ __Vtemp_871;
    VlWide<4>/*127:0*/ __Vtemp_872;
    VlWide<4>/*127:0*/ __Vtemp_874;
    VlWide<4>/*127:0*/ __Vtemp_875;
    VlWide<4>/*127:0*/ __Vtemp_876;
    VlWide<4>/*127:0*/ __Vtemp_878;
    VlWide<4>/*127:0*/ __Vtemp_879;
    VlWide<4>/*127:0*/ __Vtemp_880;
    VlWide<4>/*127:0*/ __Vtemp_882;
    VlWide<4>/*127:0*/ __Vtemp_883;
    VlWide<4>/*127:0*/ __Vtemp_884;
    VlWide<4>/*127:0*/ __Vtemp_886;
    VlWide<4>/*127:0*/ __Vtemp_887;
    VlWide<4>/*127:0*/ __Vtemp_888;
    VlWide<4>/*127:0*/ __Vtemp_890;
    VlWide<4>/*127:0*/ __Vtemp_891;
    VlWide<4>/*127:0*/ __Vtemp_892;
    VlWide<4>/*127:0*/ __Vtemp_894;
    VlWide<4>/*127:0*/ __Vtemp_895;
    VlWide<4>/*127:0*/ __Vtemp_896;
    VlWide<4>/*127:0*/ __Vtemp_898;
    VlWide<4>/*127:0*/ __Vtemp_899;
    VlWide<4>/*127:0*/ __Vtemp_900;
    VlWide<4>/*127:0*/ __Vtemp_902;
    VlWide<4>/*127:0*/ __Vtemp_903;
    VlWide<4>/*127:0*/ __Vtemp_904;
    VlWide<4>/*127:0*/ __Vtemp_906;
    VlWide<4>/*127:0*/ __Vtemp_907;
    VlWide<4>/*127:0*/ __Vtemp_908;
    VlWide<4>/*127:0*/ __Vtemp_910;
    VlWide<4>/*127:0*/ __Vtemp_911;
    VlWide<4>/*127:0*/ __Vtemp_912;
    VlWide<4>/*127:0*/ __Vtemp_914;
    VlWide<4>/*127:0*/ __Vtemp_915;
    VlWide<4>/*127:0*/ __Vtemp_916;
    VlWide<4>/*127:0*/ __Vtemp_918;
    VlWide<4>/*127:0*/ __Vtemp_919;
    VlWide<4>/*127:0*/ __Vtemp_920;
    VlWide<4>/*127:0*/ __Vtemp_922;
    VlWide<4>/*127:0*/ __Vtemp_923;
    VlWide<4>/*127:0*/ __Vtemp_924;
    VlWide<4>/*127:0*/ __Vtemp_926;
    VlWide<4>/*127:0*/ __Vtemp_927;
    VlWide<4>/*127:0*/ __Vtemp_928;
    VlWide<4>/*127:0*/ __Vtemp_930;
    VlWide<4>/*127:0*/ __Vtemp_931;
    VlWide<4>/*127:0*/ __Vtemp_932;
    VlWide<4>/*127:0*/ __Vtemp_934;
    VlWide<4>/*127:0*/ __Vtemp_935;
    VlWide<4>/*127:0*/ __Vtemp_936;
    VlWide<4>/*127:0*/ __Vtemp_938;
    VlWide<4>/*127:0*/ __Vtemp_939;
    VlWide<4>/*127:0*/ __Vtemp_940;
    VlWide<4>/*127:0*/ __Vtemp_942;
    VlWide<4>/*127:0*/ __Vtemp_943;
    VlWide<4>/*127:0*/ __Vtemp_944;
    VlWide<4>/*127:0*/ __Vtemp_946;
    VlWide<4>/*127:0*/ __Vtemp_947;
    VlWide<4>/*127:0*/ __Vtemp_948;
    VlWide<4>/*127:0*/ __Vtemp_950;
    VlWide<4>/*127:0*/ __Vtemp_951;
    VlWide<4>/*127:0*/ __Vtemp_952;
    VlWide<4>/*127:0*/ __Vtemp_954;
    VlWide<4>/*127:0*/ __Vtemp_955;
    VlWide<4>/*127:0*/ __Vtemp_956;
    VlWide<4>/*127:0*/ __Vtemp_958;
    VlWide<4>/*127:0*/ __Vtemp_959;
    VlWide<4>/*127:0*/ __Vtemp_960;
    VlWide<4>/*127:0*/ __Vtemp_962;
    VlWide<4>/*127:0*/ __Vtemp_963;
    VlWide<4>/*127:0*/ __Vtemp_964;
    VlWide<4>/*127:0*/ __Vtemp_966;
    VlWide<4>/*127:0*/ __Vtemp_967;
    VlWide<4>/*127:0*/ __Vtemp_968;
    VlWide<4>/*127:0*/ __Vtemp_970;
    VlWide<4>/*127:0*/ __Vtemp_971;
    VlWide<4>/*127:0*/ __Vtemp_972;
    VlWide<4>/*127:0*/ __Vtemp_974;
    VlWide<4>/*127:0*/ __Vtemp_975;
    VlWide<4>/*127:0*/ __Vtemp_976;
    VlWide<4>/*127:0*/ __Vtemp_978;
    VlWide<4>/*127:0*/ __Vtemp_979;
    VlWide<4>/*127:0*/ __Vtemp_980;
    VlWide<4>/*127:0*/ __Vtemp_982;
    VlWide<4>/*127:0*/ __Vtemp_983;
    VlWide<4>/*127:0*/ __Vtemp_984;
    VlWide<4>/*127:0*/ __Vtemp_986;
    VlWide<4>/*127:0*/ __Vtemp_987;
    VlWide<4>/*127:0*/ __Vtemp_988;
    VlWide<4>/*127:0*/ __Vtemp_990;
    VlWide<4>/*127:0*/ __Vtemp_991;
    VlWide<4>/*127:0*/ __Vtemp_992;
    VlWide<4>/*127:0*/ __Vtemp_994;
    VlWide<4>/*127:0*/ __Vtemp_995;
    VlWide<4>/*127:0*/ __Vtemp_996;
    VlWide<4>/*127:0*/ __Vtemp_998;
    VlWide<4>/*127:0*/ __Vtemp_999;
    VlWide<4>/*127:0*/ __Vtemp_1000;
    VlWide<4>/*127:0*/ __Vtemp_1002;
    VlWide<4>/*127:0*/ __Vtemp_1003;
    VlWide<4>/*127:0*/ __Vtemp_1004;
    VlWide<4>/*127:0*/ __Vtemp_1006;
    VlWide<4>/*127:0*/ __Vtemp_1007;
    VlWide<4>/*127:0*/ __Vtemp_1008;
    VlWide<4>/*127:0*/ __Vtemp_1010;
    VlWide<4>/*127:0*/ __Vtemp_1011;
    VlWide<4>/*127:0*/ __Vtemp_1012;
    VlWide<4>/*127:0*/ __Vtemp_1014;
    VlWide<4>/*127:0*/ __Vtemp_1015;
    VlWide<4>/*127:0*/ __Vtemp_1016;
    VlWide<4>/*127:0*/ __Vtemp_1018;
    VlWide<4>/*127:0*/ __Vtemp_1019;
    VlWide<4>/*127:0*/ __Vtemp_1020;
    VlWide<4>/*127:0*/ __Vtemp_1022;
    VlWide<4>/*127:0*/ __Vtemp_1023;
    VlWide<4>/*127:0*/ __Vtemp_1024;
    VlWide<4>/*127:0*/ __Vtemp_1026;
    VlWide<4>/*127:0*/ __Vtemp_1027;
    VlWide<4>/*127:0*/ __Vtemp_1028;
    VlWide<4>/*127:0*/ __Vtemp_1030;
    VlWide<4>/*127:0*/ __Vtemp_1031;
    VlWide<4>/*127:0*/ __Vtemp_1032;
    VlWide<4>/*127:0*/ __Vtemp_1034;
    VlWide<4>/*127:0*/ __Vtemp_1035;
    VlWide<4>/*127:0*/ __Vtemp_1036;
    VlWide<4>/*127:0*/ __Vtemp_1038;
    VlWide<4>/*127:0*/ __Vtemp_1039;
    VlWide<4>/*127:0*/ __Vtemp_1040;
    VlWide<4>/*127:0*/ __Vtemp_1042;
    VlWide<4>/*127:0*/ __Vtemp_1043;
    VlWide<4>/*127:0*/ __Vtemp_1044;
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
    VlWide<4>/*127:0*/ __Vtemp_1081;
    VlWide<4>/*127:0*/ __Vtemp_1082;
    VlWide<4>/*127:0*/ __Vtemp_1083;
    VlWide<4>/*127:0*/ __Vtemp_1085;
    VlWide<4>/*127:0*/ __Vtemp_1086;
    VlWide<4>/*127:0*/ __Vtemp_1087;
    VlWide<4>/*127:0*/ __Vtemp_1089;
    VlWide<4>/*127:0*/ __Vtemp_1090;
    VlWide<4>/*127:0*/ __Vtemp_1091;
    VlWide<4>/*127:0*/ __Vtemp_1093;
    VlWide<4>/*127:0*/ __Vtemp_1094;
    VlWide<4>/*127:0*/ __Vtemp_1095;
    VlWide<4>/*127:0*/ __Vtemp_1097;
    VlWide<4>/*127:0*/ __Vtemp_1098;
    VlWide<4>/*127:0*/ __Vtemp_1099;
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
    VlWide<4>/*127:0*/ __Vtemp_1572;
    VlWide<4>/*127:0*/ __Vtemp_1573;
    VlWide<4>/*127:0*/ __Vtemp_1575;
    VlWide<4>/*127:0*/ __Vtemp_1576;
    VlWide<4>/*127:0*/ __Vtemp_1577;
    VlWide<4>/*127:0*/ __Vtemp_1579;
    VlWide<4>/*127:0*/ __Vtemp_1580;
    VlWide<4>/*127:0*/ __Vtemp_1581;
    VlWide<4>/*127:0*/ __Vtemp_1583;
    VlWide<4>/*127:0*/ __Vtemp_1584;
    VlWide<4>/*127:0*/ __Vtemp_1585;
    VlWide<4>/*127:0*/ __Vtemp_1587;
    VlWide<4>/*127:0*/ __Vtemp_1588;
    VlWide<4>/*127:0*/ __Vtemp_1589;
    VlWide<4>/*127:0*/ __Vtemp_1591;
    VlWide<4>/*127:0*/ __Vtemp_1592;
    VlWide<4>/*127:0*/ __Vtemp_1593;
    VlWide<4>/*127:0*/ __Vtemp_1595;
    VlWide<4>/*127:0*/ __Vtemp_1596;
    VlWide<4>/*127:0*/ __Vtemp_1597;
    VlWide<4>/*127:0*/ __Vtemp_1599;
    VlWide<4>/*127:0*/ __Vtemp_1600;
    VlWide<4>/*127:0*/ __Vtemp_1601;
    VlWide<4>/*127:0*/ __Vtemp_1603;
    VlWide<4>/*127:0*/ __Vtemp_1604;
    VlWide<4>/*127:0*/ __Vtemp_1605;
    VlWide<4>/*127:0*/ __Vtemp_1607;
    VlWide<4>/*127:0*/ __Vtemp_1608;
    VlWide<4>/*127:0*/ __Vtemp_1609;
    VlWide<4>/*127:0*/ __Vtemp_1611;
    VlWide<4>/*127:0*/ __Vtemp_1612;
    VlWide<4>/*127:0*/ __Vtemp_1613;
    VlWide<4>/*127:0*/ __Vtemp_1615;
    VlWide<4>/*127:0*/ __Vtemp_1616;
    VlWide<4>/*127:0*/ __Vtemp_1617;
    VlWide<4>/*127:0*/ __Vtemp_1619;
    VlWide<4>/*127:0*/ __Vtemp_1620;
    VlWide<4>/*127:0*/ __Vtemp_1621;
    VlWide<4>/*127:0*/ __Vtemp_1623;
    VlWide<4>/*127:0*/ __Vtemp_1624;
    VlWide<4>/*127:0*/ __Vtemp_1625;
    VlWide<4>/*127:0*/ __Vtemp_1627;
    VlWide<4>/*127:0*/ __Vtemp_1628;
    VlWide<4>/*127:0*/ __Vtemp_1629;
    VlWide<4>/*127:0*/ __Vtemp_1631;
    VlWide<4>/*127:0*/ __Vtemp_1632;
    VlWide<4>/*127:0*/ __Vtemp_1633;
    VlWide<4>/*127:0*/ __Vtemp_1635;
    VlWide<4>/*127:0*/ __Vtemp_1636;
    VlWide<4>/*127:0*/ __Vtemp_1637;
    VlWide<4>/*127:0*/ __Vtemp_1639;
    VlWide<4>/*127:0*/ __Vtemp_1640;
    VlWide<4>/*127:0*/ __Vtemp_1641;
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
    VlWide<4>/*127:0*/ __Vtemp_1900;
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
    VlWide<4>/*127:0*/ __Vtemp_2086;
    VlWide<4>/*127:0*/ __Vtemp_2087;
    VlWide<4>/*127:0*/ __Vtemp_2088;
    VlWide<4>/*127:0*/ __Vtemp_2089;
    VlWide<4>/*127:0*/ __Vtemp_2090;
    VlWide<4>/*127:0*/ __Vtemp_2091;
    VlWide<4>/*127:0*/ __Vtemp_2092;
    VlWide<4>/*127:0*/ __Vtemp_2093;
    VlWide<4>/*127:0*/ __Vtemp_2094;
    VlWide<4>/*127:0*/ __Vtemp_2095;
    VlWide<4>/*127:0*/ __Vtemp_2096;
    VlWide<4>/*127:0*/ __Vtemp_2097;
    VlWide<4>/*127:0*/ __Vtemp_2098;
    VlWide<4>/*127:0*/ __Vtemp_2099;
    VlWide<4>/*127:0*/ __Vtemp_2100;
    VlWide<4>/*127:0*/ __Vtemp_2101;
    VlWide<4>/*127:0*/ __Vtemp_2102;
    VlWide<4>/*127:0*/ __Vtemp_2103;
    VlWide<4>/*127:0*/ __Vtemp_2104;
    // Body
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    if ((1U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_sub__101__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 2U;
        vlSelfRef.__Vfunc_sfp_sub__101__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.__Vfunc_sfp_sub__101__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__101__a - vlSelfRef.__Vfunc_sfp_sub__101__b);
        vlSelfRef.__Vfunc_sfp_mul__100__b = vlSelfRef.__Vfunc_sfp_sub__101__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__100__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction;
        VL_EXTENDS_WQ(128,64, __Vtemp_1, vlSelfRef.__Vfunc_sfp_mul__100__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_2, vlSelfRef.__Vfunc_sfp_mul__100__b);
        VL_MULS_WWW(128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__100__tmp, __Vtemp_3, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__100__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__100__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__100__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__99__b = vlSelfRef.__Vfunc_sfp_mul__100__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__99__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_4, vlSelfRef.__Vfunc_sfp_mul__99__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_5, vlSelfRef.__Vfunc_sfp_mul__99__b);
        VL_MULS_WWW(128, __Vtemp_6, __Vtemp_4, __Vtemp_5);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__99__tmp, __Vtemp_6, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__99__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__99__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__99__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__98__b = vlSelfRef.__Vfunc_sfp_mul__99__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__98__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_7, vlSelfRef.__Vfunc_sfp_mul__98__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_8, vlSelfRef.__Vfunc_sfp_mul__98__b);
        VL_MULS_WWW(128, __Vtemp_9, __Vtemp_7, __Vtemp_8);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__98__tmp, __Vtemp_9, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__98__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__98__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__98__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__97__b = vlSelfRef.__Vfunc_sfp_mul__98__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__97__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__97__Vfuncout = (vlSelfRef.__Vfunc_sfp_add__97__a 
                                                   + vlSelfRef.__Vfunc_sfp_add__97__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__97__Vfuncout;
        vlSelfRef.__Vfunc_sfp_sub__101__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction;
        vlSelfRef.__Vfunc_sfp_sub__101__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.__Vfunc_sfp_sub__101__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__101__a - vlSelfRef.__Vfunc_sfp_sub__101__b);
        vlSelfRef.__Vfunc_sfp_mul__100__b = vlSelfRef.__Vfunc_sfp_sub__101__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__100__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction;
        VL_EXTENDS_WQ(128,64, __Vtemp_10, vlSelfRef.__Vfunc_sfp_mul__100__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_11, vlSelfRef.__Vfunc_sfp_mul__100__b);
        VL_MULS_WWW(128, __Vtemp_12, __Vtemp_10, __Vtemp_11);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__100__tmp, __Vtemp_12, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__100__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__100__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__100__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__99__b = vlSelfRef.__Vfunc_sfp_mul__100__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__99__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer
            [1U];
        VL_EXTENDS_WQ(128,64, __Vtemp_13, vlSelfRef.__Vfunc_sfp_mul__99__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_14, vlSelfRef.__Vfunc_sfp_mul__99__b);
        VL_MULS_WWW(128, __Vtemp_15, __Vtemp_13, __Vtemp_14);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__99__tmp, __Vtemp_15, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__99__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__99__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__99__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__98__b = vlSelfRef.__Vfunc_sfp_mul__99__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__98__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights
            [1U];
        VL_EXTENDS_WQ(128,64, __Vtemp_16, vlSelfRef.__Vfunc_sfp_mul__98__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_17, vlSelfRef.__Vfunc_sfp_mul__98__b);
        VL_MULS_WWW(128, __Vtemp_18, __Vtemp_16, __Vtemp_17);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__98__tmp, __Vtemp_18, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__98__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__98__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__98__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__97__b = vlSelfRef.__Vfunc_sfp_mul__98__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__97__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__97__Vfuncout = (vlSelfRef.__Vfunc_sfp_add__97__a 
                                                   + vlSelfRef.__Vfunc_sfp_add__97__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__97__Vfuncout;
    } else if ((2U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_tanh__107__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction;
        {
            if (VL_GTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__107__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__108__n = 3U;
                            vlSelfRef.__Vfunc_int_to_sfp__108__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__108__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__108__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__107__Vfuncout 
                    = vlSymsp->TOP__FixedPoint.ONE;
                goto __Vlabel167;
            }
            if (VL_LTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__107__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__109__n = 0xfffffffdU;
                            vlSelfRef.__Vfunc_int_to_sfp__109__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__109__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__109__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__107__Vfuncout 
                    = (- vlSymsp->TOP__FixedPoint.ONE);
                goto __Vlabel167;
            }
            vlSelfRef.__Vfunc_sfp_sub__110__b = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__113__a = VL_SHIFTL_QQI(64,64,32, 
                                                              (- vlSelfRef.__Vfunc_sfp_tanh__107__a), 1U);
            vlSelf->__Vfunc_sfp_exp__113__unnamedblk2__DOT__i = 0;
            vlSelf->__Vfunc_sfp_exp__113__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_exp__113__term = VL_RAND_RESET_Q(64);
            vlSelfRef.__Vfunc_sfp_exp__113__result 
                = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__113__term = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__113__unnamedblk2__DOT__i = 1U;
            while (VL_GTS_III(32, 0x14U, vlSelfRef.__Vfunc_sfp_exp__113__unnamedblk2__DOT__i)) {
                vlSelfRef.__Vfunc_int_to_sfp__115__n 
                    = vlSelfRef.__Vfunc_sfp_exp__113__unnamedblk2__DOT__i;
                vlSelfRef.__Vfunc_int_to_sfp__115__Vfuncout 
                    = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__115__n), 0x20U);
                vlSelfRef.__Vfunc_sfp_div__114__b = vlSelfRef.__Vfunc_int_to_sfp__115__Vfuncout;
                vlSelfRef.__Vfunc_sfp_mul__116__b = vlSelfRef.__Vfunc_sfp_exp__113__a;
                vlSelfRef.__Vfunc_sfp_mul__116__a = vlSelfRef.__Vfunc_sfp_exp__113__term;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__116__tmp);
                VL_EXTENDS_WQ(128,64, __Vtemp_19, vlSelfRef.__Vfunc_sfp_mul__116__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_20, vlSelfRef.__Vfunc_sfp_mul__116__b);
                VL_MULS_WWW(128, __Vtemp_21, __Vtemp_19, __Vtemp_20);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__116__tmp, __Vtemp_21, 0x20U);
                vlSelfRef.__Vfunc_sfp_mul__116__Vfuncout 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__116__tmp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__Vfunc_sfp_mul__116__tmp[0U])));
                vlSelfRef.__Vfunc_sfp_div__114__a = vlSelfRef.__Vfunc_sfp_mul__116__Vfuncout;
                __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__114__remainder);
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__114__b_ext);
                vlSelf->__Vfunc_sfp_div__114__result = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__114__sign_bit = VL_RAND_RESET_I(1);
                vlSelf->__Vfunc_sfp_div__114__abs_a = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__114__abs_b = VL_RAND_RESET_Q(64);
                {
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__114__b)) {
                        vlSelfRef.__Vfunc_sfp_div__114__Vfuncout 
                            = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__114__a)
                                ? 0x7fffffffffffffffULL
                                : 0x8000000000000000ULL);
                        goto __Vlabel168;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__114__a)) {
                        vlSelfRef.__Vfunc_sfp_div__114__Vfuncout = 0ULL;
                        goto __Vlabel168;
                    }
                    vlSelfRef.__Vfunc_sfp_div__114__abs_a 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__114__a 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__114__a)
                            : vlSelfRef.__Vfunc_sfp_div__114__a);
                    vlSelfRef.__Vfunc_sfp_div__114__abs_b 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__114__b 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__114__b)
                            : vlSelfRef.__Vfunc_sfp_div__114__b);
                    vlSelfRef.__Vfunc_sfp_div__114__sign_bit 
                        = (IData)(((vlSelfRef.__Vfunc_sfp_div__114__a 
                                    ^ vlSelfRef.__Vfunc_sfp_div__114__b) 
                                   >> 0x3fU));
                    __Vtemp_22[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__114__abs_a);
                    __Vtemp_22[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__114__abs_a 
                                              >> 0x20U));
                    __Vtemp_22[2U] = 0U;
                    __Vtemp_22[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_22, 0x20U);
                    vlSelfRef.__Vfunc_sfp_div__114__b_ext[0U] 
                        = (IData)(vlSelfRef.__Vfunc_sfp_div__114__abs_b);
                    vlSelfRef.__Vfunc_sfp_div__114__b_ext[1U] 
                        = (IData)((vlSelfRef.__Vfunc_sfp_div__114__abs_b 
                                   >> 0x20U));
                    vlSelfRef.__Vfunc_sfp_div__114__b_ext[2U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__114__b_ext[3U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__114__result = 0ULL;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_24, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_24)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_26, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_25, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_26);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_25[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_25[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_25[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_25[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_28, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_28)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_30, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_29, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_30);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_29[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_29[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_29[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_29[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_32, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_32)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_34, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_33, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_34);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_33[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_33[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_33[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_33[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_36, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_36)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_38, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_37, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_38);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_37[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_37[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_37[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_37[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_40, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_40)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_42, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_41, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_42);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_41[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_41[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_41[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_41[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_44, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_44)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_46, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_45, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_46);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_45[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_45[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_45[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_45[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_48, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_48)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_50, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_49, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_50);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_49[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_49[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_49[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_49[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_52, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_52)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_54, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_53, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_54);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_53[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_53[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_53[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_53[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_56, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_56)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_58, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_57, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_58);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_57[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_57[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_57[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_57[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_60, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_60)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_62, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_61, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_62);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_61[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_61[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_61[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_61[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_64, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_64)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_66, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_65, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_66);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_65[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_65[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_65[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_65[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_68, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_68)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_70, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_69, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_70);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_69[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_69[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_69[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_69[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_72, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_72)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_74, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_73, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_74);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_73[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_73[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_73[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_73[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_76, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_76)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_78, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_77, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_78);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_77[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_77[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_77[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_77[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_80, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_80)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_82, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_81, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_82);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_81[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_81[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_81[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_81[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_84, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_84)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_86, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_85, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_86);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_85[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_85[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_85[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_85[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_88, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_88)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_90, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_89, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_90);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_89[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_89[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_89[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_89[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_92, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_92)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_94, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_93, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_94);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_93[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_93[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_93[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_93[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_96, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_96)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_98, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_97, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_98);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_97[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_97[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_97[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_97[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_100, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_100)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_102, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_101, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_102);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_101[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_101[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_101[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_101[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_104, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_104)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_106, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_105, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_106);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_105[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_105[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_105[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_105[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_108, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_108)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_110, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_109, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_110);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_109[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_109[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_109[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_109[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_112, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_112)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_114, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_113, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_114);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_113[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_113[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_113[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_113[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_116, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_116)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_118, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_117, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_118);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_117[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_117[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_117[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_117[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_120, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_120)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_122, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_121, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_122);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_121[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_121[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_121[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_121[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_124, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_124)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_126, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_125, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_126);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_125[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_125[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_125[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_125[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_128, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_128)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_130, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_129, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_130);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_129[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_129[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_129[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_129[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_132, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_132)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_134, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_133, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_134);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_133[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_133[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_133[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_133[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_136, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_136)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_138, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_137, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_138);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_137[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_137[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_137[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_137[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_140, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_140)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_142, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_141, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_142);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_141[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_141[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_141[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_141[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_144, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_144)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_146, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_145, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_146);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_145[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_145[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_145[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_145[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_148, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_148)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_150, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_149, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_150);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_149[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_149[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_149[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_149[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_152, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_152)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_154, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_153, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_154);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_153[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_153[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_153[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_153[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_156, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_156)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_158, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_157, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_158);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_157[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_157[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_157[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_157[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_160, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_160)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_162, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_161, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_162);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_161[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_161[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_161[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_161[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_164, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_164)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_166, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_165, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_166);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_165[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_165[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_165[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_165[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_168, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_168)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_170, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_169, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_170);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_169[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_169[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_169[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_169[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_172, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_172)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_174, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_173, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_174);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_173[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_173[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_173[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_173[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_176, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_176)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_178, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_177, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_178);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_177[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_177[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_177[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_177[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_180, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_180)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_182, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_181, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_182);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_181[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_181[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_181[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_181[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_184, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_184)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_186, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_185, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_186);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_185[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_185[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_185[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_185[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_188, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_188)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_190, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_189, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_190);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_189[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_189[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_189[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_189[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_192, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_192)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_194, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_193, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_194);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_193[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_193[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_193[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_193[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_196, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_196)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_198, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_197, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_198);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_197[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_197[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_197[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_197[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_200, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_200)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_202, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_201, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_202);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_201[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_201[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_201[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_201[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_204, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_204)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_206, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_205, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_206);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_205[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_205[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_205[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_205[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_208, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_208)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_210, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_209, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_210);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_209[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_209[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_209[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_209[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_212, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_212)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_214, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_213, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_214);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_213[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_213[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_213[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_213[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_216, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_216)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_218, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_217, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_218);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_217[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_217[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_217[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_217[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_220, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_220)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_222, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_221, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_222);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_221[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_221[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_221[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_221[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_224, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_224)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_226, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_225, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_226);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_225[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_225[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_225[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_225[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_228, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_228)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_230, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_229, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_230);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_229[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_229[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_229[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_229[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_232, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_232)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_234, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_233, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_234);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_233[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_233[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_233[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_233[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_236, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_236)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_238, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_237, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_238);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_237[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_237[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_237[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_237[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_240, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_240)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_242, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_241, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_242);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_241[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_241[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_241[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_241[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_244, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_244)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_246, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_245, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_246);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_245[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_245[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_245[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_245[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_248, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_248)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_250, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_249, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_250);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_249[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_249[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_249[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_249[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_252, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_252)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_254, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_253, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_254);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_253[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_253[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_253[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_253[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_256, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_256)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_258, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_257, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_258);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_257[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_257[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_257[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_257[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_260, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_260)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_262, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_261, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_262);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_261[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_261[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_261[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_261[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_264, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_264)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_266, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_265, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_266);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_265[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_265[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_265[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_265[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_268, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_268)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_270, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_269, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_270);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_269[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_269[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_269[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_269[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_272, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_272)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_274, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_273, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_274);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_273[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_273[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_273[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_273[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, vlSelfRef.__Vfunc_sfp_div__114__b_ext)) {
                        VL_SUB_W(4, __Vtemp_276, vlSelfRef.__Vfunc_sfp_div__114__remainder, vlSelfRef.__Vfunc_sfp_div__114__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_276[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_276[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_276[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_276[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__114__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__114__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__114__result)
                            : vlSelfRef.__Vfunc_sfp_div__114__result);
                    __Vlabel168: ;
                }
                vlSelfRef.__Vfunc_sfp_exp__113__term 
                    = vlSelfRef.__Vfunc_sfp_div__114__Vfuncout;
                vlSelfRef.__Vfunc_sfp_add__117__b = vlSelfRef.__Vfunc_sfp_exp__113__term;
                vlSelfRef.__Vfunc_sfp_add__117__a = vlSelfRef.__Vfunc_sfp_exp__113__result;
                vlSelfRef.__Vfunc_sfp_add__117__Vfuncout 
                    = (vlSelfRef.__Vfunc_sfp_add__117__a 
                       + vlSelfRef.__Vfunc_sfp_add__117__b);
                vlSelfRef.__Vfunc_sfp_exp__113__result 
                    = vlSelfRef.__Vfunc_sfp_add__117__Vfuncout;
                vlSelfRef.__Vfunc_sfp_exp__113__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_exp__113__unnamedblk2__DOT__i);
            }
            vlSelfRef.__Vfunc_sfp_exp__113__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_exp__113__result;
            vlSelfRef.__Vfunc_sfp_add__112__b = vlSelfRef.__Vfunc_sfp_exp__113__Vfuncout;
            vlSelfRef.__Vfunc_sfp_add__112__a = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_add__112__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_add__112__a 
                   + vlSelfRef.__Vfunc_sfp_add__112__b);
            vlSelfRef.__Vfunc_sfp_div__111__b = vlSelfRef.__Vfunc_sfp_add__112__Vfuncout;
            vlSelfRef.__Vfunc_int_to_sfp__118__n = 2U;
            vlSelfRef.__Vfunc_int_to_sfp__118__Vfuncout 
                = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__118__n), 0x20U);
            vlSelfRef.__Vfunc_sfp_div__111__a = vlSelfRef.__Vfunc_int_to_sfp__118__Vfuncout;
            __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0;
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__111__remainder);
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__111__b_ext);
            vlSelf->__Vfunc_sfp_div__111__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__111__sign_bit = VL_RAND_RESET_I(1);
            vlSelf->__Vfunc_sfp_div__111__abs_a = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__111__abs_b = VL_RAND_RESET_Q(64);
            {
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__111__b)) {
                    vlSelfRef.__Vfunc_sfp_div__111__Vfuncout 
                        = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__111__a)
                            ? 0x7fffffffffffffffULL
                            : 0x8000000000000000ULL);
                    goto __Vlabel169;
                }
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__111__a)) {
                    vlSelfRef.__Vfunc_sfp_div__111__Vfuncout = 0ULL;
                    goto __Vlabel169;
                }
                vlSelfRef.__Vfunc_sfp_div__111__abs_a 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__111__a 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__111__a)
                        : vlSelfRef.__Vfunc_sfp_div__111__a);
                vlSelfRef.__Vfunc_sfp_div__111__abs_b 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__111__b 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__111__b)
                        : vlSelfRef.__Vfunc_sfp_div__111__b);
                vlSelfRef.__Vfunc_sfp_div__111__sign_bit 
                    = (IData)(((vlSelfRef.__Vfunc_sfp_div__111__a 
                                ^ vlSelfRef.__Vfunc_sfp_div__111__b) 
                               >> 0x3fU));
                __Vtemp_278[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__111__abs_a);
                __Vtemp_278[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__111__abs_a 
                                           >> 0x20U));
                __Vtemp_278[2U] = 0U;
                __Vtemp_278[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_278, 0x20U);
                vlSelfRef.__Vfunc_sfp_div__111__b_ext[0U] 
                    = (IData)(vlSelfRef.__Vfunc_sfp_div__111__abs_b);
                vlSelfRef.__Vfunc_sfp_div__111__b_ext[1U] 
                    = (IData)((vlSelfRef.__Vfunc_sfp_div__111__abs_b 
                               >> 0x20U));
                vlSelfRef.__Vfunc_sfp_div__111__b_ext[2U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__111__b_ext[3U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__111__result = 0ULL;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_280, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_280)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_282, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_281, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_282);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_281[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_281[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_281[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_281[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_284, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_284)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_286, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_285, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_286);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_285[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_285[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_285[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_285[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_288, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_288)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_290, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_289, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_290);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_289[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_289[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_289[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_289[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_292, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_292)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_294, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_293, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_294);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_293[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_293[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_293[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_293[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_296, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_296)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_298, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_297, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_298);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_297[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_297[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_297[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_297[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_300, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_300)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_302, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_301, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_302);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_301[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_301[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_301[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_301[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_304, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_304)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_306, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_305, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_306);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_305[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_305[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_305[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_305[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_308, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_308)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_310, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_309, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_310);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_309[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_309[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_309[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_309[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_312, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_312)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_314, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_313, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_314);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_313[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_313[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_313[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_313[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_316, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_316)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_318, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_317, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_318);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_317[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_317[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_317[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_317[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_320, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_320)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_322, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_321, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_322);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_321[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_321[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_321[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_321[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_324, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_324)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_326, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_325, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_326);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_325[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_325[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_325[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_325[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_328, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_328)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_330, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_329, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_330);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_329[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_329[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_329[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_329[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_332, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_332)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_334, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_333, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_334);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_333[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_333[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_333[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_333[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_336, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_336)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_338, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_337, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_338);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_337[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_337[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_337[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_337[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_340, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_340)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_342, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_341, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_342);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_341[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_341[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_341[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_341[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_344, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_344)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_346, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_345, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_346);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_345[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_345[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_345[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_345[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_348, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_348)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_350, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_349, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_350);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_349[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_349[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_349[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_349[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_352, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_352)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_354, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_353, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_354);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_353[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_353[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_353[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_353[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_356, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_356)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_358, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_357, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_358);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_357[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_357[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_357[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_357[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_360, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_360)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_362, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_361, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_362);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_361[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_361[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_361[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_361[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_364, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_364)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_366, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_365, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_366);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_365[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_365[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_365[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_365[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_368, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_368)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_370, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_369, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_370);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_369[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_369[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_369[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_369[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_372, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_372)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_374, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_373, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_374);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_373[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_373[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_373[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_373[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_376, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_376)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_378, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_377, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_378);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_377[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_377[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_377[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_377[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_380, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_380)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_382, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_381, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_382);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_381[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_381[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_381[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_381[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_384, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_384)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_386, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_385, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_386);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_385[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_385[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_385[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_385[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_388, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_388)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_390, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_389, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_390);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_389[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_389[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_389[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_389[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_392, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_392)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_394, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_393, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_394);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_393[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_393[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_393[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_393[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_396, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_396)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_398, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_397, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_398);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_397[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_397[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_397[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_397[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_400, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_400)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_402, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_401, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_402);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_401[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_401[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_401[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_401[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_404, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_404)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_406, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_405, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_406);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_405[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_405[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_405[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_405[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_408, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_408)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_410, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_409, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_410);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_409[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_409[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_409[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_409[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_412, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_412)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_414, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_413, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_414);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_413[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_413[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_413[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_413[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_416, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_416)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_418, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_417, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_418);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_417[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_417[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_417[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_417[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_420, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_420)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_422, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_421, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_422);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_421[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_421[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_421[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_421[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_424, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_424)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_426, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_425, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_426);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_425[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_425[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_425[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_425[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_428, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_428)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_430, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_429, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_430);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_429[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_429[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_429[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_429[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_432, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_432)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_434, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_433, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_434);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_433[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_433[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_433[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_433[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_436, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_436)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_438, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_437, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_438);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_437[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_437[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_437[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_437[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_440, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_440)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_442, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_441, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_442);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_441[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_441[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_441[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_441[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_444, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_444)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_446, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_445, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_446);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_445[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_445[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_445[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_445[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_448, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_448)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_450, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_449, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_450);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_449[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_449[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_449[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_449[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_452, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_452)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_454, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_453, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_454);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_453[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_453[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_453[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_453[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_456, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_456)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_458, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_457, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_458);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_457[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_457[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_457[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_457[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_460, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_460)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_462, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_461, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_462);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_461[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_461[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_461[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_461[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_464, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_464)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_466, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_465, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_466);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_465[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_465[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_465[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_465[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_468, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_468)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_470, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_469, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_470);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_469[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_469[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_469[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_469[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_472, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_472)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_474, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_473, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_474);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_473[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_473[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_473[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_473[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_476, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_476)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_478, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_477, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_478);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_477[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_477[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_477[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_477[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_480, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_480)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_482, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_481, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_482);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_481[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_481[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_481[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_481[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_484, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_484)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_486, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_485, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_486);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_485[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_485[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_485[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_485[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_488, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_488)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_490, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_489, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_490);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_489[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_489[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_489[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_489[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_492, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_492)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_494, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_493, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_494);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_493[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_493[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_493[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_493[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_496, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_496)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_498, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_497, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_498);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_497[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_497[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_497[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_497[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_500, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_500)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_502, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_501, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_502);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_501[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_501[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_501[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_501[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_504, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_504)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_506, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_505, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_506);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_505[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_505[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_505[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_505[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_508, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_508)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_510, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_509, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_510);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_509[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_509[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_509[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_509[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_512, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_512)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_514, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_513, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_514);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_513[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_513[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_513[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_513[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_516, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_516)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_518, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_517, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_518);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_517[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_517[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_517[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_517[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_520, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_520)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_522, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_521, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_522);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_521[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_521[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_521[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_521[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_524, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_524)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_526, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_525, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_526);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_525[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_525[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_525[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_525[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_528, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_528)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_530, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_529, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_530);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_529[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_529[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_529[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_529[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, vlSelfRef.__Vfunc_sfp_div__111__b_ext)) {
                    VL_SUB_W(4, __Vtemp_532, vlSelfRef.__Vfunc_sfp_div__111__remainder, vlSelfRef.__Vfunc_sfp_div__111__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_532[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_532[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_532[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_532[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_sfp_div__111__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_sfp_div__111__sign_bit)
                        ? (- vlSelfRef.__Vfunc_sfp_div__111__result)
                        : vlSelfRef.__Vfunc_sfp_div__111__result);
                __Vlabel169: ;
            }
            vlSelfRef.__Vfunc_sfp_sub__110__a = vlSelfRef.__Vfunc_sfp_div__111__Vfuncout;
            vlSelfRef.__Vfunc_sfp_sub__110__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_sub__110__a 
                   - vlSelfRef.__Vfunc_sfp_sub__110__b);
            vlSelfRef.__Vfunc_sfp_tanh__107__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_sub__110__Vfuncout;
            __Vlabel167: ;
        }
        vlSelfRef.__Vfunc_sfp_mul__106__b = vlSelfRef.__Vfunc_sfp_tanh__107__Vfuncout;
        vlSelfRef.__Vfunc_sfp_tanh__119__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction;
        {
            if (VL_GTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__119__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__120__n = 3U;
                            vlSelfRef.__Vfunc_int_to_sfp__120__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__120__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__120__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__119__Vfuncout 
                    = vlSymsp->TOP__FixedPoint.ONE;
                goto __Vlabel170;
            }
            if (VL_LTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__119__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__121__n = 0xfffffffdU;
                            vlSelfRef.__Vfunc_int_to_sfp__121__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__121__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__121__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__119__Vfuncout 
                    = (- vlSymsp->TOP__FixedPoint.ONE);
                goto __Vlabel170;
            }
            vlSelfRef.__Vfunc_sfp_sub__122__b = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__125__a = VL_SHIFTL_QQI(64,64,32, 
                                                              (- vlSelfRef.__Vfunc_sfp_tanh__119__a), 1U);
            vlSelf->__Vfunc_sfp_exp__125__unnamedblk2__DOT__i = 0;
            vlSelf->__Vfunc_sfp_exp__125__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_exp__125__term = VL_RAND_RESET_Q(64);
            vlSelfRef.__Vfunc_sfp_exp__125__result 
                = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__125__term = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__125__unnamedblk2__DOT__i = 1U;
            while (VL_GTS_III(32, 0x14U, vlSelfRef.__Vfunc_sfp_exp__125__unnamedblk2__DOT__i)) {
                vlSelfRef.__Vfunc_int_to_sfp__127__n 
                    = vlSelfRef.__Vfunc_sfp_exp__125__unnamedblk2__DOT__i;
                vlSelfRef.__Vfunc_int_to_sfp__127__Vfuncout 
                    = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__127__n), 0x20U);
                vlSelfRef.__Vfunc_sfp_div__126__b = vlSelfRef.__Vfunc_int_to_sfp__127__Vfuncout;
                vlSelfRef.__Vfunc_sfp_mul__128__b = vlSelfRef.__Vfunc_sfp_exp__125__a;
                vlSelfRef.__Vfunc_sfp_mul__128__a = vlSelfRef.__Vfunc_sfp_exp__125__term;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__128__tmp);
                VL_EXTENDS_WQ(128,64, __Vtemp_533, vlSelfRef.__Vfunc_sfp_mul__128__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_534, vlSelfRef.__Vfunc_sfp_mul__128__b);
                VL_MULS_WWW(128, __Vtemp_535, __Vtemp_533, __Vtemp_534);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__128__tmp, __Vtemp_535, 0x20U);
                vlSelfRef.__Vfunc_sfp_mul__128__Vfuncout 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__128__tmp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__Vfunc_sfp_mul__128__tmp[0U])));
                vlSelfRef.__Vfunc_sfp_div__126__a = vlSelfRef.__Vfunc_sfp_mul__128__Vfuncout;
                __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__126__remainder);
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__126__b_ext);
                vlSelf->__Vfunc_sfp_div__126__result = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__126__sign_bit = VL_RAND_RESET_I(1);
                vlSelf->__Vfunc_sfp_div__126__abs_a = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__126__abs_b = VL_RAND_RESET_Q(64);
                {
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__126__b)) {
                        vlSelfRef.__Vfunc_sfp_div__126__Vfuncout 
                            = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__126__a)
                                ? 0x7fffffffffffffffULL
                                : 0x8000000000000000ULL);
                        goto __Vlabel171;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__126__a)) {
                        vlSelfRef.__Vfunc_sfp_div__126__Vfuncout = 0ULL;
                        goto __Vlabel171;
                    }
                    vlSelfRef.__Vfunc_sfp_div__126__abs_a 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__126__a 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__126__a)
                            : vlSelfRef.__Vfunc_sfp_div__126__a);
                    vlSelfRef.__Vfunc_sfp_div__126__abs_b 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__126__b 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__126__b)
                            : vlSelfRef.__Vfunc_sfp_div__126__b);
                    vlSelfRef.__Vfunc_sfp_div__126__sign_bit 
                        = (IData)(((vlSelfRef.__Vfunc_sfp_div__126__a 
                                    ^ vlSelfRef.__Vfunc_sfp_div__126__b) 
                                   >> 0x3fU));
                    __Vtemp_536[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__126__abs_a);
                    __Vtemp_536[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__126__abs_a 
                                               >> 0x20U));
                    __Vtemp_536[2U] = 0U;
                    __Vtemp_536[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_536, 0x20U);
                    vlSelfRef.__Vfunc_sfp_div__126__b_ext[0U] 
                        = (IData)(vlSelfRef.__Vfunc_sfp_div__126__abs_b);
                    vlSelfRef.__Vfunc_sfp_div__126__b_ext[1U] 
                        = (IData)((vlSelfRef.__Vfunc_sfp_div__126__abs_b 
                                   >> 0x20U));
                    vlSelfRef.__Vfunc_sfp_div__126__b_ext[2U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__126__b_ext[3U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__126__result = 0ULL;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_538, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_538)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_540, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_539, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_540);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_539[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_539[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_539[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_539[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_542, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_542)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_544, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_543, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_544);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_543[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_543[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_543[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_543[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_546, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_546)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_548, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_547, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_548);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_547[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_547[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_547[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_547[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_550, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_550)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_552, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_551, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_552);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_551[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_551[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_551[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_551[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_554, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_554)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_556, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_555, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_556);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_555[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_555[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_555[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_555[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_558, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_558)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_560, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_559, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_560);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_559[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_559[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_559[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_559[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_562, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_562)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_564, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_563, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_564);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_563[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_563[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_563[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_563[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_566, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_566)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_568, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_567, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_568);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_567[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_567[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_567[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_567[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_570, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_570)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_572, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_571, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_572);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_571[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_571[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_571[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_571[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_574, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_574)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_576, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_575, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_576);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_575[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_575[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_575[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_575[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_578, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_578)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_580, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_579, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_580);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_579[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_579[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_579[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_579[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_582, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_582)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_584, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_583, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_584);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_583[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_583[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_583[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_583[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_586, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_586)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_588, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_587, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_588);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_587[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_587[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_587[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_587[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_590, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_590)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_592, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_591, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_592);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_591[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_591[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_591[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_591[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_594, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_594)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_596, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_595, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_596);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_595[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_595[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_595[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_595[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_598, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_598)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_600, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_599, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_600);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_599[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_599[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_599[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_599[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_602, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_602)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_604, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_603, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_604);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_603[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_603[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_603[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_603[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_606, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_606)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_608, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_607, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_608);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_607[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_607[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_607[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_607[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_610, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_610)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_612, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_611, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_612);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_611[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_611[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_611[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_611[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_614, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_614)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_616, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_615, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_616);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_615[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_615[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_615[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_615[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_618, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_618)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_620, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_619, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_620);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_619[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_619[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_619[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_619[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_622, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_622)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_624, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_623, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_624);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_623[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_623[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_623[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_623[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_626, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_626)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_628, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_627, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_628);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_627[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_627[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_627[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_627[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_630, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_630)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_632, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_631, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_632);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_631[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_631[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_631[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_631[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_634, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_634)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_636, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_635, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_636);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_635[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_635[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_635[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_635[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_638, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_638)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_640, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_639, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_640);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_639[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_639[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_639[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_639[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_642, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_642)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_644, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_643, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_644);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_643[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_643[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_643[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_643[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_646, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_646)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_648, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_647, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_648);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_647[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_647[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_647[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_647[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_650, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_650)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_652, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_651, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_652);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_651[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_651[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_651[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_651[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_654, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_654)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_656, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_655, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_656);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_655[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_655[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_655[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_655[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_658, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_658)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_660, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_659, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_660);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_659[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_659[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_659[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_659[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_662, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_662)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_664, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_663, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_664);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_663[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_663[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_663[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_663[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_666, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_666)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_668, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_667, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_668);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_667[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_667[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_667[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_667[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_670, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_670)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_672, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_671, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_672);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_671[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_671[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_671[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_671[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_674, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_674)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_676, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_675, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_676);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_675[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_675[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_675[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_675[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_678, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_678)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_680, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_679, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_680);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_679[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_679[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_679[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_679[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_682, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_682)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_684, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_683, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_684);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_683[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_683[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_683[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_683[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_686, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_686)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_688, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_687, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_688);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_687[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_687[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_687[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_687[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_690, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_690)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_692, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_691, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_692);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_691[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_691[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_691[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_691[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_694, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_694)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_696, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_695, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_696);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_695[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_695[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_695[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_695[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_698, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_698)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_700, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_699, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_700);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_699[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_699[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_699[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_699[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_702, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_702)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_704, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_703, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_704);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_703[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_703[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_703[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_703[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_706, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_706)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_708, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_707, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_708);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_707[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_707[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_707[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_707[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_710, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_710)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_712, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_711, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_712);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_711[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_711[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_711[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_711[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_714, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_714)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_716, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_715, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_716);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_715[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_715[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_715[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_715[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_718, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_718)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_720, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_719, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_720);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_719[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_719[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_719[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_719[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_722, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_722)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_724, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_723, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_724);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_723[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_723[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_723[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_723[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_726, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_726)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_728, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_727, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_728);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_727[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_727[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_727[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_727[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_730, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_730)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_732, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_731, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_732);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_731[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_731[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_731[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_731[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_734, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_734)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_736, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_735, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_736);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_735[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_735[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_735[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_735[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_738, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_738)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_740, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_739, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_740);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_739[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_739[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_739[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_739[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_742, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_742)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_744, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_743, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_744);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_743[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_743[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_743[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_743[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_746, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_746)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_748, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_747, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_748);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_747[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_747[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_747[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_747[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_750, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_750)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_752, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_751, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_752);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_751[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_751[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_751[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_751[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_754, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_754)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_756, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_755, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_756);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_755[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_755[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_755[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_755[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_758, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_758)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_760, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_759, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_760);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_759[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_759[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_759[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_759[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_762, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_762)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_764, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_763, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_764);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_763[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_763[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_763[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_763[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_766, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_766)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_768, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_767, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_768);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_767[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_767[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_767[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_767[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_770, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_770)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_772, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_771, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_772);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_771[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_771[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_771[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_771[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_774, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_774)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_776, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_775, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_776);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_775[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_775[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_775[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_775[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_778, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_778)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_780, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_779, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_780);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_779[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_779[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_779[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_779[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_782, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_782)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_784, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_783, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_784);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_783[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_783[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_783[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_783[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_786, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_786)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_788, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_787, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_788);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_787[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_787[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_787[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_787[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, vlSelfRef.__Vfunc_sfp_div__126__b_ext)) {
                        VL_SUB_W(4, __Vtemp_790, vlSelfRef.__Vfunc_sfp_div__126__remainder, vlSelfRef.__Vfunc_sfp_div__126__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_790[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_790[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_790[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_790[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__126__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__126__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__126__result)
                            : vlSelfRef.__Vfunc_sfp_div__126__result);
                    __Vlabel171: ;
                }
                vlSelfRef.__Vfunc_sfp_exp__125__term 
                    = vlSelfRef.__Vfunc_sfp_div__126__Vfuncout;
                vlSelfRef.__Vfunc_sfp_add__129__b = vlSelfRef.__Vfunc_sfp_exp__125__term;
                vlSelfRef.__Vfunc_sfp_add__129__a = vlSelfRef.__Vfunc_sfp_exp__125__result;
                vlSelfRef.__Vfunc_sfp_add__129__Vfuncout 
                    = (vlSelfRef.__Vfunc_sfp_add__129__a 
                       + vlSelfRef.__Vfunc_sfp_add__129__b);
                vlSelfRef.__Vfunc_sfp_exp__125__result 
                    = vlSelfRef.__Vfunc_sfp_add__129__Vfuncout;
                vlSelfRef.__Vfunc_sfp_exp__125__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_exp__125__unnamedblk2__DOT__i);
            }
            vlSelfRef.__Vfunc_sfp_exp__125__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_exp__125__result;
            vlSelfRef.__Vfunc_sfp_add__124__b = vlSelfRef.__Vfunc_sfp_exp__125__Vfuncout;
            vlSelfRef.__Vfunc_sfp_add__124__a = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_add__124__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_add__124__a 
                   + vlSelfRef.__Vfunc_sfp_add__124__b);
            vlSelfRef.__Vfunc_sfp_div__123__b = vlSelfRef.__Vfunc_sfp_add__124__Vfuncout;
            vlSelfRef.__Vfunc_int_to_sfp__130__n = 2U;
            vlSelfRef.__Vfunc_int_to_sfp__130__Vfuncout 
                = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__130__n), 0x20U);
            vlSelfRef.__Vfunc_sfp_div__123__a = vlSelfRef.__Vfunc_int_to_sfp__130__Vfuncout;
            __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0;
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__123__remainder);
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__123__b_ext);
            vlSelf->__Vfunc_sfp_div__123__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__123__sign_bit = VL_RAND_RESET_I(1);
            vlSelf->__Vfunc_sfp_div__123__abs_a = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__123__abs_b = VL_RAND_RESET_Q(64);
            {
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__123__b)) {
                    vlSelfRef.__Vfunc_sfp_div__123__Vfuncout 
                        = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__123__a)
                            ? 0x7fffffffffffffffULL
                            : 0x8000000000000000ULL);
                    goto __Vlabel172;
                }
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__123__a)) {
                    vlSelfRef.__Vfunc_sfp_div__123__Vfuncout = 0ULL;
                    goto __Vlabel172;
                }
                vlSelfRef.__Vfunc_sfp_div__123__abs_a 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__123__a 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__123__a)
                        : vlSelfRef.__Vfunc_sfp_div__123__a);
                vlSelfRef.__Vfunc_sfp_div__123__abs_b 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__123__b 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__123__b)
                        : vlSelfRef.__Vfunc_sfp_div__123__b);
                vlSelfRef.__Vfunc_sfp_div__123__sign_bit 
                    = (IData)(((vlSelfRef.__Vfunc_sfp_div__123__a 
                                ^ vlSelfRef.__Vfunc_sfp_div__123__b) 
                               >> 0x3fU));
                __Vtemp_792[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__123__abs_a);
                __Vtemp_792[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__123__abs_a 
                                           >> 0x20U));
                __Vtemp_792[2U] = 0U;
                __Vtemp_792[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_792, 0x20U);
                vlSelfRef.__Vfunc_sfp_div__123__b_ext[0U] 
                    = (IData)(vlSelfRef.__Vfunc_sfp_div__123__abs_b);
                vlSelfRef.__Vfunc_sfp_div__123__b_ext[1U] 
                    = (IData)((vlSelfRef.__Vfunc_sfp_div__123__abs_b 
                               >> 0x20U));
                vlSelfRef.__Vfunc_sfp_div__123__b_ext[2U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__123__b_ext[3U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__123__result = 0ULL;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_794, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_794)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_796, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_795, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_796);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_795[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_795[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_795[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_795[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_798, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_798)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_800, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_799, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_800);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_799[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_799[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_799[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_799[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_802, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_802)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_804, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_803, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_804);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_803[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_803[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_803[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_803[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_806, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_806)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_808, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_807, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_808);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_807[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_807[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_807[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_807[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_810, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_810)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_812, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_811, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_812);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_811[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_811[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_811[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_811[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_814, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_814)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_816, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_815, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_816);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_815[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_815[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_815[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_815[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_818, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_818)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_820, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_819, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_820);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_819[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_819[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_819[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_819[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_822, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_822)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_824, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_823, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_824);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_823[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_823[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_823[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_823[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_826, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_826)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_828, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_827, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_828);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_827[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_827[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_827[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_827[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_830, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_830)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_832, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_831, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_832);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_831[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_831[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_831[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_831[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_834, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_834)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_836, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_835, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_836);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_835[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_835[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_835[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_835[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_838, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_838)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_840, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_839, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_840);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_839[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_839[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_839[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_839[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_842, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_842)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_844, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_843, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_844);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_843[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_843[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_843[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_843[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_846, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_846)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_848, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_847, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_848);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_847[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_847[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_847[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_847[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_850, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_850)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_852, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_851, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_852);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_851[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_851[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_851[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_851[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_854, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_854)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_856, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_855, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_856);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_855[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_855[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_855[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_855[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_858, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_858)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_860, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_859, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_860);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_859[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_859[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_859[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_859[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_862, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_862)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_864, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_863, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_864);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_863[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_863[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_863[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_863[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_866, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_866)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_868, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_867, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_868);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_867[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_867[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_867[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_867[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_870, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_870)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_872, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_871, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_872);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_871[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_871[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_871[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_871[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_874, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_874)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_876, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_875, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_876);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_875[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_875[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_875[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_875[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_878, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_878)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_880, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_879, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_880);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_879[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_879[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_879[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_879[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_882, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_882)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_884, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_883, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_884);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_883[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_883[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_883[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_883[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_886, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_886)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_888, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_887, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_888);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_887[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_887[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_887[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_887[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_890, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_890)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_892, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_891, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_892);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_891[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_891[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_891[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_891[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_894, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_894)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_896, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_895, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_896);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_895[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_895[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_895[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_895[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_898, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_898)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_900, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_899, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_900);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_899[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_899[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_899[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_899[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_902, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_902)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_904, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_903, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_904);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_903[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_903[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_903[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_903[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_906, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_906)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_908, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_907, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_908);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_907[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_907[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_907[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_907[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_910, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_910)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_912, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_911, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_912);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_911[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_911[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_911[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_911[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_914, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_914)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_916, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_915, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_916);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_915[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_915[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_915[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_915[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_918, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_918)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_920, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_919, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_920);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_919[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_919[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_919[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_919[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_922, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_922)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_924, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_923, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_924);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_923[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_923[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_923[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_923[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_926, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_926)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_928, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_927, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_928);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_927[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_927[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_927[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_927[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_930, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_930)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_932, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_931, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_932);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_931[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_931[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_931[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_931[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_934, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_934)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_936, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_935, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_936);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_935[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_935[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_935[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_935[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_938, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_938)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_940, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_939, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_940);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_939[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_939[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_939[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_939[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_942, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_942)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_944, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_943, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_944);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_943[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_943[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_943[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_943[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_946, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_946)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_948, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_947, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_948);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_947[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_947[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_947[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_947[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_950, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_950)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_952, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_951, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_952);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_951[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_951[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_951[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_951[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_954, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_954)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_956, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_955, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_956);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_955[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_955[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_955[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_955[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_958, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_958)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_960, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_959, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_960);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_959[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_959[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_959[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_959[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_962, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_962)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_964, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_963, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_964);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_963[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_963[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_963[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_963[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_966, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_966)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_968, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_967, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_968);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_967[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_967[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_967[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_967[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_970, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_970)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_972, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_971, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_972);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_971[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_971[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_971[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_971[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_974, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_974)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_976, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_975, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_976);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_975[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_975[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_975[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_975[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_978, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_978)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_980, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_979, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_980);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_979[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_979[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_979[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_979[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_982, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_982)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_984, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_983, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_984);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_983[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_983[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_983[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_983[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_986, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_986)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_988, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_987, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_988);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_987[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_987[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_987[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_987[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_990, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_990)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_992, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_991, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_992);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_991[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_991[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_991[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_991[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_994, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_994)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_996, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_995, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_996);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_995[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_995[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_995[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_995[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_998, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_998)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1000, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_999, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1000);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_999[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_999[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_999[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_999[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1002, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1002)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1004, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_1003, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1004);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1003[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1003[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1003[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1003[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1006, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1006)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1008, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_1007, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1008);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1007[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1007[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1007[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1007[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1010, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1010)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1012, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_1011, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1012);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1011[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1011[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1011[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1011[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1014, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1014)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1016, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_1015, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1016);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1015[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1015[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1015[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1015[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1018, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1018)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1020, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_1019, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1020);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1019[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1019[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1019[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1019[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1022, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1022)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1024, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_1023, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1024);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1023[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1023[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1023[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1023[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1026, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1026)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1028, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_1027, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1028);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1027[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1027[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1027[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1027[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1030, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1030)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1032, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_1031, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1032);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1031[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1031[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1031[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1031[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1034, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1034)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1036, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_1035, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1036);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1035[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1035[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1035[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1035[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1038, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1038)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1040, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_1039, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1040);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1039[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1039[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1039[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1039[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1042, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1042)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1044, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_1043, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1044);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1043[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1043[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1043[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1043[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, vlSelfRef.__Vfunc_sfp_div__123__b_ext)) {
                    VL_SUB_W(4, __Vtemp_1046, vlSelfRef.__Vfunc_sfp_div__123__remainder, vlSelfRef.__Vfunc_sfp_div__123__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1046[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1046[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1046[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1046[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_sfp_div__123__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_sfp_div__123__sign_bit)
                        ? (- vlSelfRef.__Vfunc_sfp_div__123__result)
                        : vlSelfRef.__Vfunc_sfp_div__123__result);
                __Vlabel172: ;
            }
            vlSelfRef.__Vfunc_sfp_sub__122__a = vlSelfRef.__Vfunc_sfp_div__123__Vfuncout;
            vlSelfRef.__Vfunc_sfp_sub__122__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_sub__122__a 
                   - vlSelfRef.__Vfunc_sfp_sub__122__b);
            vlSelfRef.__Vfunc_sfp_tanh__119__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_sub__122__Vfuncout;
            __Vlabel170: ;
        }
        vlSelfRef.__Vfunc_sfp_mul__106__a = vlSelfRef.__Vfunc_sfp_tanh__119__Vfuncout;
        VL_EXTENDS_WQ(128,64, __Vtemp_1047, vlSelfRef.__Vfunc_sfp_mul__106__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1048, vlSelfRef.__Vfunc_sfp_mul__106__b);
        VL_MULS_WWW(128, __Vtemp_1049, __Vtemp_1047, __Vtemp_1048);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__106__tmp, __Vtemp_1049, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__106__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__106__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__106__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_sub__105__b = vlSelfRef.__Vfunc_sfp_mul__106__Vfuncout;
        vlSelfRef.__Vfunc_sfp_sub__105__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.__Vfunc_sfp_sub__105__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__105__a - vlSelfRef.__Vfunc_sfp_sub__105__b);
        vlSelfRef.__Vfunc_sfp_mul__104__b = vlSelfRef.__Vfunc_sfp_sub__105__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__104__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1050, vlSelfRef.__Vfunc_sfp_mul__104__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1051, vlSelfRef.__Vfunc_sfp_mul__104__b);
        VL_MULS_WWW(128, __Vtemp_1052, __Vtemp_1050, __Vtemp_1051);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__104__tmp, __Vtemp_1052, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__104__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__104__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__104__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__103__b = vlSelfRef.__Vfunc_sfp_mul__104__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__103__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1053, vlSelfRef.__Vfunc_sfp_mul__103__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1054, vlSelfRef.__Vfunc_sfp_mul__103__b);
        VL_MULS_WWW(128, __Vtemp_1055, __Vtemp_1053, __Vtemp_1054);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__103__tmp, __Vtemp_1055, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__103__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__103__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__103__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__102__b = vlSelfRef.__Vfunc_sfp_mul__103__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__102__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__102__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__102__a + vlSelfRef.__Vfunc_sfp_add__102__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__102__Vfuncout;
        vlSelfRef.__Vfunc_sfp_tanh__107__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction;
        {
            if (VL_GTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__107__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__108__n = 3U;
                            vlSelfRef.__Vfunc_int_to_sfp__108__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__108__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__108__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__107__Vfuncout 
                    = vlSymsp->TOP__FixedPoint.ONE;
                goto __Vlabel173;
            }
            if (VL_LTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__107__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__109__n = 0xfffffffdU;
                            vlSelfRef.__Vfunc_int_to_sfp__109__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__109__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__109__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__107__Vfuncout 
                    = (- vlSymsp->TOP__FixedPoint.ONE);
                goto __Vlabel173;
            }
            vlSelfRef.__Vfunc_sfp_sub__110__b = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__113__a = VL_SHIFTL_QQI(64,64,32, 
                                                              (- vlSelfRef.__Vfunc_sfp_tanh__107__a), 1U);
            vlSelf->__Vfunc_sfp_exp__113__unnamedblk2__DOT__i = 0;
            vlSelf->__Vfunc_sfp_exp__113__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_exp__113__term = VL_RAND_RESET_Q(64);
            vlSelfRef.__Vfunc_sfp_exp__113__result 
                = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__113__term = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__113__unnamedblk2__DOT__i = 1U;
            while (VL_GTS_III(32, 0x14U, vlSelfRef.__Vfunc_sfp_exp__113__unnamedblk2__DOT__i)) {
                vlSelfRef.__Vfunc_int_to_sfp__115__n 
                    = vlSelfRef.__Vfunc_sfp_exp__113__unnamedblk2__DOT__i;
                vlSelfRef.__Vfunc_int_to_sfp__115__Vfuncout 
                    = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__115__n), 0x20U);
                vlSelfRef.__Vfunc_sfp_div__114__b = vlSelfRef.__Vfunc_int_to_sfp__115__Vfuncout;
                vlSelfRef.__Vfunc_sfp_mul__116__b = vlSelfRef.__Vfunc_sfp_exp__113__a;
                vlSelfRef.__Vfunc_sfp_mul__116__a = vlSelfRef.__Vfunc_sfp_exp__113__term;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__116__tmp);
                VL_EXTENDS_WQ(128,64, __Vtemp_1056, vlSelfRef.__Vfunc_sfp_mul__116__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_1057, vlSelfRef.__Vfunc_sfp_mul__116__b);
                VL_MULS_WWW(128, __Vtemp_1058, __Vtemp_1056, __Vtemp_1057);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__116__tmp, __Vtemp_1058, 0x20U);
                vlSelfRef.__Vfunc_sfp_mul__116__Vfuncout 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__116__tmp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__Vfunc_sfp_mul__116__tmp[0U])));
                vlSelfRef.__Vfunc_sfp_div__114__a = vlSelfRef.__Vfunc_sfp_mul__116__Vfuncout;
                __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__114__remainder);
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__114__b_ext);
                vlSelf->__Vfunc_sfp_div__114__result = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__114__sign_bit = VL_RAND_RESET_I(1);
                vlSelf->__Vfunc_sfp_div__114__abs_a = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__114__abs_b = VL_RAND_RESET_Q(64);
                {
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__114__b)) {
                        vlSelfRef.__Vfunc_sfp_div__114__Vfuncout 
                            = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__114__a)
                                ? 0x7fffffffffffffffULL
                                : 0x8000000000000000ULL);
                        goto __Vlabel174;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__114__a)) {
                        vlSelfRef.__Vfunc_sfp_div__114__Vfuncout = 0ULL;
                        goto __Vlabel174;
                    }
                    vlSelfRef.__Vfunc_sfp_div__114__abs_a 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__114__a 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__114__a)
                            : vlSelfRef.__Vfunc_sfp_div__114__a);
                    vlSelfRef.__Vfunc_sfp_div__114__abs_b 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__114__b 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__114__b)
                            : vlSelfRef.__Vfunc_sfp_div__114__b);
                    vlSelfRef.__Vfunc_sfp_div__114__sign_bit 
                        = (IData)(((vlSelfRef.__Vfunc_sfp_div__114__a 
                                    ^ vlSelfRef.__Vfunc_sfp_div__114__b) 
                                   >> 0x3fU));
                    __Vtemp_1059[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__114__abs_a);
                    __Vtemp_1059[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__114__abs_a 
                                                >> 0x20U));
                    __Vtemp_1059[2U] = 0U;
                    __Vtemp_1059[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1059, 0x20U);
                    vlSelfRef.__Vfunc_sfp_div__114__b_ext[0U] 
                        = (IData)(vlSelfRef.__Vfunc_sfp_div__114__abs_b);
                    vlSelfRef.__Vfunc_sfp_div__114__b_ext[1U] 
                        = (IData)((vlSelfRef.__Vfunc_sfp_div__114__abs_b 
                                   >> 0x20U));
                    vlSelfRef.__Vfunc_sfp_div__114__b_ext[2U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__114__b_ext[3U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__114__result = 0ULL;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1061, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1061)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1063, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_1062, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1063);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1062[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1062[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1062[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1062[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1065, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1065)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1067, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_1066, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1067);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1066[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1066[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1066[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1066[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1069, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1069)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1071, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_1070, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1071);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1070[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1070[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1070[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1070[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1073, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1073)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1075, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_1074, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1075);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1074[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1074[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1074[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1074[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1077, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1077)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1079, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_1078, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1079);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1078[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1078[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1078[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1078[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1081, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1081)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1083, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_1082, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1083);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1082[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1082[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1082[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1082[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1085, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1085)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1087, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_1086, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1087);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1086[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1086[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1086[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1086[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1089, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1089)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1091, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_1090, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1091);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1090[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1090[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1090[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1090[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1093, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1093)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1095, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_1094, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1095);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1094[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1094[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1094[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1094[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1097, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1097)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1099, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_1098, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1099);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1098[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1098[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1098[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1098[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1101, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1101)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1103, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_1102, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1103);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1102[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1102[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1102[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1102[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1105, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1105)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1107, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_1106, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1107);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1106[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1106[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1106[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1106[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1109, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1109)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1111, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_1110, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1111);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1110[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1110[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1110[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1110[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1113, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1113)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1115, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_1114, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1115);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1114[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1114[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1114[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1114[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1117, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1117)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1119, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_1118, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1119);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1118[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1118[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1118[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1118[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1121, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1121)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1123, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_1122, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1123);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1122[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1122[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1122[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1122[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1125, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1125)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1127, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_1126, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1127);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1126[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1126[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1126[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1126[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1129, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1129)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1131, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_1130, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1131);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1130[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1130[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1130[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1130[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1133, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1133)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1135, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_1134, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1135);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1134[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1134[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1134[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1134[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1137, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1137)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1139, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_1138, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1139);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1138[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1138[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1138[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1138[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1141, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1141)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1143, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_1142, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1143);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1142[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1142[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1142[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1142[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1145, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1145)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1147, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_1146, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1147);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1146[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1146[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1146[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1146[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1149, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1149)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1151, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_1150, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1151);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1150[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1150[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1150[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1150[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1153, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1153)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1155, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_1154, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1155);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1154[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1154[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1154[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1154[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1157, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1157)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1159, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_1158, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1159);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1158[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1158[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1158[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1158[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1161, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1161)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1163, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_1162, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1163);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1162[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1162[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1162[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1162[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1165, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1165)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1167, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_1166, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1167);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1166[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1166[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1166[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1166[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1169, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1169)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1171, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_1170, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1171);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1170[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1170[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1170[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1170[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1173, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1173)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1175, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_1174, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1175);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1174[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1174[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1174[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1174[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1177, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1177)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1179, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_1178, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1179);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1178[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1178[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1178[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1178[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1181, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1181)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1183, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_1182, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1183);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1182[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1182[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1182[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1182[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1185, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1185)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1187, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_1186, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1187);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1186[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1186[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1186[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1186[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1189, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1189)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1191, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_1190, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1191);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1190[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1190[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1190[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1190[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1193, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1193)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1195, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_1194, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1195);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1194[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1194[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1194[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1194[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1197, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1197)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1199, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_1198, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1199);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1198[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1198[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1198[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1198[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1201, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1201)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1203, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_1202, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1203);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1202[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1202[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1202[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1202[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1205, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1205)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1207, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_1206, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1207);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1206[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1206[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1206[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1206[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1209, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1209)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1211, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_1210, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1211);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1210[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1210[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1210[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1210[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1213, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1213)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1215, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_1214, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1215);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1214[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1214[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1214[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1214[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1217, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1217)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1219, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_1218, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1219);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1218[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1218[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1218[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1218[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1221, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1221)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1223, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_1222, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1223);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1222[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1222[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1222[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1222[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1225, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1225)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1227, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_1226, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1227);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1226[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1226[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1226[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1226[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1229, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1229)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1231, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_1230, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1231);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1230[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1230[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1230[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1230[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1233, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1233)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1235, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_1234, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1235);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1234[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1234[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1234[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1234[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1237, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1237)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1239, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_1238, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1239);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1238[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1238[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1238[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1238[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1241, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1241)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1243, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_1242, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1243);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1242[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1242[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1242[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1242[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1245, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1245)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1247, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_1246, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1247);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1246[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1246[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1246[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1246[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1249, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1249)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1251, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_1250, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1251);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1250[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1250[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1250[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1250[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1253, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1253)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1255, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_1254, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1255);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1254[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1254[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1254[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1254[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1257, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1257)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1259, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_1258, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1259);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1258[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1258[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1258[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1258[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1261, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1261)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1263, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_1262, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1263);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1262[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1262[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1262[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1262[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1265, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1265)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1267, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_1266, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1267);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1266[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1266[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1266[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1266[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1269, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1269)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1271, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_1270, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1271);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1270[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1270[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1270[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1270[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1273, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1273)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1275, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_1274, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1275);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1274[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1274[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1274[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1274[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1277, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1277)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1279, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_1278, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1279);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1278[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1278[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1278[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1278[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1281, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1281)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1283, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_1282, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1283);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1282[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1282[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1282[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1282[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1285, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1285)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1287, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_1286, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1287);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1286[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1286[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1286[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1286[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1289, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1289)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1291, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_1290, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1291);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1290[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1290[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1290[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1290[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1293, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1293)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1295, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_1294, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1295);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1294[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1294[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1294[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1294[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1297, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1297)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1299, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_1298, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1299);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1298[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1298[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1298[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1298[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1301, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1301)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1303, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_1302, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1303);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1302[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1302[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1302[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1302[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1305, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1305)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1307, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_1306, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1307);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1306[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1306[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1306[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1306[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1309, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1309)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1311, vlSelfRef.__Vfunc_sfp_div__114__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_1310, vlSelfRef.__Vfunc_sfp_div__114__remainder, __Vtemp_1311);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1310[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1310[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1310[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1310[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__114__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__114__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__114__remainder, vlSelfRef.__Vfunc_sfp_div__114__b_ext)) {
                        VL_SUB_W(4, __Vtemp_1313, vlSelfRef.__Vfunc_sfp_div__114__remainder, vlSelfRef.__Vfunc_sfp_div__114__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[0U] 
                            = __Vtemp_1313[0U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[1U] 
                            = __Vtemp_1313[1U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[2U] 
                            = __Vtemp_1313[2U];
                        vlSelfRef.__Vfunc_sfp_div__114__remainder[3U] 
                            = __Vtemp_1313[3U];
                        vlSelfRef.__Vfunc_sfp_div__114__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__114__result);
                    }
                    __Vfunc_sfp_div__114__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__114__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__114__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__114__result)
                            : vlSelfRef.__Vfunc_sfp_div__114__result);
                    __Vlabel174: ;
                }
                vlSelfRef.__Vfunc_sfp_exp__113__term 
                    = vlSelfRef.__Vfunc_sfp_div__114__Vfuncout;
                vlSelfRef.__Vfunc_sfp_add__117__b = vlSelfRef.__Vfunc_sfp_exp__113__term;
                vlSelfRef.__Vfunc_sfp_add__117__a = vlSelfRef.__Vfunc_sfp_exp__113__result;
                vlSelfRef.__Vfunc_sfp_add__117__Vfuncout 
                    = (vlSelfRef.__Vfunc_sfp_add__117__a 
                       + vlSelfRef.__Vfunc_sfp_add__117__b);
                vlSelfRef.__Vfunc_sfp_exp__113__result 
                    = vlSelfRef.__Vfunc_sfp_add__117__Vfuncout;
                vlSelfRef.__Vfunc_sfp_exp__113__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_exp__113__unnamedblk2__DOT__i);
            }
            vlSelfRef.__Vfunc_sfp_exp__113__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_exp__113__result;
            vlSelfRef.__Vfunc_sfp_add__112__b = vlSelfRef.__Vfunc_sfp_exp__113__Vfuncout;
            vlSelfRef.__Vfunc_sfp_add__112__a = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_add__112__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_add__112__a 
                   + vlSelfRef.__Vfunc_sfp_add__112__b);
            vlSelfRef.__Vfunc_sfp_div__111__b = vlSelfRef.__Vfunc_sfp_add__112__Vfuncout;
            vlSelfRef.__Vfunc_int_to_sfp__118__n = 2U;
            vlSelfRef.__Vfunc_int_to_sfp__118__Vfuncout 
                = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__118__n), 0x20U);
            vlSelfRef.__Vfunc_sfp_div__111__a = vlSelfRef.__Vfunc_int_to_sfp__118__Vfuncout;
            __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0;
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__111__remainder);
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__111__b_ext);
            vlSelf->__Vfunc_sfp_div__111__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__111__sign_bit = VL_RAND_RESET_I(1);
            vlSelf->__Vfunc_sfp_div__111__abs_a = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__111__abs_b = VL_RAND_RESET_Q(64);
            {
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__111__b)) {
                    vlSelfRef.__Vfunc_sfp_div__111__Vfuncout 
                        = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__111__a)
                            ? 0x7fffffffffffffffULL
                            : 0x8000000000000000ULL);
                    goto __Vlabel175;
                }
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__111__a)) {
                    vlSelfRef.__Vfunc_sfp_div__111__Vfuncout = 0ULL;
                    goto __Vlabel175;
                }
                vlSelfRef.__Vfunc_sfp_div__111__abs_a 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__111__a 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__111__a)
                        : vlSelfRef.__Vfunc_sfp_div__111__a);
                vlSelfRef.__Vfunc_sfp_div__111__abs_b 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__111__b 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__111__b)
                        : vlSelfRef.__Vfunc_sfp_div__111__b);
                vlSelfRef.__Vfunc_sfp_div__111__sign_bit 
                    = (IData)(((vlSelfRef.__Vfunc_sfp_div__111__a 
                                ^ vlSelfRef.__Vfunc_sfp_div__111__b) 
                               >> 0x3fU));
                __Vtemp_1315[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__111__abs_a);
                __Vtemp_1315[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__111__abs_a 
                                            >> 0x20U));
                __Vtemp_1315[2U] = 0U;
                __Vtemp_1315[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1315, 0x20U);
                vlSelfRef.__Vfunc_sfp_div__111__b_ext[0U] 
                    = (IData)(vlSelfRef.__Vfunc_sfp_div__111__abs_b);
                vlSelfRef.__Vfunc_sfp_div__111__b_ext[1U] 
                    = (IData)((vlSelfRef.__Vfunc_sfp_div__111__abs_b 
                               >> 0x20U));
                vlSelfRef.__Vfunc_sfp_div__111__b_ext[2U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__111__b_ext[3U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__111__result = 0ULL;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1317, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1317)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1319, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_1318, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1319);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1318[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1318[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1318[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1318[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1321, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1321)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1323, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_1322, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1323);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1322[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1322[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1322[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1322[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1325, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1325)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1327, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_1326, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1327);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1326[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1326[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1326[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1326[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1329, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1329)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1331, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_1330, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1331);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1330[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1330[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1330[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1330[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1333, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1333)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1335, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_1334, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1335);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1334[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1334[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1334[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1334[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1337, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1337)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1339, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_1338, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1339);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1338[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1338[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1338[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1338[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1341, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1341)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1343, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_1342, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1343);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1342[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1342[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1342[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1342[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1345, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1345)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1347, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_1346, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1347);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1346[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1346[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1346[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1346[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1349, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1349)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1351, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_1350, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1351);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1350[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1350[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1350[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1350[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1353, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1353)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1355, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_1354, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1355);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1354[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1354[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1354[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1354[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1357, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1357)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1359, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_1358, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1359);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1358[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1358[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1358[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1358[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1361, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1361)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1363, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_1362, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1363);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1362[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1362[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1362[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1362[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1365, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1365)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1367, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_1366, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1367);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1366[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1366[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1366[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1366[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1369, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1369)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1371, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_1370, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1371);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1370[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1370[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1370[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1370[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1373, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1373)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1375, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_1374, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1375);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1374[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1374[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1374[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1374[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1377, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1377)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1379, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_1378, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1379);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1378[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1378[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1378[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1378[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1381, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1381)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1383, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_1382, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1383);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1382[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1382[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1382[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1382[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1385, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1385)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1387, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_1386, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1387);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1386[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1386[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1386[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1386[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1389, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1389)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1391, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_1390, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1391);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1390[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1390[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1390[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1390[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1393, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1393)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1395, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_1394, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1395);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1394[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1394[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1394[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1394[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1397, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1397)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1399, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_1398, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1399);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1398[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1398[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1398[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1398[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1401, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1401)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1403, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_1402, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1403);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1402[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1402[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1402[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1402[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1405, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1405)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1407, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_1406, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1407);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1406[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1406[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1406[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1406[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1409, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1409)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1411, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_1410, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1411);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1410[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1410[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1410[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1410[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1413, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1413)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1415, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_1414, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1415);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1414[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1414[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1414[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1414[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1417, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1417)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1419, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_1418, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1419);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1418[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1418[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1418[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1418[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1421, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1421)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1423, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_1422, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1423);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1422[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1422[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1422[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1422[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1425, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1425)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1427, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_1426, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1427);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1426[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1426[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1426[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1426[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1429, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1429)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1431, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_1430, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1431);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1430[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1430[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1430[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1430[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1433, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1433)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1435, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_1434, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1435);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1434[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1434[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1434[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1434[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1437, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1437)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1439, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_1438, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1439);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1438[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1438[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1438[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1438[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1441, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1441)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1443, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_1442, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1443);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1442[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1442[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1442[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1442[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1445, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1445)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1447, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_1446, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1447);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1446[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1446[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1446[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1446[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1449, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1449)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1451, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_1450, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1451);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1450[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1450[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1450[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1450[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1453, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1453)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1455, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_1454, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1455);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1454[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1454[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1454[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1454[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1457, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1457)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1459, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_1458, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1459);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1458[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1458[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1458[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1458[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1461, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1461)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1463, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_1462, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1463);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1462[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1462[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1462[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1462[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1465, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1465)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1467, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_1466, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1467);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1466[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1466[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1466[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1466[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1469, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1469)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1471, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_1470, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1471);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1470[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1470[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1470[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1470[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1473, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1473)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1475, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_1474, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1475);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1474[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1474[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1474[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1474[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1477, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1477)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1479, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_1478, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1479);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1478[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1478[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1478[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1478[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1481, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1481)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1483, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_1482, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1483);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1482[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1482[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1482[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1482[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1485, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1485)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1487, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_1486, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1487);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1486[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1486[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1486[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1486[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1489, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1489)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1491, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_1490, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1491);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1490[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1490[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1490[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1490[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1493, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1493)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1495, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_1494, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1495);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1494[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1494[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1494[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1494[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1497, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1497)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1499, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_1498, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1499);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1498[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1498[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1498[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1498[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1501, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1501)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1503, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_1502, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1503);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1502[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1502[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1502[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1502[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1505, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1505)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1507, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_1506, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1507);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1506[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1506[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1506[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1506[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1509, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1509)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1511, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_1510, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1511);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1510[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1510[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1510[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1510[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1513, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1513)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1515, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_1514, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1515);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1514[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1514[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1514[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1514[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1517, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1517)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1519, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_1518, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1519);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1518[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1518[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1518[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1518[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1521, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1521)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1523, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_1522, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1523);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1522[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1522[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1522[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1522[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1525, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1525)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1527, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_1526, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1527);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1526[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1526[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1526[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1526[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1529, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1529)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1531, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_1530, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1531);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1530[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1530[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1530[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1530[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1533, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1533)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1535, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_1534, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1535);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1534[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1534[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1534[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1534[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1537, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1537)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1539, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_1538, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1539);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1538[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1538[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1538[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1538[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1541, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1541)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1543, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_1542, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1543);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1542[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1542[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1542[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1542[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1545, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1545)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1547, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_1546, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1547);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1546[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1546[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1546[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1546[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1549, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1549)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1551, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_1550, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1551);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1550[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1550[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1550[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1550[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1553, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1553)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1555, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_1554, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1555);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1554[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1554[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1554[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1554[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1557, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1557)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1559, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_1558, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1559);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1558[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1558[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1558[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1558[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1561, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1561)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1563, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_1562, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1563);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1562[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1562[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1562[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1562[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1565, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1565)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1567, vlSelfRef.__Vfunc_sfp_div__111__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_1566, vlSelfRef.__Vfunc_sfp_div__111__remainder, __Vtemp_1567);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1566[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1566[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1566[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1566[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__111__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__111__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__111__remainder, vlSelfRef.__Vfunc_sfp_div__111__b_ext)) {
                    VL_SUB_W(4, __Vtemp_1569, vlSelfRef.__Vfunc_sfp_div__111__remainder, vlSelfRef.__Vfunc_sfp_div__111__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[0U] 
                        = __Vtemp_1569[0U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[1U] 
                        = __Vtemp_1569[1U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[2U] 
                        = __Vtemp_1569[2U];
                    vlSelfRef.__Vfunc_sfp_div__111__remainder[3U] 
                        = __Vtemp_1569[3U];
                    vlSelfRef.__Vfunc_sfp_div__111__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__111__result);
                }
                __Vfunc_sfp_div__111__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_sfp_div__111__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_sfp_div__111__sign_bit)
                        ? (- vlSelfRef.__Vfunc_sfp_div__111__result)
                        : vlSelfRef.__Vfunc_sfp_div__111__result);
                __Vlabel175: ;
            }
            vlSelfRef.__Vfunc_sfp_sub__110__a = vlSelfRef.__Vfunc_sfp_div__111__Vfuncout;
            vlSelfRef.__Vfunc_sfp_sub__110__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_sub__110__a 
                   - vlSelfRef.__Vfunc_sfp_sub__110__b);
            vlSelfRef.__Vfunc_sfp_tanh__107__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_sub__110__Vfuncout;
            __Vlabel173: ;
        }
        vlSelfRef.__Vfunc_sfp_mul__106__b = vlSelfRef.__Vfunc_sfp_tanh__107__Vfuncout;
        vlSelfRef.__Vfunc_sfp_tanh__119__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction;
        {
            if (VL_GTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__119__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__120__n = 3U;
                            vlSelfRef.__Vfunc_int_to_sfp__120__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__120__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__120__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__119__Vfuncout 
                    = vlSymsp->TOP__FixedPoint.ONE;
                goto __Vlabel176;
            }
            if (VL_LTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__119__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__121__n = 0xfffffffdU;
                            vlSelfRef.__Vfunc_int_to_sfp__121__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__121__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__121__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__119__Vfuncout 
                    = (- vlSymsp->TOP__FixedPoint.ONE);
                goto __Vlabel176;
            }
            vlSelfRef.__Vfunc_sfp_sub__122__b = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__125__a = VL_SHIFTL_QQI(64,64,32, 
                                                              (- vlSelfRef.__Vfunc_sfp_tanh__119__a), 1U);
            vlSelf->__Vfunc_sfp_exp__125__unnamedblk2__DOT__i = 0;
            vlSelf->__Vfunc_sfp_exp__125__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_exp__125__term = VL_RAND_RESET_Q(64);
            vlSelfRef.__Vfunc_sfp_exp__125__result 
                = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__125__term = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__125__unnamedblk2__DOT__i = 1U;
            while (VL_GTS_III(32, 0x14U, vlSelfRef.__Vfunc_sfp_exp__125__unnamedblk2__DOT__i)) {
                vlSelfRef.__Vfunc_int_to_sfp__127__n 
                    = vlSelfRef.__Vfunc_sfp_exp__125__unnamedblk2__DOT__i;
                vlSelfRef.__Vfunc_int_to_sfp__127__Vfuncout 
                    = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__127__n), 0x20U);
                vlSelfRef.__Vfunc_sfp_div__126__b = vlSelfRef.__Vfunc_int_to_sfp__127__Vfuncout;
                vlSelfRef.__Vfunc_sfp_mul__128__b = vlSelfRef.__Vfunc_sfp_exp__125__a;
                vlSelfRef.__Vfunc_sfp_mul__128__a = vlSelfRef.__Vfunc_sfp_exp__125__term;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__128__tmp);
                VL_EXTENDS_WQ(128,64, __Vtemp_1570, vlSelfRef.__Vfunc_sfp_mul__128__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_1571, vlSelfRef.__Vfunc_sfp_mul__128__b);
                VL_MULS_WWW(128, __Vtemp_1572, __Vtemp_1570, __Vtemp_1571);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__128__tmp, __Vtemp_1572, 0x20U);
                vlSelfRef.__Vfunc_sfp_mul__128__Vfuncout 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__128__tmp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__Vfunc_sfp_mul__128__tmp[0U])));
                vlSelfRef.__Vfunc_sfp_div__126__a = vlSelfRef.__Vfunc_sfp_mul__128__Vfuncout;
                __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__126__remainder);
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__126__b_ext);
                vlSelf->__Vfunc_sfp_div__126__result = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__126__sign_bit = VL_RAND_RESET_I(1);
                vlSelf->__Vfunc_sfp_div__126__abs_a = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__126__abs_b = VL_RAND_RESET_Q(64);
                {
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__126__b)) {
                        vlSelfRef.__Vfunc_sfp_div__126__Vfuncout 
                            = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__126__a)
                                ? 0x7fffffffffffffffULL
                                : 0x8000000000000000ULL);
                        goto __Vlabel177;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__126__a)) {
                        vlSelfRef.__Vfunc_sfp_div__126__Vfuncout = 0ULL;
                        goto __Vlabel177;
                    }
                    vlSelfRef.__Vfunc_sfp_div__126__abs_a 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__126__a 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__126__a)
                            : vlSelfRef.__Vfunc_sfp_div__126__a);
                    vlSelfRef.__Vfunc_sfp_div__126__abs_b 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__126__b 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__126__b)
                            : vlSelfRef.__Vfunc_sfp_div__126__b);
                    vlSelfRef.__Vfunc_sfp_div__126__sign_bit 
                        = (IData)(((vlSelfRef.__Vfunc_sfp_div__126__a 
                                    ^ vlSelfRef.__Vfunc_sfp_div__126__b) 
                                   >> 0x3fU));
                    __Vtemp_1573[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__126__abs_a);
                    __Vtemp_1573[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__126__abs_a 
                                                >> 0x20U));
                    __Vtemp_1573[2U] = 0U;
                    __Vtemp_1573[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1573, 0x20U);
                    vlSelfRef.__Vfunc_sfp_div__126__b_ext[0U] 
                        = (IData)(vlSelfRef.__Vfunc_sfp_div__126__abs_b);
                    vlSelfRef.__Vfunc_sfp_div__126__b_ext[1U] 
                        = (IData)((vlSelfRef.__Vfunc_sfp_div__126__abs_b 
                                   >> 0x20U));
                    vlSelfRef.__Vfunc_sfp_div__126__b_ext[2U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__126__b_ext[3U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__126__result = 0ULL;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1575, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1575)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1577, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_1576, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1577);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1576[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1576[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1576[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1576[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1579, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1579)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1581, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_1580, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1581);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1580[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1580[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1580[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1580[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1583, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1583)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1585, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_1584, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1585);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1584[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1584[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1584[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1584[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1587, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1587)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1589, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_1588, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1589);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1588[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1588[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1588[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1588[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1591, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1591)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1593, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_1592, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1593);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1592[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1592[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1592[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1592[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1595, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1595)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1597, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_1596, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1597);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1596[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1596[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1596[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1596[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1599, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1599)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1601, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_1600, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1601);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1600[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1600[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1600[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1600[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1603, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1603)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1605, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_1604, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1605);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1604[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1604[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1604[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1604[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1607, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1607)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1609, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_1608, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1609);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1608[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1608[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1608[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1608[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1611, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1611)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1613, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_1612, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1613);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1612[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1612[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1612[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1612[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1615, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1615)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1617, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_1616, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1617);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1616[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1616[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1616[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1616[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1619, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1619)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1621, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_1620, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1621);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1620[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1620[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1620[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1620[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1623, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1623)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1625, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_1624, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1625);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1624[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1624[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1624[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1624[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1627, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1627)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1629, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_1628, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1629);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1628[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1628[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1628[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1628[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1631, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1631)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1633, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_1632, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1633);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1632[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1632[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1632[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1632[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1635, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1635)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1637, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_1636, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1637);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1636[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1636[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1636[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1636[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1639, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1639)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1641, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_1640, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1641);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1640[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1640[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1640[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1640[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1643, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1643)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1645, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_1644, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1645);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1644[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1644[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1644[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1644[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1647, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1647)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1649, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_1648, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1649);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1648[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1648[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1648[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1648[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1651, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1651)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1653, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_1652, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1653);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1652[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1652[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1652[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1652[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1655, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1655)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1657, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_1656, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1657);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1656[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1656[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1656[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1656[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1659, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1659)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1661, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_1660, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1661);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1660[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1660[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1660[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1660[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1663, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1663)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1665, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_1664, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1665);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1664[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1664[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1664[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1664[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1667, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1667)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1669, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_1668, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1669);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1668[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1668[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1668[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1668[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1671, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1671)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1673, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_1672, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1673);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1672[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1672[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1672[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1672[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1675, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1675)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1677, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_1676, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1677);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1676[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1676[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1676[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1676[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1679, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1679)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1681, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_1680, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1681);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1680[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1680[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1680[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1680[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1683, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1683)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1685, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_1684, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1685);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1684[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1684[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1684[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1684[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1687, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1687)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1689, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_1688, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1689);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1688[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1688[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1688[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1688[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1691, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1691)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1693, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_1692, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1693);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1692[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1692[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1692[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1692[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1695, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1695)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1697, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_1696, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1697);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1696[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1696[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1696[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1696[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1699, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1699)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1701, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_1700, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1701);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1700[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1700[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1700[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1700[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1703, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1703)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1705, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_1704, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1705);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1704[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1704[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1704[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1704[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1707, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1707)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1709, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_1708, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1709);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1708[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1708[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1708[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1708[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1711, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1711)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1713, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_1712, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1713);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1712[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1712[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1712[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1712[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1715, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1715)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1717, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_1716, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1717);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1716[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1716[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1716[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1716[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1719, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1719)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1721, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_1720, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1721);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1720[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1720[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1720[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1720[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1723, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1723)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1725, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_1724, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1725);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1724[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1724[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1724[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1724[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1727, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1727)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1729, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_1728, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1729);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1728[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1728[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1728[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1728[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1731, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1731)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1733, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_1732, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1733);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1732[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1732[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1732[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1732[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1735, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1735)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1737, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_1736, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1737);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1736[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1736[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1736[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1736[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1739, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1739)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1741, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_1740, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1741);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1740[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1740[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1740[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1740[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1743, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1743)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1745, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_1744, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1745);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1744[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1744[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1744[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1744[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1747, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1747)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1749, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_1748, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1749);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1748[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1748[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1748[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1748[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1751, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1751)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1753, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_1752, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1753);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1752[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1752[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1752[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1752[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1755, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1755)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1757, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_1756, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1757);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1756[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1756[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1756[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1756[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1759, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1759)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1761, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_1760, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1761);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1760[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1760[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1760[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1760[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1763, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1763)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1765, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_1764, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1765);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1764[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1764[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1764[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1764[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1767, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1767)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1769, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_1768, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1769);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1768[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1768[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1768[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1768[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1771, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1771)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1773, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_1772, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1773);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1772[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1772[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1772[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1772[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1775, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1775)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1777, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_1776, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1777);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1776[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1776[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1776[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1776[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1779, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1779)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1781, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_1780, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1781);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1780[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1780[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1780[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1780[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1783, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1783)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1785, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_1784, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1785);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1784[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1784[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1784[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1784[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1787, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1787)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1789, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_1788, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1789);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1788[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1788[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1788[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1788[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1791, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1791)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1793, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_1792, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1793);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1792[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1792[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1792[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1792[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1795, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1795)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1797, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_1796, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1797);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1796[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1796[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1796[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1796[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1799, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1799)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1801, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_1800, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1801);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1800[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1800[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1800[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1800[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1803, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1803)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1805, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_1804, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1805);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1804[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1804[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1804[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1804[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1807, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1807)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1809, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_1808, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1809);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1808[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1808[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1808[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1808[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1811, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1811)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1813, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_1812, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1813);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1812[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1812[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1812[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1812[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1815, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1815)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1817, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_1816, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1817);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1816[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1816[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1816[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1816[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1819, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1819)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1821, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_1820, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1821);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1820[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1820[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1820[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1820[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1823, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1823)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_1825, vlSelfRef.__Vfunc_sfp_div__126__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_1824, vlSelfRef.__Vfunc_sfp_div__126__remainder, __Vtemp_1825);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1824[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1824[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1824[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1824[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__126__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__126__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__126__remainder, vlSelfRef.__Vfunc_sfp_div__126__b_ext)) {
                        VL_SUB_W(4, __Vtemp_1827, vlSelfRef.__Vfunc_sfp_div__126__remainder, vlSelfRef.__Vfunc_sfp_div__126__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[0U] 
                            = __Vtemp_1827[0U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[1U] 
                            = __Vtemp_1827[1U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[2U] 
                            = __Vtemp_1827[2U];
                        vlSelfRef.__Vfunc_sfp_div__126__remainder[3U] 
                            = __Vtemp_1827[3U];
                        vlSelfRef.__Vfunc_sfp_div__126__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__126__result);
                    }
                    __Vfunc_sfp_div__126__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__126__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__126__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__126__result)
                            : vlSelfRef.__Vfunc_sfp_div__126__result);
                    __Vlabel177: ;
                }
                vlSelfRef.__Vfunc_sfp_exp__125__term 
                    = vlSelfRef.__Vfunc_sfp_div__126__Vfuncout;
                vlSelfRef.__Vfunc_sfp_add__129__b = vlSelfRef.__Vfunc_sfp_exp__125__term;
                vlSelfRef.__Vfunc_sfp_add__129__a = vlSelfRef.__Vfunc_sfp_exp__125__result;
                vlSelfRef.__Vfunc_sfp_add__129__Vfuncout 
                    = (vlSelfRef.__Vfunc_sfp_add__129__a 
                       + vlSelfRef.__Vfunc_sfp_add__129__b);
                vlSelfRef.__Vfunc_sfp_exp__125__result 
                    = vlSelfRef.__Vfunc_sfp_add__129__Vfuncout;
                vlSelfRef.__Vfunc_sfp_exp__125__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_exp__125__unnamedblk2__DOT__i);
            }
            vlSelfRef.__Vfunc_sfp_exp__125__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_exp__125__result;
            vlSelfRef.__Vfunc_sfp_add__124__b = vlSelfRef.__Vfunc_sfp_exp__125__Vfuncout;
            vlSelfRef.__Vfunc_sfp_add__124__a = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_add__124__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_add__124__a 
                   + vlSelfRef.__Vfunc_sfp_add__124__b);
            vlSelfRef.__Vfunc_sfp_div__123__b = vlSelfRef.__Vfunc_sfp_add__124__Vfuncout;
            vlSelfRef.__Vfunc_int_to_sfp__130__n = 2U;
            vlSelfRef.__Vfunc_int_to_sfp__130__Vfuncout 
                = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__130__n), 0x20U);
            vlSelfRef.__Vfunc_sfp_div__123__a = vlSelfRef.__Vfunc_int_to_sfp__130__Vfuncout;
            __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0;
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__123__remainder);
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__123__b_ext);
            vlSelf->__Vfunc_sfp_div__123__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__123__sign_bit = VL_RAND_RESET_I(1);
            vlSelf->__Vfunc_sfp_div__123__abs_a = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__123__abs_b = VL_RAND_RESET_Q(64);
            {
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__123__b)) {
                    vlSelfRef.__Vfunc_sfp_div__123__Vfuncout 
                        = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__123__a)
                            ? 0x7fffffffffffffffULL
                            : 0x8000000000000000ULL);
                    goto __Vlabel178;
                }
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__123__a)) {
                    vlSelfRef.__Vfunc_sfp_div__123__Vfuncout = 0ULL;
                    goto __Vlabel178;
                }
                vlSelfRef.__Vfunc_sfp_div__123__abs_a 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__123__a 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__123__a)
                        : vlSelfRef.__Vfunc_sfp_div__123__a);
                vlSelfRef.__Vfunc_sfp_div__123__abs_b 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__123__b 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__123__b)
                        : vlSelfRef.__Vfunc_sfp_div__123__b);
                vlSelfRef.__Vfunc_sfp_div__123__sign_bit 
                    = (IData)(((vlSelfRef.__Vfunc_sfp_div__123__a 
                                ^ vlSelfRef.__Vfunc_sfp_div__123__b) 
                               >> 0x3fU));
                __Vtemp_1829[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__123__abs_a);
                __Vtemp_1829[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__123__abs_a 
                                            >> 0x20U));
                __Vtemp_1829[2U] = 0U;
                __Vtemp_1829[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1829, 0x20U);
                vlSelfRef.__Vfunc_sfp_div__123__b_ext[0U] 
                    = (IData)(vlSelfRef.__Vfunc_sfp_div__123__abs_b);
                vlSelfRef.__Vfunc_sfp_div__123__b_ext[1U] 
                    = (IData)((vlSelfRef.__Vfunc_sfp_div__123__abs_b 
                               >> 0x20U));
                vlSelfRef.__Vfunc_sfp_div__123__b_ext[2U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__123__b_ext[3U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__123__result = 0ULL;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1831, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1831)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1833, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_1832, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1833);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1832[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1832[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1832[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1832[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1835, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1835)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1837, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_1836, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1837);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1836[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1836[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1836[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1836[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1839, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1839)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1841, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_1840, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1841);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1840[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1840[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1840[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1840[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1843, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1843)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1845, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_1844, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1845);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1844[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1844[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1844[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1844[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1847, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1847)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1849, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_1848, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1849);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1848[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1848[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1848[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1848[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1851, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1851)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1853, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_1852, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1853);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1852[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1852[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1852[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1852[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1855, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1855)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1857, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_1856, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1857);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1856[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1856[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1856[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1856[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1859, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1859)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1861, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_1860, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1861);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1860[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1860[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1860[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1860[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1863, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1863)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1865, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_1864, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1865);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1864[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1864[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1864[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1864[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1867, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1867)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1869, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_1868, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1869);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1868[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1868[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1868[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1868[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1871, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1871)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1873, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_1872, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1873);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1872[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1872[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1872[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1872[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1875, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1875)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1877, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_1876, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1877);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1876[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1876[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1876[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1876[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1879, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1879)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1881, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_1880, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1881);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1880[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1880[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1880[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1880[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1883, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1883)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1885, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_1884, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1885);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1884[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1884[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1884[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1884[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1887, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1887)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1889, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_1888, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1889);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1888[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1888[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1888[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1888[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1891, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1891)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1893, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_1892, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1893);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1892[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1892[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1892[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1892[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1895, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1895)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1897, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_1896, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1897);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1896[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1896[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1896[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1896[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1899, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1899)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1901, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_1900, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1901);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1900[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1900[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1900[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1900[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1903, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1903)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1905, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_1904, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1905);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1904[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1904[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1904[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1904[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1907, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1907)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1909, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_1908, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1909);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1908[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1908[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1908[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1908[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1911, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1911)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1913, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_1912, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1913);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1912[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1912[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1912[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1912[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1915, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1915)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1917, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_1916, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1917);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1916[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1916[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1916[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1916[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1919, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1919)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1921, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_1920, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1921);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1920[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1920[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1920[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1920[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1923, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1923)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1925, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_1924, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1925);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1924[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1924[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1924[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1924[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1927, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1927)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1929, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_1928, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1929);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1928[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1928[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1928[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1928[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1931, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1931)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1933, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_1932, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1933);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1932[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1932[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1932[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1932[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1935, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1935)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1937, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_1936, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1937);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1936[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1936[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1936[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1936[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1939, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1939)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1941, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_1940, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1941);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1940[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1940[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1940[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1940[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1943, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1943)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1945, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_1944, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1945);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1944[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1944[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1944[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1944[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1947, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1947)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1949, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_1948, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1949);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1948[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1948[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1948[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1948[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1951, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1951)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1953, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_1952, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1953);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1952[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1952[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1952[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1952[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1955, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1955)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1957, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_1956, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1957);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1956[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1956[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1956[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1956[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1959, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1959)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1961, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_1960, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1961);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1960[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1960[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1960[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1960[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1963, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1963)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1965, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_1964, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1965);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1964[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1964[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1964[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1964[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1967, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1967)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1969, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_1968, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1969);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1968[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1968[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1968[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1968[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1971, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1971)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1973, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_1972, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1973);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1972[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1972[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1972[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1972[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1975, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1975)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1977, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_1976, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1977);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1976[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1976[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1976[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1976[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1979, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1979)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1981, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_1980, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1981);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1980[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1980[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1980[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1980[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1983, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1983)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1985, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_1984, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1985);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1984[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1984[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1984[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1984[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1987, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1987)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1989, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_1988, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1989);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1988[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1988[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1988[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1988[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1991, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1991)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1993, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_1992, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1993);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1992[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1992[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1992[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1992[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1995, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1995)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1997, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_1996, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1997);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_1996[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_1996[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_1996[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_1996[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1999, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_1999)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2001, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_2000, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2001);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2000[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2000[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2000[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2000[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2003, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2003)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2005, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_2004, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2005);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2004[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2004[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2004[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2004[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2007, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2007)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2009, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_2008, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2009);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2008[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2008[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2008[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2008[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2011, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2011)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2013, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_2012, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2013);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2012[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2012[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2012[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2012[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2015, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2015)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2017, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_2016, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2017);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2016[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2016[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2016[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2016[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2019, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2019)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2021, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_2020, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2021);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2020[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2020[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2020[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2020[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2023, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2023)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2025, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_2024, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2025);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2024[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2024[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2024[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2024[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2027, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2027)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2029, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_2028, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2029);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2028[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2028[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2028[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2028[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2031, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2031)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2033, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_2032, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2033);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2032[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2032[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2032[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2032[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2035, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2035)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2037, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_2036, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2037);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2036[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2036[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2036[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2036[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2039, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2039)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2041, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_2040, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2041);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2040[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2040[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2040[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2040[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2043, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2043)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2045, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_2044, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2045);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2044[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2044[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2044[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2044[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2047, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2047)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2049, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_2048, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2049);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2048[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2048[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2048[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2048[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2051, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2051)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2053, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_2052, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2053);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2052[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2052[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2052[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2052[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2055, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2055)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2057, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_2056, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2057);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2056[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2056[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2056[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2056[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2059, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2059)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2061, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_2060, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2061);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2060[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2060[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2060[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2060[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2063, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2063)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2065, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_2064, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2065);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2064[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2064[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2064[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2064[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2067, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2067)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2069, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_2068, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2069);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2068[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2068[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2068[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2068[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2071, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2071)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2073, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_2072, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2073);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2072[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2072[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2072[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2072[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2075, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2075)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2077, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_2076, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2077);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2076[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2076[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2076[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2076[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_2079, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2079)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_2081, vlSelfRef.__Vfunc_sfp_div__123__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_2080, vlSelfRef.__Vfunc_sfp_div__123__remainder, __Vtemp_2081);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2080[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2080[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2080[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2080[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__123__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__123__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__123__remainder, vlSelfRef.__Vfunc_sfp_div__123__b_ext)) {
                    VL_SUB_W(4, __Vtemp_2083, vlSelfRef.__Vfunc_sfp_div__123__remainder, vlSelfRef.__Vfunc_sfp_div__123__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[0U] 
                        = __Vtemp_2083[0U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[1U] 
                        = __Vtemp_2083[1U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[2U] 
                        = __Vtemp_2083[2U];
                    vlSelfRef.__Vfunc_sfp_div__123__remainder[3U] 
                        = __Vtemp_2083[3U];
                    vlSelfRef.__Vfunc_sfp_div__123__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__123__result);
                }
                __Vfunc_sfp_div__123__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_sfp_div__123__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_sfp_div__123__sign_bit)
                        ? (- vlSelfRef.__Vfunc_sfp_div__123__result)
                        : vlSelfRef.__Vfunc_sfp_div__123__result);
                __Vlabel178: ;
            }
            vlSelfRef.__Vfunc_sfp_sub__122__a = vlSelfRef.__Vfunc_sfp_div__123__Vfuncout;
            vlSelfRef.__Vfunc_sfp_sub__122__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_sub__122__a 
                   - vlSelfRef.__Vfunc_sfp_sub__122__b);
            vlSelfRef.__Vfunc_sfp_tanh__119__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_sub__122__Vfuncout;
            __Vlabel176: ;
        }
        vlSelfRef.__Vfunc_sfp_mul__106__a = vlSelfRef.__Vfunc_sfp_tanh__119__Vfuncout;
        VL_EXTENDS_WQ(128,64, __Vtemp_2084, vlSelfRef.__Vfunc_sfp_mul__106__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_2085, vlSelfRef.__Vfunc_sfp_mul__106__b);
        VL_MULS_WWW(128, __Vtemp_2086, __Vtemp_2084, __Vtemp_2085);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__106__tmp, __Vtemp_2086, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__106__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__106__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__106__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_sub__105__b = vlSelfRef.__Vfunc_sfp_mul__106__Vfuncout;
        vlSelfRef.__Vfunc_sfp_sub__105__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.__Vfunc_sfp_sub__105__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__105__a - vlSelfRef.__Vfunc_sfp_sub__105__b);
        vlSelfRef.__Vfunc_sfp_mul__104__b = vlSelfRef.__Vfunc_sfp_sub__105__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__104__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer
            [1U];
        VL_EXTENDS_WQ(128,64, __Vtemp_2087, vlSelfRef.__Vfunc_sfp_mul__104__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_2088, vlSelfRef.__Vfunc_sfp_mul__104__b);
        VL_MULS_WWW(128, __Vtemp_2089, __Vtemp_2087, __Vtemp_2088);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__104__tmp, __Vtemp_2089, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__104__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__104__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__104__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__103__b = vlSelfRef.__Vfunc_sfp_mul__104__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__103__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights
            [1U];
        VL_EXTENDS_WQ(128,64, __Vtemp_2090, vlSelfRef.__Vfunc_sfp_mul__103__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_2091, vlSelfRef.__Vfunc_sfp_mul__103__b);
        VL_MULS_WWW(128, __Vtemp_2092, __Vtemp_2090, __Vtemp_2091);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__103__tmp, __Vtemp_2092, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__103__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__103__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__103__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__102__b = vlSelfRef.__Vfunc_sfp_mul__103__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__102__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__102__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__102__a + vlSelfRef.__Vfunc_sfp_add__102__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__102__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 2U;
    } else if ((3U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_mul__132__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_2093, vlSelfRef.__Vfunc_sfp_mul__132__a);
        vlSelfRef.__Vfunc_sfp_mul__132__b = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__sum)
                                              ? vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer
                                             [0U] : 0ULL);
        VL_EXTENDS_WQ(128,64, __Vtemp_2094, vlSelfRef.__Vfunc_sfp_mul__132__b);
        vlSelfRef.__Vfunc_sfp_mul__132__b = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__sum)
                                              ? vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer
                                             [1U] : 0ULL);
        VL_MULS_WWW(128, __Vtemp_2095, __Vtemp_2093, __Vtemp_2094);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__132__tmp, __Vtemp_2095, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__132__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__132__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__132__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__131__b = vlSelfRef.__Vfunc_sfp_mul__132__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__131__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__131__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__131__a + vlSelfRef.__Vfunc_sfp_add__131__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__131__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__132__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights
            [1U];
        VL_EXTENDS_WQ(128,64, __Vtemp_2096, vlSelfRef.__Vfunc_sfp_mul__132__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_2097, vlSelfRef.__Vfunc_sfp_mul__132__b);
        VL_MULS_WWW(128, __Vtemp_2098, __Vtemp_2096, __Vtemp_2097);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__132__tmp, __Vtemp_2098, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__132__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__132__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__132__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__131__b = vlSelfRef.__Vfunc_sfp_mul__132__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__131__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__131__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__131__a + vlSelfRef.__Vfunc_sfp_add__131__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__131__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 2U;
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    }
    __Vfunc_sfp_mul__133__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__values
        [0U];
    __Vfunc_sfp_mul__133__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_2099, __Vfunc_sfp_mul__133__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_2100, __Vfunc_sfp_mul__133__b);
    VL_MULS_WWW(128, __Vtemp_2101, __Vtemp_2099, __Vtemp_2100);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__133__tmp, __Vtemp_2101, 0x20U);
    __Vfunc_sfp_mul__133__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__133__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__133__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__133__Vfuncout;
    __Vfunc_sfp_mul__133__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__values
        [1U];
    __Vfunc_sfp_mul__133__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_2102, __Vfunc_sfp_mul__133__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_2103, __Vfunc_sfp_mul__133__b);
    VL_MULS_WWW(128, __Vtemp_2104, __Vtemp_2102, __Vtemp_2103);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__133__tmp, __Vtemp_2104, 0x20U);
    __Vfunc_sfp_mul__133__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__133__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__133__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__133__Vfuncout;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i = 2U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients[0U][1U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient;
}
