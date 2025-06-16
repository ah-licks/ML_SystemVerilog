// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron__Syms.h"
#include "VPerceptron___024root.h"

VL_INLINE_OPT void VPerceptron___024root___nba_comb__TOP__0(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___nba_comb__TOP__0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_sfp_div__165__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_sfp_div__168__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_sfp_div__177__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_sfp_div__180__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__187__Vfuncout;
    __Vfunc_sfp_mul__187__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__187__a;
    __Vfunc_sfp_mul__187__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__187__b;
    __Vfunc_sfp_mul__187__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__187__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__187__tmp);
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
    VlWide<4>/*127:0*/ __Vtemp_778;
    VlWide<4>/*127:0*/ __Vtemp_779;
    VlWide<4>/*127:0*/ __Vtemp_781;
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
    VlWide<4>/*127:0*/ __Vtemp_1037;
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
    // Body
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    if ((1U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_sub__155__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction;
        vlSelfRef.__Vfunc_sfp_sub__155__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.__Vfunc_sfp_sub__155__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__155__a - vlSelfRef.__Vfunc_sfp_sub__155__b);
        vlSelfRef.__Vfunc_sfp_mul__154__b = vlSelfRef.__Vfunc_sfp_sub__155__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__154__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction;
        VL_EXTENDS_WQ(128,64, __Vtemp_1, vlSelfRef.__Vfunc_sfp_mul__154__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_2, vlSelfRef.__Vfunc_sfp_mul__154__b);
        VL_MULS_WWW(128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__154__tmp, __Vtemp_3, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__154__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__154__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__154__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__153__b = vlSelfRef.__Vfunc_sfp_mul__154__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__153__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_4, vlSelfRef.__Vfunc_sfp_mul__153__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_5, vlSelfRef.__Vfunc_sfp_mul__153__b);
        VL_MULS_WWW(128, __Vtemp_6, __Vtemp_4, __Vtemp_5);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__153__tmp, __Vtemp_6, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__153__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__153__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__153__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__152__b = vlSelfRef.__Vfunc_sfp_mul__153__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__152__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_7, vlSelfRef.__Vfunc_sfp_mul__152__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_8, vlSelfRef.__Vfunc_sfp_mul__152__b);
        VL_MULS_WWW(128, __Vtemp_9, __Vtemp_7, __Vtemp_8);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__152__tmp, __Vtemp_9, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__152__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__152__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__152__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__151__b = vlSelfRef.__Vfunc_sfp_mul__152__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__151__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__151__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__151__a + vlSelfRef.__Vfunc_sfp_add__151__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__151__Vfuncout;
    } else if ((2U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_tanh__161__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction;
        {
            if (VL_GTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__161__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__162__n = 3U;
                            vlSelfRef.__Vfunc_int_to_sfp__162__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__162__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__162__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__161__Vfuncout 
                    = vlSymsp->TOP__FixedPoint.ONE;
                goto __Vlabel113;
            }
            if (VL_LTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__161__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__163__n = 0xfffffffdU;
                            vlSelfRef.__Vfunc_int_to_sfp__163__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__163__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__163__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__161__Vfuncout 
                    = (- vlSymsp->TOP__FixedPoint.ONE);
                goto __Vlabel113;
            }
            vlSelfRef.__Vfunc_sfp_sub__164__b = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__167__a = VL_SHIFTL_QQI(64,64,32, 
                                                              (- vlSelfRef.__Vfunc_sfp_tanh__161__a), 1U);
            vlSelf->__Vfunc_sfp_exp__167__unnamedblk2__DOT__i = 0;
            vlSelf->__Vfunc_sfp_exp__167__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_exp__167__term = VL_RAND_RESET_Q(64);
            vlSelfRef.__Vfunc_sfp_exp__167__result 
                = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__167__term = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__167__unnamedblk2__DOT__i = 1U;
            while (VL_GTS_III(32, 0x14U, vlSelfRef.__Vfunc_sfp_exp__167__unnamedblk2__DOT__i)) {
                vlSelfRef.__Vfunc_int_to_sfp__169__n 
                    = vlSelfRef.__Vfunc_sfp_exp__167__unnamedblk2__DOT__i;
                vlSelfRef.__Vfunc_int_to_sfp__169__Vfuncout 
                    = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__169__n), 0x20U);
                vlSelfRef.__Vfunc_sfp_div__168__b = vlSelfRef.__Vfunc_int_to_sfp__169__Vfuncout;
                vlSelfRef.__Vfunc_sfp_mul__170__b = vlSelfRef.__Vfunc_sfp_exp__167__a;
                vlSelfRef.__Vfunc_sfp_mul__170__a = vlSelfRef.__Vfunc_sfp_exp__167__term;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__170__tmp);
                VL_EXTENDS_WQ(128,64, __Vtemp_10, vlSelfRef.__Vfunc_sfp_mul__170__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_11, vlSelfRef.__Vfunc_sfp_mul__170__b);
                VL_MULS_WWW(128, __Vtemp_12, __Vtemp_10, __Vtemp_11);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__170__tmp, __Vtemp_12, 0x20U);
                vlSelfRef.__Vfunc_sfp_mul__170__Vfuncout 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__170__tmp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__Vfunc_sfp_mul__170__tmp[0U])));
                vlSelfRef.__Vfunc_sfp_div__168__a = vlSelfRef.__Vfunc_sfp_mul__170__Vfuncout;
                __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__168__remainder);
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__168__b_ext);
                vlSelf->__Vfunc_sfp_div__168__result = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__168__sign_bit = VL_RAND_RESET_I(1);
                vlSelf->__Vfunc_sfp_div__168__abs_a = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__168__abs_b = VL_RAND_RESET_Q(64);
                {
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__168__b)) {
                        vlSelfRef.__Vfunc_sfp_div__168__Vfuncout 
                            = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__168__a)
                                ? 0x7fffffffffffffffULL
                                : 0x8000000000000000ULL);
                        goto __Vlabel114;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__168__a)) {
                        vlSelfRef.__Vfunc_sfp_div__168__Vfuncout = 0ULL;
                        goto __Vlabel114;
                    }
                    vlSelfRef.__Vfunc_sfp_div__168__abs_a 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__168__a 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__168__a)
                            : vlSelfRef.__Vfunc_sfp_div__168__a);
                    vlSelfRef.__Vfunc_sfp_div__168__abs_b 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__168__b 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__168__b)
                            : vlSelfRef.__Vfunc_sfp_div__168__b);
                    vlSelfRef.__Vfunc_sfp_div__168__sign_bit 
                        = (IData)(((vlSelfRef.__Vfunc_sfp_div__168__a 
                                    ^ vlSelfRef.__Vfunc_sfp_div__168__b) 
                                   >> 0x3fU));
                    __Vtemp_13[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__168__abs_a);
                    __Vtemp_13[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__168__abs_a 
                                              >> 0x20U));
                    __Vtemp_13[2U] = 0U;
                    __Vtemp_13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_13, 0x20U);
                    vlSelfRef.__Vfunc_sfp_div__168__b_ext[0U] 
                        = (IData)(vlSelfRef.__Vfunc_sfp_div__168__abs_b);
                    vlSelfRef.__Vfunc_sfp_div__168__b_ext[1U] 
                        = (IData)((vlSelfRef.__Vfunc_sfp_div__168__abs_b 
                                   >> 0x20U));
                    vlSelfRef.__Vfunc_sfp_div__168__b_ext[2U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__168__b_ext[3U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__168__result = 0ULL;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_15, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_15)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_17, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_16, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_17);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_16[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_16[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_16[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_16[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_19, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_19)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_21, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_20, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_21);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_20[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_20[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_20[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_20[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_23, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_23)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_25, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_24, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_25);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_24[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_24[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_24[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_24[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_27, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_27)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_29, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_28, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_29);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_28[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_28[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_28[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_28[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_31, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_31)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_33, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_32, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_33);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_32[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_32[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_32[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_32[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_35, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_35)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_37, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_36, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_37);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_36[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_36[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_36[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_36[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_39, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_39)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_41, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_40, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_41);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_40[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_40[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_40[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_40[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_43, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_43)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_45, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_44, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_45);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_44[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_44[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_44[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_44[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_47, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_47)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_49, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_48, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_49);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_48[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_48[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_48[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_48[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_51, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_51)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_53, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_52, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_53);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_52[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_52[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_52[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_52[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_55, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_55)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_57, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_56, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_57);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_56[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_56[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_56[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_56[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_59, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_59)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_61, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_60, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_61);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_60[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_60[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_60[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_60[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_63, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_63)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_65, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_64, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_65);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_64[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_64[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_64[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_64[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_67, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_67)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_69, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_68, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_69);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_68[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_68[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_68[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_68[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_71, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_71)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_73, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_72, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_73);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_72[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_72[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_72[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_72[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_75, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_75)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_77, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_76, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_77);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_76[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_76[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_76[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_76[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_79, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_79)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_81, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_80, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_81);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_80[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_80[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_80[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_80[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_83, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_83)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_85, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_84, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_85);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_84[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_84[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_84[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_84[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_87, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_87)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_89, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_88, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_89);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_88[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_88[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_88[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_88[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_91, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_91)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_93, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_92, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_93);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_92[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_92[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_92[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_92[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_95, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_95)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_97, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_96, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_97);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_96[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_96[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_96[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_96[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_99, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_99)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_101, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_100, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_101);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_100[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_100[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_100[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_100[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_103, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_103)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_105, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_104, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_105);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_104[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_104[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_104[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_104[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_107, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_107)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_109, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_108, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_109);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_108[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_108[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_108[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_108[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_111, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_111)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_113, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_112, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_113);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_112[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_112[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_112[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_112[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_115, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_115)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_117, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_116, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_117);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_116[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_116[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_116[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_116[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_119, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_119)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_121, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_120, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_121);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_120[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_120[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_120[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_120[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_123, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_123)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_125, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_124, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_125);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_124[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_124[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_124[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_124[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_127, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_127)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_129, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_129);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_128[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_128[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_128[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_128[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_131, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_131)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_133, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_132, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_133);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_132[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_132[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_132[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_132[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_135, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_135)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_137, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_136, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_137);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_136[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_136[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_136[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_136[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_139, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_139)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_141, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_140, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_141);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_140[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_140[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_140[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_140[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_143, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_143)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_145, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_144, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_145);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_144[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_144[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_144[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_144[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_147, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_147)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_149, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_148, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_149);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_148[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_148[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_148[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_148[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_151, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_151)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_153, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_152, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_153);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_152[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_152[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_152[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_152[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_155, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_155)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_157, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_156, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_157);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_156[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_156[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_156[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_156[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_159, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_159)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_161, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_160, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_161);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_160[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_160[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_160[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_160[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_163, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_163)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_165, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_164, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_165);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_164[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_164[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_164[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_164[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_167, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_167)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_169, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_168, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_169);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_168[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_168[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_168[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_168[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_171, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_171)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_173, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_172, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_173);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_172[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_172[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_172[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_172[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_175, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_175)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_177, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_176, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_177);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_176[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_176[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_176[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_176[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_179, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_179)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_181, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_180, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_181);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_180[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_180[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_180[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_180[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_183, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_183)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_185, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_184, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_185);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_184[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_184[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_184[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_184[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_187, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_187)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_189, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_188, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_189);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_188[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_188[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_188[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_188[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_191, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_191)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_193, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_192, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_193);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_192[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_192[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_192[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_192[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_195, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_195)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_197, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_196, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_197);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_196[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_196[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_196[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_196[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_199, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_199)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_201, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_200, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_201);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_200[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_200[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_200[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_200[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_203, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_203)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_205, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_204, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_205);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_204[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_204[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_204[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_204[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_207, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_207)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_209, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_208, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_209);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_208[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_208[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_208[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_208[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_211, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_211)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_213, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_212, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_213);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_212[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_212[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_212[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_212[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_215, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_215)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_217, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_216, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_217);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_216[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_216[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_216[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_216[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_219, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_219)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_221, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_220, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_221);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_220[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_220[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_220[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_220[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_223, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_223)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_225, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_224, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_225);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_224[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_224[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_224[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_224[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_227, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_227)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_229, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_228, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_229);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_228[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_228[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_228[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_228[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_231, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_231)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_233, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_232, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_233);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_232[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_232[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_232[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_232[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_235, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_235)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_237, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_236, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_237);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_236[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_236[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_236[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_236[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_239, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_239)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_241, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_240, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_241);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_240[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_240[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_240[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_240[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_243, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_243)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_245, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_244, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_245);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_244[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_244[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_244[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_244[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_247, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_247)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_249, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_248, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_249);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_248[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_248[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_248[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_248[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_251, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_251)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_253, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_252, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_253);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_252[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_252[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_252[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_252[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_255, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_255)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_257, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_256, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_257);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_256[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_256[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_256[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_256[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_259, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_259)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_261, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_260, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_261);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_260[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_260[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_260[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_260[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_263, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_263)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_265, vlSelfRef.__Vfunc_sfp_div__168__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_264, vlSelfRef.__Vfunc_sfp_div__168__remainder, __Vtemp_265);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_264[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_264[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_264[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_264[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__168__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__168__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__168__remainder, vlSelfRef.__Vfunc_sfp_div__168__b_ext)) {
                        VL_SUB_W(4, __Vtemp_267, vlSelfRef.__Vfunc_sfp_div__168__remainder, vlSelfRef.__Vfunc_sfp_div__168__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[0U] 
                            = __Vtemp_267[0U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[1U] 
                            = __Vtemp_267[1U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[2U] 
                            = __Vtemp_267[2U];
                        vlSelfRef.__Vfunc_sfp_div__168__remainder[3U] 
                            = __Vtemp_267[3U];
                        vlSelfRef.__Vfunc_sfp_div__168__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__168__result);
                    }
                    __Vfunc_sfp_div__168__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__168__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__168__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__168__result)
                            : vlSelfRef.__Vfunc_sfp_div__168__result);
                    __Vlabel114: ;
                }
                vlSelfRef.__Vfunc_sfp_exp__167__term 
                    = vlSelfRef.__Vfunc_sfp_div__168__Vfuncout;
                vlSelfRef.__Vfunc_sfp_add__171__b = vlSelfRef.__Vfunc_sfp_exp__167__term;
                vlSelfRef.__Vfunc_sfp_add__171__a = vlSelfRef.__Vfunc_sfp_exp__167__result;
                vlSelfRef.__Vfunc_sfp_add__171__Vfuncout 
                    = (vlSelfRef.__Vfunc_sfp_add__171__a 
                       + vlSelfRef.__Vfunc_sfp_add__171__b);
                vlSelfRef.__Vfunc_sfp_exp__167__result 
                    = vlSelfRef.__Vfunc_sfp_add__171__Vfuncout;
                vlSelfRef.__Vfunc_sfp_exp__167__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_exp__167__unnamedblk2__DOT__i);
            }
            vlSelfRef.__Vfunc_sfp_exp__167__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_exp__167__result;
            vlSelfRef.__Vfunc_sfp_add__166__b = vlSelfRef.__Vfunc_sfp_exp__167__Vfuncout;
            vlSelfRef.__Vfunc_sfp_add__166__a = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_add__166__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_add__166__a 
                   + vlSelfRef.__Vfunc_sfp_add__166__b);
            vlSelfRef.__Vfunc_sfp_div__165__b = vlSelfRef.__Vfunc_sfp_add__166__Vfuncout;
            vlSelfRef.__Vfunc_int_to_sfp__172__n = 2U;
            vlSelfRef.__Vfunc_int_to_sfp__172__Vfuncout 
                = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__172__n), 0x20U);
            vlSelfRef.__Vfunc_sfp_div__165__a = vlSelfRef.__Vfunc_int_to_sfp__172__Vfuncout;
            __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0;
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__165__remainder);
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__165__b_ext);
            vlSelf->__Vfunc_sfp_div__165__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__165__sign_bit = VL_RAND_RESET_I(1);
            vlSelf->__Vfunc_sfp_div__165__abs_a = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__165__abs_b = VL_RAND_RESET_Q(64);
            {
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__165__b)) {
                    vlSelfRef.__Vfunc_sfp_div__165__Vfuncout 
                        = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__165__a)
                            ? 0x7fffffffffffffffULL
                            : 0x8000000000000000ULL);
                    goto __Vlabel115;
                }
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__165__a)) {
                    vlSelfRef.__Vfunc_sfp_div__165__Vfuncout = 0ULL;
                    goto __Vlabel115;
                }
                vlSelfRef.__Vfunc_sfp_div__165__abs_a 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__165__a 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__165__a)
                        : vlSelfRef.__Vfunc_sfp_div__165__a);
                vlSelfRef.__Vfunc_sfp_div__165__abs_b 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__165__b 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__165__b)
                        : vlSelfRef.__Vfunc_sfp_div__165__b);
                vlSelfRef.__Vfunc_sfp_div__165__sign_bit 
                    = (IData)(((vlSelfRef.__Vfunc_sfp_div__165__a 
                                ^ vlSelfRef.__Vfunc_sfp_div__165__b) 
                               >> 0x3fU));
                __Vtemp_269[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__165__abs_a);
                __Vtemp_269[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__165__abs_a 
                                           >> 0x20U));
                __Vtemp_269[2U] = 0U;
                __Vtemp_269[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_269, 0x20U);
                vlSelfRef.__Vfunc_sfp_div__165__b_ext[0U] 
                    = (IData)(vlSelfRef.__Vfunc_sfp_div__165__abs_b);
                vlSelfRef.__Vfunc_sfp_div__165__b_ext[1U] 
                    = (IData)((vlSelfRef.__Vfunc_sfp_div__165__abs_b 
                               >> 0x20U));
                vlSelfRef.__Vfunc_sfp_div__165__b_ext[2U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__165__b_ext[3U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__165__result = 0ULL;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_271, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_271)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_273, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_272, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_273);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_272[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_272[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_272[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_272[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_275, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_275)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_277, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_276, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_277);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_276[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_276[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_276[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_276[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_279, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_279)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_281, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_280, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_281);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_280[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_280[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_280[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_280[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_283, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_283)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_285, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_284, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_285);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_284[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_284[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_284[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_284[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_287, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_287)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_289, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_288, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_289);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_288[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_288[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_288[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_288[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_291, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_291)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_293, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_292, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_293);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_292[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_292[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_292[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_292[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_295, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_295)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_297, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_296, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_297);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_296[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_296[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_296[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_296[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_299, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_299)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_301, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_300, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_301);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_300[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_300[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_300[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_300[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_303, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_303)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_305, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_304, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_305);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_304[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_304[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_304[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_304[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_307, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_307)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_309, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_308, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_309);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_308[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_308[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_308[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_308[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_311, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_311)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_313, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_312, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_313);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_312[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_312[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_312[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_312[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_315, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_315)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_317, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_316, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_317);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_316[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_316[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_316[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_316[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_319, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_319)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_321, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_320, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_321);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_320[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_320[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_320[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_320[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_323, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_323)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_325, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_324, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_325);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_324[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_324[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_324[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_324[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_327, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_327)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_329, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_328, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_329);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_328[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_328[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_328[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_328[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_331, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_331)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_333, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_332, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_333);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_332[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_332[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_332[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_332[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_335, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_335)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_337, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_336, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_337);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_336[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_336[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_336[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_336[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_339, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_339)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_341, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_340, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_341);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_340[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_340[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_340[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_340[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_343, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_343)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_345, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_344, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_345);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_344[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_344[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_344[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_344[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_347, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_347)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_349, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_348, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_349);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_348[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_348[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_348[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_348[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_351, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_351)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_353, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_352, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_353);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_352[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_352[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_352[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_352[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_355, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_355)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_357, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_356, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_357);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_356[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_356[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_356[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_356[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_359, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_359)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_361, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_360, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_361);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_360[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_360[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_360[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_360[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_363, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_363)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_365, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_364, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_365);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_364[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_364[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_364[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_364[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_367, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_367)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_369, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_368, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_369);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_368[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_368[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_368[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_368[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_371, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_371)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_373, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_372, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_373);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_372[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_372[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_372[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_372[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_375, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_375)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_377, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_376, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_377);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_376[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_376[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_376[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_376[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_379, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_379)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_381, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_380, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_381);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_380[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_380[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_380[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_380[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_383, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_383)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_385, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_384, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_385);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_384[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_384[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_384[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_384[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_387, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_387)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_389, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_388, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_389);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_388[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_388[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_388[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_388[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_391, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_391)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_393, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_392, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_393);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_392[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_392[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_392[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_392[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_395, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_395)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_397, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_396, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_397);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_396[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_396[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_396[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_396[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_399, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_399)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_401, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_400, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_401);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_400[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_400[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_400[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_400[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_403, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_403)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_405, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_404, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_405);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_404[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_404[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_404[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_404[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_407, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_407)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_409, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_408, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_409);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_408[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_408[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_408[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_408[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_411, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_411)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_413, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_412, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_413);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_412[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_412[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_412[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_412[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_415, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_415)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_417, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_416, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_417);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_416[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_416[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_416[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_416[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_419, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_419)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_421, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_420, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_421);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_420[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_420[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_420[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_420[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_423, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_423)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_425, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_424, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_425);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_424[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_424[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_424[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_424[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_427, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_427)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_429, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_428, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_429);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_428[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_428[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_428[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_428[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_431, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_431)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_433, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_432, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_433);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_432[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_432[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_432[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_432[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_435, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_435)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_437, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_436, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_437);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_436[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_436[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_436[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_436[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_439, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_439)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_441, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_440, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_441);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_440[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_440[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_440[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_440[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_443, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_443)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_445, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_444, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_445);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_444[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_444[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_444[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_444[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_447, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_447)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_449, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_448, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_449);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_448[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_448[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_448[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_448[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_451, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_451)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_453, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_452, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_453);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_452[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_452[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_452[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_452[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_455, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_455)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_457, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_456, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_457);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_456[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_456[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_456[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_456[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_459, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_459)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_461, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_460, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_461);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_460[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_460[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_460[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_460[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_463, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_463)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_465, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_464, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_465);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_464[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_464[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_464[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_464[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_467, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_467)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_469, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_468, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_469);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_468[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_468[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_468[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_468[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_471, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_471)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_473, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_472, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_473);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_472[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_472[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_472[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_472[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_475, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_475)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_477, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_476, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_477);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_476[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_476[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_476[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_476[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_479, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_479)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_481, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_480, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_481);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_480[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_480[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_480[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_480[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_483, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_483)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_485, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_484, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_485);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_484[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_484[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_484[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_484[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_487, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_487)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_489, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_488, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_489);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_488[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_488[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_488[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_488[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_491, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_491)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_493, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_492, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_493);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_492[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_492[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_492[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_492[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_495, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_495)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_497, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_496, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_497);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_496[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_496[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_496[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_496[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_499, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_499)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_501, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_500, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_501);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_500[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_500[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_500[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_500[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_503, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_503)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_505, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_504, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_505);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_504[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_504[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_504[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_504[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_507, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_507)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_509, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_508, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_509);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_508[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_508[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_508[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_508[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_511, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_511)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_513, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_512, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_513);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_512[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_512[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_512[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_512[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_515, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_515)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_517, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_516, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_517);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_516[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_516[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_516[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_516[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_519, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_519)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_521, vlSelfRef.__Vfunc_sfp_div__165__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_520, vlSelfRef.__Vfunc_sfp_div__165__remainder, __Vtemp_521);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_520[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_520[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_520[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_520[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__165__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__165__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__165__remainder, vlSelfRef.__Vfunc_sfp_div__165__b_ext)) {
                    VL_SUB_W(4, __Vtemp_523, vlSelfRef.__Vfunc_sfp_div__165__remainder, vlSelfRef.__Vfunc_sfp_div__165__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[0U] 
                        = __Vtemp_523[0U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[1U] 
                        = __Vtemp_523[1U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[2U] 
                        = __Vtemp_523[2U];
                    vlSelfRef.__Vfunc_sfp_div__165__remainder[3U] 
                        = __Vtemp_523[3U];
                    vlSelfRef.__Vfunc_sfp_div__165__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__165__result);
                }
                __Vfunc_sfp_div__165__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_sfp_div__165__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_sfp_div__165__sign_bit)
                        ? (- vlSelfRef.__Vfunc_sfp_div__165__result)
                        : vlSelfRef.__Vfunc_sfp_div__165__result);
                __Vlabel115: ;
            }
            vlSelfRef.__Vfunc_sfp_sub__164__a = vlSelfRef.__Vfunc_sfp_div__165__Vfuncout;
            vlSelfRef.__Vfunc_sfp_sub__164__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_sub__164__a 
                   - vlSelfRef.__Vfunc_sfp_sub__164__b);
            vlSelfRef.__Vfunc_sfp_tanh__161__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_sub__164__Vfuncout;
            __Vlabel113: ;
        }
        vlSelfRef.__Vfunc_sfp_mul__160__b = vlSelfRef.__Vfunc_sfp_tanh__161__Vfuncout;
        vlSelfRef.__Vfunc_sfp_tanh__173__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction;
        {
            if (VL_GTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__173__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__174__n = 3U;
                            vlSelfRef.__Vfunc_int_to_sfp__174__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__174__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__174__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__173__Vfuncout 
                    = vlSymsp->TOP__FixedPoint.ONE;
                goto __Vlabel116;
            }
            if (VL_LTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__173__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__175__n = 0xfffffffdU;
                            vlSelfRef.__Vfunc_int_to_sfp__175__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__175__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__175__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__173__Vfuncout 
                    = (- vlSymsp->TOP__FixedPoint.ONE);
                goto __Vlabel116;
            }
            vlSelfRef.__Vfunc_sfp_sub__176__b = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__179__a = VL_SHIFTL_QQI(64,64,32, 
                                                              (- vlSelfRef.__Vfunc_sfp_tanh__173__a), 1U);
            vlSelf->__Vfunc_sfp_exp__179__unnamedblk2__DOT__i = 0;
            vlSelf->__Vfunc_sfp_exp__179__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_exp__179__term = VL_RAND_RESET_Q(64);
            vlSelfRef.__Vfunc_sfp_exp__179__result 
                = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__179__term = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__179__unnamedblk2__DOT__i = 1U;
            while (VL_GTS_III(32, 0x14U, vlSelfRef.__Vfunc_sfp_exp__179__unnamedblk2__DOT__i)) {
                vlSelfRef.__Vfunc_int_to_sfp__181__n 
                    = vlSelfRef.__Vfunc_sfp_exp__179__unnamedblk2__DOT__i;
                vlSelfRef.__Vfunc_int_to_sfp__181__Vfuncout 
                    = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__181__n), 0x20U);
                vlSelfRef.__Vfunc_sfp_div__180__b = vlSelfRef.__Vfunc_int_to_sfp__181__Vfuncout;
                vlSelfRef.__Vfunc_sfp_mul__182__b = vlSelfRef.__Vfunc_sfp_exp__179__a;
                vlSelfRef.__Vfunc_sfp_mul__182__a = vlSelfRef.__Vfunc_sfp_exp__179__term;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__182__tmp);
                VL_EXTENDS_WQ(128,64, __Vtemp_524, vlSelfRef.__Vfunc_sfp_mul__182__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_525, vlSelfRef.__Vfunc_sfp_mul__182__b);
                VL_MULS_WWW(128, __Vtemp_526, __Vtemp_524, __Vtemp_525);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__182__tmp, __Vtemp_526, 0x20U);
                vlSelfRef.__Vfunc_sfp_mul__182__Vfuncout 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__182__tmp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__Vfunc_sfp_mul__182__tmp[0U])));
                vlSelfRef.__Vfunc_sfp_div__180__a = vlSelfRef.__Vfunc_sfp_mul__182__Vfuncout;
                __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__180__remainder);
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__180__b_ext);
                vlSelf->__Vfunc_sfp_div__180__result = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__180__sign_bit = VL_RAND_RESET_I(1);
                vlSelf->__Vfunc_sfp_div__180__abs_a = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__180__abs_b = VL_RAND_RESET_Q(64);
                {
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__180__b)) {
                        vlSelfRef.__Vfunc_sfp_div__180__Vfuncout 
                            = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__180__a)
                                ? 0x7fffffffffffffffULL
                                : 0x8000000000000000ULL);
                        goto __Vlabel117;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__180__a)) {
                        vlSelfRef.__Vfunc_sfp_div__180__Vfuncout = 0ULL;
                        goto __Vlabel117;
                    }
                    vlSelfRef.__Vfunc_sfp_div__180__abs_a 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__180__a 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__180__a)
                            : vlSelfRef.__Vfunc_sfp_div__180__a);
                    vlSelfRef.__Vfunc_sfp_div__180__abs_b 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__180__b 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__180__b)
                            : vlSelfRef.__Vfunc_sfp_div__180__b);
                    vlSelfRef.__Vfunc_sfp_div__180__sign_bit 
                        = (IData)(((vlSelfRef.__Vfunc_sfp_div__180__a 
                                    ^ vlSelfRef.__Vfunc_sfp_div__180__b) 
                                   >> 0x3fU));
                    __Vtemp_527[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__180__abs_a);
                    __Vtemp_527[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__180__abs_a 
                                               >> 0x20U));
                    __Vtemp_527[2U] = 0U;
                    __Vtemp_527[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_527, 0x20U);
                    vlSelfRef.__Vfunc_sfp_div__180__b_ext[0U] 
                        = (IData)(vlSelfRef.__Vfunc_sfp_div__180__abs_b);
                    vlSelfRef.__Vfunc_sfp_div__180__b_ext[1U] 
                        = (IData)((vlSelfRef.__Vfunc_sfp_div__180__abs_b 
                                   >> 0x20U));
                    vlSelfRef.__Vfunc_sfp_div__180__b_ext[2U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__180__b_ext[3U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__180__result = 0ULL;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_529, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_529)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_531, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_530, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_531);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_530[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_530[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_530[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_530[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_533, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_533)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_535, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_534, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_535);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_534[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_534[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_534[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_534[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_537, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_537)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_539, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_538, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_539);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_538[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_538[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_538[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_538[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_541, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_541)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_543, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_542, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_543);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_542[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_542[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_542[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_542[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_545, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_545)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_547, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_546, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_547);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_546[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_546[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_546[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_546[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_549, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_549)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_551, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_550, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_551);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_550[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_550[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_550[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_550[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_553, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_553)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_555, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_554, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_555);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_554[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_554[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_554[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_554[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_557, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_557)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_559, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_558, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_559);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_558[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_558[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_558[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_558[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_561, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_561)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_563, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_562, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_563);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_562[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_562[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_562[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_562[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_565, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_565)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_567, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_566, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_567);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_566[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_566[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_566[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_566[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_569, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_569)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_571, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_570, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_571);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_570[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_570[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_570[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_570[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_573, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_573)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_575, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_574, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_575);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_574[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_574[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_574[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_574[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_577, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_577)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_579, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_578, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_579);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_578[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_578[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_578[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_578[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_581, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_581)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_583, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_582, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_583);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_582[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_582[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_582[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_582[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_585, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_585)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_587, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_586, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_587);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_586[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_586[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_586[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_586[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_589, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_589)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_591, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_590, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_591);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_590[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_590[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_590[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_590[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_593, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_593)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_595, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_594, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_595);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_594[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_594[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_594[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_594[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_597, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_597)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_599, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_598, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_599);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_598[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_598[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_598[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_598[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_601, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_601)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_603, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_602, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_603);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_602[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_602[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_602[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_602[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_605, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_605)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_607, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_606, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_607);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_606[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_606[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_606[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_606[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_609, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_609)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_611, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_610, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_611);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_610[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_610[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_610[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_610[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_613, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_613)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_615, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_614, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_615);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_614[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_614[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_614[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_614[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_617, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_617)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_619, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_618, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_619);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_618[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_618[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_618[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_618[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_621, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_621)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_623, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_622, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_623);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_622[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_622[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_622[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_622[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_625, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_625)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_627, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_626, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_627);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_626[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_626[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_626[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_626[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_629, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_629)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_631, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_630, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_631);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_630[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_630[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_630[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_630[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_633, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_633)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_635, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_634, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_635);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_634[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_634[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_634[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_634[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_637, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_637)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_639, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_638, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_639);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_638[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_638[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_638[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_638[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_641, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_641)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_643, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_642, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_643);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_642[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_642[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_642[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_642[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_645, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_645)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_647, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_646, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_647);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_646[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_646[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_646[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_646[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_649, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_649)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_651, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_650, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_651);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_650[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_650[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_650[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_650[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_653, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_653)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_655, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_654, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_655);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_654[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_654[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_654[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_654[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_657, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_657)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_659, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_658, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_659);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_658[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_658[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_658[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_658[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_661, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_661)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_663, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_662, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_663);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_662[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_662[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_662[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_662[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_665, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_665)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_667, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_666, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_667);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_666[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_666[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_666[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_666[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_669, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_669)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_671, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_670, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_671);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_670[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_670[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_670[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_670[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_673, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_673)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_675, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_674, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_675);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_674[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_674[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_674[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_674[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_677, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_677)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_679, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_678, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_679);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_678[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_678[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_678[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_678[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_681, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_681)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_683, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_682, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_683);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_682[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_682[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_682[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_682[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_685, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_685)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_687, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_686, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_687);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_686[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_686[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_686[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_686[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_689, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_689)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_691, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_690, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_691);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_690[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_690[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_690[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_690[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_693, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_693)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_695, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_694, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_695);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_694[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_694[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_694[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_694[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_697, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_697)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_699, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_698, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_699);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_698[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_698[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_698[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_698[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_701, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_701)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_703, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_702, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_703);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_702[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_702[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_702[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_702[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_705, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_705)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_707, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_706, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_707);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_706[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_706[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_706[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_706[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_709, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_709)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_711, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_710, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_711);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_710[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_710[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_710[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_710[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_713, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_713)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_715, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_714, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_715);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_714[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_714[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_714[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_714[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_717, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_717)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_719, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_718, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_719);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_718[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_718[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_718[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_718[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_721, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_721)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_723, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_722, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_723);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_722[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_722[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_722[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_722[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_725, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_725)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_727, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_726, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_727);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_726[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_726[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_726[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_726[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_729, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_729)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_731, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_730, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_731);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_730[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_730[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_730[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_730[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_733, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_733)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_735, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_734, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_735);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_734[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_734[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_734[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_734[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_737, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_737)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_739, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_738, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_739);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_738[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_738[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_738[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_738[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_741, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_741)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_743, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_742, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_743);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_742[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_742[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_742[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_742[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_745, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_745)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_747, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_746, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_747);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_746[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_746[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_746[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_746[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_749, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_749)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_751, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_750, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_751);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_750[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_750[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_750[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_750[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_753, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_753)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_755, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_754, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_755);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_754[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_754[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_754[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_754[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_757, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_757)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_759, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_758, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_759);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_758[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_758[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_758[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_758[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_761, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_761)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_763, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_762, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_763);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_762[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_762[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_762[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_762[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_765, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_765)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_767, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_766, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_767);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_766[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_766[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_766[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_766[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_769, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_769)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_771, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_770, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_771);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_770[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_770[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_770[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_770[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_773, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_773)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_775, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_774, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_775);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_774[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_774[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_774[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_774[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_777, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_777)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_779, vlSelfRef.__Vfunc_sfp_div__180__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_778, vlSelfRef.__Vfunc_sfp_div__180__remainder, __Vtemp_779);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_778[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_778[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_778[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_778[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__180__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__180__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__180__remainder, vlSelfRef.__Vfunc_sfp_div__180__b_ext)) {
                        VL_SUB_W(4, __Vtemp_781, vlSelfRef.__Vfunc_sfp_div__180__remainder, vlSelfRef.__Vfunc_sfp_div__180__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[0U] 
                            = __Vtemp_781[0U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[1U] 
                            = __Vtemp_781[1U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[2U] 
                            = __Vtemp_781[2U];
                        vlSelfRef.__Vfunc_sfp_div__180__remainder[3U] 
                            = __Vtemp_781[3U];
                        vlSelfRef.__Vfunc_sfp_div__180__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__180__result);
                    }
                    __Vfunc_sfp_div__180__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__180__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__180__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__180__result)
                            : vlSelfRef.__Vfunc_sfp_div__180__result);
                    __Vlabel117: ;
                }
                vlSelfRef.__Vfunc_sfp_exp__179__term 
                    = vlSelfRef.__Vfunc_sfp_div__180__Vfuncout;
                vlSelfRef.__Vfunc_sfp_add__183__b = vlSelfRef.__Vfunc_sfp_exp__179__term;
                vlSelfRef.__Vfunc_sfp_add__183__a = vlSelfRef.__Vfunc_sfp_exp__179__result;
                vlSelfRef.__Vfunc_sfp_add__183__Vfuncout 
                    = (vlSelfRef.__Vfunc_sfp_add__183__a 
                       + vlSelfRef.__Vfunc_sfp_add__183__b);
                vlSelfRef.__Vfunc_sfp_exp__179__result 
                    = vlSelfRef.__Vfunc_sfp_add__183__Vfuncout;
                vlSelfRef.__Vfunc_sfp_exp__179__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_exp__179__unnamedblk2__DOT__i);
            }
            vlSelfRef.__Vfunc_sfp_exp__179__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_exp__179__result;
            vlSelfRef.__Vfunc_sfp_add__178__b = vlSelfRef.__Vfunc_sfp_exp__179__Vfuncout;
            vlSelfRef.__Vfunc_sfp_add__178__a = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_add__178__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_add__178__a 
                   + vlSelfRef.__Vfunc_sfp_add__178__b);
            vlSelfRef.__Vfunc_sfp_div__177__b = vlSelfRef.__Vfunc_sfp_add__178__Vfuncout;
            vlSelfRef.__Vfunc_int_to_sfp__184__n = 2U;
            vlSelfRef.__Vfunc_int_to_sfp__184__Vfuncout 
                = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__184__n), 0x20U);
            vlSelfRef.__Vfunc_sfp_div__177__a = vlSelfRef.__Vfunc_int_to_sfp__184__Vfuncout;
            __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0;
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__177__remainder);
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__177__b_ext);
            vlSelf->__Vfunc_sfp_div__177__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__177__sign_bit = VL_RAND_RESET_I(1);
            vlSelf->__Vfunc_sfp_div__177__abs_a = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__177__abs_b = VL_RAND_RESET_Q(64);
            {
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__177__b)) {
                    vlSelfRef.__Vfunc_sfp_div__177__Vfuncout 
                        = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__177__a)
                            ? 0x7fffffffffffffffULL
                            : 0x8000000000000000ULL);
                    goto __Vlabel118;
                }
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__177__a)) {
                    vlSelfRef.__Vfunc_sfp_div__177__Vfuncout = 0ULL;
                    goto __Vlabel118;
                }
                vlSelfRef.__Vfunc_sfp_div__177__abs_a 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__177__a 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__177__a)
                        : vlSelfRef.__Vfunc_sfp_div__177__a);
                vlSelfRef.__Vfunc_sfp_div__177__abs_b 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__177__b 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__177__b)
                        : vlSelfRef.__Vfunc_sfp_div__177__b);
                vlSelfRef.__Vfunc_sfp_div__177__sign_bit 
                    = (IData)(((vlSelfRef.__Vfunc_sfp_div__177__a 
                                ^ vlSelfRef.__Vfunc_sfp_div__177__b) 
                               >> 0x3fU));
                __Vtemp_783[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__177__abs_a);
                __Vtemp_783[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__177__abs_a 
                                           >> 0x20U));
                __Vtemp_783[2U] = 0U;
                __Vtemp_783[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_783, 0x20U);
                vlSelfRef.__Vfunc_sfp_div__177__b_ext[0U] 
                    = (IData)(vlSelfRef.__Vfunc_sfp_div__177__abs_b);
                vlSelfRef.__Vfunc_sfp_div__177__b_ext[1U] 
                    = (IData)((vlSelfRef.__Vfunc_sfp_div__177__abs_b 
                               >> 0x20U));
                vlSelfRef.__Vfunc_sfp_div__177__b_ext[2U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__177__b_ext[3U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__177__result = 0ULL;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_785, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_785)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_787, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_786, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_787);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_786[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_786[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_786[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_786[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_789, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_789)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_791, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_790, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_791);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_790[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_790[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_790[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_790[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_793, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_793)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_795, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_794, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_795);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_794[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_794[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_794[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_794[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_797, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_797)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_799, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_798, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_799);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_798[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_798[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_798[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_798[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_801, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_801)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_803, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_802, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_803);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_802[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_802[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_802[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_802[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_805, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_805)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_807, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_806, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_807);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_806[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_806[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_806[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_806[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_809, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_809)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_811, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_810, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_811);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_810[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_810[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_810[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_810[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_813, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_813)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_815, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_814, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_815);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_814[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_814[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_814[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_814[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_817, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_817)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_819, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_818, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_819);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_818[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_818[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_818[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_818[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_821, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_821)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_823, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_822, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_823);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_822[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_822[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_822[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_822[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_825, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_825)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_827, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_826, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_827);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_826[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_826[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_826[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_826[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_829, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_829)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_831, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_830, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_831);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_830[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_830[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_830[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_830[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_833, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_833)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_835, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_834, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_835);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_834[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_834[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_834[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_834[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_837, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_837)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_839, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_838, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_839);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_838[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_838[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_838[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_838[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_841, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_841)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_843, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_842, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_843);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_842[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_842[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_842[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_842[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_845, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_845)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_847, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_846, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_847);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_846[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_846[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_846[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_846[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_849, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_849)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_851, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_850, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_851);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_850[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_850[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_850[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_850[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_853, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_853)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_855, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_854, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_855);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_854[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_854[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_854[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_854[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_857, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_857)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_859, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_858, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_859);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_858[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_858[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_858[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_858[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_861, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_861)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_863, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_862, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_863);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_862[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_862[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_862[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_862[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_865, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_865)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_867, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_866, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_867);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_866[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_866[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_866[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_866[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_869, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_869)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_871, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_870, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_871);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_870[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_870[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_870[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_870[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_873, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_873)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_875, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_874, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_875);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_874[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_874[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_874[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_874[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_877, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_877)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_879, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_878, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_879);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_878[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_878[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_878[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_878[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_881, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_881)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_883, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_882, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_883);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_882[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_882[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_882[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_882[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_885, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_885)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_887, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_886, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_887);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_886[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_886[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_886[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_886[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_889, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_889)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_891, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_890, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_891);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_890[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_890[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_890[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_890[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_893, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_893)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_895, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_894, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_895);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_894[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_894[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_894[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_894[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_897, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_897)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_899, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_898, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_899);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_898[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_898[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_898[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_898[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_901, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_901)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_903, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_902, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_903);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_902[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_902[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_902[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_902[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_905, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_905)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_907, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_906, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_907);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_906[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_906[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_906[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_906[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_909, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_909)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_911, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_910, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_911);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_910[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_910[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_910[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_910[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_913, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_913)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_915, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_914, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_915);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_914[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_914[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_914[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_914[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_917, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_917)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_919, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_918, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_919);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_918[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_918[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_918[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_918[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_921, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_921)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_923, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_922, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_923);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_922[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_922[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_922[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_922[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_925, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_925)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_927, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_926, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_927);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_926[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_926[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_926[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_926[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_929, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_929)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_931, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_930, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_931);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_930[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_930[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_930[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_930[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_933, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_933)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_935, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_934, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_935);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_934[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_934[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_934[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_934[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_937, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_937)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_939, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_938, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_939);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_938[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_938[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_938[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_938[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_941, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_941)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_943, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_942, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_943);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_942[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_942[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_942[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_942[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_945, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_945)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_947, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_946, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_947);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_946[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_946[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_946[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_946[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_949, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_949)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_951, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_950, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_951);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_950[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_950[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_950[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_950[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_953, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_953)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_955, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_954, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_955);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_954[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_954[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_954[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_954[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_957, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_957)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_959, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_958, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_959);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_958[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_958[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_958[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_958[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_961, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_961)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_963, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_962, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_963);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_962[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_962[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_962[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_962[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_965, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_965)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_967, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_966, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_967);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_966[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_966[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_966[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_966[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_969, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_969)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_971, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_970, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_971);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_970[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_970[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_970[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_970[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_973, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_973)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_975, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_974, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_975);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_974[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_974[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_974[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_974[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_977, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_977)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_979, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_978, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_979);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_978[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_978[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_978[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_978[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_981, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_981)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_983, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_982, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_983);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_982[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_982[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_982[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_982[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_985, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_985)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_987, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_986, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_987);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_986[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_986[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_986[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_986[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_989, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_989)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_991, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_990, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_991);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_990[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_990[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_990[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_990[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_993, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_993)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_995, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_994, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_995);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_994[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_994[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_994[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_994[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_997, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_997)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_999, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_998, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_999);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_998[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_998[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_998[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_998[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1001, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_1001)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1003, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_1002, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_1003);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_1002[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_1002[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_1002[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_1002[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1005, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_1005)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1007, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_1006, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_1007);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_1006[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_1006[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_1006[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_1006[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1009, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_1009)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1011, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_1010, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_1011);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_1010[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_1010[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_1010[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_1010[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1013, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_1013)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1015, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_1014, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_1015);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_1014[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_1014[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_1014[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_1014[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1017, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_1017)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1019, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_1018, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_1019);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_1018[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_1018[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_1018[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_1018[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1021, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_1021)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1023, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_1022, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_1023);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_1022[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_1022[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_1022[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_1022[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1025, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_1025)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1027, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_1026, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_1027);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_1026[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_1026[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_1026[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_1026[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1029, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_1029)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1031, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_1030, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_1031);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_1030[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_1030[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_1030[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_1030[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1033, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_1033)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1035, vlSelfRef.__Vfunc_sfp_div__177__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_1034, vlSelfRef.__Vfunc_sfp_div__177__remainder, __Vtemp_1035);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_1034[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_1034[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_1034[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_1034[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__177__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__177__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__177__remainder, vlSelfRef.__Vfunc_sfp_div__177__b_ext)) {
                    VL_SUB_W(4, __Vtemp_1037, vlSelfRef.__Vfunc_sfp_div__177__remainder, vlSelfRef.__Vfunc_sfp_div__177__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[0U] 
                        = __Vtemp_1037[0U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[1U] 
                        = __Vtemp_1037[1U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[2U] 
                        = __Vtemp_1037[2U];
                    vlSelfRef.__Vfunc_sfp_div__177__remainder[3U] 
                        = __Vtemp_1037[3U];
                    vlSelfRef.__Vfunc_sfp_div__177__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__177__result);
                }
                __Vfunc_sfp_div__177__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_sfp_div__177__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_sfp_div__177__sign_bit)
                        ? (- vlSelfRef.__Vfunc_sfp_div__177__result)
                        : vlSelfRef.__Vfunc_sfp_div__177__result);
                __Vlabel118: ;
            }
            vlSelfRef.__Vfunc_sfp_sub__176__a = vlSelfRef.__Vfunc_sfp_div__177__Vfuncout;
            vlSelfRef.__Vfunc_sfp_sub__176__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_sub__176__a 
                   - vlSelfRef.__Vfunc_sfp_sub__176__b);
            vlSelfRef.__Vfunc_sfp_tanh__173__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_sub__176__Vfuncout;
            __Vlabel116: ;
        }
        vlSelfRef.__Vfunc_sfp_mul__160__a = vlSelfRef.__Vfunc_sfp_tanh__173__Vfuncout;
        VL_EXTENDS_WQ(128,64, __Vtemp_1038, vlSelfRef.__Vfunc_sfp_mul__160__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1039, vlSelfRef.__Vfunc_sfp_mul__160__b);
        VL_MULS_WWW(128, __Vtemp_1040, __Vtemp_1038, __Vtemp_1039);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__160__tmp, __Vtemp_1040, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__160__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__160__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__160__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_sub__159__b = vlSelfRef.__Vfunc_sfp_mul__160__Vfuncout;
        vlSelfRef.__Vfunc_sfp_sub__159__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.__Vfunc_sfp_sub__159__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__159__a - vlSelfRef.__Vfunc_sfp_sub__159__b);
        vlSelfRef.__Vfunc_sfp_mul__158__b = vlSelfRef.__Vfunc_sfp_sub__159__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__158__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1041, vlSelfRef.__Vfunc_sfp_mul__158__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1042, vlSelfRef.__Vfunc_sfp_mul__158__b);
        VL_MULS_WWW(128, __Vtemp_1043, __Vtemp_1041, __Vtemp_1042);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__158__tmp, __Vtemp_1043, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__158__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__158__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__158__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__157__b = vlSelfRef.__Vfunc_sfp_mul__158__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__157__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1044, vlSelfRef.__Vfunc_sfp_mul__157__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1045, vlSelfRef.__Vfunc_sfp_mul__157__b);
        VL_MULS_WWW(128, __Vtemp_1046, __Vtemp_1044, __Vtemp_1045);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__157__tmp, __Vtemp_1046, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__157__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__157__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__157__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__156__b = vlSelfRef.__Vfunc_sfp_mul__157__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__156__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__156__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__156__a + vlSelfRef.__Vfunc_sfp_add__156__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__156__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 1U;
    } else if ((3U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_mul__186__b = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__sum)
                                              ? vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient_next_layer
                                             [0U] : 0ULL);
        vlSelfRef.__Vfunc_sfp_mul__186__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1047, vlSelfRef.__Vfunc_sfp_mul__186__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1048, vlSelfRef.__Vfunc_sfp_mul__186__b);
        VL_MULS_WWW(128, __Vtemp_1049, __Vtemp_1047, __Vtemp_1048);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__186__tmp, __Vtemp_1049, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__186__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__186__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__186__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__185__b = vlSelfRef.__Vfunc_sfp_mul__186__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__185__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__185__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__185__a + vlSelfRef.__Vfunc_sfp_add__185__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__185__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 1U;
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    }
    __Vfunc_sfp_mul__187__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__values
        [0U];
    __Vfunc_sfp_mul__187__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1050, __Vfunc_sfp_mul__187__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1051, __Vfunc_sfp_mul__187__b);
    VL_MULS_WWW(128, __Vtemp_1052, __Vtemp_1050, __Vtemp_1051);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__187__tmp, __Vtemp_1052, 0x20U);
    __Vfunc_sfp_mul__187__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__187__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__187__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__187__Vfuncout;
    __Vfunc_sfp_mul__187__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__values
        [1U];
    __Vfunc_sfp_mul__187__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1053, __Vfunc_sfp_mul__187__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1054, __Vfunc_sfp_mul__187__b);
    VL_MULS_WWW(128, __Vtemp_1055, __Vtemp_1053, __Vtemp_1054);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__187__tmp, __Vtemp_1055, 0x20U);
    __Vfunc_sfp_mul__187__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__187__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__187__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__187__Vfuncout;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i = 2U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients[1U][0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient;
}

VL_INLINE_OPT void VPerceptron___024root___nba_comb__TOP__1(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___nba_comb__TOP__1\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_sfp_div__236__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_sfp_div__239__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_sfp_div__248__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_sfp_div__251__unnamedblk1__DOT__i;
    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__258__Vfuncout;
    __Vfunc_sfp_mul__258__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__258__a;
    __Vfunc_sfp_mul__258__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__258__b;
    __Vfunc_sfp_mul__258__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__258__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__258__tmp);
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
    VlWide<4>/*127:0*/ __Vtemp_778;
    VlWide<4>/*127:0*/ __Vtemp_779;
    VlWide<4>/*127:0*/ __Vtemp_781;
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
    VlWide<4>/*127:0*/ __Vtemp_1037;
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
    // Body
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    if ((1U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_sub__226__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction;
        vlSelfRef.__Vfunc_sfp_sub__226__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.__Vfunc_sfp_sub__226__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__226__a - vlSelfRef.__Vfunc_sfp_sub__226__b);
        vlSelfRef.__Vfunc_sfp_mul__225__b = vlSelfRef.__Vfunc_sfp_sub__226__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__225__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction;
        VL_EXTENDS_WQ(128,64, __Vtemp_1, vlSelfRef.__Vfunc_sfp_mul__225__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_2, vlSelfRef.__Vfunc_sfp_mul__225__b);
        VL_MULS_WWW(128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__225__tmp, __Vtemp_3, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__225__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__225__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__225__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__224__b = vlSelfRef.__Vfunc_sfp_mul__225__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__224__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_4, vlSelfRef.__Vfunc_sfp_mul__224__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_5, vlSelfRef.__Vfunc_sfp_mul__224__b);
        VL_MULS_WWW(128, __Vtemp_6, __Vtemp_4, __Vtemp_5);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__224__tmp, __Vtemp_6, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__224__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__224__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__224__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__223__b = vlSelfRef.__Vfunc_sfp_mul__224__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__223__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_7, vlSelfRef.__Vfunc_sfp_mul__223__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_8, vlSelfRef.__Vfunc_sfp_mul__223__b);
        VL_MULS_WWW(128, __Vtemp_9, __Vtemp_7, __Vtemp_8);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__223__tmp, __Vtemp_9, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__223__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__223__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__223__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__222__b = vlSelfRef.__Vfunc_sfp_mul__223__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__222__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__222__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__222__a + vlSelfRef.__Vfunc_sfp_add__222__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__222__Vfuncout;
    } else if ((2U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_tanh__232__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction;
        {
            if (VL_GTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__232__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__233__n = 3U;
                            vlSelfRef.__Vfunc_int_to_sfp__233__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__233__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__233__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__232__Vfuncout 
                    = vlSymsp->TOP__FixedPoint.ONE;
                goto __Vlabel119;
            }
            if (VL_LTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__232__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__234__n = 0xfffffffdU;
                            vlSelfRef.__Vfunc_int_to_sfp__234__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__234__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__234__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__232__Vfuncout 
                    = (- vlSymsp->TOP__FixedPoint.ONE);
                goto __Vlabel119;
            }
            vlSelfRef.__Vfunc_sfp_sub__235__b = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__238__a = VL_SHIFTL_QQI(64,64,32, 
                                                              (- vlSelfRef.__Vfunc_sfp_tanh__232__a), 1U);
            vlSelf->__Vfunc_sfp_exp__238__unnamedblk2__DOT__i = 0;
            vlSelf->__Vfunc_sfp_exp__238__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_exp__238__term = VL_RAND_RESET_Q(64);
            vlSelfRef.__Vfunc_sfp_exp__238__result 
                = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__238__term = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__238__unnamedblk2__DOT__i = 1U;
            while (VL_GTS_III(32, 0x14U, vlSelfRef.__Vfunc_sfp_exp__238__unnamedblk2__DOT__i)) {
                vlSelfRef.__Vfunc_int_to_sfp__240__n 
                    = vlSelfRef.__Vfunc_sfp_exp__238__unnamedblk2__DOT__i;
                vlSelfRef.__Vfunc_int_to_sfp__240__Vfuncout 
                    = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__240__n), 0x20U);
                vlSelfRef.__Vfunc_sfp_div__239__b = vlSelfRef.__Vfunc_int_to_sfp__240__Vfuncout;
                vlSelfRef.__Vfunc_sfp_mul__241__b = vlSelfRef.__Vfunc_sfp_exp__238__a;
                vlSelfRef.__Vfunc_sfp_mul__241__a = vlSelfRef.__Vfunc_sfp_exp__238__term;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__241__tmp);
                VL_EXTENDS_WQ(128,64, __Vtemp_10, vlSelfRef.__Vfunc_sfp_mul__241__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_11, vlSelfRef.__Vfunc_sfp_mul__241__b);
                VL_MULS_WWW(128, __Vtemp_12, __Vtemp_10, __Vtemp_11);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__241__tmp, __Vtemp_12, 0x20U);
                vlSelfRef.__Vfunc_sfp_mul__241__Vfuncout 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__241__tmp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__Vfunc_sfp_mul__241__tmp[0U])));
                vlSelfRef.__Vfunc_sfp_div__239__a = vlSelfRef.__Vfunc_sfp_mul__241__Vfuncout;
                __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__239__remainder);
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__239__b_ext);
                vlSelf->__Vfunc_sfp_div__239__result = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__239__sign_bit = VL_RAND_RESET_I(1);
                vlSelf->__Vfunc_sfp_div__239__abs_a = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__239__abs_b = VL_RAND_RESET_Q(64);
                {
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__239__b)) {
                        vlSelfRef.__Vfunc_sfp_div__239__Vfuncout 
                            = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__239__a)
                                ? 0x7fffffffffffffffULL
                                : 0x8000000000000000ULL);
                        goto __Vlabel120;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__239__a)) {
                        vlSelfRef.__Vfunc_sfp_div__239__Vfuncout = 0ULL;
                        goto __Vlabel120;
                    }
                    vlSelfRef.__Vfunc_sfp_div__239__abs_a 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__239__a 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__239__a)
                            : vlSelfRef.__Vfunc_sfp_div__239__a);
                    vlSelfRef.__Vfunc_sfp_div__239__abs_b 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__239__b 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__239__b)
                            : vlSelfRef.__Vfunc_sfp_div__239__b);
                    vlSelfRef.__Vfunc_sfp_div__239__sign_bit 
                        = (IData)(((vlSelfRef.__Vfunc_sfp_div__239__a 
                                    ^ vlSelfRef.__Vfunc_sfp_div__239__b) 
                                   >> 0x3fU));
                    __Vtemp_13[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__239__abs_a);
                    __Vtemp_13[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__239__abs_a 
                                              >> 0x20U));
                    __Vtemp_13[2U] = 0U;
                    __Vtemp_13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_13, 0x20U);
                    vlSelfRef.__Vfunc_sfp_div__239__b_ext[0U] 
                        = (IData)(vlSelfRef.__Vfunc_sfp_div__239__abs_b);
                    vlSelfRef.__Vfunc_sfp_div__239__b_ext[1U] 
                        = (IData)((vlSelfRef.__Vfunc_sfp_div__239__abs_b 
                                   >> 0x20U));
                    vlSelfRef.__Vfunc_sfp_div__239__b_ext[2U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__239__b_ext[3U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__239__result = 0ULL;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_15, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_15)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_17, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_16, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_17);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_16[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_16[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_16[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_16[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_19, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_19)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_21, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_20, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_21);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_20[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_20[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_20[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_20[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_23, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_23)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_25, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_24, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_25);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_24[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_24[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_24[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_24[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_27, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_27)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_29, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_28, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_29);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_28[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_28[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_28[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_28[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_31, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_31)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_33, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_32, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_33);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_32[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_32[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_32[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_32[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_35, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_35)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_37, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_36, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_37);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_36[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_36[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_36[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_36[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_39, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_39)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_41, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_40, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_41);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_40[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_40[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_40[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_40[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_43, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_43)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_45, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_44, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_45);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_44[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_44[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_44[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_44[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_47, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_47)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_49, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_48, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_49);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_48[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_48[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_48[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_48[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_51, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_51)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_53, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_52, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_53);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_52[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_52[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_52[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_52[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_55, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_55)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_57, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_56, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_57);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_56[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_56[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_56[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_56[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_59, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_59)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_61, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_60, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_61);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_60[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_60[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_60[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_60[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_63, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_63)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_65, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_64, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_65);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_64[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_64[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_64[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_64[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_67, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_67)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_69, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_68, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_69);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_68[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_68[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_68[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_68[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_71, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_71)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_73, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_72, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_73);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_72[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_72[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_72[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_72[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_75, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_75)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_77, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_76, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_77);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_76[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_76[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_76[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_76[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_79, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_79)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_81, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_80, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_81);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_80[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_80[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_80[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_80[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_83, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_83)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_85, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_84, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_85);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_84[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_84[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_84[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_84[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_87, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_87)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_89, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_88, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_89);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_88[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_88[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_88[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_88[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_91, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_91)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_93, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_92, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_93);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_92[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_92[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_92[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_92[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_95, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_95)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_97, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_96, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_97);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_96[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_96[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_96[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_96[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_99, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_99)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_101, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_100, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_101);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_100[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_100[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_100[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_100[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_103, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_103)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_105, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_104, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_105);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_104[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_104[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_104[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_104[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_107, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_107)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_109, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_108, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_109);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_108[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_108[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_108[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_108[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_111, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_111)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_113, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_112, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_113);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_112[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_112[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_112[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_112[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_115, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_115)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_117, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_116, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_117);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_116[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_116[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_116[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_116[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_119, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_119)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_121, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_120, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_121);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_120[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_120[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_120[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_120[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_123, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_123)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_125, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_124, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_125);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_124[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_124[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_124[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_124[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_127, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_127)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_129, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_129);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_128[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_128[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_128[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_128[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_131, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_131)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_133, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_132, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_133);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_132[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_132[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_132[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_132[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_135, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_135)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_137, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_136, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_137);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_136[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_136[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_136[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_136[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_139, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_139)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_141, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_140, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_141);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_140[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_140[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_140[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_140[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_143, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_143)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_145, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_144, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_145);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_144[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_144[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_144[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_144[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_147, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_147)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_149, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_148, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_149);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_148[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_148[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_148[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_148[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_151, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_151)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_153, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_152, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_153);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_152[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_152[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_152[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_152[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_155, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_155)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_157, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_156, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_157);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_156[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_156[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_156[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_156[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_159, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_159)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_161, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_160, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_161);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_160[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_160[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_160[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_160[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_163, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_163)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_165, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_164, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_165);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_164[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_164[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_164[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_164[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_167, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_167)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_169, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_168, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_169);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_168[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_168[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_168[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_168[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_171, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_171)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_173, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_172, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_173);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_172[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_172[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_172[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_172[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_175, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_175)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_177, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_176, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_177);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_176[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_176[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_176[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_176[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_179, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_179)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_181, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_180, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_181);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_180[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_180[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_180[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_180[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_183, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_183)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_185, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_184, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_185);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_184[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_184[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_184[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_184[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_187, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_187)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_189, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_188, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_189);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_188[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_188[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_188[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_188[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_191, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_191)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_193, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_192, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_193);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_192[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_192[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_192[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_192[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_195, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_195)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_197, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_196, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_197);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_196[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_196[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_196[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_196[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_199, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_199)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_201, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_200, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_201);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_200[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_200[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_200[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_200[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_203, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_203)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_205, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_204, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_205);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_204[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_204[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_204[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_204[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_207, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_207)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_209, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_208, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_209);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_208[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_208[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_208[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_208[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_211, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_211)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_213, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_212, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_213);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_212[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_212[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_212[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_212[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_215, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_215)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_217, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_216, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_217);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_216[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_216[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_216[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_216[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_219, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_219)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_221, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_220, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_221);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_220[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_220[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_220[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_220[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_223, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_223)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_225, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_224, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_225);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_224[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_224[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_224[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_224[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_227, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_227)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_229, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_228, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_229);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_228[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_228[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_228[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_228[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_231, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_231)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_233, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_232, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_233);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_232[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_232[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_232[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_232[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_235, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_235)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_237, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_236, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_237);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_236[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_236[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_236[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_236[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_239, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_239)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_241, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_240, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_241);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_240[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_240[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_240[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_240[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_243, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_243)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_245, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_244, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_245);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_244[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_244[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_244[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_244[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_247, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_247)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_249, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_248, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_249);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_248[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_248[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_248[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_248[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_251, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_251)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_253, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_252, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_253);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_252[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_252[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_252[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_252[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_255, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_255)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_257, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_256, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_257);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_256[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_256[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_256[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_256[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_259, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_259)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_261, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_260, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_261);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_260[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_260[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_260[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_260[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_263, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_263)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_265, vlSelfRef.__Vfunc_sfp_div__239__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_264, vlSelfRef.__Vfunc_sfp_div__239__remainder, __Vtemp_265);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_264[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_264[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_264[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_264[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__239__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__239__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__239__remainder, vlSelfRef.__Vfunc_sfp_div__239__b_ext)) {
                        VL_SUB_W(4, __Vtemp_267, vlSelfRef.__Vfunc_sfp_div__239__remainder, vlSelfRef.__Vfunc_sfp_div__239__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[0U] 
                            = __Vtemp_267[0U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[1U] 
                            = __Vtemp_267[1U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[2U] 
                            = __Vtemp_267[2U];
                        vlSelfRef.__Vfunc_sfp_div__239__remainder[3U] 
                            = __Vtemp_267[3U];
                        vlSelfRef.__Vfunc_sfp_div__239__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__239__result);
                    }
                    __Vfunc_sfp_div__239__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__239__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__239__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__239__result)
                            : vlSelfRef.__Vfunc_sfp_div__239__result);
                    __Vlabel120: ;
                }
                vlSelfRef.__Vfunc_sfp_exp__238__term 
                    = vlSelfRef.__Vfunc_sfp_div__239__Vfuncout;
                vlSelfRef.__Vfunc_sfp_add__242__b = vlSelfRef.__Vfunc_sfp_exp__238__term;
                vlSelfRef.__Vfunc_sfp_add__242__a = vlSelfRef.__Vfunc_sfp_exp__238__result;
                vlSelfRef.__Vfunc_sfp_add__242__Vfuncout 
                    = (vlSelfRef.__Vfunc_sfp_add__242__a 
                       + vlSelfRef.__Vfunc_sfp_add__242__b);
                vlSelfRef.__Vfunc_sfp_exp__238__result 
                    = vlSelfRef.__Vfunc_sfp_add__242__Vfuncout;
                vlSelfRef.__Vfunc_sfp_exp__238__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_exp__238__unnamedblk2__DOT__i);
            }
            vlSelfRef.__Vfunc_sfp_exp__238__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_exp__238__result;
            vlSelfRef.__Vfunc_sfp_add__237__b = vlSelfRef.__Vfunc_sfp_exp__238__Vfuncout;
            vlSelfRef.__Vfunc_sfp_add__237__a = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_add__237__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_add__237__a 
                   + vlSelfRef.__Vfunc_sfp_add__237__b);
            vlSelfRef.__Vfunc_sfp_div__236__b = vlSelfRef.__Vfunc_sfp_add__237__Vfuncout;
            vlSelfRef.__Vfunc_int_to_sfp__243__n = 2U;
            vlSelfRef.__Vfunc_int_to_sfp__243__Vfuncout 
                = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__243__n), 0x20U);
            vlSelfRef.__Vfunc_sfp_div__236__a = vlSelfRef.__Vfunc_int_to_sfp__243__Vfuncout;
            __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0;
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__236__remainder);
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__236__b_ext);
            vlSelf->__Vfunc_sfp_div__236__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__236__sign_bit = VL_RAND_RESET_I(1);
            vlSelf->__Vfunc_sfp_div__236__abs_a = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__236__abs_b = VL_RAND_RESET_Q(64);
            {
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__236__b)) {
                    vlSelfRef.__Vfunc_sfp_div__236__Vfuncout 
                        = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__236__a)
                            ? 0x7fffffffffffffffULL
                            : 0x8000000000000000ULL);
                    goto __Vlabel121;
                }
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__236__a)) {
                    vlSelfRef.__Vfunc_sfp_div__236__Vfuncout = 0ULL;
                    goto __Vlabel121;
                }
                vlSelfRef.__Vfunc_sfp_div__236__abs_a 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__236__a 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__236__a)
                        : vlSelfRef.__Vfunc_sfp_div__236__a);
                vlSelfRef.__Vfunc_sfp_div__236__abs_b 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__236__b 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__236__b)
                        : vlSelfRef.__Vfunc_sfp_div__236__b);
                vlSelfRef.__Vfunc_sfp_div__236__sign_bit 
                    = (IData)(((vlSelfRef.__Vfunc_sfp_div__236__a 
                                ^ vlSelfRef.__Vfunc_sfp_div__236__b) 
                               >> 0x3fU));
                __Vtemp_269[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__236__abs_a);
                __Vtemp_269[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__236__abs_a 
                                           >> 0x20U));
                __Vtemp_269[2U] = 0U;
                __Vtemp_269[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_269, 0x20U);
                vlSelfRef.__Vfunc_sfp_div__236__b_ext[0U] 
                    = (IData)(vlSelfRef.__Vfunc_sfp_div__236__abs_b);
                vlSelfRef.__Vfunc_sfp_div__236__b_ext[1U] 
                    = (IData)((vlSelfRef.__Vfunc_sfp_div__236__abs_b 
                               >> 0x20U));
                vlSelfRef.__Vfunc_sfp_div__236__b_ext[2U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__236__b_ext[3U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__236__result = 0ULL;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_271, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_271)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_273, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_272, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_273);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_272[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_272[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_272[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_272[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_275, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_275)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_277, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_276, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_277);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_276[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_276[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_276[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_276[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_279, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_279)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_281, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_280, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_281);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_280[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_280[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_280[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_280[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_283, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_283)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_285, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_284, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_285);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_284[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_284[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_284[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_284[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_287, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_287)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_289, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_288, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_289);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_288[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_288[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_288[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_288[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_291, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_291)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_293, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_292, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_293);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_292[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_292[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_292[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_292[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_295, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_295)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_297, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_296, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_297);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_296[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_296[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_296[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_296[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_299, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_299)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_301, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_300, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_301);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_300[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_300[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_300[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_300[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_303, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_303)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_305, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_304, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_305);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_304[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_304[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_304[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_304[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_307, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_307)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_309, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_308, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_309);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_308[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_308[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_308[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_308[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_311, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_311)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_313, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_312, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_313);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_312[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_312[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_312[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_312[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_315, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_315)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_317, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_316, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_317);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_316[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_316[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_316[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_316[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_319, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_319)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_321, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_320, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_321);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_320[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_320[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_320[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_320[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_323, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_323)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_325, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_324, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_325);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_324[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_324[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_324[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_324[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_327, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_327)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_329, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_328, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_329);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_328[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_328[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_328[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_328[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_331, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_331)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_333, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_332, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_333);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_332[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_332[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_332[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_332[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_335, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_335)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_337, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_336, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_337);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_336[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_336[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_336[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_336[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_339, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_339)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_341, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_340, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_341);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_340[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_340[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_340[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_340[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_343, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_343)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_345, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_344, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_345);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_344[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_344[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_344[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_344[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_347, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_347)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_349, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_348, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_349);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_348[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_348[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_348[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_348[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_351, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_351)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_353, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_352, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_353);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_352[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_352[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_352[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_352[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_355, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_355)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_357, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_356, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_357);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_356[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_356[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_356[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_356[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_359, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_359)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_361, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_360, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_361);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_360[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_360[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_360[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_360[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_363, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_363)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_365, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_364, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_365);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_364[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_364[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_364[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_364[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_367, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_367)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_369, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_368, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_369);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_368[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_368[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_368[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_368[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_371, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_371)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_373, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_372, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_373);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_372[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_372[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_372[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_372[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_375, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_375)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_377, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_376, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_377);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_376[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_376[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_376[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_376[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_379, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_379)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_381, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_380, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_381);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_380[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_380[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_380[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_380[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_383, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_383)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_385, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_384, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_385);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_384[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_384[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_384[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_384[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_387, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_387)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_389, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_388, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_389);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_388[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_388[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_388[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_388[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_391, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_391)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_393, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_392, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_393);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_392[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_392[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_392[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_392[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_395, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_395)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_397, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_396, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_397);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_396[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_396[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_396[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_396[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_399, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_399)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_401, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_400, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_401);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_400[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_400[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_400[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_400[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_403, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_403)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_405, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_404, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_405);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_404[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_404[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_404[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_404[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_407, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_407)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_409, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_408, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_409);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_408[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_408[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_408[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_408[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_411, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_411)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_413, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_412, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_413);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_412[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_412[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_412[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_412[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_415, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_415)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_417, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_416, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_417);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_416[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_416[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_416[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_416[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_419, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_419)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_421, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_420, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_421);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_420[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_420[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_420[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_420[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_423, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_423)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_425, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_424, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_425);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_424[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_424[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_424[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_424[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_427, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_427)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_429, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_428, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_429);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_428[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_428[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_428[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_428[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_431, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_431)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_433, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_432, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_433);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_432[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_432[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_432[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_432[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_435, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_435)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_437, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_436, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_437);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_436[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_436[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_436[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_436[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_439, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_439)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_441, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_440, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_441);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_440[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_440[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_440[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_440[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_443, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_443)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_445, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_444, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_445);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_444[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_444[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_444[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_444[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_447, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_447)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_449, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_448, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_449);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_448[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_448[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_448[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_448[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_451, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_451)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_453, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_452, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_453);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_452[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_452[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_452[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_452[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_455, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_455)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_457, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_456, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_457);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_456[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_456[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_456[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_456[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_459, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_459)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_461, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_460, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_461);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_460[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_460[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_460[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_460[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_463, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_463)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_465, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_464, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_465);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_464[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_464[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_464[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_464[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_467, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_467)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_469, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_468, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_469);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_468[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_468[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_468[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_468[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_471, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_471)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_473, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_472, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_473);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_472[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_472[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_472[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_472[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_475, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_475)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_477, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_476, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_477);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_476[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_476[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_476[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_476[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_479, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_479)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_481, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_480, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_481);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_480[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_480[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_480[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_480[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_483, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_483)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_485, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_484, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_485);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_484[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_484[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_484[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_484[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_487, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_487)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_489, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_488, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_489);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_488[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_488[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_488[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_488[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_491, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_491)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_493, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_492, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_493);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_492[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_492[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_492[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_492[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_495, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_495)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_497, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_496, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_497);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_496[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_496[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_496[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_496[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_499, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_499)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_501, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_500, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_501);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_500[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_500[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_500[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_500[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_503, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_503)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_505, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_504, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_505);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_504[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_504[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_504[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_504[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_507, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_507)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_509, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_508, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_509);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_508[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_508[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_508[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_508[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_511, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_511)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_513, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_512, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_513);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_512[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_512[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_512[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_512[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_515, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_515)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_517, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_516, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_517);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_516[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_516[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_516[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_516[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_519, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_519)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_521, vlSelfRef.__Vfunc_sfp_div__236__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_520, vlSelfRef.__Vfunc_sfp_div__236__remainder, __Vtemp_521);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_520[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_520[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_520[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_520[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__236__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__236__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__236__remainder, vlSelfRef.__Vfunc_sfp_div__236__b_ext)) {
                    VL_SUB_W(4, __Vtemp_523, vlSelfRef.__Vfunc_sfp_div__236__remainder, vlSelfRef.__Vfunc_sfp_div__236__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[0U] 
                        = __Vtemp_523[0U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[1U] 
                        = __Vtemp_523[1U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[2U] 
                        = __Vtemp_523[2U];
                    vlSelfRef.__Vfunc_sfp_div__236__remainder[3U] 
                        = __Vtemp_523[3U];
                    vlSelfRef.__Vfunc_sfp_div__236__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__236__result);
                }
                __Vfunc_sfp_div__236__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_sfp_div__236__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_sfp_div__236__sign_bit)
                        ? (- vlSelfRef.__Vfunc_sfp_div__236__result)
                        : vlSelfRef.__Vfunc_sfp_div__236__result);
                __Vlabel121: ;
            }
            vlSelfRef.__Vfunc_sfp_sub__235__a = vlSelfRef.__Vfunc_sfp_div__236__Vfuncout;
            vlSelfRef.__Vfunc_sfp_sub__235__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_sub__235__a 
                   - vlSelfRef.__Vfunc_sfp_sub__235__b);
            vlSelfRef.__Vfunc_sfp_tanh__232__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_sub__235__Vfuncout;
            __Vlabel119: ;
        }
        vlSelfRef.__Vfunc_sfp_mul__231__b = vlSelfRef.__Vfunc_sfp_tanh__232__Vfuncout;
        vlSelfRef.__Vfunc_sfp_tanh__244__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction;
        {
            if (VL_GTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__244__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__245__n = 3U;
                            vlSelfRef.__Vfunc_int_to_sfp__245__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__245__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__245__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__244__Vfuncout 
                    = vlSymsp->TOP__FixedPoint.ONE;
                goto __Vlabel122;
            }
            if (VL_LTS_IQQ(64, vlSelfRef.__Vfunc_sfp_tanh__244__a, 
                           ([&]() {
                            vlSelfRef.__Vfunc_int_to_sfp__246__n = 0xfffffffdU;
                            vlSelfRef.__Vfunc_int_to_sfp__246__Vfuncout 
                                = VL_SHIFTL_QQI(64,64,32, 
                                                VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__246__n), 0x20U);
                        }(), vlSelfRef.__Vfunc_int_to_sfp__246__Vfuncout))) {
                vlSelfRef.__Vfunc_sfp_tanh__244__Vfuncout 
                    = (- vlSymsp->TOP__FixedPoint.ONE);
                goto __Vlabel122;
            }
            vlSelfRef.__Vfunc_sfp_sub__247__b = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__250__a = VL_SHIFTL_QQI(64,64,32, 
                                                              (- vlSelfRef.__Vfunc_sfp_tanh__244__a), 1U);
            vlSelf->__Vfunc_sfp_exp__250__unnamedblk2__DOT__i = 0;
            vlSelf->__Vfunc_sfp_exp__250__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_exp__250__term = VL_RAND_RESET_Q(64);
            vlSelfRef.__Vfunc_sfp_exp__250__result 
                = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__250__term = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_exp__250__unnamedblk2__DOT__i = 1U;
            while (VL_GTS_III(32, 0x14U, vlSelfRef.__Vfunc_sfp_exp__250__unnamedblk2__DOT__i)) {
                vlSelfRef.__Vfunc_int_to_sfp__252__n 
                    = vlSelfRef.__Vfunc_sfp_exp__250__unnamedblk2__DOT__i;
                vlSelfRef.__Vfunc_int_to_sfp__252__Vfuncout 
                    = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__252__n), 0x20U);
                vlSelfRef.__Vfunc_sfp_div__251__b = vlSelfRef.__Vfunc_int_to_sfp__252__Vfuncout;
                vlSelfRef.__Vfunc_sfp_mul__253__b = vlSelfRef.__Vfunc_sfp_exp__250__a;
                vlSelfRef.__Vfunc_sfp_mul__253__a = vlSelfRef.__Vfunc_sfp_exp__250__term;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__253__tmp);
                VL_EXTENDS_WQ(128,64, __Vtemp_524, vlSelfRef.__Vfunc_sfp_mul__253__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_525, vlSelfRef.__Vfunc_sfp_mul__253__b);
                VL_MULS_WWW(128, __Vtemp_526, __Vtemp_524, __Vtemp_525);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__253__tmp, __Vtemp_526, 0x20U);
                vlSelfRef.__Vfunc_sfp_mul__253__Vfuncout 
                    = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__253__tmp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__Vfunc_sfp_mul__253__tmp[0U])));
                vlSelfRef.__Vfunc_sfp_div__251__a = vlSelfRef.__Vfunc_sfp_mul__253__Vfuncout;
                __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0;
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__251__remainder);
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__251__b_ext);
                vlSelf->__Vfunc_sfp_div__251__result = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__251__sign_bit = VL_RAND_RESET_I(1);
                vlSelf->__Vfunc_sfp_div__251__abs_a = VL_RAND_RESET_Q(64);
                vlSelf->__Vfunc_sfp_div__251__abs_b = VL_RAND_RESET_Q(64);
                {
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__251__b)) {
                        vlSelfRef.__Vfunc_sfp_div__251__Vfuncout 
                            = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__251__a)
                                ? 0x7fffffffffffffffULL
                                : 0x8000000000000000ULL);
                        goto __Vlabel123;
                    }
                    if ((0ULL == vlSelfRef.__Vfunc_sfp_div__251__a)) {
                        vlSelfRef.__Vfunc_sfp_div__251__Vfuncout = 0ULL;
                        goto __Vlabel123;
                    }
                    vlSelfRef.__Vfunc_sfp_div__251__abs_a 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__251__a 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__251__a)
                            : vlSelfRef.__Vfunc_sfp_div__251__a);
                    vlSelfRef.__Vfunc_sfp_div__251__abs_b 
                        = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__251__b 
                                          >> 0x3fU)))
                            ? (- vlSelfRef.__Vfunc_sfp_div__251__b)
                            : vlSelfRef.__Vfunc_sfp_div__251__b);
                    vlSelfRef.__Vfunc_sfp_div__251__sign_bit 
                        = (IData)(((vlSelfRef.__Vfunc_sfp_div__251__a 
                                    ^ vlSelfRef.__Vfunc_sfp_div__251__b) 
                                   >> 0x3fU));
                    __Vtemp_527[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__251__abs_a);
                    __Vtemp_527[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__251__abs_a 
                                               >> 0x20U));
                    __Vtemp_527[2U] = 0U;
                    __Vtemp_527[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_527, 0x20U);
                    vlSelfRef.__Vfunc_sfp_div__251__b_ext[0U] 
                        = (IData)(vlSelfRef.__Vfunc_sfp_div__251__abs_b);
                    vlSelfRef.__Vfunc_sfp_div__251__b_ext[1U] 
                        = (IData)((vlSelfRef.__Vfunc_sfp_div__251__abs_b 
                                   >> 0x20U));
                    vlSelfRef.__Vfunc_sfp_div__251__b_ext[2U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__251__b_ext[3U] = 0U;
                    vlSelfRef.__Vfunc_sfp_div__251__result = 0ULL;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_529, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_529)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_531, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_530, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_531);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_530[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_530[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_530[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_530[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_533, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_533)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_535, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_534, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_535);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_534[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_534[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_534[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_534[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_537, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_537)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_539, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_538, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_539);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_538[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_538[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_538[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_538[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_541, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_541)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_543, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_542, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_543);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_542[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_542[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_542[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_542[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_545, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_545)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_547, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_546, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_547);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_546[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_546[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_546[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_546[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_549, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_549)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_551, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_550, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_551);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_550[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_550[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_550[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_550[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_553, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_553)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_555, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_554, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_555);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_554[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_554[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_554[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_554[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_557, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_557)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_559, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_558, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_559);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_558[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_558[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_558[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_558[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_561, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_561)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_563, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_562, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_563);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_562[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_562[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_562[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_562[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_565, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_565)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_567, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_566, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_567);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_566[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_566[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_566[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_566[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_569, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_569)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_571, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_570, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_571);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_570[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_570[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_570[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_570[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_573, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_573)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_575, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_574, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_575);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_574[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_574[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_574[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_574[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_577, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_577)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_579, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_578, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_579);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_578[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_578[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_578[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_578[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_581, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_581)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_583, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_582, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_583);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_582[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_582[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_582[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_582[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_585, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_585)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_587, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_586, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_587);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_586[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_586[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_586[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_586[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_589, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_589)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_591, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_590, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_591);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_590[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_590[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_590[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_590[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_593, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_593)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_595, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_594, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_595);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_594[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_594[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_594[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_594[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_597, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_597)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_599, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_598, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_599);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_598[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_598[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_598[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_598[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_601, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_601)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_603, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_602, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_603);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_602[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_602[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_602[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_602[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_605, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_605)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_607, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_606, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_607);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_606[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_606[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_606[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_606[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_609, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_609)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_611, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_610, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_611);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_610[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_610[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_610[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_610[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_613, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_613)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_615, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_614, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_615);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_614[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_614[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_614[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_614[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_617, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_617)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_619, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_618, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_619);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_618[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_618[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_618[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_618[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_621, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_621)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_623, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_622, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_623);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_622[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_622[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_622[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_622[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_625, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_625)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_627, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_626, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_627);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_626[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_626[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_626[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_626[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_629, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_629)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_631, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_630, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_631);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_630[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_630[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_630[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_630[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_633, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_633)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_635, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_634, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_635);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_634[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_634[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_634[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_634[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_637, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_637)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_639, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_638, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_639);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_638[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_638[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_638[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_638[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_641, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_641)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_643, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_642, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_643);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_642[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_642[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_642[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_642[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_645, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_645)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_647, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_646, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_647);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_646[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_646[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_646[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_646[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_649, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_649)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_651, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_650, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_651);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_650[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_650[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_650[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_650[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_653, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_653)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_655, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_654, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_655);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_654[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_654[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_654[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_654[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_657, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_657)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_659, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_658, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_659);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_658[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_658[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_658[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_658[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_661, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_661)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_663, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_662, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_663);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_662[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_662[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_662[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_662[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_665, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_665)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_667, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_666, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_667);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_666[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_666[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_666[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_666[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_669, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_669)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_671, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_670, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_671);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_670[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_670[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_670[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_670[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_673, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_673)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_675, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_674, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_675);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_674[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_674[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_674[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_674[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_677, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_677)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_679, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_678, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_679);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_678[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_678[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_678[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_678[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_681, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_681)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_683, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_682, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_683);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_682[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_682[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_682[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_682[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_685, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_685)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_687, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_686, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_687);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_686[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_686[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_686[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_686[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_689, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_689)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_691, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_690, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_691);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_690[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_690[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_690[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_690[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_693, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_693)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_695, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_694, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_695);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_694[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_694[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_694[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_694[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_697, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_697)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_699, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_698, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_699);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_698[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_698[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_698[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_698[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_701, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_701)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_703, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_702, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_703);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_702[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_702[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_702[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_702[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_705, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_705)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_707, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_706, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_707);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_706[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_706[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_706[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_706[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_709, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_709)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_711, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_710, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_711);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_710[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_710[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_710[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_710[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_713, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_713)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_715, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_714, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_715);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_714[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_714[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_714[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_714[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_717, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_717)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_719, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_718, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_719);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_718[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_718[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_718[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_718[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_721, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_721)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_723, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_722, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_723);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_722[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_722[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_722[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_722[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_725, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_725)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_727, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_726, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_727);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_726[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_726[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_726[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_726[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_729, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_729)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_731, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_730, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_731);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_730[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_730[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_730[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_730[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_733, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_733)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_735, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_734, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_735);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_734[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_734[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_734[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_734[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_737, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_737)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_739, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_738, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_739);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_738[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_738[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_738[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_738[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_741, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_741)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_743, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_742, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_743);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_742[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_742[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_742[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_742[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_745, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_745)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_747, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_746, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_747);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_746[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_746[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_746[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_746[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_749, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_749)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_751, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_750, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_751);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_750[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_750[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_750[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_750[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_753, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_753)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_755, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_754, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_755);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_754[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_754[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_754[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_754[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_757, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_757)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_759, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_758, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_759);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_758[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_758[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_758[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_758[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_761, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_761)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_763, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_762, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_763);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_762[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_762[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_762[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_762[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_765, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_765)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_767, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_766, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_767);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_766[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_766[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_766[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_766[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_769, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_769)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_771, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_770, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_771);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_770[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_770[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_770[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_770[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_773, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_773)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_775, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_774, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_775);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_774[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_774[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_774[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_774[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_777, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_777)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_779, vlSelfRef.__Vfunc_sfp_div__251__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_778, vlSelfRef.__Vfunc_sfp_div__251__remainder, __Vtemp_779);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_778[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_778[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_778[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_778[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__251__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__251__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__251__remainder, vlSelfRef.__Vfunc_sfp_div__251__b_ext)) {
                        VL_SUB_W(4, __Vtemp_781, vlSelfRef.__Vfunc_sfp_div__251__remainder, vlSelfRef.__Vfunc_sfp_div__251__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[0U] 
                            = __Vtemp_781[0U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[1U] 
                            = __Vtemp_781[1U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[2U] 
                            = __Vtemp_781[2U];
                        vlSelfRef.__Vfunc_sfp_div__251__remainder[3U] 
                            = __Vtemp_781[3U];
                        vlSelfRef.__Vfunc_sfp_div__251__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__251__result);
                    }
                    __Vfunc_sfp_div__251__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_sfp_div__251__Vfuncout 
                        = ((IData)(vlSelfRef.__Vfunc_sfp_div__251__sign_bit)
                            ? (- vlSelfRef.__Vfunc_sfp_div__251__result)
                            : vlSelfRef.__Vfunc_sfp_div__251__result);
                    __Vlabel123: ;
                }
                vlSelfRef.__Vfunc_sfp_exp__250__term 
                    = vlSelfRef.__Vfunc_sfp_div__251__Vfuncout;
                vlSelfRef.__Vfunc_sfp_add__254__b = vlSelfRef.__Vfunc_sfp_exp__250__term;
                vlSelfRef.__Vfunc_sfp_add__254__a = vlSelfRef.__Vfunc_sfp_exp__250__result;
                vlSelfRef.__Vfunc_sfp_add__254__Vfuncout 
                    = (vlSelfRef.__Vfunc_sfp_add__254__a 
                       + vlSelfRef.__Vfunc_sfp_add__254__b);
                vlSelfRef.__Vfunc_sfp_exp__250__result 
                    = vlSelfRef.__Vfunc_sfp_add__254__Vfuncout;
                vlSelfRef.__Vfunc_sfp_exp__250__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_sfp_exp__250__unnamedblk2__DOT__i);
            }
            vlSelfRef.__Vfunc_sfp_exp__250__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_exp__250__result;
            vlSelfRef.__Vfunc_sfp_add__249__b = vlSelfRef.__Vfunc_sfp_exp__250__Vfuncout;
            vlSelfRef.__Vfunc_sfp_add__249__a = vlSymsp->TOP__FixedPoint.ONE;
            vlSelfRef.__Vfunc_sfp_add__249__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_add__249__a 
                   + vlSelfRef.__Vfunc_sfp_add__249__b);
            vlSelfRef.__Vfunc_sfp_div__248__b = vlSelfRef.__Vfunc_sfp_add__249__Vfuncout;
            vlSelfRef.__Vfunc_int_to_sfp__255__n = 2U;
            vlSelfRef.__Vfunc_int_to_sfp__255__Vfuncout 
                = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__255__n), 0x20U);
            vlSelfRef.__Vfunc_sfp_div__248__a = vlSelfRef.__Vfunc_int_to_sfp__255__Vfuncout;
            __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0;
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__248__remainder);
            VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__248__b_ext);
            vlSelf->__Vfunc_sfp_div__248__result = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__248__sign_bit = VL_RAND_RESET_I(1);
            vlSelf->__Vfunc_sfp_div__248__abs_a = VL_RAND_RESET_Q(64);
            vlSelf->__Vfunc_sfp_div__248__abs_b = VL_RAND_RESET_Q(64);
            {
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__248__b)) {
                    vlSelfRef.__Vfunc_sfp_div__248__Vfuncout 
                        = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.__Vfunc_sfp_div__248__a)
                            ? 0x7fffffffffffffffULL
                            : 0x8000000000000000ULL);
                    goto __Vlabel124;
                }
                if ((0ULL == vlSelfRef.__Vfunc_sfp_div__248__a)) {
                    vlSelfRef.__Vfunc_sfp_div__248__Vfuncout = 0ULL;
                    goto __Vlabel124;
                }
                vlSelfRef.__Vfunc_sfp_div__248__abs_a 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__248__a 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__248__a)
                        : vlSelfRef.__Vfunc_sfp_div__248__a);
                vlSelfRef.__Vfunc_sfp_div__248__abs_b 
                    = ((1U & (IData)((vlSelfRef.__Vfunc_sfp_div__248__b 
                                      >> 0x3fU))) ? 
                       (- vlSelfRef.__Vfunc_sfp_div__248__b)
                        : vlSelfRef.__Vfunc_sfp_div__248__b);
                vlSelfRef.__Vfunc_sfp_div__248__sign_bit 
                    = (IData)(((vlSelfRef.__Vfunc_sfp_div__248__a 
                                ^ vlSelfRef.__Vfunc_sfp_div__248__b) 
                               >> 0x3fU));
                __Vtemp_783[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__248__abs_a);
                __Vtemp_783[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__248__abs_a 
                                           >> 0x20U));
                __Vtemp_783[2U] = 0U;
                __Vtemp_783[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_783, 0x20U);
                vlSelfRef.__Vfunc_sfp_div__248__b_ext[0U] 
                    = (IData)(vlSelfRef.__Vfunc_sfp_div__248__abs_b);
                vlSelfRef.__Vfunc_sfp_div__248__b_ext[1U] 
                    = (IData)((vlSelfRef.__Vfunc_sfp_div__248__abs_b 
                               >> 0x20U));
                vlSelfRef.__Vfunc_sfp_div__248__b_ext[2U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__248__b_ext[3U] = 0U;
                vlSelfRef.__Vfunc_sfp_div__248__result = 0ULL;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_785, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_785)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_787, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_786, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_787);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_786[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_786[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_786[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_786[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_789, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_789)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_791, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_790, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_791);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_790[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_790[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_790[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_790[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_793, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_793)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_795, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_794, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_795);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_794[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_794[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_794[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_794[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_797, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_797)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_799, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_798, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_799);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_798[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_798[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_798[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_798[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_801, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_801)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_803, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_802, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_803);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_802[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_802[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_802[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_802[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_805, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_805)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_807, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_806, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_807);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_806[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_806[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_806[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_806[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_809, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_809)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_811, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_810, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_811);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_810[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_810[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_810[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_810[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_813, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_813)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_815, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_814, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_815);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_814[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_814[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_814[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_814[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_817, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_817)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_819, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_818, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_819);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_818[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_818[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_818[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_818[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_821, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_821)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_823, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_822, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_823);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_822[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_822[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_822[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_822[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_825, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_825)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_827, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_826, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_827);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_826[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_826[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_826[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_826[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_829, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_829)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_831, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_830, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_831);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_830[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_830[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_830[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_830[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_833, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_833)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_835, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_834, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_835);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_834[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_834[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_834[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_834[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_837, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_837)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_839, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_838, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_839);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_838[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_838[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_838[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_838[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_841, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_841)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_843, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_842, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_843);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_842[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_842[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_842[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_842[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_845, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_845)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_847, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_846, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_847);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_846[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_846[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_846[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_846[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_849, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_849)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_851, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_850, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_851);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_850[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_850[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_850[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_850[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_853, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_853)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_855, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_854, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_855);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_854[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_854[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_854[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_854[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_857, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_857)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_859, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_858, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_859);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_858[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_858[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_858[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_858[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_861, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_861)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_863, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_862, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_863);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_862[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_862[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_862[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_862[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_865, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_865)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_867, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_866, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_867);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_866[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_866[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_866[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_866[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_869, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_869)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_871, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_870, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_871);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_870[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_870[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_870[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_870[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_873, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_873)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_875, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_874, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_875);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_874[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_874[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_874[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_874[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_877, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_877)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_879, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_878, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_879);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_878[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_878[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_878[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_878[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_881, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_881)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_883, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_882, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_883);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_882[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_882[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_882[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_882[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_885, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_885)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_887, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_886, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_887);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_886[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_886[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_886[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_886[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_889, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_889)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_891, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_890, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_891);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_890[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_890[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_890[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_890[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_893, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_893)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_895, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_894, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_895);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_894[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_894[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_894[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_894[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_897, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_897)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_899, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_898, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_899);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_898[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_898[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_898[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_898[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_901, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_901)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_903, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_902, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_903);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_902[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_902[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_902[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_902[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_905, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_905)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_907, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_906, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_907);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_906[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_906[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_906[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_906[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_909, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_909)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_911, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_910, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_911);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_910[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_910[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_910[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_910[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_913, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_913)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_915, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_914, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_915);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_914[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_914[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_914[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_914[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_917, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_917)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_919, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_918, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_919);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_918[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_918[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_918[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_918[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_921, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_921)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_923, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_922, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_923);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_922[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_922[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_922[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_922[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_925, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_925)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_927, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_926, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_927);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_926[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_926[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_926[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_926[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_929, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_929)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_931, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_930, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_931);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_930[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_930[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_930[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_930[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_933, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_933)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_935, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_934, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_935);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_934[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_934[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_934[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_934[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_937, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_937)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_939, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_938, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_939);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_938[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_938[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_938[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_938[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_941, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_941)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_943, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_942, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_943);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_942[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_942[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_942[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_942[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_945, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_945)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_947, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_946, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_947);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_946[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_946[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_946[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_946[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_949, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_949)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_951, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_950, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_951);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_950[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_950[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_950[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_950[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_953, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_953)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_955, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_954, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_955);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_954[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_954[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_954[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_954[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_957, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_957)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_959, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_958, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_959);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_958[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_958[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_958[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_958[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_961, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_961)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_963, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_962, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_963);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_962[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_962[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_962[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_962[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_965, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_965)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_967, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_966, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_967);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_966[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_966[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_966[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_966[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_969, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_969)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_971, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_970, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_971);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_970[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_970[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_970[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_970[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_973, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_973)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_975, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_974, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_975);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_974[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_974[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_974[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_974[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_977, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_977)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_979, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_978, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_979);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_978[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_978[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_978[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_978[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_981, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_981)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_983, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_982, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_983);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_982[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_982[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_982[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_982[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_985, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_985)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_987, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_986, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_987);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_986[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_986[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_986[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_986[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_989, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_989)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_991, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_990, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_991);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_990[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_990[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_990[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_990[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_993, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_993)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_995, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_994, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_995);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_994[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_994[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_994[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_994[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_997, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_997)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_999, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_998, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_999);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_998[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_998[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_998[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_998[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1001, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_1001)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1003, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_1002, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_1003);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_1002[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_1002[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_1002[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_1002[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1005, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_1005)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1007, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_1006, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_1007);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_1006[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_1006[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_1006[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_1006[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1009, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_1009)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1011, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_1010, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_1011);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_1010[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_1010[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_1010[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_1010[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1013, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_1013)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1015, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_1014, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_1015);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_1014[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_1014[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_1014[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_1014[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1017, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_1017)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1019, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_1018, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_1019);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_1018[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_1018[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_1018[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_1018[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1021, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_1021)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1023, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_1022, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_1023);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_1022[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_1022[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_1022[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_1022[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1025, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_1025)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1027, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_1026, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_1027);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_1026[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_1026[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_1026[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_1026[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1029, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_1029)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1031, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_1030, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_1031);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_1030[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_1030[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_1030[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_1030[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_1033, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_1033)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_1035, vlSelfRef.__Vfunc_sfp_div__248__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_1034, vlSelfRef.__Vfunc_sfp_div__248__remainder, __Vtemp_1035);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_1034[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_1034[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_1034[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_1034[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__248__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__248__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__248__remainder, vlSelfRef.__Vfunc_sfp_div__248__b_ext)) {
                    VL_SUB_W(4, __Vtemp_1037, vlSelfRef.__Vfunc_sfp_div__248__remainder, vlSelfRef.__Vfunc_sfp_div__248__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[0U] 
                        = __Vtemp_1037[0U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[1U] 
                        = __Vtemp_1037[1U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[2U] 
                        = __Vtemp_1037[2U];
                    vlSelfRef.__Vfunc_sfp_div__248__remainder[3U] 
                        = __Vtemp_1037[3U];
                    vlSelfRef.__Vfunc_sfp_div__248__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__248__result);
                }
                __Vfunc_sfp_div__248__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_sfp_div__248__Vfuncout 
                    = ((IData)(vlSelfRef.__Vfunc_sfp_div__248__sign_bit)
                        ? (- vlSelfRef.__Vfunc_sfp_div__248__result)
                        : vlSelfRef.__Vfunc_sfp_div__248__result);
                __Vlabel124: ;
            }
            vlSelfRef.__Vfunc_sfp_sub__247__a = vlSelfRef.__Vfunc_sfp_div__248__Vfuncout;
            vlSelfRef.__Vfunc_sfp_sub__247__Vfuncout 
                = (vlSelfRef.__Vfunc_sfp_sub__247__a 
                   - vlSelfRef.__Vfunc_sfp_sub__247__b);
            vlSelfRef.__Vfunc_sfp_tanh__244__Vfuncout 
                = vlSelfRef.__Vfunc_sfp_sub__247__Vfuncout;
            __Vlabel122: ;
        }
        vlSelfRef.__Vfunc_sfp_mul__231__a = vlSelfRef.__Vfunc_sfp_tanh__244__Vfuncout;
        VL_EXTENDS_WQ(128,64, __Vtemp_1038, vlSelfRef.__Vfunc_sfp_mul__231__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1039, vlSelfRef.__Vfunc_sfp_mul__231__b);
        VL_MULS_WWW(128, __Vtemp_1040, __Vtemp_1038, __Vtemp_1039);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__231__tmp, __Vtemp_1040, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__231__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__231__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__231__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_sub__230__b = vlSelfRef.__Vfunc_sfp_mul__231__Vfuncout;
        vlSelfRef.__Vfunc_sfp_sub__230__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.__Vfunc_sfp_sub__230__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_sub__230__a - vlSelfRef.__Vfunc_sfp_sub__230__b);
        vlSelfRef.__Vfunc_sfp_mul__229__b = vlSelfRef.__Vfunc_sfp_sub__230__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__229__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1041, vlSelfRef.__Vfunc_sfp_mul__229__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1042, vlSelfRef.__Vfunc_sfp_mul__229__b);
        VL_MULS_WWW(128, __Vtemp_1043, __Vtemp_1041, __Vtemp_1042);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__229__tmp, __Vtemp_1043, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__229__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__229__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__229__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__228__b = vlSelfRef.__Vfunc_sfp_mul__229__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__228__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1044, vlSelfRef.__Vfunc_sfp_mul__228__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1045, vlSelfRef.__Vfunc_sfp_mul__228__b);
        VL_MULS_WWW(128, __Vtemp_1046, __Vtemp_1044, __Vtemp_1045);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__228__tmp, __Vtemp_1046, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__228__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__228__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__228__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__227__b = vlSelfRef.__Vfunc_sfp_mul__228__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__227__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__227__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__227__a + vlSelfRef.__Vfunc_sfp_add__227__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__227__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 1U;
    } else if ((3U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_mul__257__b = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__sum)
                                              ? vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer
                                             [0U] : 0ULL);
        vlSelfRef.__Vfunc_sfp_mul__257__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_1047, vlSelfRef.__Vfunc_sfp_mul__257__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_1048, vlSelfRef.__Vfunc_sfp_mul__257__b);
        VL_MULS_WWW(128, __Vtemp_1049, __Vtemp_1047, __Vtemp_1048);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__257__tmp, __Vtemp_1049, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__257__Vfuncout = 
            (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__257__tmp[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__257__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__256__b = vlSelfRef.__Vfunc_sfp_mul__257__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__256__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__256__Vfuncout = 
            (vlSelfRef.__Vfunc_sfp_add__256__a + vlSelfRef.__Vfunc_sfp_add__256__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__256__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 1U;
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    }
    __Vfunc_sfp_mul__258__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__values
        [0U];
    __Vfunc_sfp_mul__258__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1050, __Vfunc_sfp_mul__258__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1051, __Vfunc_sfp_mul__258__b);
    VL_MULS_WWW(128, __Vtemp_1052, __Vtemp_1050, __Vtemp_1051);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__258__tmp, __Vtemp_1052, 0x20U);
    __Vfunc_sfp_mul__258__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__258__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__258__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__258__Vfuncout;
    __Vfunc_sfp_mul__258__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__values
        [1U];
    __Vfunc_sfp_mul__258__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1053, __Vfunc_sfp_mul__258__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_1054, __Vfunc_sfp_mul__258__b);
    VL_MULS_WWW(128, __Vtemp_1055, __Vtemp_1053, __Vtemp_1054);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__258__tmp, __Vtemp_1055, 0x20U);
    __Vfunc_sfp_mul__258__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__258__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__258__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__258__Vfuncout;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i = 2U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients[1U][1U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient;
}
