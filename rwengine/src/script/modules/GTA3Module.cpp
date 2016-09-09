#include <script/modules/GTA3Module.hpp>
#include <objects/ObjectTypes.hpp>
#include <engine/GameState.hpp>

#include <objects/CharacterObject.hpp>
#include <objects/InstanceObject.hpp>
#include <objects/VehicleObject.hpp>
#include <objects/PickupObject.hpp>

#include <cstdint>

#ifdef RW_DEBUG_OPCODES
#define RW_UNIMPLEMENTED_OPCODE(opcode) RW_MESSAGE("Unimplemented opcode: " << opcode);
#else
#define RW_UNIMPLEMENTED_OPCODE(opcode)
#endif



#include "GTA3ModuleImpl.inl"

GTA3Module::GTA3Module()
	: ScriptModule("GTA3")
{
	bind(0x0000, 0, opcode_0000);
	bind(0x0001, 1, opcode_0001);
	bind(0x0002, 1, opcode_0002);
	bind(0x0003, 1, opcode_0003);
	bind(0x0004, 2, opcode_0004);
	bind(0x0005, 2, opcode_0005);
	bind(0x0006, 2, opcode_0006);
	bind(0x0007, 2, opcode_0007);
	bind(0x0008, 2, opcode_0008);
	bind(0x0009, 2, opcode_0009);
	bind(0x000a, 2, opcode_000a);
	bind(0x000b, 2, opcode_000b);
	bind(0x000c, 2, opcode_000c);
	bind(0x000d, 2, opcode_000d);
	bind(0x000e, 2, opcode_000e);
	bind(0x000f, 2, opcode_000f);
	bind(0x0010, 2, opcode_0010);
	bind(0x0011, 2, opcode_0011);
	bind(0x0012, 2, opcode_0012);
	bind(0x0013, 2, opcode_0013);
	bind(0x0014, 2, opcode_0014);
	bind(0x0015, 2, opcode_0015);
	bind(0x0016, 2, opcode_0016);
	bind(0x0017, 2, opcode_0017);
	bind(0x0018, 2, opcode_0018);
	bind(0x0019, 2, opcode_0019);
	bind(0x001a, 2, opcode_001a);
	bind(0x001b, 2, opcode_001b);
	bind(0x001c, 2, opcode_001c);
	bind(0x001d, 2, opcode_001d);
	bind(0x001e, 2, opcode_001e);
	bind(0x001f, 2, opcode_001f);
	bind(0x0020, 2, opcode_0020);
	bind(0x0021, 2, opcode_0021);
	bind(0x0022, 2, opcode_0022);
	bind(0x0023, 2, opcode_0023);
	bind(0x0024, 2, opcode_0024);
	bind(0x0025, 2, opcode_0025);
	bind(0x0026, 2, opcode_0026);
	bind(0x0027, 2, opcode_0027);
	bind(0x0028, 2, opcode_0028);
	bind(0x0029, 2, opcode_0029);
	bind(0x002a, 2, opcode_002a);
	bind(0x002b, 2, opcode_002b);
	bind(0x002c, 2, opcode_002c);
	bind(0x002d, 2, opcode_002d);
	bind(0x002e, 2, opcode_002e);
	bind(0x002f, 2, opcode_002f);
	bind(0x0030, 2, opcode_0030);
	bind(0x0031, 2, opcode_0031);
	bind(0x0032, 2, opcode_0032);
	bind(0x0033, 2, opcode_0033);
	bind(0x0034, 2, opcode_0034);
	bind(0x0035, 2, opcode_0035);
	bind(0x0036, 2, opcode_0036);
	bind(0x0037, 2, opcode_0037);
	bind(0x0038, 2, opcode_0038);
	bind(0x0039, 2, opcode_0039);
	bind(0x003a, 2, opcode_003a);
	bind(0x003b, 2, opcode_003b);
	bind(0x003c, 2, opcode_003c);
	bind(0x0042, 2, opcode_0042);
	bind(0x0043, 2, opcode_0043);
	bind(0x0044, 2, opcode_0044);
	bind(0x0045, 2, opcode_0045);
	bind(0x0046, 2, opcode_0046);
	bind(0x004c, 1, opcode_004c);
	bind(0x004d, 1, opcode_004d);
	bind(0x004e, 0, opcode_004e);
	bind(0x004f, -1, opcode_004f);
	bind(0x0050, 1, opcode_0050);
	bind(0x0051, 0, opcode_0051);
	bind(0x0053, 5, opcode_0053);
	bind(0x0054, 4, opcode_0054);
	bind(0x0055, 4, opcode_0055);
	bind(0x0056, 6, opcode_0056);
	bind(0x0057, 8, opcode_0057);
	bind(0x0058, 2, opcode_0058);
	bind(0x0059, 2, opcode_0059);
	bind(0x005a, 2, opcode_005a);
	bind(0x005b, 2, opcode_005b);
	bind(0x005c, 2, opcode_005c);
	bind(0x005d, 2, opcode_005d);
	bind(0x005e, 2, opcode_005e);
	bind(0x005f, 2, opcode_005f);
	bind(0x0060, 2, opcode_0060);
	bind(0x0061, 2, opcode_0061);
	bind(0x0062, 2, opcode_0062);
	bind(0x0063, 2, opcode_0063);
	bind(0x0064, 2, opcode_0064);
	bind(0x0065, 2, opcode_0065);
	bind(0x0066, 2, opcode_0066);
	bind(0x0067, 2, opcode_0067);
	bind(0x0068, 2, opcode_0068);
	bind(0x0069, 2, opcode_0069);
	bind(0x006a, 2, opcode_006a);
	bind(0x006b, 2, opcode_006b);
	bind(0x006c, 2, opcode_006c);
	bind(0x006d, 2, opcode_006d);
	bind(0x006e, 2, opcode_006e);
	bind(0x006f, 2, opcode_006f);
	bind(0x0070, 2, opcode_0070);
	bind(0x0071, 2, opcode_0071);
	bind(0x0072, 2, opcode_0072);
	bind(0x0073, 2, opcode_0073);
	bind(0x0074, 2, opcode_0074);
	bind(0x0075, 2, opcode_0075);
	bind(0x0076, 2, opcode_0076);
	bind(0x0077, 2, opcode_0077);
	bind(0x0078, 2, opcode_0078);
	bind(0x0079, 2, opcode_0079);
	bind(0x007a, 2, opcode_007a);
	bind(0x007b, 2, opcode_007b);
	bind(0x007c, 2, opcode_007c);
	bind(0x007d, 2, opcode_007d);
	bind(0x007e, 2, opcode_007e);
	bind(0x007f, 2, opcode_007f);
	bind(0x0080, 2, opcode_0080);
	bind(0x0081, 2, opcode_0081);
	bind(0x0082, 2, opcode_0082);
	bind(0x0083, 2, opcode_0083);
	bind(0x0084, 2, opcode_0084);
	bind(0x0085, 2, opcode_0085);
	bind(0x0086, 2, opcode_0086);
	bind(0x0087, 2, opcode_0087);
	bind(0x0088, 2, opcode_0088);
	bind(0x0089, 2, opcode_0089);
	bind(0x008a, 2, opcode_008a);
	bind(0x008b, 2, opcode_008b);
	bind(0x008c, 2, opcode_008c);
	bind(0x008d, 2, opcode_008d);
	bind(0x008e, 2, opcode_008e);
	bind(0x008f, 2, opcode_008f);
	bind(0x0090, 2, opcode_0090);
	bind(0x0091, 2, opcode_0091);
	bind(0x0092, 2, opcode_0092);
	bind(0x0093, 2, opcode_0093);
	bind(0x0094, 1, opcode_0094);
	bind(0x0095, 1, opcode_0095);
	bind(0x0096, 1, opcode_0096);
	bind(0x0097, 1, opcode_0097);
	bind(0x0098, 1, opcode_0098);
	bind(0x0099, 1, opcode_0099);
	bind(0x009a, 6, opcode_009a);
	bind(0x009b, 1, opcode_009b);
	bind(0x009c, 2, opcode_009c);
	bind(0x009d, 0, opcode_009d);
	bind(0x009e, 4, opcode_009e);
	bind(0x009f, 1, opcode_009f);
	bind(0x00a0, 4, opcode_00a0);
	bind(0x00a1, 4, opcode_00a1);
	bind(0x00a2, 1, opcode_00a2);
	bind(0x00a3, 6, opcode_00a3);
	bind(0x00a4, 8, opcode_00a4);
	bind(0x00a5, 5, opcode_00a5);
	bind(0x00a6, 1, opcode_00a6);
	bind(0x00a7, 4, opcode_00a7);
	bind(0x00a8, 1, opcode_00a8);
	bind(0x00a9, 1, opcode_00a9);
	bind(0x00aa, 4, opcode_00aa);
	bind(0x00ab, 4, opcode_00ab);
	bind(0x00ac, 1, opcode_00ac);
	bind(0x00ad, 2, opcode_00ad);
	bind(0x00ae, 2, opcode_00ae);
	bind(0x00af, 2, opcode_00af);
	bind(0x00b0, 6, opcode_00b0);
	bind(0x00b1, 8, opcode_00b1);
	bind(0x00ba, 3, opcode_00ba);
	bind(0x00bb, 3, opcode_00bb);
	bind(0x00bc, 3, opcode_00bc);
	bind(0x00bd, 3, opcode_00bd);
	bind(0x00be, 0, opcode_00be);
	bind(0x00bf, 2, opcode_00bf);
	bind(0x00c0, 2, opcode_00c0);
	bind(0x00c1, 3, opcode_00c1);
	bind(0x00c2, 4, opcode_00c2);
	bind(0x00c3, 0, opcode_00c3);
	bind(0x00c4, 0, opcode_00c4);
	bind(0x00c5, 0, opcode_00c5);
	bind(0x00c6, 0, opcode_00c6);
	bind(0x00d6, 1, opcode_00d6);
	bind(0x00d7, 1, opcode_00d7);
	bind(0x00d8, 0, opcode_00d8);
	bind(0x00d9, 2, opcode_00d9);
	bind(0x00da, 2, opcode_00da);
	bind(0x00db, 2, opcode_00db);
	bind(0x00dc, 2, opcode_00dc);
	bind(0x00dd, 2, opcode_00dd);
	bind(0x00de, 2, opcode_00de);
	bind(0x00df, 1, opcode_00df);
	bind(0x00e0, 1, opcode_00e0);
	bind(0x00e1, 2, opcode_00e1);
	bind(0x00e2, 3, opcode_00e2);
	bind(0x00e3, 6, opcode_00e3);
	bind(0x00e4, 6, opcode_00e4);
	bind(0x00e5, 6, opcode_00e5);
	bind(0x00e6, 6, opcode_00e6);
	bind(0x00e7, 6, opcode_00e7);
	bind(0x00e8, 6, opcode_00e8);
	bind(0x00e9, 5, opcode_00e9);
	bind(0x00ea, 5, opcode_00ea);
	bind(0x00eb, 5, opcode_00eb);
	bind(0x00ec, 6, opcode_00ec);
	bind(0x00ed, 6, opcode_00ed);
	bind(0x00ee, 6, opcode_00ee);
	bind(0x00ef, 6, opcode_00ef);
	bind(0x00f0, 6, opcode_00f0);
	bind(0x00f1, 6, opcode_00f1);
	bind(0x00f2, 5, opcode_00f2);
	bind(0x00f3, 5, opcode_00f3);
	bind(0x00f4, 5, opcode_00f4);
	bind(0x00f5, 8, opcode_00f5);
	bind(0x00f6, 8, opcode_00f6);
	bind(0x00f7, 8, opcode_00f7);
	bind(0x00f8, 8, opcode_00f8);
	bind(0x00f9, 8, opcode_00f9);
	bind(0x00fa, 8, opcode_00fa);
	bind(0x00fb, 6, opcode_00fb);
	bind(0x00fc, 6, opcode_00fc);
	bind(0x00fd, 6, opcode_00fd);
	bind(0x00fe, 8, opcode_00fe);
	bind(0x00ff, 8, opcode_00ff);
	bind(0x0100, 8, opcode_0100);
	bind(0x0101, 8, opcode_0101);
	bind(0x0102, 8, opcode_0102);
	bind(0x0103, 8, opcode_0103);
	bind(0x0104, 6, opcode_0104);
	bind(0x0105, 6, opcode_0105);
	bind(0x0106, 6, opcode_0106);
	bind(0x0107, 5, opcode_0107);
	bind(0x0108, 1, opcode_0108);
	bind(0x0109, 2, opcode_0109);
	bind(0x010a, 2, opcode_010a);
	bind(0x010b, 2, opcode_010b);
	bind(0x010c, 5, opcode_010c);
	bind(0x010d, 2, opcode_010d);
	bind(0x010e, 2, opcode_010e);
	bind(0x010f, 2, opcode_010f);
	bind(0x0110, 1, opcode_0110);
	bind(0x0111, 1, opcode_0111);
	bind(0x0112, 0, opcode_0112);
	bind(0x0113, 3, opcode_0113);
	bind(0x0114, 3, opcode_0114);
	bind(0x0117, 1, opcode_0117);
	bind(0x0118, 1, opcode_0118);
	bind(0x0119, 1, opcode_0119);
	bind(0x011a, 2, opcode_011a);
	bind(0x011c, 1, opcode_011c);
	bind(0x0121, 2, opcode_0121);
	bind(0x0122, 1, opcode_0122);
	bind(0x0123, 2, opcode_0123);
	bind(0x0126, 1, opcode_0126);
	bind(0x0129, 4, opcode_0129);
	bind(0x012a, 4, opcode_012a);
	bind(0x0130, 1, opcode_0130);
	bind(0x0135, 2, opcode_0135);
	bind(0x0136, 3, opcode_0136);
	bind(0x0137, 2, opcode_0137);
	bind(0x0149, 1, opcode_0149);
	bind(0x014b, 13, opcode_014b);
	bind(0x014c, 2, opcode_014c);
	bind(0x014d, 4, opcode_014d);
	bind(0x014e, 1, opcode_014e);
	bind(0x014f, 1, opcode_014f);
	bind(0x0151, 1, opcode_0151);
	bind(0x0152, 17, opcode_0152);
	bind(0x0154, 2, opcode_0154);
	bind(0x0156, 3, opcode_0156);
	bind(0x0157, 3, opcode_0157);
	bind(0x0158, 3, opcode_0158);
	bind(0x0159, 3, opcode_0159);
	bind(0x015a, 0, opcode_015a);
	bind(0x015c, 11, opcode_015c);
	bind(0x015d, 1, opcode_015d);
	bind(0x015e, 1, opcode_015e);
	bind(0x015f, 6, opcode_015f);
	bind(0x0160, 4, opcode_0160);
	bind(0x0161, 4, opcode_0161);
	bind(0x0162, 4, opcode_0162);
	bind(0x0164, 1, opcode_0164);
	bind(0x0165, 2, opcode_0165);
	bind(0x0166, 2, opcode_0166);
	bind(0x0167, 6, opcode_0167);
	bind(0x0168, 2, opcode_0168);
	bind(0x0169, 3, opcode_0169);
	bind(0x016a, 2, opcode_016a);
	bind(0x016b, 0, opcode_016b);
	bind(0x016c, 4, opcode_016c);
	bind(0x016d, 4, opcode_016d);
	bind(0x016e, 4, opcode_016e);
	bind(0x016f, 10, opcode_016f);
	bind(0x0170, 2, opcode_0170);
	bind(0x0171, 2, opcode_0171);
	bind(0x0172, 2, opcode_0172);
	bind(0x0173, 2, opcode_0173);
	bind(0x0174, 2, opcode_0174);
	bind(0x0175, 2, opcode_0175);
	bind(0x0176, 2, opcode_0176);
	bind(0x0177, 2, opcode_0177);
	bind(0x0178, 2, opcode_0178);
	bind(0x0179, 2, opcode_0179);
	bind(0x017a, 3, opcode_017a);
	bind(0x017b, 3, opcode_017b);
	bind(0x0180, 1, opcode_0180);
	bind(0x0181, 2, opcode_0181);
	bind(0x0182, 2, opcode_0182);
	bind(0x0183, 2, opcode_0183);
	bind(0x0184, 2, opcode_0184);
	bind(0x0185, 2, opcode_0185);
	bind(0x0186, 2, opcode_0186);
	bind(0x0187, 2, opcode_0187);
	bind(0x0188, 2, opcode_0188);
	bind(0x0189, 4, opcode_0189);
	bind(0x018a, 4, opcode_018a);
	bind(0x018b, 2, opcode_018b);
	bind(0x018c, 4, opcode_018c);
	bind(0x018d, 5, opcode_018d);
	bind(0x018e, 1, opcode_018e);
	bind(0x018f, 1, opcode_018f);
	bind(0x0190, 1, opcode_0190);
	bind(0x0191, 1, opcode_0191);
	bind(0x0192, 1, opcode_0192);
	bind(0x0193, 1, opcode_0193);
	bind(0x0194, 4, opcode_0194);
	bind(0x0195, 5, opcode_0195);
	bind(0x0196, 1, opcode_0196);
	bind(0x0197, 6, opcode_0197);
	bind(0x0198, 6, opcode_0198);
	bind(0x0199, 6, opcode_0199);
	bind(0x019a, 6, opcode_019a);
	bind(0x019b, 6, opcode_019b);
	bind(0x019c, 8, opcode_019c);
	bind(0x019d, 8, opcode_019d);
	bind(0x019e, 8, opcode_019e);
	bind(0x019f, 8, opcode_019f);
	bind(0x01a0, 8, opcode_01a0);
	bind(0x01a1, 6, opcode_01a1);
	bind(0x01a2, 6, opcode_01a2);
	bind(0x01a3, 6, opcode_01a3);
	bind(0x01a4, 6, opcode_01a4);
	bind(0x01a5, 6, opcode_01a5);
	bind(0x01a6, 8, opcode_01a6);
	bind(0x01a7, 8, opcode_01a7);
	bind(0x01a8, 8, opcode_01a8);
	bind(0x01a9, 8, opcode_01a9);
	bind(0x01aa, 8, opcode_01aa);
	bind(0x01ab, 6, opcode_01ab);
	bind(0x01ac, 8, opcode_01ac);
	bind(0x01ad, 6, opcode_01ad);
	bind(0x01ae, 6, opcode_01ae);
	bind(0x01af, 8, opcode_01af);
	bind(0x01b0, 8, opcode_01b0);
	bind(0x01b1, 3, opcode_01b1);
	bind(0x01b2, 3, opcode_01b2);
	bind(0x01b4, 2, opcode_01b4);
	bind(0x01b5, 1, opcode_01b5);
	bind(0x01b6, 1, opcode_01b6);
	bind(0x01b7, 0, opcode_01b7);
	bind(0x01b8, 2, opcode_01b8);
	bind(0x01b9, 2, opcode_01b9);
	bind(0x01bb, 4, opcode_01bb);
	bind(0x01bc, 4, opcode_01bc);
	bind(0x01bd, 1, opcode_01bd);
	bind(0x01be, 4, opcode_01be);
	bind(0x01c0, 2, opcode_01c0);
	bind(0x01c1, 1, opcode_01c1);
	bind(0x01c2, 1, opcode_01c2);
	bind(0x01c3, 1, opcode_01c3);
	bind(0x01c4, 1, opcode_01c4);
	bind(0x01c5, 1, opcode_01c5);
	bind(0x01c6, 1, opcode_01c6);
	bind(0x01c7, 1, opcode_01c7);
	bind(0x01c8, 5, opcode_01c8);
	bind(0x01c9, 2, opcode_01c9);
	bind(0x01ca, 2, opcode_01ca);
	bind(0x01cb, 2, opcode_01cb);
	bind(0x01cc, 2, opcode_01cc);
	bind(0x01ce, 2, opcode_01ce);
	bind(0x01cf, 2, opcode_01cf);
	bind(0x01d0, 2, opcode_01d0);
	bind(0x01d1, 2, opcode_01d1);
	bind(0x01d2, 2, opcode_01d2);
	bind(0x01d3, 2, opcode_01d3);
	bind(0x01d4, 2, opcode_01d4);
	bind(0x01d5, 2, opcode_01d5);
	bind(0x01d8, 2, opcode_01d8);
	bind(0x01d9, 2, opcode_01d9);
	bind(0x01de, 2, opcode_01de);
	bind(0x01df, 2, opcode_01df);
	bind(0x01e0, 1, opcode_01e0);
	bind(0x01e1, 3, opcode_01e1);
	bind(0x01e2, 4, opcode_01e2);
	bind(0x01e3, 4, opcode_01e3);
	bind(0x01e4, 4, opcode_01e4);
	bind(0x01e5, 4, opcode_01e5);
	bind(0x01e7, 6, opcode_01e7);
	bind(0x01e8, 6, opcode_01e8);
	bind(0x01e9, 2, opcode_01e9);
	bind(0x01ea, 2, opcode_01ea);
	bind(0x01eb, 1, opcode_01eb);
	bind(0x01ec, 2, opcode_01ec);
	bind(0x01ed, 1, opcode_01ed);
	bind(0x01ee, 10, opcode_01ee);
	bind(0x01ef, 2, opcode_01ef);
	bind(0x01f0, 1, opcode_01f0);
	bind(0x01f3, 1, opcode_01f3);
	bind(0x01f4, 1, opcode_01f4);
	bind(0x01f5, 2, opcode_01f5);
	bind(0x01f6, 0, opcode_01f6);
	bind(0x01f7, 2, opcode_01f7);
	bind(0x01f9, 9, opcode_01f9);
	bind(0x01fa, 1, opcode_01fa);
	bind(0x01fb, 2, opcode_01fb);
	bind(0x01fc, 5, opcode_01fc);
	bind(0x01fd, 5, opcode_01fd);
	bind(0x01fe, 5, opcode_01fe);
	bind(0x01ff, 6, opcode_01ff);
	bind(0x0200, 6, opcode_0200);
	bind(0x0201, 6, opcode_0201);
	bind(0x0202, 5, opcode_0202);
	bind(0x0203, 5, opcode_0203);
	bind(0x0204, 5, opcode_0204);
	bind(0x0205, 6, opcode_0205);
	bind(0x0206, 6, opcode_0206);
	bind(0x0207, 6, opcode_0207);
	bind(0x0208, 3, opcode_0208);
	bind(0x0209, 3, opcode_0209);
	bind(0x020a, 2, opcode_020a);
	bind(0x020b, 1, opcode_020b);
	bind(0x020c, 4, opcode_020c);
	bind(0x020d, 1, opcode_020d);
	bind(0x020e, 2, opcode_020e);
	bind(0x020f, 2, opcode_020f);
	bind(0x0210, 2, opcode_0210);
	bind(0x0211, 3, opcode_0211);
	bind(0x0213, 6, opcode_0213);
	bind(0x0214, 1, opcode_0214);
	bind(0x0215, 1, opcode_0215);
	bind(0x0216, 2, opcode_0216);
	bind(0x0217, 3, opcode_0217);
	bind(0x0218, 4, opcode_0218);
	bind(0x0219, 8, opcode_0219);
	bind(0x021b, 2, opcode_021b);
	bind(0x021c, 1, opcode_021c);
	bind(0x021d, 1, opcode_021d);
	bind(0x0220, 1, opcode_0220);
	bind(0x0221, 2, opcode_0221);
	bind(0x0222, 2, opcode_0222);
	bind(0x0223, 2, opcode_0223);
	bind(0x0224, 2, opcode_0224);
	bind(0x0225, 2, opcode_0225);
	bind(0x0226, 2, opcode_0226);
	bind(0x0227, 2, opcode_0227);
	bind(0x0228, 2, opcode_0228);
	bind(0x0229, 3, opcode_0229);
	bind(0x022a, 6, opcode_022a);
	bind(0x022b, 6, opcode_022b);
	bind(0x022c, 2, opcode_022c);
	bind(0x022d, 2, opcode_022d);
	bind(0x022e, 2, opcode_022e);
	bind(0x022f, 1, opcode_022f);
	bind(0x0230, 1, opcode_0230);
	bind(0x0231, 1, opcode_0231);
	bind(0x0235, 3, opcode_0235);
	bind(0x0236, 2, opcode_0236);
	bind(0x0237, 3, opcode_0237);
	bind(0x0239, 3, opcode_0239);
	bind(0x023a, 2, opcode_023a);
	bind(0x023b, 2, opcode_023b);
	bind(0x023c, 2, opcode_023c);
	bind(0x023d, 1, opcode_023d);
	bind(0x0240, 2, opcode_0240);
	bind(0x0241, 1, opcode_0241);
	bind(0x0242, 2, opcode_0242);
	bind(0x0243, 2, opcode_0243);
	bind(0x0244, 3, opcode_0244);
	bind(0x0245, 2, opcode_0245);
	bind(0x0247, 1, opcode_0247);
	bind(0x0248, 1, opcode_0248);
	bind(0x0249, 1, opcode_0249);
	bind(0x024a, 3, opcode_024a);
	bind(0x024b, 2, opcode_024b);
	bind(0x024c, 2, opcode_024c);
	bind(0x024d, 1, opcode_024d);
	bind(0x024e, 1, opcode_024e);
	bind(0x024f, 9, opcode_024f);
	bind(0x0250, 6, opcode_0250);
	bind(0x0253, 0, opcode_0253);
	bind(0x0254, 0, opcode_0254);
	bind(0x0255, 4, opcode_0255);
	bind(0x0256, 1, opcode_0256);
	bind(0x0291, 2, opcode_0291);
	bind(0x0293, 1, opcode_0293);
	bind(0x0294, 2, opcode_0294);
	bind(0x0296, 1, opcode_0296);
	bind(0x0297, 0, opcode_0297);
	bind(0x0298, 2, opcode_0298);
	bind(0x0299, 1, opcode_0299);
	bind(0x029b, 5, opcode_029b);
	bind(0x029c, 1, opcode_029c);
	bind(0x029f, 1, opcode_029f);
	bind(0x02a0, 1, opcode_02a0);
	bind(0x02a1, 2, opcode_02a1);
	bind(0x02a2, 5, opcode_02a2);
	bind(0x02a3, 1, opcode_02a3);
	bind(0x02a7, 5, opcode_02a7);
	bind(0x02a8, 5, opcode_02a8);
	bind(0x02a9, 2, opcode_02a9);
	bind(0x02aa, 2, opcode_02aa);
	bind(0x02ab, 6, opcode_02ab);
	bind(0x02ac, 6, opcode_02ac);
	bind(0x02ad, 7, opcode_02ad);
	bind(0x02ae, 7, opcode_02ae);
	bind(0x02af, 7, opcode_02af);
	bind(0x02b0, 7, opcode_02b0);
	bind(0x02b1, 7, opcode_02b1);
	bind(0x02b2, 7, opcode_02b2);
	bind(0x02b3, 9, opcode_02b3);
	bind(0x02b4, 9, opcode_02b4);
	bind(0x02b5, 9, opcode_02b5);
	bind(0x02b6, 9, opcode_02b6);
	bind(0x02b7, 9, opcode_02b7);
	bind(0x02b8, 9, opcode_02b8);
	bind(0x02b9, 1, opcode_02b9);
	bind(0x02bc, 1, opcode_02bc);
	bind(0x02bf, 1, opcode_02bf);
	bind(0x02c0, 6, opcode_02c0);
	bind(0x02c1, 6, opcode_02c1);
	bind(0x02c2, 4, opcode_02c2);
	bind(0x02c3, 1, opcode_02c3);
	bind(0x02c5, 1, opcode_02c5);
	bind(0x02c6, 0, opcode_02c6);
	bind(0x02c7, 5, opcode_02c7);
	bind(0x02c8, 1, opcode_02c8);
	bind(0x02c9, 0, opcode_02c9);
	bind(0x02ca, 1, opcode_02ca);
	bind(0x02cb, 1, opcode_02cb);
	bind(0x02cc, 1, opcode_02cc);
	bind(0x02cd, 2, opcode_02cd);
	bind(0x02ce, 4, opcode_02ce);
	bind(0x02cf, 4, opcode_02cf);
	bind(0x02d0, 1, opcode_02d0);
	bind(0x02d1, 1, opcode_02d1);
	bind(0x02d3, 4, opcode_02d3);
	bind(0x02d4, 1, opcode_02d4);
	bind(0x02d5, 6, opcode_02d5);
	bind(0x02d7, 2, opcode_02d7);
	bind(0x02d8, 2, opcode_02d8);
	bind(0x02d9, 0, opcode_02d9);
	bind(0x02db, 2, opcode_02db);
	bind(0x02dd, 2, opcode_02dd);
	bind(0x02de, 1, opcode_02de);
	bind(0x02df, 1, opcode_02df);
	bind(0x02e0, 1, opcode_02e0);
	bind(0x02e1, 5, opcode_02e1);
	bind(0x02e2, 2, opcode_02e2);
	bind(0x02e3, 2, opcode_02e3);
	bind(0x02e4, 1, opcode_02e4);
	bind(0x02e5, 2, opcode_02e5);
	bind(0x02e6, 2, opcode_02e6);
	bind(0x02e7, 0, opcode_02e7);
	bind(0x02e8, 1, opcode_02e8);
	bind(0x02e9, 0, opcode_02e9);
	bind(0x02ea, 0, opcode_02ea);
	bind(0x02eb, 0, opcode_02eb);
	bind(0x02ec, 3, opcode_02ec);
	bind(0x02ed, 1, opcode_02ed);
	bind(0x02ee, 6, opcode_02ee);
	bind(0x02ef, 6, opcode_02ef);
	bind(0x02f1, 3, opcode_02f1);
	bind(0x02f2, 2, opcode_02f2);
	bind(0x02f3, 2, opcode_02f3);
	bind(0x02f4, 3, opcode_02f4);
	bind(0x02f5, 2, opcode_02f5);
	bind(0x02f6, 2, opcode_02f6);
	bind(0x02f7, 2, opcode_02f7);
	bind(0x02f8, 2, opcode_02f8);
	bind(0x02f9, 2, opcode_02f9);
	bind(0x02fa, 2, opcode_02fa);
	bind(0x02fb, 10, opcode_02fb);
	bind(0x02fc, 5, opcode_02fc);
	bind(0x02fd, 5, opcode_02fd);
	bind(0x02fe, 5, opcode_02fe);
	bind(0x02ff, 6, opcode_02ff);
	bind(0x0300, 6, opcode_0300);
	bind(0x0301, 6, opcode_0301);
	bind(0x0302, 7, opcode_0302);
	bind(0x0303, 7, opcode_0303);
	bind(0x0304, 7, opcode_0304);
	bind(0x0305, 8, opcode_0305);
	bind(0x0306, 8, opcode_0306);
	bind(0x0307, 8, opcode_0307);
	bind(0x0308, 9, opcode_0308);
	bind(0x0309, 9, opcode_0309);
	bind(0x030a, 9, opcode_030a);
	bind(0x030c, 1, opcode_030c);
	bind(0x030d, 1, opcode_030d);
	bind(0x030e, 1, opcode_030e);
	bind(0x030f, 1, opcode_030f);
	bind(0x0310, 1, opcode_0310);
	bind(0x0311, 1, opcode_0311);
	bind(0x0312, 1, opcode_0312);
	bind(0x0313, 0, opcode_0313);
	bind(0x0314, 1, opcode_0314);
	bind(0x0315, 0, opcode_0315);
	bind(0x0316, 1, opcode_0316);
	bind(0x0317, 0, opcode_0317);
	bind(0x0318, 1, opcode_0318);
	bind(0x0319, 2, opcode_0319);
	bind(0x031a, 0, opcode_031a);
	bind(0x031d, 2, opcode_031d);
	bind(0x031e, 2, opcode_031e);
	bind(0x031f, 2, opcode_031f);
	bind(0x0320, 2, opcode_0320);
	bind(0x0321, 1, opcode_0321);
	bind(0x0322, 1, opcode_0322);
	bind(0x0323, 2, opcode_0323);
	bind(0x0324, 3, opcode_0324);
	bind(0x0325, 2, opcode_0325);
	bind(0x0326, 2, opcode_0326);
	bind(0x0327, 6, opcode_0327);
	bind(0x0329, 1, opcode_0329);
	bind(0x032a, 1, opcode_032a);
	bind(0x032b, 7, opcode_032b);
	bind(0x032c, 2, opcode_032c);
	bind(0x032d, 2, opcode_032d);
	bind(0x0330, 2, opcode_0330);
	bind(0x0331, 2, opcode_0331);
	bind(0x0332, 2, opcode_0332);
	bind(0x0335, 1, opcode_0335);
	bind(0x0336, 2, opcode_0336);
	bind(0x0337, 2, opcode_0337);
	bind(0x0339, 11, opcode_0339);
	bind(0x033a, 0, opcode_033a);
	bind(0x033b, 0, opcode_033b);
	bind(0x033c, 0, opcode_033c);
	bind(0x033e, 3, opcode_033e);
	bind(0x033f, 2, opcode_033f);
	bind(0x0340, 4, opcode_0340);
	bind(0x0341, 1, opcode_0341);
	bind(0x0342, 1, opcode_0342);
	bind(0x0343, 1, opcode_0343);
	bind(0x0344, 1, opcode_0344);
	bind(0x0345, 1, opcode_0345);
	bind(0x0346, 4, opcode_0346);
	bind(0x0348, 1, opcode_0348);
	bind(0x0349, 1, opcode_0349);
	bind(0x034a, 0, opcode_034a);
	bind(0x034b, 0, opcode_034b);
	bind(0x034c, 0, opcode_034c);
	bind(0x034d, 4, opcode_034d);
	bind(0x034e, 8, opcode_034e);
	bind(0x034f, 1, opcode_034f);
	bind(0x0350, 2, opcode_0350);
	bind(0x0351, 0, opcode_0351);
	bind(0x0352, 2, opcode_0352);
	bind(0x0353, 1, opcode_0353);
	bind(0x0354, 1, opcode_0354);
	bind(0x0355, 0, opcode_0355);
	bind(0x0356, 7, opcode_0356);
	bind(0x0357, 2, opcode_0357);
	bind(0x0358, 0, opcode_0358);
	bind(0x0359, 0, opcode_0359);
	bind(0x035a, 3, opcode_035a);
	bind(0x035b, 4, opcode_035b);
	bind(0x035c, 5, opcode_035c);
	bind(0x035d, 1, opcode_035d);
	bind(0x035e, 2, opcode_035e);
	bind(0x035f, 2, opcode_035f);
	bind(0x0360, 1, opcode_0360);
	bind(0x0361, 1, opcode_0361);
	bind(0x0362, 4, opcode_0362);
	bind(0x0363, 6, opcode_0363);
	bind(0x0365, 1, opcode_0365);
	bind(0x0366, 1, opcode_0366);
	bind(0x0367, 9, opcode_0367);
	bind(0x0368, 10, opcode_0368);
	bind(0x0369, 2, opcode_0369);
	bind(0x036a, 2, opcode_036a);
	bind(0x036d, 5, opcode_036d);
	bind(0x036e, 6, opcode_036e);
	bind(0x036f, 7, opcode_036f);
	bind(0x0370, 8, opcode_0370);
	bind(0x0371, 9, opcode_0371);
	bind(0x0372, 3, opcode_0372);
	bind(0x0373, 0, opcode_0373);
	bind(0x0374, 1, opcode_0374);
	bind(0x0375, 4, opcode_0375);
	bind(0x0376, 4, opcode_0376);
	bind(0x0377, 1, opcode_0377);
	bind(0x0378, 3, opcode_0378);
	bind(0x0379, 3, opcode_0379);
	bind(0x037a, 4, opcode_037a);
	bind(0x037b, 4, opcode_037b);
	bind(0x037c, 5, opcode_037c);
	bind(0x037d, 5, opcode_037d);
	bind(0x037e, 6, opcode_037e);
	bind(0x037f, 0, opcode_037f);
	bind(0x0381, 4, opcode_0381);
	bind(0x0382, 2, opcode_0382);
	bind(0x0383, 1, opcode_0383);
	bind(0x0384, 4, opcode_0384);
	bind(0x0385, 4, opcode_0385);
	bind(0x0386, 6, opcode_0386);
	bind(0x0387, 6, opcode_0387);
	bind(0x0388, 7, opcode_0388);
	bind(0x0389, 7, opcode_0389);
	bind(0x038a, 6, opcode_038a);
	bind(0x038b, 0, opcode_038b);
	bind(0x038c, 4, opcode_038c);
	bind(0x038d, 9, opcode_038d);
	bind(0x038f, 2, opcode_038f);
	bind(0x0390, 1, opcode_0390);
	bind(0x0391, 0, opcode_0391);
	bind(0x0392, 2, opcode_0392);
	bind(0x0394, 1, opcode_0394);
	bind(0x0395, 5, opcode_0395);
	bind(0x0396, 1, opcode_0396);
	bind(0x0397, 2, opcode_0397);
	bind(0x0398, 7, opcode_0398);
	bind(0x0399, 7, opcode_0399);
	bind(0x039a, 7, opcode_039a);
	bind(0x039b, 7, opcode_039b);
	bind(0x039c, 2, opcode_039c);
	bind(0x039d, 12, opcode_039d);
	bind(0x039e, 2, opcode_039e);
	bind(0x039f, 3, opcode_039f);
	bind(0x03a0, 3, opcode_03a0);
	bind(0x03a1, 4, opcode_03a1);
	bind(0x03a2, 2, opcode_03a2);
	bind(0x03a3, 1, opcode_03a3);
	bind(0x03a4, 1, opcode_03a4);
	bind(0x03a5, 3, opcode_03a5);
	bind(0x03a6, 3, opcode_03a6);
	bind(0x03aa, 3, opcode_03aa);
	bind(0x03ab, 2, opcode_03ab);
	bind(0x03ac, 1, opcode_03ac);
	bind(0x03ad, 1, opcode_03ad);
	bind(0x03ae, 6, opcode_03ae);
	bind(0x03af, 1, opcode_03af);
	bind(0x03b0, 1, opcode_03b0);
	bind(0x03b1, 1, opcode_03b1);
	bind(0x03b2, 0, opcode_03b2);
	bind(0x03b3, 0, opcode_03b3);
	bind(0x03b4, 0, opcode_03b4);
	bind(0x03b5, 0, opcode_03b5);
	bind(0x03b6, 6, opcode_03b6);
	bind(0x03b7, 1, opcode_03b7);
	bind(0x03b8, 1, opcode_03b8);
	bind(0x03b9, 1, opcode_03b9);
	bind(0x03ba, 6, opcode_03ba);
	bind(0x03bb, 1, opcode_03bb);
	bind(0x03bc, 5, opcode_03bc);
	bind(0x03bd, 1, opcode_03bd);
	bind(0x03be, 0, opcode_03be);
	bind(0x03bf, 2, opcode_03bf);
	bind(0x03c0, 2, opcode_03c0);
	bind(0x03c1, 2, opcode_03c1);
	bind(0x03c2, 1, opcode_03c2);
	bind(0x03c3, 3, opcode_03c3);
	bind(0x03c4, 3, opcode_03c4);
	bind(0x03c5, 4, opcode_03c5);
	bind(0x03c6, 1, opcode_03c6);
	bind(0x03c7, 1, opcode_03c7);
	bind(0x03c8, 0, opcode_03c8);
	bind(0x03c9, 1, opcode_03c9);
	bind(0x03ca, 1, opcode_03ca);
	bind(0x03cb, 3, opcode_03cb);
	bind(0x03cc, 3, opcode_03cc);
	bind(0x03cd, 1, opcode_03cd);
	bind(0x03ce, 1, opcode_03ce);
	bind(0x03cf, 1, opcode_03cf);
	bind(0x03d0, 0, opcode_03d0);
	bind(0x03d1, 0, opcode_03d1);
	bind(0x03d2, 0, opcode_03d2);
	bind(0x03d3, 7, opcode_03d3);
	bind(0x03d4, 2, opcode_03d4);
	bind(0x03d5, 1, opcode_03d5);
	bind(0x03d6, 1, opcode_03d6);
	bind(0x03d7, 3, opcode_03d7);
	bind(0x03d8, 0, opcode_03d8);
	bind(0x03d9, 0, opcode_03d9);
	bind(0x03da, 1, opcode_03da);
	bind(0x03dc, 2, opcode_03dc);
	bind(0x03dd, 3, opcode_03dd);
	bind(0x03de, 1, opcode_03de);
	bind(0x03df, 1, opcode_03df);
	bind(0x03e0, 1, opcode_03e0);
	bind(0x03e1, 1, opcode_03e1);
	bind(0x03e2, 1, opcode_03e2);
	bind(0x03e3, 1, opcode_03e3);
	bind(0x03e4, 1, opcode_03e4);
	bind(0x03e5, 1, opcode_03e5);
	bind(0x03e6, 0, opcode_03e6);
	bind(0x03e7, 1, opcode_03e7);
	bind(0x03ea, 1, opcode_03ea);
	bind(0x03eb, 0, opcode_03eb);
	bind(0x03ec, 0, opcode_03ec);
	bind(0x03ed, 2, opcode_03ed);
	bind(0x03ee, 1, opcode_03ee);
	bind(0x03ef, 1, opcode_03ef);
	bind(0x03f0, 1, opcode_03f0);
	bind(0x03f1, 2, opcode_03f1);
	bind(0x03f2, 2, opcode_03f2);
	bind(0x03f3, 3, opcode_03f3);
	bind(0x03f4, 1, opcode_03f4);
	bind(0x03f5, 2, opcode_03f5);
	bind(0x03f7, 1, opcode_03f7);
	bind(0x03f8, 1, opcode_03f8);
	bind(0x03f9, 3, opcode_03f9);
	bind(0x03fb, 2, opcode_03fb);
	bind(0x03fc, 2, opcode_03fc);
	bind(0x03fd, 1, opcode_03fd);
	bind(0x03fe, 1, opcode_03fe);
	bind(0x03ff, 1, opcode_03ff);
	bind(0x0400, 1, opcode_0400);
	bind(0x0401, 0, opcode_0401);
	bind(0x0402, 0, opcode_0402);
	bind(0x0403, 1, opcode_0403);
	bind(0x0404, 0, opcode_0404);
	bind(0x0405, 1, opcode_0405);
	bind(0x0406, 1, opcode_0406);
	bind(0x0407, 1, opcode_0407);
	bind(0x0408, 1, opcode_0408);
	bind(0x0409, 0, opcode_0409);
	bind(0x040a, 1, opcode_040a);
	bind(0x040b, 0, opcode_040b);
	bind(0x040c, 0, opcode_040c);
	bind(0x040d, 0, opcode_040d);
	bind(0x040e, 1, opcode_040e);
	bind(0x040f, 1, opcode_040f);
	bind(0x0410, 2, opcode_0410);
	bind(0x0411, 2, opcode_0411);
	bind(0x0412, 2, opcode_0412);
	bind(0x0413, 2, opcode_0413);
	bind(0x0414, 2, opcode_0414);
	bind(0x0415, 2, opcode_0415);
	bind(0x0417, 1, opcode_0417);
	bind(0x0418, 2, opcode_0418);
	bind(0x0419, 3, opcode_0419);
	bind(0x041a, 3, opcode_041a);
	bind(0x041c, 2, opcode_041c);
	bind(0x041d, 1, opcode_041d);
	bind(0x041e, 2, opcode_041e);
	bind(0x041f, 1, opcode_041f);
	bind(0x0420, 1, opcode_0420);
	bind(0x0421, 1, opcode_0421);
	bind(0x0422, 2, opcode_0422);
	bind(0x0423, 2, opcode_0423);
	bind(0x0424, 0, opcode_0424);
	bind(0x0425, 2, opcode_0425);
	bind(0x0426, 6, opcode_0426);
	bind(0x0427, 6, opcode_0427);
	bind(0x0428, 2, opcode_0428);
	bind(0x042a, 2, opcode_042a);
	bind(0x042b, 6, opcode_042b);
	bind(0x042c, 1, opcode_042c);
	bind(0x042d, 2, opcode_042d);
	bind(0x042e, 2, opcode_042e);
	bind(0x042f, 2, opcode_042f);
	bind(0x0431, 2, opcode_0431);
	bind(0x0432, 3, opcode_0432);
	bind(0x0433, 2, opcode_0433);
	bind(0x0434, 0, opcode_0434);
	bind(0x0435, 0, opcode_0435);
	bind(0x0436, 0, opcode_0436);
	bind(0x0437, 8, opcode_0437);
	bind(0x0438, 2, opcode_0438);
	bind(0x043a, 0, opcode_043a);
	bind(0x043b, 1, opcode_043b);
	bind(0x043c, 1, opcode_043c);
	bind(0x043d, 1, opcode_043d);
	bind(0x043f, 0, opcode_043f);
	bind(0x0440, 0, opcode_0440);
	bind(0x0441, 2, opcode_0441);
	bind(0x0442, 2, opcode_0442);
	bind(0x0443, 1, opcode_0443);
	bind(0x0444, 2, opcode_0444);
	bind(0x0445, 0, opcode_0445);
	bind(0x0446, 2, opcode_0446);
	bind(0x0447, 1, opcode_0447);
	bind(0x0448, 2, opcode_0448);
	bind(0x0449, 1, opcode_0449);
	bind(0x044a, 1, opcode_044a);
	bind(0x044b, 1, opcode_044b);
	bind(0x044c, 1, opcode_044c);
	bind(0x044d, 1, opcode_044d);
	bind(0x044e, 2, opcode_044e);
	bind(0x044f, 2, opcode_044f);
	bind(0x0450, 1, opcode_0450);
	bind(0x0451, 0, opcode_0451);
	bind(0x0452, 0, opcode_0452);
	bind(0x0453, 4, opcode_0453);
	bind(0x0454, 3, opcode_0454);
	bind(0x0455, 3, opcode_0455);
	bind(0x0459, 1, opcode_0459);
	bind(0x045b, 5, opcode_045b);
	bind(0x0463, 3, opcode_0463);
	bind(0x0477, 3, opcode_0477);
	bind(0x0494, 5, opcode_0494);
}
