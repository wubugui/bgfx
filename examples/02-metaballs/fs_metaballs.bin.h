static const uint8_t fs_metaballs_glsl[386] =
{
	0x46, 0x53, 0x48, 0x01, 0x03, 0x2c, 0xf5, 0x3f, 0x70, 0x72, 0x65, 0x63, 0x69, 0x73, 0x69, 0x6f, // FSH..,.?precisio
	0x6e, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3b, 0x0a, 0x76, // n highp float;.v
	0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, // arying vec4 v_co
	0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, // lor0;.varying ve
	0x63, 0x33, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, 0x76, 0x6f, 0x69, // c3 v_normal;.voi
	0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, // d main ().{.  fl
	0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, // oat tmpvar_1;.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x74, 0x20, 0x28, // tmpvar_1 = dot (
	0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, // normalize(v_norm
	0x61, 0x6c, 0x29, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x30, // al), vec3(0.0, 0
	0x2e, 0x30, 0x2c, 0x20, 0x2d, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, // .0, -1.0));.  ve
	0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, // c4 tmpvar_2;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, // mpvar_2.w = 1.0;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x79, 0x7a, 0x20, // .  tmpvar_2.xyz 
	0x3d, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x28, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x70, 0x6f, // = pow (((.    po
	0x77, 0x20, 0x28, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x2c, // w (v_color0.xyz,
	0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x32, 0x2e, 0x32, 0x2c, 0x20, 0x32, 0x2e, 0x32, 0x2c, 0x20, //  vec3(2.2, 2.2, 
	0x32, 0x2e, 0x32, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // 2.2)).   * tmpva
	0x72, 0x5f, 0x31, 0x29, 0x20, 0x2b, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, // r_1) + pow (tmpv
	0x61, 0x72, 0x5f, 0x31, 0x2c, 0x20, 0x33, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x2c, 0x20, 0x76, 0x65, // ar_1, 30.0)), ve
	0x63, 0x33, 0x28, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x2c, 0x20, 0x30, 0x2e, 0x34, // c3(0.454545, 0.4
	0x35, 0x34, 0x35, 0x34, 0x35, 0x2c, 0x20, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x29, // 54545, 0.454545)
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, // );.  gl_FragColo
	0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x7d, 0x0a, // r = tmpvar_2;.}.
	0x0a, 0x00,                                                                                     // ..
};
static const uint8_t fs_metaballs_dx9[429] =
{
	0x46, 0x53, 0x48, 0x01, 0x03, 0x2c, 0xf5, 0x3f, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x03, 0xff, 0xff, // FSH..,.?........
	0xfe, 0xff, 0x16, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, // ....CTAB....#...
	0x00, 0x03, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, // ................
	0x1c, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, // ....ps_3_0.Micro
	0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, // soft (R) HLSL Sh
	0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, 0x2e, // ader Compiler 9.
	0x32, 0x39, 0x2e, 0x39, 0x35, 0x32, 0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0x51, 0x00, 0x00, 0x05, // 29.952.3111.Q...
	0x00, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0xf0, 0x41, 0xcd, 0xcc, 0x0c, 0x40, 0x2f, 0xba, 0xe8, 0x3e, // .......A...@/..>
	0x00, 0x00, 0x80, 0x3f, 0x1f, 0x00, 0x00, 0x02, 0x0a, 0x00, 0x00, 0x80, 0x00, 0x00, 0x07, 0x90, // ...?............
	0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x01, 0x80, 0x01, 0x00, 0x07, 0x90, 0x08, 0x00, 0x00, 0x03, // ................
	0x00, 0x00, 0x01, 0x80, 0x01, 0x00, 0xe4, 0x90, 0x01, 0x00, 0xe4, 0x90, 0x07, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, // ................
	0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0xaa, 0x90, 0x20, 0x00, 0x00, 0x03, 0x01, 0x00, 0x01, 0x80, // ........ .......
	0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0xa0, 0x0f, 0x00, 0x00, 0x02, 0x02, 0x00, 0x01, 0x80, // ................
	0x00, 0x00, 0x00, 0x90, 0x0f, 0x00, 0x00, 0x02, 0x02, 0x00, 0x02, 0x80, 0x00, 0x00, 0x55, 0x90, // ..............U.
	0x0f, 0x00, 0x00, 0x02, 0x02, 0x00, 0x04, 0x80, 0x00, 0x00, 0xaa, 0x90, 0x05, 0x00, 0x00, 0x03, // ................
	0x00, 0x00, 0x0e, 0x80, 0x02, 0x00, 0x90, 0x80, 0x00, 0x00, 0x55, 0xa0, 0x0e, 0x00, 0x00, 0x02, // ..........U.....
	0x02, 0x00, 0x01, 0x80, 0x00, 0x00, 0x55, 0x80, 0x0e, 0x00, 0x00, 0x02, 0x02, 0x00, 0x02, 0x80, // ......U.........
	0x00, 0x00, 0xaa, 0x80, 0x0e, 0x00, 0x00, 0x02, 0x02, 0x00, 0x04, 0x80, 0x00, 0x00, 0xff, 0x80, // ................
	0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x80, 0x02, 0x00, 0xe4, 0x80, 0x00, 0x00, 0x00, 0x81, // ................
	0x01, 0x00, 0x00, 0x80, 0x0f, 0x00, 0x00, 0x02, 0x01, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, // ................
	0x0f, 0x00, 0x00, 0x02, 0x01, 0x00, 0x02, 0x80, 0x00, 0x00, 0x55, 0x80, 0x0f, 0x00, 0x00, 0x02, // ..........U.....
	0x01, 0x00, 0x04, 0x80, 0x00, 0x00, 0xaa, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x07, 0x80, // ................
	0x01, 0x00, 0xe4, 0x80, 0x00, 0x00, 0xaa, 0xa0, 0x0e, 0x00, 0x00, 0x02, 0x00, 0x08, 0x01, 0x80, // ................
	0x00, 0x00, 0x00, 0x80, 0x0e, 0x00, 0x00, 0x02, 0x00, 0x08, 0x02, 0x80, 0x00, 0x00, 0x55, 0x80, // ..............U.
	0x0e, 0x00, 0x00, 0x02, 0x00, 0x08, 0x04, 0x80, 0x00, 0x00, 0xaa, 0x80, 0x01, 0x00, 0x00, 0x02, // ................
	0x00, 0x08, 0x08, 0x80, 0x00, 0x00, 0xff, 0xa0, 0xff, 0xff, 0x00, 0x00, 0x00,                   // .............
};
static const uint8_t fs_metaballs_dx11[894] =
{
	0x46, 0x53, 0x48, 0x01, 0x03, 0x2c, 0xf5, 0x3f, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, // FSH..,.?........
	0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x03, 0x44, 0x58, 0x42, // ...........`.DXB
	0x43, 0xb9, 0x51, 0x92, 0x02, 0x97, 0xf2, 0xba, 0xfc, 0x54, 0xc8, 0xab, 0x17, 0xb4, 0x61, 0x0b, // C.Q......T....a.
	0x83, 0x01, 0x00, 0x00, 0x00, 0x60, 0x03, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, // .....`.......4..
	0x00, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x34, 0x01, 0x00, 0x00, 0xe4, 0x02, 0x00, // .........4......
	0x00, 0x52, 0x44, 0x45, 0x46, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .RDEFP..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x04, 0xff, 0xff, 0x00, 0x91, 0x00, // ................
	0x00, 0x1c, 0x00, 0x00, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, // .....Microsoft (
	0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, // R) HLSL Shader C
	0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, 0x2e, 0x32, 0x39, 0x2e, 0x39, 0x35, 0x32, // ompiler 9.29.952
	0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0xab, 0xab, 0xab, 0x49, 0x53, 0x47, 0x4e, 0x6c, 0x00, 0x00, // .3111....ISGNl..
	0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........P......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, // ................
	0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ................
	0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x07, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .........b......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, // ................
	0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x43, 0x4f, 0x4c, // .SV_POSITION.COL
	0x4f, 0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0x4f, 0x53, 0x47, // OR.TEXCOORD..OSG
	0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // N,........... ..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xab, // .....SV_TARGET..
	0xab, 0x53, 0x48, 0x44, 0x52, 0xa8, 0x01, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x6a, 0x00, 0x00, // .SHDR....@...j..
	0x00, 0x62, 0x10, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, // .b...r.......b..
	0x03, 0x72, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, // .r.......e.... .
	0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, // .....h......./..
	0x05, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x01, 0x00, 0x00, // .r.......F......
	0x00, 0x38, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, // .8...r.......F..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0xcd, 0xcc, 0x0c, 0x40, 0xcd, 0xcc, 0x0c, // ......@.....@...
	0x40, 0xcd, 0xcc, 0x0c, 0x40, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x05, 0x72, 0x00, 0x10, // @...@........r..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, // .....F..........
	0x07, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x02, 0x00, 0x00, // .........F......
	0x00, 0x46, 0x12, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x05, 0x82, 0x00, 0x10, // .F.......D......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, // .....:.......8..
	0x07, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // .........:......
	0x00, 0x2a, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x06, 0x12, 0x00, 0x10, // .*......./......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....:...A......
	0x00, 0x38, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, // .8..............
	0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x41, 0x19, 0x00, 0x00, // ......@.....A...
	0x05, 0x12, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x32, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, // .2...r.......F..
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf6, 0x0f, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........A......
	0x00, 0x06, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x05, 0x72, 0x00, 0x10, // ........./...r..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, // .....F.......8..
	0x0a, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, // .r.......F......
	0x00, 0x02, 0x40, 0x00, 0x00, 0x2f, 0xba, 0xe8, 0x3e, 0x2f, 0xba, 0xe8, 0x3e, 0x2f, 0xba, 0xe8, // ..@../..>/..>/..
	0x3e, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x05, 0x72, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, // >........r .....
	0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x82, 0x20, 0x10, // .F.......6.... .
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x3e, 0x00, 0x00, // ......@.....?>..
	0x01, 0x53, 0x54, 0x41, 0x54, 0x74, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .STATt..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,             // ..............
};
