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


int main(){
	srand(time(0));
	int dimenzija;
	printf("Vpisi velikost polja: ");
	fflush( stdout );
	scanf("%d", &dimenzija);

	printf("Dimenzija: %d \n", dimenzija);

	int polje[dimenzija];

	for(int i=0; i<dimenzija;i++){
		polje[i] = rand()%100;
		printf("%d ", polje[i]);
	}

	printf("\n");

	for(int i=0; i<dimenzija;i++){
		int temp = polje[dimenzija-1];
		for(int j=dimenzija-1; j>0; j--){
			polje[j] = polje[j-1];
		}
		polje[0] = temp;

		for(int j=0;j<dimenzija;j++){
			printf("%d ", polje[j]);
		}
		printf("\n");
	}



	return 0;
}

