/*
 * main.c
 *
 *  Created on: 18 Oct 2020
 *      Author: Rok-PC
 */

#include "../inc/main.h"
#include <stdlib.h>
#include <time.h>
#include <stdint.h> // ZA UINT32_T
#include <stdbool.h>

bool sodo(uint32_t n){
	// ce je n&1 == 1 je liho drugace sodo
	return (!(n & 1));
}

int main(){
	uint32_t n = 110;
	if(sodo(n)){
		printf("Sodo");
	}
	else{
		printf("Liho");
	}
	return 0;
}
