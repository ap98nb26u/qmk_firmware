#pragma once

#include <quantum_keycodes.h>
#include "sendstring_japanese.h" // assume Japanese layout

#define JP_RSQT JP_QUOT
#define JP_RDQT JP_DQUO

enum custom_keycodes {
  JP___ = SAFE_RANGE,
  JP__A, JP__I, JP__E, JP__O,
  JP_NA, JP_NI, JP_NU, JP_NE, JP_NO,
  JP_MA, JP_MI, JP_MU, JP_ME, JP_MO,
  JP_YA, JP_YU, JP_YO,
  JP_RA, JP_RI, JP_RU, JP_RE, JP_RO,
  JP_WA, JP_WI, JP_WE, JP_WO,
  JP_NN,
  JP__a, JP__i, JP__u, JP__e, JP__o,
  JP_ya, JP_yu, JP_yo,
  JP_tu, JP_wa, JP_ka, JP_ke,

  JP__U, 
  JP_KA, JP_KI, JP_KU, JP_KE, JP_KO,
  JP_SA, JP_SI, JP_SU, JP_SE, JP_SO,
  JP_TA, JP_TI, JP_TU, JP_TE, JP_TO,
  JP_HA, JP_HI, JP_HU, JP_HE, JP_HO,

  JP_VU,
  JP_GA, JP_GI, JP_GU, JP_GE, JP_GO,
  JP_ZA, JP_ZI, JP_ZU, JP_ZE, JP_ZO,
  JP_DA, JP_DI, JP_DU, JP_DE, JP_DO,
  JP_BA, JP_BI, JP_BU, JP_BE, JP_BO,

  JP_PA, JP_PI, JP_PU, JP_PE, JP_PO,

  JP_DKTN, // ゛
  JP_HNDK, // ゜

  JP_2121, // "　"
  JP_TOTN, // 、
  JP_KUTN, // 。
  JP_2124, // ，
  JP_2125, // ．
  JP_CDOT, // ・
  JP_2127, // ：
  JP_2128, // ；
  JP_2129, // ？
  JP_212A, // ！


