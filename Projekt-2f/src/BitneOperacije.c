/*
 * BitneOperacije.c
 *
 *  Created on: 18. okt. 2020
 *      Author: Rok-Home
 */
#include "../inc/BitneOperacije.h"

uint16_t PostaviBit(uint16_t stevilo, uint16_t odmik){
	stevilo |= 1UL << odmik;
	return stevilo;
}

uint16_t PocistiBit(uint16_t stevilo, uint16_t odmik){
	stevilo &= ~(1UL << odmik);
	return stevilo;
}

