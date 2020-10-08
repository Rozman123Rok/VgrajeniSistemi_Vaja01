/*
 * main.c
 *
 *  Created on: 7. okt. 2020
 *      Author: Rok-Home
 */

#include <stdio.h>
#include "../inc/main.h"
#include <stdint.h>

int main(){

	int polje[11];
	int stevec = 0;

	for(int i = 1; stevec < 11; i++){
		if(i % 3 == 0 && i % 4 == 0){
			polje[stevec] = i;
			stevec += 1;
		}
	}

	for(int i=0; i<11; i++){
		printf("%d ", polje[i]);

	}
	return 0;
}