  JP_ACUT, // ´
  JP_212E, // ｀
  JP_UMLA, // ¨
  JP_2130, // ＾
  JP_OVRL, // ￣
  JP_2132, // ＿
  JP_DIT1, // ヽ
  JP_DIT2, // ヾ
  JP_DIT3, // ゝ
  JP_DIT4, // ゞ
  JP_DIT5, // 〃
  JP_DOU,  // 仝
  JP_DIT6, // 々
  JP_SIME, // 〆
  JP_CCIR, // 〇
  JP_TYOU, // ー
  JP_DASH, // ―
  JP_HIPH, // ‐
  JP_213F, // ／
  JP_2140, // ＼
  JP_2141, // ～
  JP_PARA, // ∥
  JP_2143, // ｜
  JP_TDLD, // …
  JP_DDLD, // ‥
  JP_LSQT, // ‘
  JP_2147, // ’
  JP_LDQT, // “
  JP_2149, // ”
  JP_214A, // （
  JP_214B, // ）
  JP_LTSB, // 〔
  JP_RTSB, // 〕
  JP_214E, // ［
  JP_214F, // ］
  JP_2150, // ｛
  JP_2151, // ｝
  JP_LSYK, // 〈
  JP_RSYK, // 〉
  JP_LDYK, // 《
  JP_RDYK, // 》
  JP_LSKK, // 「
  JP_RSKK, // 」
  JP_LDKK, // 『
  JP_RDKK, // 』
  JP_LSMK, // 【
  JP_RSMK, // 】
  JP_TASU, // ＋
  JP_HIKU, // －
  JP_PLMI, // ±
  JP_MULT, // ×
  JP_DIV,  // ÷
  JP_2161, // ＝
  JP_NEQ,  // ≠
  JP_2163, // ＜
  JP_2164, // ＞
  JP_LTE,  // ≦
  JP_GTE,  // ≧
  JP_INF,  // ∞
  JP_THFR, // ∴
  JP_MASC, // ♂
  JP_FEMN, // ♀
  JP_DEG,  // °
  JP_MIN,  // ′
  JP_SEC,  // ″
  JP_CELC, // ℃
  JP_216F, // ￥
  JP_2170, // ＄
  JP_CENT, // ￠
  JP_POND, // ￡
  JP_2173, // ％
  JP_2174, // ＃
  JP_2175, // ＆
  JP_2176, // ＊
  JP_2177, // ＠
  JP_SECT, // §
  JP_WSTR, // ☆
  JP_BSTR, // ★
  JP_WCRC, // ○
  JP_BCRC, // ●
  JP_DCRC, // ◎
  JP_WDIA, // ◇
  JP_BDIA, // ◆
  JP_WSQU, // □
  JP_BSQU, // ■
  JP_WTRI, // △
  JP_BTRI, // ▲
  JP_WRTR, // ▽
  JP_BRTR, // ▼
  JP_KOME, // ※
  JP_POST, // 〒
  JP_RAR,  // →
  JP_LAR,  // ←
  JP_UAR,  // ↑
  JP_DAR,  // ↓
  JP_GETA, // 〓
  JP_ELEM, // ∈
  JP_CONT, // ∋
  JP_SBS1, // ⊆
  JP_SPS1, // ⊇
  JP_SBS2, // ⊂
  JP_SPS2, // ⊃
  JP_CUP,  // ∪
  JP_CAP,  // ∩
  JP_AND,  // ∧
  JP_OR,   // ∨
  JP_NOT,  // ￢
  JP_THEN, // ⇒
  JP_EQV1, // ⇔
  JP_ALL,  // ∀
  JP_EXST, // ∃
  JP_ANGL, // ∠
  JP_PPND, // ⊥
  JP_ARC,  // ⌒
  JP_RNDD, // ∂
  JP_NABL, // ∇
  JP_EQV2, // ≡
  JP_AEQ,  // ≒
  JP_MLT,  // ≪
  JP_MGT,  // ≫
  JP_SQRT, // √
  JP_SIML, // ∽
  JP_PROP, // ∝
  JP_BCAU, // ∵
  JP_INT,  // ∫
  JP_DINT, // ∬
  JP_ANGS, // Å
  JP_PERM, // ‰
  JP_SHRP, // ♯
  JP_FLAT, // ♭
  JP_NOTE, // ♪
  JP_DGR,  // †
  JP_DDGR, // ‡
  JP_PRGR, // ¶
  JP_CCMP, // ◯
  JP_KS01, // ─
  JP_KS02, // │
  JP_KS03, // ┌
  JP_KS04, // ┐
  JP_KS05, // ┘
  JP_KS06, // └
  JP_KS07, // ├
  JP_KS08, // ┬
  JP_KS09, // ┤
  JP_KS10, // ┴
  JP_KS11, // ┼
  JP_KS12, // ━
  JP_KS13, // ┃
  JP_KS14, // ┏
  JP_KS15, // ┓
  JP_KS16, // ┛
  JP_KS17, // ┗
  JP_KS18, // ┣
  JP_KS19, // ┳
  JP_KS20, // ┫
  JP_KS21, // ┻
  JP_KS22, // ╋
  JP_KS23, // ┠
  JP_KS24, // ┯
  JP_KS25, // ┨
  JP_KS26, // ┷
  JP_KS27, // ┿
  JP_KS28, // ┝
  JP_KS29, // ┰
  JP_KS30, // ┥
  JP_KS31, // ┸
  JP_KS32, // ╂

  JP_LAST,

  KC_LFN, KC_RFN,
  EISU, KANA, LOWER, RAISE, ADJUST
};

