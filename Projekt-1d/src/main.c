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

bool ImaTriDelitelje(int stevilo){
	int st_d = 0;
	for(int i=1; i<=100; i++){
		if(stevilo%i == 0){
			st_d++;
			if(st_d>3){
				break;
			}
		}
	}
	if(st_d == 3){return true;}
	return false;

}

int main(){
	for(int i=1; i<=100;i++){
		if(ImaTriDelitelje(i)){
			printf("%d ", i);
		}
	}

	return 0;
}

