/*
 * validacion.c
 *
 *  Created on: 7 sep. 2022
 *      Author: Axex Shop
 */

#include <stdio.h>
#include <stdlib.h>

int gradoValidacion (){

	char grados;
    int retorno=-1;
	do {

	printf ("Ingrese la  temperatura(f para fahrenheit) O (c para celsius):");
	 fflush(stdin);
	scanf ("%c",&grados);

	} while (!(grados == 'f' || grados =='c'));

	if (grados == 'f'){
		retorno = 0;
	}else if ( grados == 'c'){
		retorno = 1;
	}

	return retorno;
} // fIN DE TEMERATURA.

int temperaturaValidacion (int grados){

	int temperaturaF=0;
	int temperaturaC=0;
	int retorno;

	switch (grados) {

		case 0:
		do {
			printf ("Ingrese la  temperatura: ");
			scanf ("%d",&temperaturaF);
		} while ((temperaturaF < 32 || temperaturaF > 212 ));
			  break;

		case 1:
			do {
				printf ("Ingrese la  temperatura: ");
				scanf ("%d",&temperaturaC);

			} while ((temperaturaC < 0 || temperaturaC >100));
			  break;
		}

	if (temperaturaF !=0){
		retorno = temperaturaF;
	}else {
		retorno= temperaturaC;
	}

return retorno;

} // fIN DE TEMERATURA.