const char * romaji_to_str[] = {
  "", // JP____
  "a", "i", "e", "o",
  "na", "ni", "nu", "ne", "no",
  "ma", "mi", "mu", "me", "mo",
  "ya", "yu", "yo",
  "ra", "ri", "ru", "re", "ro",
  "wa", "wyi", "wye", "wo",
  "n'",
  "xa", "xi", "xu", "xe", "xo",
  "xya", "xyu", "xyo",
  "xtu", "xwa", "xka", "xke",

  "u", 
  "ka", "ki", "ku", "ke", "ko",
  "sa", "si", "su", "se", "so",
  "ta", "ti", "tu", "te", "to",
  "ha", "hi", "hu", "he", "ho",

  "vu",
  "ga", "gi", "gu", "ge", "go",
  "za", "zi", "zu", "ze", "zo",
  "da", "di", "du", "de", "do",
  "ba", "bi", "bu", "be", "bo",

  "pa", "pi", "pu", "pe", "po",

  "z212b", // ゛
  "z212c", // ゜

  "z2121", // "　"
  "z2122", // 、
  "z2123", // 。
  "z2124", // ，
  "z2125", // ．
  "z2126", // ・
  "z2127", // ：
  "z2128", // ；
  "z2129", // ？
  "z212a", // ！


  "z212d", // ´
  "z212e", // ｀
  "z212f", // ¨
  "z2130", // ＾
  "z2131", // ￣
  "z2132", // ＿
  "z2133", // ヽ
  "z2134", // ヾ
  "z2135", // ゝ
  "z2136", // ゞ
  "z2137", // 〃
  "z2138", // 仝
  "z2139", // 々
  "z213a", // 〆
  "z213b", // 〇
  "z213c", // ー
  "z213d", // ―
  "z213e", // ‐
  "z213f", // ／
  "z2140", // ＼
  "z2141", // ～
  "z2142", // ∥
  "z2143", // ｜
  "z2144", // …
  "z2145", // ‥
  "z2146", // ‘
  "z2147", // ’
  "z2148", // “
  "z2149", // ’
  "z214a", // （
  "z214b", // ）
  "z214c", // 〔
  "z214d", // 〕
  "z214e", // ［
  "z214f", // 〕
  "z2150", // ｛
  "z2151", // ｝
  "z2152", // 〈
  "z2153", // 〉
  "z2154", // 《
  "z2155", // 》
  "z2156", // 「
  "z2157", // 」
  "z2158", // 『
  "z2159", // 』
  "z215a", // 【
  "z215b", // 】
  "z215c", // ＋
  "z215d", // －
  "z215e", // ±
  "z215f", // ×
  "z2160", // ÷
  "z2161", // ＝
  "z2162", // ≠
  "z2163", // ＜
  "z2164", // ＞
  "z2165", // ≦
  "z2166", // ≧
  "z2167", // ∞
  "z2168", // ∴
  "z2169", // ♂
  "z216a", // ♀
  "z216b", // °
  "z216c", // ′
  "z216d", // ″
  "z216e", // ℃
  "z216f", // ￥
  "z2170", // ＄
  "z2171", // ￠
  "z2172", // ￡
  "z2173", // ％
  "z2174", // ＃
  "z2175", // ＆
  "z2176", // ＊
  "z2177", // ＠
  "z2178", // §
  "z2179", // ☆
  "z217a", // ★
  "z217b", // ○
  "z217c", // ●
  "z217d", // ◎
  "z217e", // ◇
  "z2221", // ◆
  "z2222", // □
  "z2223", // ■
  "z2224", // △
  "z2225", // ▲
  "z2226", // ▽
  "z2227", // ▼
  "z2228", // ※
  "z2229", // 〒
  "z222a", // →
  "z222b", // ←
  "z222c", // ↑
  "z222d", // ↓
  "z222e", // 〓
  "z223a", // ∈
  "z223b", // ∋
  "z223c", // ⊆
  "z223d", // ⊇
  "z223e", // ⊂
  "z223f", // ⊃
  "z2240", // ∪
  "z2241", // ∩
  "z224a", // ∧
  "z224b", // ∨
  "z224c", // ￢
  "z224d", // ⇒
  "z224e", // ⇔
  "z224f", // ∀
  "z2250", // ∃
  "z225c", // ∠
  "z225d", // ⊥
  "z225e", // ⌒
  "z225f", // ∂
  "z2260", // ∇
  "z2261", // ≡
  "z2262", // ≒
  "z2263", // ≪
  "z2264", // ≫
  "z2265", // √
  "z2266", // ∽
  "z2267", // ∝
  "z2268", // ∵
  "z2269", // ∫
  "z226a", // ∬
  "z2272", // Å
  "z2273", // ‰
  "z2274", // ♯
  "z2275", // ♭
  "z2276", // ♪
  "z2277", // †
  "z2278", // ‡
  "z2279", // ¶
  "z227e", // ◯
  "z2821", // ─
  "z2822", // │
  "z2823", // ┌
  "z2824", // ┐
  "z2825", // ┘
  "z2826", // └
  "z2827", // ├
  "z2828", // ┬
  "z2829", // ┤
  "z282a", // ┴
  "z282b", // ┼
  "z282c", // ━
  "z282d", // ┃
  "z282e", // ┏
  "z282f", // ┓
  "z2830", // ┛
  "z2831", // ┗
  "z2832", // ┣
  "z2833", // ┳
  "z2834", // ┫
  "z2835", // ┻
  "z2836", // ╋
  "z2837", // ┠
  "z2838", // ┯
  "z2839", // ┨
  "z283a", // ┷
  "z283b", // ┿
  "z283c", // ┝
  "z283d", // ┰
  "z283e", // ┥
  "z283f", // ┸
  "z2840", // ╂

  "", // JP_LAST

  "", "",
  "", "", "", "", ""
};
