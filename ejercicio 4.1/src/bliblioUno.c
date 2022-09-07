/*
 * bliblioUno.c
 *
 *  Created on: 5 sep. 2022
 *
 */
#include <stdio.h>
#include <stdlib.h>

 int  perdirNumero (void){

	 int numeroIngresado;
	 int retorno;

	 do{
	 fflush(stdin);
	 printf ("ingrese un numero (entero).");
	 	scanf("%d", &numeroIngresado);
	 } while (numeroIngresado <1 || numeroIngresado>100);

	 return retorno;
 }


/*
int perdirNumero (void){
	setbuf(stdout, NULL);
	int numeroIngresado;
	int retorno;

		printf ("Ingrese un numero:\n");
		scanf("%d",&numeroIngresado);

	retorno = numeroIngresado;

	return retorno;
}// fin de pedirNumero


*/
