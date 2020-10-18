/*
 * main.c
 *
 *  Created on: 18. okt. 2020
 *      Author: Rok-Home
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

// stevilo |= 1UL << odmik;
// stevilo &= ~(1UL << odmik);

int Spremeni(uint32_t stevilo, uint32_t odmik, uint32_t vrednost){
	if(vrednost == 0){
		// 00
		stevilo &= ~(1UL << odmik); // dam na nic
		stevilo &= ~(1UL << (odmik+1)); // dam na nic
	}
	else if(vrednost == 1){
		//01
		stevilo &= ~(1UL << (odmik+1)); // dam na nic
		stevilo |= 1UL << odmik; // dam na 1
	}
	else if(vrednost == 2){
		//10
		stevilo &= ~(1UL << odmik); // dam na nic
		stevilo |= 1UL << (odmik+1); // dam na 1
	}
	else if(vrednost == 3){
		//11
		stevilo |= 1UL << odmik; // dam na 1
		stevilo |= 1UL << (odmik+1); // dam na 1
	}
	else{
		return 0;
	}
	return stevilo;
}

int main(){
	uint32_t a = 10; // stevilo
	uint32_t b = 1; // odmik
	uint32_t c = 2; // vrednost
	printf("Stevilo pred: %d\n", a);
	a = Spremeni(a, b, c);
	printf("Stevilo po: %d\n", a);
	return 0;
}
