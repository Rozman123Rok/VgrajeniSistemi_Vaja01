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

// structura opravila
struct Opravila {
   char ime[20];
   int prioriteta;
   int cas_izvajanja;
   struct Opravila* nasledni;
};

void izpis(struct Opravila* n){
	while(n != NULL){
		printf("--------------\n");
		//printf("%d\n", n->next);
		printf("Ime: %s\n", n->ime);
		printf("Cas: %d\n", n->cas_izvajanja);
		printf("Prioriteta: %d\n", n->prioriteta);
		n = n->nasledni;
	}
}

int main(){
	struct Opravila* o1;
	struct Opravila* o2;
	struct Opravila* o3;

	o1 = (struct Opravila*)malloc(sizeof(struct Opravila));
	o2 = (struct Opravila*)malloc(sizeof(struct Opravila));
	o3 = (struct Opravila*)malloc(sizeof(struct Opravila));

	strcpy(o1->ime, "Test1");
	o1->cas_izvajanja = 1;
	o1->prioriteta = 3;
	o1->nasledni = NULL;

	strcpy(o2->ime, "Test2");
	o2->cas_izvajanja = 2;
	o2->prioriteta = 2;
	o2->nasledni = NULL;

	strcpy(o3->ime, "Test3");
	o3->cas_izvajanja = 3;
	o3->prioriteta = 1;
	o3->nasledni = NULL;

	o3->nasledni = o2;
	o2->nasledni = o1;

	izpis(o3);

	return 0;
}
