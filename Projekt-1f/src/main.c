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


int main(){
	uint32_t pr1 = 1;
	//uint32_t pr2 = 15;
	uint32_t pr2 = 50000;

	//printf("Primer 3: %d \n", pr3);

	//360 000 ms = 1h
	//6 000 ms = 1 min
	//100 ms = 1s

	uint32_t st_ur =0;
	uint32_t st_min =0;
	uint32_t st_s =0;

	st_ur = pr2/36000;
	//pr2 = pr2-(st_ur*36000);
	pr2 = pr2%36000;
	//printf("Ure: %d \n", st_ur);

	st_min = pr2/600;
	pr2 = pr2%600;
	//printf("Min: %d \n", st_min);

	st_s = pr2/10;
	pr2 = pr2%10;
	//printf("s: %d \n", st_s);

	pr2 = pr2*100;
	//printf("ms: %d \n", pr2);

	char buffer [50];
	uint32_t n;
	if(st_ur<10){
		if(st_min<10){
			if(st_s<10){
				n=sprintf (buffer, "0%dh 0%dmin 0%ds %dms", st_ur, st_min, st_s, pr2);
			}
			else{
				n=sprintf (buffer, "0%dh 0%dmin %ds %dms", st_ur, st_min, st_s, pr2);
			}
		}
		else{
			if(st_s<10){
				n=sprintf (buffer, "0%dh %dmin 0%ds %dms", st_ur, st_min, st_s, pr2);
			}
			else{
				n=sprintf (buffer, "0%dh %dmin %ds %dms", st_ur, st_min, st_s, pr2);
			}
		}
	}
	else{
		if(st_s<10){
			n=sprintf (buffer, "%dh 0%dmin 0%ds %dms", st_ur, st_min, st_s, pr2);
		}
		else{
			n=sprintf (buffer, "%dh %dmin %ds %dms", st_ur, st_min, st_s, pr2);
		}
	}
	//n=sprintf (buffer, "%d plus %d is %d", a, b, a+b);
	printf ("%s\n",buffer);
	return 0;
}

