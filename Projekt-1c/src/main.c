/*
 * main.c
 *
 *  Created on: 7. okt. 2020
 *      Author: Rok-Home
 */

#include <stdio.h>
#include "../inc/main.h"
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int polje[5]; // polje 5 stevil med katerimi isce drugo najvecje
	srand(time(0));

	for(int i=0; i<5; i++){
		polje[i]=rand()%100; // dobimo 5 razlicnih rand stevil
		printf("%d ", polje[i]);
	}

	// moremo najdit drugo najvecje

	int max1 = 0, max2 = 0;

	for(int i=0; i<5;i++){
		if(polje[i]> max1){
			// je to najvecje st
			max2 = max1;
			max1 = polje[i];
		}
		else if(polje[i] > max2 && polje[i] < max1){
			// drugo najvecje
			max2 = polje[i];
		}



	}
	printf("\nDrugo najvecje stevilo je: %d\n", max2);
	return 0;
}
