/*
 ============================================================================


 Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
 1Cantidad de positivos y negativos. +
 2Sumatoria de los pares.+
 3El mayor de los impares.+

 4Listado de los números ingresados.
 5Listado de los números pares.
 6Listado de los números de las posiciones impares.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "cantidad.h"

#define cantidad 4

int main(void) {
	setbuf(stdout, NULL);

	int arraysNumero[cantidad];
	int i = 0;
	int contadorPositivos=0;
	int contadorNegativos=0;
	int acumuladorPares=0;
	int flag = 0;
	int imparMayor;


	for (i = 0; i < cantidad; i++) {
				do {
					printf("Ingrese un numero");
					scanf("%d", &arraysNumero[i]);
				} while (!(arraysNumero[i] < 1000 &&arraysNumero[i] >-1000));

				}

 contadores(arraysNumero);

		//2	Sumatoria de los pares.

			for (i = 0; i < cantidad; i++) {
			if (arraysNumero[i]%2 ==0){
				acumuladorPares += arraysNumero[i];

				// 3El mayor de los impares.+

			} else if(flag == 0 || arraysNumero[i] > imparMayor){
			       imparMayor = arraysNumero[i];
			        flag = 1;
			    }
		}
		//	1Cantidad de positivos y negativos. +



		//	2 Sumatoria de los pares.
		if ( acumuladorPares > 0 ){
			printf(" \n\n La suma de los pares es : %d",acumuladorPares);
		}

		if (flag ==1){
			printf(" \n\n El mayor de los impares es : %d",imparMayor);
		} else {
			printf("\n\n No se ingresaron numeros impares.");
		}
		for (i = 0; i < cantidad; i++) {
				if (arraysNumero[i] %2==0){
					printf("\n\n  El listados de los numeros pares es : %d",arraysNumero[i]);
				}
			}
				for (i = 0; i < cantidad; i++) {
					if (arraysNumero[i] %2 !=0){
						 printf(" \n\n Las posiciones de los  impares es : %d",i);
					}
			}
return 0;

} // fin del if. menor< ;  mayor >



// 2Sumatoria de los pares.+
/*
if (arraysNumero != NULL && cantidad > 0) {
	for (i = 0; i < cantidad; i++) {
		if (arraysNumero[i] > 0){
			contadorPositivos++;
		}
		else {
			contadorNegativos++;
		}

	}
}
*/



