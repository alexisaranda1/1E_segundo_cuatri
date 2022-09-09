/*
 * cantidad.c
 *
 *  Created on: 8 sep. 2022
 *      Author: Axex Shop
 */
#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD 4

void contadores (int arraysNumero[]){

	int i =0;
		int contadorPositivos = 0;
		int contadorNegativos = 0;

	if (arraysNumero != NULL) {
			for (i = 0; i < CANTIDAD; i++) {

				if (arraysNumero[i] > 0){
					contadorPositivos++;
				}else if (arraysNumero[i] < 0){
					contadorNegativos++;
				}

			}
		}
			if (contadorPositivos >0){
				printf("\n\n Cantidad de positivos es : %d",contadorPositivos);
			}

			if (contadorNegativos >0){
				printf(" \n\n Cantidad de negativos es : %d",contadorNegativos);
			}// fin
}

