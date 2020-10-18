/*
 * StevecBitov.c
 *
 *  Created on: 18. okt. 2020
 *      Author: Rok-Home
 */

#include "../inc/StevecBitov.h"

int StevecBitov_1(uint16_t stevilo){
	// koliko 1 je
	uint32_t st = 0;
	while (stevilo) {
		st += stevilo & 1;
	    stevilo >>= 1;
	    }
	return st;
}
int StevecBitov_0(uint16_t stevilo){
	// koliko 0 je
	uint32_t st = 0;
	while (stevilo) {
		if(stevilo & 1){
			st +=1;
		}
	    stevilo >>= 1;
	    }
	return st;
}
