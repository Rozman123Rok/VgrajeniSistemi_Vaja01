/*
 * main.c
 *
 *  Created on: 8 Oct 2020
 *      Author: Rok-PC
 */


#include "../inc/main.h"
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h> // ZA UINT32_T

void IskanjePodniza(char* niz, int dol){
	uint32_t a=0, prvi_A=0;
	for(int i=0; i<dol;i++){
		if(niz[i]=='A' && a==0){
			a=1; // nasel prvi A
			prvi_A = i; // Shranimo pozicijo prvega A
		}
		else if(niz[i]=='A' && a!=0){
			// nasli drugi A pred Z
			for(int j=prvi_A; j<=i; j++){
				printf("%c ", niz[j]); // Izpisemo niz
			}
			printf("\n");
		}
		else if(niz[i]=='Z'){
			// Nasel Z
			a = 0;
		}
	}
}

int main(){
	char name[13] = "AtuZATonAgZt";
	printf("%s\n", name);
	IskanjePodniza(name, 13);
	return 0;
}

