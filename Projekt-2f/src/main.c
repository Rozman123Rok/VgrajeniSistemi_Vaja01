/*
 * main.c
 *
 *  Created on: 18. okt. 2020
 *      Author: Rok-Home
 */

#include "../inc/BitneOperacije.h"

int main(){
	uint16_t a = 10;
	uint16_t b = 1;
	printf("stevilo: %d\n", a);
	a = PostaviBit(a,b);
	printf("stevilo po nastavitvi 1 bit: %d\n", a);
	a = PocistiBit(a,b);
	printf("stevilo: %d\n", a);
	return 0;
}
