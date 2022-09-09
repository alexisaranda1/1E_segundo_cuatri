/*
 * validacion.c
 *
 *  Created on: 7 sep. 2022
 *      Author: Axex Shop
 */

#include <stdio.h>
#include <stdlib.h>

#include "calculos.h"

int  gradoValidacion (){

	char grados;

	int temperaturaF=0;
    int temperaturaC=0;
    int retorno=0;

	do {
	printf ("Ingrese la  temperatura(f para fahrenheit) O (c para celsius):");
	 fflush(stdin);
	scanf ("%c",&grados);

	} while (!(grados == 'f' || grados =='c'));


	switch (grados) {
		case 'f':
		do {
			printf ("Ingrese la  temperatura: ");
			scanf ("%d",&temperaturaF);
		} while ((temperaturaF < 32 || temperaturaF > 212 ));
			  break;

		case 'c':
			do {
				printf ("Ingrese la  temperatura: ");
				scanf ("%d",&temperaturaC);

			} while ((temperaturaC < 0 || temperaturaC >100));
			  break;
		}

	 conversionTemperaturas ( temperaturaF,temperaturaC);

 return retorno;
 }// fIN DE TEMERATURA.




