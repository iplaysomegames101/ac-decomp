#include "libforest/gbi_extensions.h"

extern u8 wave3_tex_dummy[];
extern u8 wave1_tex_dummy[];
extern u8 beach2_tex_dummy2[];

static Vtx grd_s_o_ta_1_v[] = {
#include "assets/field/bg/grd_s_o_ta_1_v.inc"
};

extern Gfx grd_s_o_ta_1_model[] = {
    gsSPTexture(0, 0, 0, 0, G_ON),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 255, 32, 48, 144, 255),
    gsSPDisplayList(0x0C000000),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPLoadTextureBlock_4b_Dolphin(beach2_tex_dummy2, G_IM_FMT_I, 32, 16, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&grd_s_o_ta_1_v[0], 15, 0),
    gsSPNTrianglesInit_5b(
        16, // tri count
        0, 1, 2, // tri0
        1, 3, 2, // tri1
        0, 4, 5 // tri2
    ),
    gsSPNTriangles_5b(
        4, 6, 5, // tri0
        7, 4, 8, // tri1
        4, 9, 8, // tri2
        7, 10, 11 // tri3
    ),
    gsSPNTriangles_5b(
        10, 12, 11, // tri0
        1, 5, 13, // tri1
        1, 0, 5, // tri2
        4, 2, 9 // tri3
    ),
    gsSPNTriangles_5b(
        4, 0, 2, // tri0
        4, 11, 6, // tri1
        4, 7, 11, // tri2
        10, 8, 14 // tri3
    ),
    gsSPNTriangles_5b(
        10, 7, 8, // tri0
        0, 0, 0, // tri1
        0, 0, 0, // tri2
        0, 0, 0 // tri3
    ),
    gsSPEndDisplayList(),
};

extern Gfx grd_s_o_ta_1_modelT[] = {
    gsSPTexture(0, 0, 0, 0, G_ON),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, TEXEL0, TEXEL1, 0, TEXEL0, 0, PRIMITIVE, 0, SHADE, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 255, 60, 120, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, wave1_tex_dummy),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 0, 0, GX_REPEAT, GX_REPEAT, 0, 0),
    gsDPSetTextureImage_Dolphin(G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, wave3_tex_dummy),
    gsDPSetTile_Dolphin(G_DOLPHIN_TLUT_DEFAULT_MODE, 1, 0, GX_REPEAT, GX_REPEAT, 0, 0),
    gsSPDisplayList(0x0D000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&grd_s_o_ta_1_v[15], 32, 0),
    gsSPNTrianglesInit_5b(
        36, // tri count
        0, 1, 2, // tri0
        1, 3, 2, // tri1
        3, 4, 2 // tri2
    ),
    gsSPNTriangles_5b(
        3, 5, 4, // tri0
        1, 6, 3, // tri1
        6, 7, 3, // tri2
        7, 5, 3 // tri3
    ),
    gsSPNTriangles_5b(
        8, 9, 10, // tri0
        8, 11, 9, // tri1
        9, 12, 10, // tri2
        9, 13, 12 // tri3
    ),
    gsSPNTriangles_5b(
        11, 14, 15, // tri0
        14, 16, 15, // tri1
        16, 13, 15, // tri2
        0, 2, 17 // tri3
    ),
    gsSPNTriangles_5b(
        2, 4, 17, // tri0
        4, 18, 17, // tri1
        1, 19, 20, // tri2
        19, 7, 20 // tri3
    ),
    gsSPNTriangles_5b(
        19, 21, 7, // tri0
        1, 22, 19, // tri1
        22, 23, 19, // tri2
        23, 21, 19 // tri3
    ),
    gsSPNTriangles_5b(
        1, 24, 22, // tri0
        24, 23, 22, // tri1
        24, 25, 23, // tri2
        1, 26, 24 // tri3
    ),
    gsSPNTriangles_5b(
        26, 27, 24, // tri0
        27, 25, 24, // tri1
        27, 28, 25, // tri2
        26, 29, 27 // tri3
    ),
    gsSPNTriangles_5b(
        29, 30, 27, // tri0
        30, 28, 27, // tri1
        26, 8, 29, // tri2
        8, 31, 29 // tri3
    ),
    gsSPNTriangles_5b(
        31, 30, 29, // tri0
        0, 0, 0, // tri1
        0, 0, 0, // tri2
        0, 0, 0 // tri3
    ),
    gsSPVertex(&grd_s_o_ta_1_v[47], 13, 0),
    gsSPNTrianglesInit_5b(
        10, // tri count
        0, 1, 2, // tri0
        3, 4, 0, // tri1
        4, 5, 0 // tri2
    ),
    gsSPNTriangles_5b(
        5, 1, 0, // tri0
        6, 7, 8, // tri1
        7, 9, 8, // tri2
        7, 10, 9 // tri3
    ),
    gsSPNTriangles_5b(
        6, 11, 7, // tri0
        11, 12, 7, // tri1
        12, 10, 7, // tri2
        0, 0, 0 // tri3
    ),
    gsSPEndDisplayList(),
};
