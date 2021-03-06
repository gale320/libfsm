/* Generated by libfsm */

#include LF_HEADER

#include <stddef.h>

#include <fsm/fsm.h>

struct fsm *
utf8_Mc_fsm(const struct fsm_options *opt)
{
	struct fsm *fsm;
	size_t i;

	struct fsm_state *s[73] = { 0 };

	fsm = fsm_new(opt);
	if (fsm == NULL) {
		return NULL;
	}

	for (i = 0; i < 73; i++) {
		s[i] = fsm_addstate(fsm);
		if (s[i] == NULL) {
			goto error;
		}
	}

	if (!fsm_addedge_literal(fsm, s[0], s[1], 0xe0)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[0], s[2], 0xe1)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[0], s[3], 0xe3)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[0], s[4], 0xea)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[0], s[5], 0xf0)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[13], 0xa9)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[18], 0xa4)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[19], 0xa5)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[20], 0xa6)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[20], 0xb4)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[21], 0xa7)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[21], 0xad)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[22], 0xa8)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[22], 0xaa)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[23], 0xab)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[24], 0xac)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[24], 0xb2)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[25], 0xae)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[25], 0xbc)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[26], 0xaf)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[27], 0xb0)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[28], 0xb1)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[29], 0xb3)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[30], 0xb5)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[31], 0xb6)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[32], 0xb7)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[1], s[33], 0xbd)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[2], s[34], 0x80)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[2], s[35], 0x81)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[2], s[36], 0x82)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[2], s[37], 0x9e)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[2], s[38], 0x9f)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[2], s[39], 0xa4)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[2], s[40], 0xa8)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[2], s[41], 0xa9)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[2], s[42], 0xac)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[2], s[43], 0xad)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[2], s[44], 0xae)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[2], s[45], 0xaf)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[2], s[46], 0xb0)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[2], s[47], 0xb3)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[3], s[6], 0x80)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[4], s[8], 0xa0)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[4], s[9], 0xa2)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[4], s[10], 0xa3)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[4], s[11], 0xa5)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[4], s[12], 0xa6)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[4], s[13], 0xa7)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[4], s[14], 0xa8)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[4], s[15], 0xa9)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[4], s[16], 0xab)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[4], s[17], 0xaf)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[5], s[48], 0x91)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[5], s[49], 0x96)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[5], s[50], 0x9d)) { goto error; }
	for (i = 0xae; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[6], s[7], i)) { goto error; }
	}
	for (i = 0xa3; i <= 0xa4; i++) {
		if (!fsm_addedge_literal(fsm, s[8], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[8], s[7], 0xa7)) { goto error; }
	for (i = 0x80; i <= 0x81; i++) {
		if (!fsm_addedge_literal(fsm, s[9], s[7], i)) { goto error; }
	}
	for (i = 0xb4; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[9], s[7], i)) { goto error; }
	}
	for (i = 0x80; i <= 0x83; i++) {
		if (!fsm_addedge_literal(fsm, s[10], s[7], i)) { goto error; }
	}
	for (i = 0x92; i <= 0x93; i++) {
		if (!fsm_addedge_literal(fsm, s[11], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[12], s[7], 0x83)) { goto error; }
	for (i = 0xb4; i <= 0xb5; i++) {
		if (!fsm_addedge_literal(fsm, s[12], s[7], i)) { goto error; }
	}
	for (i = 0xba; i <= 0xbb; i++) {
		if (!fsm_addedge_literal(fsm, s[12], s[7], i)) { goto error; }
	}
	for (i = 0xbd; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[12], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[13], s[7], 0x80)) { goto error; }
	for (i = 0xaf; i <= 0xb0; i++) {
		if (!fsm_addedge_literal(fsm, s[14], s[7], i)) { goto error; }
	}
	for (i = 0xb3; i <= 0xb4; i++) {
		if (!fsm_addedge_literal(fsm, s[14], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[15], s[7], 0x8d)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[15], s[7], 0xbb)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[15], s[7], 0xbd)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[16], s[7], 0xab)) { goto error; }
	for (i = 0xae; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[16], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[16], s[7], 0xb5)) { goto error; }
	for (i = 0xa3; i <= 0xa4; i++) {
		if (!fsm_addedge_literal(fsm, s[17], s[7], i)) { goto error; }
	}
	for (i = 0xa6; i <= 0xa7; i++) {
		if (!fsm_addedge_literal(fsm, s[17], s[7], i)) { goto error; }
	}
	for (i = 0xa9; i <= 0xaa; i++) {
		if (!fsm_addedge_literal(fsm, s[17], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[17], s[7], 0xac)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[18], s[7], 0x83)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[18], s[7], 0xbb)) { goto error; }
	for (i = 0xbe; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[18], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[19], s[7], 0x80)) { goto error; }
	for (i = 0x89; i <= 0x8c; i++) {
		if (!fsm_addedge_literal(fsm, s[19], s[7], i)) { goto error; }
	}
	for (i = 0x8e; i <= 0x8f; i++) {
		if (!fsm_addedge_literal(fsm, s[19], s[7], i)) { goto error; }
	}
	for (i = 0x82; i <= 0x83; i++) {
		if (!fsm_addedge_literal(fsm, s[20], s[7], i)) { goto error; }
	}
	for (i = 0xbe; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[20], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[21], s[7], 0x80)) { goto error; }
	for (i = 0x87; i <= 0x88; i++) {
		if (!fsm_addedge_literal(fsm, s[21], s[7], i)) { goto error; }
	}
	for (i = 0x8b; i <= 0x8c; i++) {
		if (!fsm_addedge_literal(fsm, s[21], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[21], s[7], 0x97)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[22], s[7], 0x83)) { goto error; }
	for (i = 0xbe; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[22], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[23], s[7], 0x80)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[23], s[7], 0x89)) { goto error; }
	for (i = 0x8b; i <= 0x8c; i++) {
		if (!fsm_addedge_literal(fsm, s[23], s[7], i)) { goto error; }
	}
	for (i = 0x82; i <= 0x83; i++) {
		if (!fsm_addedge_literal(fsm, s[24], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[24], s[7], 0xbe)) { goto error; }
	for (i = 0xbe; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[25], s[7], i)) { goto error; }
	}
	for (i = 0x81; i <= 0x82; i++) {
		if (!fsm_addedge_literal(fsm, s[26], s[7], i)) { goto error; }
	}
	for (i = 0x86; i <= 0x88; i++) {
		if (!fsm_addedge_literal(fsm, s[26], s[7], i)) { goto error; }
	}
	for (i = 0x8a; i <= 0x8c; i++) {
		if (!fsm_addedge_literal(fsm, s[26], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[26], s[7], 0x97)) { goto error; }
	for (i = 0x81; i <= 0x83; i++) {
		if (!fsm_addedge_literal(fsm, s[27], s[7], i)) { goto error; }
	}
	for (i = 0x81; i <= 0x84; i++) {
		if (!fsm_addedge_literal(fsm, s[28], s[7], i)) { goto error; }
	}
	for (i = 0x80; i <= 0x84; i++) {
		if (!fsm_addedge_literal(fsm, s[29], s[7], i)) { goto error; }
	}
	for (i = 0x87; i <= 0x88; i++) {
		if (!fsm_addedge_literal(fsm, s[29], s[7], i)) { goto error; }
	}
	for (i = 0x8a; i <= 0x8b; i++) {
		if (!fsm_addedge_literal(fsm, s[29], s[7], i)) { goto error; }
	}
	for (i = 0x95; i <= 0x96; i++) {
		if (!fsm_addedge_literal(fsm, s[29], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[30], s[7], 0x80)) { goto error; }
	for (i = 0x86; i <= 0x88; i++) {
		if (!fsm_addedge_literal(fsm, s[30], s[7], i)) { goto error; }
	}
	for (i = 0x8a; i <= 0x8c; i++) {
		if (!fsm_addedge_literal(fsm, s[30], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[30], s[7], 0x97)) { goto error; }
	for (i = 0x82; i <= 0x83; i++) {
		if (!fsm_addedge_literal(fsm, s[31], s[7], i)) { goto error; }
	}
	for (i = 0x8f; i <= 0x91; i++) {
		if (!fsm_addedge_literal(fsm, s[32], s[7], i)) { goto error; }
	}
	for (i = 0x98; i <= 0x9f; i++) {
		if (!fsm_addedge_literal(fsm, s[32], s[7], i)) { goto error; }
	}
	for (i = 0xb2; i <= 0xb3; i++) {
		if (!fsm_addedge_literal(fsm, s[32], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[33], s[7], 0xbf)) { goto error; }
	for (i = 0xab; i <= 0xac; i++) {
		if (!fsm_addedge_literal(fsm, s[34], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[34], s[7], 0xb1)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[34], s[7], 0xb8)) { goto error; }
	for (i = 0xbb; i <= 0xbc; i++) {
		if (!fsm_addedge_literal(fsm, s[34], s[7], i)) { goto error; }
	}
	for (i = 0x96; i <= 0x97; i++) {
		if (!fsm_addedge_literal(fsm, s[35], s[7], i)) { goto error; }
	}
	for (i = 0xa2; i <= 0xa4; i++) {
		if (!fsm_addedge_literal(fsm, s[35], s[7], i)) { goto error; }
	}
	for (i = 0xa7; i <= 0xad; i++) {
		if (!fsm_addedge_literal(fsm, s[35], s[7], i)) { goto error; }
	}
	for (i = 0x83; i <= 0x84; i++) {
		if (!fsm_addedge_literal(fsm, s[36], s[7], i)) { goto error; }
	}
	for (i = 0x87; i <= 0x8c; i++) {
		if (!fsm_addedge_literal(fsm, s[36], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[36], s[7], 0x8f)) { goto error; }
	for (i = 0x9a; i <= 0x9c; i++) {
		if (!fsm_addedge_literal(fsm, s[36], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[37], s[7], 0xb6)) { goto error; }
	for (i = 0xbe; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[37], s[7], i)) { goto error; }
	}
	for (i = 0x80; i <= 0x85; i++) {
		if (!fsm_addedge_literal(fsm, s[38], s[7], i)) { goto error; }
	}
	for (i = 0x87; i <= 0x88; i++) {
		if (!fsm_addedge_literal(fsm, s[38], s[7], i)) { goto error; }
	}
	for (i = 0xa3; i <= 0xa6; i++) {
		if (!fsm_addedge_literal(fsm, s[39], s[7], i)) { goto error; }
	}
	for (i = 0xa9; i <= 0xab; i++) {
		if (!fsm_addedge_literal(fsm, s[39], s[7], i)) { goto error; }
	}
	for (i = 0xb0; i <= 0xb1; i++) {
		if (!fsm_addedge_literal(fsm, s[39], s[7], i)) { goto error; }
	}
	for (i = 0xb3; i <= 0xb8; i++) {
		if (!fsm_addedge_literal(fsm, s[39], s[7], i)) { goto error; }
	}
	for (i = 0x99; i <= 0x9a; i++) {
		if (!fsm_addedge_literal(fsm, s[40], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[41], s[7], 0x95)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[41], s[7], 0x97)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[41], s[7], 0xa1)) { goto error; }
	for (i = 0xa3; i <= 0xa4; i++) {
		if (!fsm_addedge_literal(fsm, s[41], s[7], i)) { goto error; }
	}
	for (i = 0xad; i <= 0xb2; i++) {
		if (!fsm_addedge_literal(fsm, s[41], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[42], s[7], 0x84)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[7], 0xb5)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[42], s[7], 0xbb)) { goto error; }
	for (i = 0xbd; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[42], s[7], i)) { goto error; }
	}
	for (i = 0x80; i <= 0x81; i++) {
		if (!fsm_addedge_literal(fsm, s[43], s[7], i)) { goto error; }
	}
	for (i = 0x83; i <= 0x84; i++) {
		if (!fsm_addedge_literal(fsm, s[43], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[44], s[7], 0x82)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[44], s[7], 0xa1)) { goto error; }
	for (i = 0xa6; i <= 0xa7; i++) {
		if (!fsm_addedge_literal(fsm, s[44], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[44], s[7], 0xaa)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[45], s[7], 0xa7)) { goto error; }
	for (i = 0xaa; i <= 0xac; i++) {
		if (!fsm_addedge_literal(fsm, s[45], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[45], s[7], 0xae)) { goto error; }
	for (i = 0xb2; i <= 0xb3; i++) {
		if (!fsm_addedge_literal(fsm, s[45], s[7], i)) { goto error; }
	}
	for (i = 0xa4; i <= 0xab; i++) {
		if (!fsm_addedge_literal(fsm, s[46], s[7], i)) { goto error; }
	}
	for (i = 0xb4; i <= 0xb5; i++) {
		if (!fsm_addedge_literal(fsm, s[46], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[47], s[7], 0xa1)) { goto error; }
	for (i = 0xb2; i <= 0xb3; i++) {
		if (!fsm_addedge_literal(fsm, s[47], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[47], s[7], 0xb7)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[13], 0x87)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[20], 0x8c)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[53], 0x80)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[54], 0x82)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[55], 0x84)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[56], 0x86)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[57], 0x88)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[58], 0x8b)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[59], 0x8d)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[60], 0x90)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[61], 0x91)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[62], 0x92)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[63], 0x93)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[64], 0x96)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[65], 0x98)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[66], 0x9a)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[67], 0x9c)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[68], 0xa8)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[69], 0xa9)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[70], 0xaa)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[71], 0xb0)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[48], s[72], 0xb2)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[49], s[52], 0xbd)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[50], s[51], 0x85)) { goto error; }
	for (i = 0xa5; i <= 0xa6; i++) {
		if (!fsm_addedge_literal(fsm, s[51], s[7], i)) { goto error; }
	}
	for (i = 0xad; i <= 0xb2; i++) {
		if (!fsm_addedge_literal(fsm, s[51], s[7], i)) { goto error; }
	}
	for (i = 0x91; i <= 0xbe; i++) {
		if (!fsm_addedge_literal(fsm, s[52], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[53], s[7], 0x80)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[53], s[7], 0x82)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[54], s[7], 0x82)) { goto error; }
	for (i = 0xb0; i <= 0xb2; i++) {
		if (!fsm_addedge_literal(fsm, s[54], s[7], i)) { goto error; }
	}
	for (i = 0xb7; i <= 0xb8; i++) {
		if (!fsm_addedge_literal(fsm, s[54], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[55], s[7], 0xac)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[56], s[7], 0x82)) { goto error; }
	for (i = 0xb3; i <= 0xb5; i++) {
		if (!fsm_addedge_literal(fsm, s[56], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[56], s[7], 0xbf)) { goto error; }
	for (i = 0xac; i <= 0xae; i++) {
		if (!fsm_addedge_literal(fsm, s[57], s[7], i)) { goto error; }
	}
	for (i = 0xb2; i <= 0xb3; i++) {
		if (!fsm_addedge_literal(fsm, s[57], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[57], s[7], 0xb5)) { goto error; }
	for (i = 0xa0; i <= 0xa2; i++) {
		if (!fsm_addedge_literal(fsm, s[58], s[7], i)) { goto error; }
	}
	for (i = 0x81; i <= 0x84; i++) {
		if (!fsm_addedge_literal(fsm, s[59], s[7], i)) { goto error; }
	}
	for (i = 0x87; i <= 0x88; i++) {
		if (!fsm_addedge_literal(fsm, s[59], s[7], i)) { goto error; }
	}
	for (i = 0x8b; i <= 0x8d; i++) {
		if (!fsm_addedge_literal(fsm, s[59], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[59], s[7], 0x97)) { goto error; }
	for (i = 0xa2; i <= 0xa3; i++) {
		if (!fsm_addedge_literal(fsm, s[59], s[7], i)) { goto error; }
	}
	for (i = 0xb5; i <= 0xb7; i++) {
		if (!fsm_addedge_literal(fsm, s[60], s[7], i)) { goto error; }
	}
	for (i = 0x80; i <= 0x81; i++) {
		if (!fsm_addedge_literal(fsm, s[61], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[61], s[7], 0x85)) { goto error; }
	for (i = 0xb0; i <= 0xb2; i++) {
		if (!fsm_addedge_literal(fsm, s[62], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[62], s[7], 0xb9)) { goto error; }
	for (i = 0xbb; i <= 0xbe; i++) {
		if (!fsm_addedge_literal(fsm, s[62], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[63], s[7], 0x81)) { goto error; }
	for (i = 0xaf; i <= 0xb1; i++) {
		if (!fsm_addedge_literal(fsm, s[64], s[7], i)) { goto error; }
	}
	for (i = 0xb8; i <= 0xbb; i++) {
		if (!fsm_addedge_literal(fsm, s[64], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[64], s[7], 0xbe)) { goto error; }
	for (i = 0xb0; i <= 0xb2; i++) {
		if (!fsm_addedge_literal(fsm, s[65], s[7], i)) { goto error; }
	}
	for (i = 0xbb; i <= 0xbc; i++) {
		if (!fsm_addedge_literal(fsm, s[65], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[65], s[7], 0xbe)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[66], s[7], 0xac)) { goto error; }
	for (i = 0xae; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[66], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[66], s[7], 0xb6)) { goto error; }
	for (i = 0xa0; i <= 0xa1; i++) {
		if (!fsm_addedge_literal(fsm, s[67], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[67], s[7], 0xa6)) { goto error; }
	for (i = 0x87; i <= 0x88; i++) {
		if (!fsm_addedge_literal(fsm, s[68], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[68], s[7], 0xb9)) { goto error; }
	for (i = 0x97; i <= 0x98; i++) {
		if (!fsm_addedge_literal(fsm, s[69], s[7], i)) { goto error; }
	}
	if (!fsm_addedge_literal(fsm, s[70], s[7], 0x97)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[71], s[7], 0xaf)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[71], s[7], 0xbe)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[72], s[7], 0xa9)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[72], s[7], 0xb1)) { goto error; }
	if (!fsm_addedge_literal(fsm, s[72], s[7], 0xb4)) { goto error; }

	fsm_setstart(fsm, s[0]);
	fsm_setend(fsm, s[7], 1);

	return fsm;

error:

	fsm_free(fsm);

	return NULL;
}

