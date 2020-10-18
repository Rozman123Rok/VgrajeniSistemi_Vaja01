/*
 * main.c
 *
 *  Created on: 18. okt. 2020
 *      Author: Rok-Home
 */

#include "../inc/StevecBitov.h"

int main(){
	uint16_t a = 5;
	printf("1: %d\n", StevecBitov_1(a));
	printf("0: %d\n", StevecBitov_0(a));
	return 0;
}
