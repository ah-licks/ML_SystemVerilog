// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron__Syms.h"
#include "VPerceptron___024root.h"

VL_INLINE_OPT void VPerceptron___024root___nba_comb__TOP__1(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___nba_comb__TOP__1\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    if ((1U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_sub__71__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction;
        vlSelfRef.__Vfunc_sfp_sub__71__a = vlSymsp->TOP__FixedPoint.ONE;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.__Vfunc_sfp_sub__71__Vfuncout = (vlSelfRef.__Vfunc_sfp_sub__71__a 
                                                   - vlSelfRef.__Vfunc_sfp_sub__71__b);
        vlSelfRef.__Vfunc_sfp_mul__70__b = vlSelfRef.__Vfunc_sfp_sub__71__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__70__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction;
        VL_EXTENDS_WQ(128,64, __Vtemp_1, vlSelfRef.__Vfunc_sfp_mul__70__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_2, vlSelfRef.__Vfunc_sfp_mul__70__b);
        VL_MULS_WWW(128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__70__tmp, __Vtemp_3, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__70__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__70__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__70__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__69__b = vlSelfRef.__Vfunc_sfp_mul__70__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__69__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_4, vlSelfRef.__Vfunc_sfp_mul__69__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_5, vlSelfRef.__Vfunc_sfp_mul__69__b);
        VL_MULS_WWW(128, __Vtemp_6, __Vtemp_4, __Vtemp_5);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__69__tmp, __Vtemp_6, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__69__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__69__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__69__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__68__b = vlSelfRef.__Vfunc_sfp_mul__69__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__68__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_7, vlSelfRef.__Vfunc_sfp_mul__68__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_8, vlSelfRef.__Vfunc_sfp_mul__68__b);
        VL_MULS_WWW(128, __Vtemp_9, __Vtemp_7, __Vtemp_8);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__68__tmp, __Vtemp_9, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__68__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__68__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__68__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__67__b = vlSelfRef.__Vfunc_sfp_mul__68__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__67__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__67__Vfuncout = (vlSelfRef.__Vfunc_sfp_add__67__a 
                                                   + vlSelfRef.__Vfunc_sfp_add__67__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__67__Vfuncout;
    } else if ((2U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_pow__76__b = 2U;
        vlSelfRef.__Vfunc_sfp_tanh__77__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction;
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
                VL_EXTENDS_WQ(128,64, __Vtemp_10, vlSelfRef.__Vfunc_sfp_mul__86__a);
                VL_EXTENDS_WQ(128,64, __Vtemp_11, vlSelfRef.__Vfunc_sfp_mul__86__b);
                VL_MULS_WWW(128, __Vtemp_12, __Vtemp_10, __Vtemp_11);
                VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__86__tmp, __Vtemp_12, 0x20U);
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
                    __Vtemp_13[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__84__abs_a);
                    __Vtemp_13[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__84__abs_a 
                                              >> 0x20U));
                    __Vtemp_13[2U] = 0U;
                    __Vtemp_13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_13, 0x20U);
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
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_15, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_15)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_17, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3fU);
                        VL_SUB_W(4, __Vtemp_16, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_17);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_16[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_16[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_16[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_16[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x3eU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_19, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_19)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_21, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3eU);
                        VL_SUB_W(4, __Vtemp_20, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_21);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_20[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_20[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_20[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_20[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x3dU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_23, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_23)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_25, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3dU);
                        VL_SUB_W(4, __Vtemp_24, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_25);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_24[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_24[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_24[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_24[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x3cU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_27, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_27)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_29, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3cU);
                        VL_SUB_W(4, __Vtemp_28, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_29);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_28[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_28[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_28[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_28[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x3bU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_31, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_31)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_33, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3bU);
                        VL_SUB_W(4, __Vtemp_32, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_33);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_32[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_32[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_32[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_32[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x3aU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_35, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_35)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_37, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x3aU);
                        VL_SUB_W(4, __Vtemp_36, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_37);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_36[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_36[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_36[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_36[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x39U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_39, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x39U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_39)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_41, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x39U);
                        VL_SUB_W(4, __Vtemp_40, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_41);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_40[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_40[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_40[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_40[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x38U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_43, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x38U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_43)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_45, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x38U);
                        VL_SUB_W(4, __Vtemp_44, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_45);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_44[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_44[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_44[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_44[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x37U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_47, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x37U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_47)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_49, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x37U);
                        VL_SUB_W(4, __Vtemp_48, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_49);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_48[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_48[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_48[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_48[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x36U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_51, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x36U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_51)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_53, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x36U);
                        VL_SUB_W(4, __Vtemp_52, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_53);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_52[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_52[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_52[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_52[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x35U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_55, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x35U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_55)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_57, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x35U);
                        VL_SUB_W(4, __Vtemp_56, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_57);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_56[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_56[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_56[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_56[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x34U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_59, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x34U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_59)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_61, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x34U);
                        VL_SUB_W(4, __Vtemp_60, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_61);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_60[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_60[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_60[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_60[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x33U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_63, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x33U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_63)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_65, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x33U);
                        VL_SUB_W(4, __Vtemp_64, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_65);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_64[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_64[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_64[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_64[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x32U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_67, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x32U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_67)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_69, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x32U);
                        VL_SUB_W(4, __Vtemp_68, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_69);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_68[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_68[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_68[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_68[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x31U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_71, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x31U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_71)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_73, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x31U);
                        VL_SUB_W(4, __Vtemp_72, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_73);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_72[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_72[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_72[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_72[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x30U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_75, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x30U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_75)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_77, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x30U);
                        VL_SUB_W(4, __Vtemp_76, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_77);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_76[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_76[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_76[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_76[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x2fU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_79, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_79)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_81, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2fU);
                        VL_SUB_W(4, __Vtemp_80, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_81);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_80[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_80[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_80[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_80[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x2eU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_83, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_83)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_85, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2eU);
                        VL_SUB_W(4, __Vtemp_84, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_85);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_84[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_84[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_84[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_84[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x2dU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_87, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_87)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_89, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2dU);
                        VL_SUB_W(4, __Vtemp_88, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_89);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_88[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_88[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_88[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_88[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x2cU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_91, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_91)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_93, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2cU);
                        VL_SUB_W(4, __Vtemp_92, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_93);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_92[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_92[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_92[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_92[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x2bU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_95, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_95)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_97, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2bU);
                        VL_SUB_W(4, __Vtemp_96, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_97);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_96[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_96[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_96[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_96[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x2aU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_99, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_99)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_101, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x2aU);
                        VL_SUB_W(4, __Vtemp_100, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_101);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_100[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_100[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_100[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_100[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x29U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_103, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x29U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_103)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_105, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x29U);
                        VL_SUB_W(4, __Vtemp_104, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_105);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_104[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_104[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_104[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_104[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x28U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_107, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x28U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_107)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_109, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x28U);
                        VL_SUB_W(4, __Vtemp_108, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_109);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_108[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_108[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_108[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_108[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x27U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_111, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x27U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_111)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_113, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x27U);
                        VL_SUB_W(4, __Vtemp_112, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_113);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_112[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_112[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_112[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_112[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x26U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_115, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x26U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_115)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_117, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x26U);
                        VL_SUB_W(4, __Vtemp_116, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_117);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_116[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_116[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_116[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_116[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x25U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_119, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x25U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_119)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_121, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x25U);
                        VL_SUB_W(4, __Vtemp_120, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_121);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_120[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_120[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_120[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_120[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x24U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_123, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x24U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_123)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_125, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x24U);
                        VL_SUB_W(4, __Vtemp_124, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_125);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_124[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_124[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_124[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_124[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x23U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_127, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x23U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_127)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_129, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x23U);
                        VL_SUB_W(4, __Vtemp_128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_129);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_128[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_128[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_128[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_128[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x22U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_131, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x22U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_131)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_133, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x22U);
                        VL_SUB_W(4, __Vtemp_132, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_133);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_132[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_132[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_132[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_132[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x21U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_135, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x21U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_135)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_137, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x21U);
                        VL_SUB_W(4, __Vtemp_136, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_137);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_136[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_136[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_136[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_136[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x20U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_139, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x20U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_139)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_141, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x20U);
                        VL_SUB_W(4, __Vtemp_140, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_141);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_140[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_140[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_140[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_140[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x1fU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_143, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1fU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_143)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_145, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1fU);
                        VL_SUB_W(4, __Vtemp_144, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_145);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_144[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_144[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_144[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_144[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x1eU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_147, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1eU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_147)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_149, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1eU);
                        VL_SUB_W(4, __Vtemp_148, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_149);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_148[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_148[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_148[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_148[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x1dU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_151, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1dU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_151)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_153, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1dU);
                        VL_SUB_W(4, __Vtemp_152, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_153);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_152[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_152[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_152[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_152[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x1cU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_155, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1cU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_155)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_157, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1cU);
                        VL_SUB_W(4, __Vtemp_156, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_157);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_156[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_156[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_156[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_156[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x1bU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_159, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1bU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_159)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_161, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1bU);
                        VL_SUB_W(4, __Vtemp_160, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_161);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_160[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_160[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_160[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_160[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x1aU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_163, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1aU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_163)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_165, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x1aU);
                        VL_SUB_W(4, __Vtemp_164, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_165);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_164[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_164[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_164[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_164[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x19U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_167, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x19U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_167)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_169, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x19U);
                        VL_SUB_W(4, __Vtemp_168, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_169);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_168[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_168[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_168[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_168[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x18U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_171, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x18U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_171)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_173, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x18U);
                        VL_SUB_W(4, __Vtemp_172, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_173);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_172[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_172[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_172[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_172[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_175, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x17U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_175)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_177, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x17U);
                        VL_SUB_W(4, __Vtemp_176, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_177);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_176[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_176[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_176[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_176[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_179, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x16U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_179)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_181, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x16U);
                        VL_SUB_W(4, __Vtemp_180, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_181);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_180[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_180[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_180[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_180[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x15U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_183, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x15U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_183)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_185, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x15U);
                        VL_SUB_W(4, __Vtemp_184, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_185);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_184[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_184[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_184[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_184[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x14U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_187, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x14U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_187)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_189, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x14U);
                        VL_SUB_W(4, __Vtemp_188, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_189);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_188[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_188[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_188[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_188[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x13U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_191, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x13U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_191)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_193, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x13U);
                        VL_SUB_W(4, __Vtemp_192, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_193);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_192[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_192[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_192[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_192[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x12U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_195, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x12U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_195)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_197, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x12U);
                        VL_SUB_W(4, __Vtemp_196, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_197);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_196[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_196[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_196[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_196[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x11U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_199, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x11U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_199)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_201, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x11U);
                        VL_SUB_W(4, __Vtemp_200, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_201);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_200[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_200[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_200[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_200[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0x10U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_203, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x10U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_203)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_205, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0x10U);
                        VL_SUB_W(4, __Vtemp_204, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_205);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_204[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_204[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_204[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_204[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0xfU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_207, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xfU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_207)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_209, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xfU);
                        VL_SUB_W(4, __Vtemp_208, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_209);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_208[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_208[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_208[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_208[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0xeU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_211, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xeU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_211)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_213, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xeU);
                        VL_SUB_W(4, __Vtemp_212, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_213);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_212[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_212[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_212[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_212[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0xdU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_215, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xdU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_215)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_217, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xdU);
                        VL_SUB_W(4, __Vtemp_216, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_217);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_216[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_216[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_216[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_216[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0xcU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_219, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xcU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_219)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_221, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xcU);
                        VL_SUB_W(4, __Vtemp_220, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_221);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_220[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_220[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_220[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_220[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0xbU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_223, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xbU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_223)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_225, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xbU);
                        VL_SUB_W(4, __Vtemp_224, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_225);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_224[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_224[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_224[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_224[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0xaU;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_227, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xaU);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_227)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_229, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 0xaU);
                        VL_SUB_W(4, __Vtemp_228, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_229);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_228[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_228[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_228[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_228[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 9U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_231, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 9U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_231)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_233, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 9U);
                        VL_SUB_W(4, __Vtemp_232, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_233);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_232[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_232[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_232[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_232[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 8U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_235, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 8U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_235)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_237, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 8U);
                        VL_SUB_W(4, __Vtemp_236, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_237);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_236[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_236[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_236[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_236[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 7U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_239, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 7U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_239)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_241, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 7U);
                        VL_SUB_W(4, __Vtemp_240, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_241);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_240[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_240[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_240[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_240[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 6U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_243, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 6U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_243)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_245, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 6U);
                        VL_SUB_W(4, __Vtemp_244, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_245);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_244[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_244[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_244[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_244[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 5U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_247, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 5U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_247)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_249, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 5U);
                        VL_SUB_W(4, __Vtemp_248, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_249);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_248[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_248[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_248[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_248[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 4U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_251, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 4U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_251)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_253, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 4U);
                        VL_SUB_W(4, __Vtemp_252, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_253);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_252[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_252[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_252[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_252[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 3U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_255, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 3U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_255)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_257, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 3U);
                        VL_SUB_W(4, __Vtemp_256, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_257);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_256[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_256[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_256[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_256[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 2U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_259, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 2U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_259)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_261, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 2U);
                        VL_SUB_W(4, __Vtemp_260, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_261);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_260[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_260[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_260[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_260[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 1U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_263, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_263)) {
                        VL_SHIFTL_WWI(128,128,32, __Vtemp_265, vlSelfRef.__Vfunc_sfp_div__84__b_ext, 1U);
                        VL_SUB_W(4, __Vtemp_264, vlSelfRef.__Vfunc_sfp_div__84__remainder, __Vtemp_265);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_264[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_264[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_264[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_264[3U];
                        vlSelfRef.__Vfunc_sfp_div__84__result 
                            = (1ULL | vlSelfRef.__Vfunc_sfp_div__84__result);
                    }
                    __Vfunc_sfp_div__84__unnamedblk1__DOT__i = 0U;
                    vlSelfRef.__Vfunc_sfp_div__84__result 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__84__result, 1U);
                    if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__84__remainder, vlSelfRef.__Vfunc_sfp_div__84__b_ext)) {
                        VL_SUB_W(4, __Vtemp_267, vlSelfRef.__Vfunc_sfp_div__84__remainder, vlSelfRef.__Vfunc_sfp_div__84__b_ext);
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[0U] 
                            = __Vtemp_267[0U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[1U] 
                            = __Vtemp_267[1U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[2U] 
                            = __Vtemp_267[2U];
                        vlSelfRef.__Vfunc_sfp_div__84__remainder[3U] 
                            = __Vtemp_267[3U];
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
                __Vtemp_269[0U] = (IData)(vlSelfRef.__Vfunc_sfp_div__81__abs_a);
                __Vtemp_269[1U] = (IData)((vlSelfRef.__Vfunc_sfp_div__81__abs_a 
                                           >> 0x20U));
                __Vtemp_269[2U] = 0U;
                __Vtemp_269[3U] = 0U;
                VL_SHIFTL_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_269, 0x20U);
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
                VL_SHIFTL_WWI(128,128,32, __Vtemp_271, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_271)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_273, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3fU);
                    VL_SUB_W(4, __Vtemp_272, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_273);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_272[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_272[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_272[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_272[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x3eU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_275, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_275)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_277, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3eU);
                    VL_SUB_W(4, __Vtemp_276, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_277);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_276[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_276[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_276[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_276[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x3dU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_279, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_279)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_281, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3dU);
                    VL_SUB_W(4, __Vtemp_280, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_281);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_280[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_280[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_280[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_280[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x3cU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_283, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_283)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_285, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3cU);
                    VL_SUB_W(4, __Vtemp_284, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_285);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_284[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_284[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_284[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_284[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x3bU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_287, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_287)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_289, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3bU);
                    VL_SUB_W(4, __Vtemp_288, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_289);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_288[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_288[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_288[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_288[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x3aU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_291, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_291)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_293, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x3aU);
                    VL_SUB_W(4, __Vtemp_292, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_293);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_292[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_292[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_292[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_292[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x39U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_295, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x39U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_295)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_297, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x39U);
                    VL_SUB_W(4, __Vtemp_296, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_297);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_296[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_296[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_296[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_296[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x38U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_299, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x38U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_299)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_301, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x38U);
                    VL_SUB_W(4, __Vtemp_300, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_301);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_300[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_300[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_300[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_300[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x37U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_303, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x37U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_303)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_305, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x37U);
                    VL_SUB_W(4, __Vtemp_304, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_305);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_304[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_304[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_304[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_304[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x36U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_307, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x36U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_307)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_309, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x36U);
                    VL_SUB_W(4, __Vtemp_308, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_309);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_308[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_308[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_308[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_308[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x35U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_311, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x35U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_311)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_313, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x35U);
                    VL_SUB_W(4, __Vtemp_312, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_313);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_312[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_312[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_312[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_312[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x34U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_315, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x34U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_315)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_317, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x34U);
                    VL_SUB_W(4, __Vtemp_316, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_317);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_316[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_316[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_316[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_316[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x33U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_319, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x33U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_319)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_321, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x33U);
                    VL_SUB_W(4, __Vtemp_320, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_321);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_320[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_320[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_320[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_320[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x32U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_323, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x32U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_323)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_325, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x32U);
                    VL_SUB_W(4, __Vtemp_324, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_325);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_324[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_324[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_324[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_324[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x31U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_327, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x31U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_327)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_329, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x31U);
                    VL_SUB_W(4, __Vtemp_328, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_329);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_328[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_328[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_328[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_328[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x30U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_331, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x30U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_331)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_333, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x30U);
                    VL_SUB_W(4, __Vtemp_332, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_333);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_332[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_332[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_332[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_332[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x2fU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_335, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_335)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_337, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2fU);
                    VL_SUB_W(4, __Vtemp_336, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_337);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_336[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_336[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_336[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_336[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x2eU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_339, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_339)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_341, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2eU);
                    VL_SUB_W(4, __Vtemp_340, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_341);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_340[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_340[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_340[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_340[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x2dU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_343, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_343)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_345, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2dU);
                    VL_SUB_W(4, __Vtemp_344, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_345);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_344[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_344[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_344[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_344[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x2cU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_347, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_347)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_349, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2cU);
                    VL_SUB_W(4, __Vtemp_348, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_349);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_348[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_348[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_348[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_348[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x2bU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_351, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_351)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_353, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2bU);
                    VL_SUB_W(4, __Vtemp_352, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_353);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_352[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_352[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_352[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_352[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x2aU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_355, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_355)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_357, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x2aU);
                    VL_SUB_W(4, __Vtemp_356, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_357);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_356[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_356[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_356[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_356[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x29U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_359, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x29U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_359)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_361, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x29U);
                    VL_SUB_W(4, __Vtemp_360, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_361);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_360[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_360[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_360[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_360[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x28U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_363, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x28U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_363)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_365, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x28U);
                    VL_SUB_W(4, __Vtemp_364, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_365);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_364[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_364[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_364[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_364[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x27U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_367, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x27U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_367)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_369, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x27U);
                    VL_SUB_W(4, __Vtemp_368, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_369);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_368[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_368[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_368[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_368[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x26U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_371, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x26U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_371)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_373, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x26U);
                    VL_SUB_W(4, __Vtemp_372, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_373);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_372[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_372[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_372[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_372[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x25U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_375, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x25U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_375)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_377, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x25U);
                    VL_SUB_W(4, __Vtemp_376, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_377);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_376[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_376[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_376[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_376[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x24U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_379, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x24U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_379)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_381, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x24U);
                    VL_SUB_W(4, __Vtemp_380, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_381);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_380[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_380[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_380[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_380[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x23U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_383, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x23U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_383)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_385, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x23U);
                    VL_SUB_W(4, __Vtemp_384, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_385);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_384[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_384[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_384[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_384[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x22U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_387, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x22U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_387)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_389, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x22U);
                    VL_SUB_W(4, __Vtemp_388, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_389);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_388[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_388[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_388[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_388[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x21U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_391, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x21U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_391)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_393, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x21U);
                    VL_SUB_W(4, __Vtemp_392, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_393);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_392[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_392[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_392[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_392[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x20U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_395, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x20U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_395)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_397, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x20U);
                    VL_SUB_W(4, __Vtemp_396, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_397);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_396[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_396[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_396[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_396[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x1fU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_399, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1fU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_399)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_401, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1fU);
                    VL_SUB_W(4, __Vtemp_400, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_401);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_400[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_400[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_400[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_400[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x1eU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_403, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1eU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_403)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_405, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1eU);
                    VL_SUB_W(4, __Vtemp_404, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_405);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_404[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_404[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_404[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_404[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x1dU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_407, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1dU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_407)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_409, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1dU);
                    VL_SUB_W(4, __Vtemp_408, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_409);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_408[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_408[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_408[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_408[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x1cU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_411, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1cU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_411)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_413, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1cU);
                    VL_SUB_W(4, __Vtemp_412, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_413);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_412[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_412[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_412[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_412[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x1bU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_415, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1bU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_415)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_417, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1bU);
                    VL_SUB_W(4, __Vtemp_416, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_417);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_416[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_416[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_416[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_416[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x1aU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_419, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1aU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_419)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_421, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x1aU);
                    VL_SUB_W(4, __Vtemp_420, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_421);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_420[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_420[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_420[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_420[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x19U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_423, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x19U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_423)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_425, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x19U);
                    VL_SUB_W(4, __Vtemp_424, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_425);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_424[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_424[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_424[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_424[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x18U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_427, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x18U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_427)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_429, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x18U);
                    VL_SUB_W(4, __Vtemp_428, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_429);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_428[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_428[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_428[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_428[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_431, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x17U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_431)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_433, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x17U);
                    VL_SUB_W(4, __Vtemp_432, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_433);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_432[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_432[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_432[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_432[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_435, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x16U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_435)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_437, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x16U);
                    VL_SUB_W(4, __Vtemp_436, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_437);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_436[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_436[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_436[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_436[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x15U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_439, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x15U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_439)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_441, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x15U);
                    VL_SUB_W(4, __Vtemp_440, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_441);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_440[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_440[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_440[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_440[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x14U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_443, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x14U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_443)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_445, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x14U);
                    VL_SUB_W(4, __Vtemp_444, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_445);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_444[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_444[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_444[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_444[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x13U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_447, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x13U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_447)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_449, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x13U);
                    VL_SUB_W(4, __Vtemp_448, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_449);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_448[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_448[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_448[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_448[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x12U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_451, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x12U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_451)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_453, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x12U);
                    VL_SUB_W(4, __Vtemp_452, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_453);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_452[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_452[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_452[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_452[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x11U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_455, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x11U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_455)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_457, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x11U);
                    VL_SUB_W(4, __Vtemp_456, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_457);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_456[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_456[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_456[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_456[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0x10U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_459, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x10U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_459)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_461, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0x10U);
                    VL_SUB_W(4, __Vtemp_460, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_461);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_460[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_460[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_460[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_460[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_463, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xfU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_463)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_465, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xfU);
                    VL_SUB_W(4, __Vtemp_464, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_465);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_464[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_464[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_464[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_464[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_467, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xeU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_467)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_469, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xeU);
                    VL_SUB_W(4, __Vtemp_468, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_469);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_468[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_468[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_468[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_468[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_471, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xdU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_471)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_473, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xdU);
                    VL_SUB_W(4, __Vtemp_472, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_473);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_472[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_472[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_472[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_472[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_475, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xcU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_475)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_477, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xcU);
                    VL_SUB_W(4, __Vtemp_476, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_477);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_476[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_476[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_476[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_476[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_479, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xbU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_479)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_481, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xbU);
                    VL_SUB_W(4, __Vtemp_480, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_481);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_480[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_480[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_480[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_480[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_483, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xaU);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_483)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_485, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 0xaU);
                    VL_SUB_W(4, __Vtemp_484, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_485);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_484[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_484[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_484[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_484[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_487, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 9U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_487)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_489, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 9U);
                    VL_SUB_W(4, __Vtemp_488, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_489);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_488[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_488[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_488[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_488[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_491, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 8U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_491)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_493, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 8U);
                    VL_SUB_W(4, __Vtemp_492, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_493);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_492[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_492[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_492[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_492[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_495, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 7U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_495)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_497, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 7U);
                    VL_SUB_W(4, __Vtemp_496, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_497);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_496[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_496[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_496[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_496[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_499, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 6U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_499)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_501, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 6U);
                    VL_SUB_W(4, __Vtemp_500, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_501);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_500[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_500[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_500[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_500[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_503, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 5U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_503)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_505, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 5U);
                    VL_SUB_W(4, __Vtemp_504, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_505);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_504[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_504[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_504[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_504[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_507, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 4U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_507)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_509, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 4U);
                    VL_SUB_W(4, __Vtemp_508, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_509);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_508[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_508[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_508[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_508[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_511, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 3U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_511)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_513, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 3U);
                    VL_SUB_W(4, __Vtemp_512, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_513);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_512[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_512[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_512[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_512[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_515, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 2U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_515)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_517, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 2U);
                    VL_SUB_W(4, __Vtemp_516, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_517);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_516[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_516[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_516[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_516[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                VL_SHIFTL_WWI(128,128,32, __Vtemp_519, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_519)) {
                    VL_SHIFTL_WWI(128,128,32, __Vtemp_521, vlSelfRef.__Vfunc_sfp_div__81__b_ext, 1U);
                    VL_SUB_W(4, __Vtemp_520, vlSelfRef.__Vfunc_sfp_div__81__remainder, __Vtemp_521);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_520[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_520[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_520[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_520[3U];
                    vlSelfRef.__Vfunc_sfp_div__81__result 
                        = (1ULL | vlSelfRef.__Vfunc_sfp_div__81__result);
                }
                __Vfunc_sfp_div__81__unnamedblk1__DOT__i = 0U;
                vlSelfRef.__Vfunc_sfp_div__81__result 
                    = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_sfp_div__81__result, 1U);
                if (VL_GTES_IWW(128, vlSelfRef.__Vfunc_sfp_div__81__remainder, vlSelfRef.__Vfunc_sfp_div__81__b_ext)) {
                    VL_SUB_W(4, __Vtemp_523, vlSelfRef.__Vfunc_sfp_div__81__remainder, vlSelfRef.__Vfunc_sfp_div__81__b_ext);
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[0U] 
                        = __Vtemp_523[0U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[1U] 
                        = __Vtemp_523[1U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[2U] 
                        = __Vtemp_523[2U];
                    vlSelfRef.__Vfunc_sfp_div__81__remainder[3U] 
                        = __Vtemp_523[3U];
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
            VL_EXTENDS_WQ(128,64, __Vtemp_524, vlSelfRef.__Vfunc_sfp_mul__89__a);
            VL_EXTENDS_WQ(128,64, __Vtemp_525, vlSelfRef.__Vfunc_sfp_mul__89__b);
            VL_MULS_WWW(128, __Vtemp_526, __Vtemp_524, __Vtemp_525);
            VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__89__tmp, __Vtemp_526, 0x20U);
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
        vlSelfRef.__Vfunc_sfp_mul__74__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_528, vlSelfRef.__Vfunc_sfp_mul__74__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_529, vlSelfRef.__Vfunc_sfp_mul__74__b);
        VL_MULS_WWW(128, __Vtemp_530, __Vtemp_528, __Vtemp_529);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__74__tmp, __Vtemp_530, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__74__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__74__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__74__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__73__b = vlSelfRef.__Vfunc_sfp_mul__74__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__73__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_531, vlSelfRef.__Vfunc_sfp_mul__73__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_532, vlSelfRef.__Vfunc_sfp_mul__73__b);
        VL_MULS_WWW(128, __Vtemp_533, __Vtemp_531, __Vtemp_532);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__73__tmp, __Vtemp_533, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__73__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__73__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__73__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__72__b = vlSelfRef.__Vfunc_sfp_mul__73__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__72__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__72__Vfuncout = (vlSelfRef.__Vfunc_sfp_add__72__a 
                                                   + vlSelfRef.__Vfunc_sfp_add__72__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__72__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 1U;
    } else if ((3U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.__Vfunc_sfp_mul__91__b = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__sum)
                                             ? vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer
                                            [0U] : 0ULL);
        vlSelfRef.__Vfunc_sfp_mul__91__a = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_534, vlSelfRef.__Vfunc_sfp_mul__91__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_535, vlSelfRef.__Vfunc_sfp_mul__91__b);
        VL_MULS_WWW(128, __Vtemp_536, __Vtemp_534, __Vtemp_535);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__91__tmp, __Vtemp_536, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__91__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__91__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__91__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__90__b = vlSelfRef.__Vfunc_sfp_mul__91__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__90__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__90__Vfuncout = (vlSelfRef.__Vfunc_sfp_add__90__a 
                                                   + vlSelfRef.__Vfunc_sfp_add__90__b);
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__90__Vfuncout;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 1U;
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0ULL;
    }
    __Vfunc_sfp_mul__92__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__values
        [0U];
    __Vfunc_sfp_mul__92__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_537, __Vfunc_sfp_mul__92__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_538, __Vfunc_sfp_mul__92__b);
    VL_MULS_WWW(128, __Vtemp_539, __Vtemp_537, __Vtemp_538);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__92__tmp, __Vtemp_539, 0x20U);
    __Vfunc_sfp_mul__92__Vfuncout = (((QData)((IData)(
                                                      __Vfunc_sfp_mul__92__tmp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vfunc_sfp_mul__92__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__92__Vfuncout;
    __Vfunc_sfp_mul__92__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__values
        [1U];
    __Vfunc_sfp_mul__92__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_540, __Vfunc_sfp_mul__92__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_541, __Vfunc_sfp_mul__92__b);
    VL_MULS_WWW(128, __Vtemp_542, __Vtemp_540, __Vtemp_541);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__92__tmp, __Vtemp_542, 0x20U);
    __Vfunc_sfp_mul__92__Vfuncout = (((QData)((IData)(
                                                      __Vfunc_sfp_mul__92__tmp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vfunc_sfp_mul__92__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__92__Vfuncout;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i = 2U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients[0U][1U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient;
}
