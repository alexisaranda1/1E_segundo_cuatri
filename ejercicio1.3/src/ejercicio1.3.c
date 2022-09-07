/*
 ============================================================================
 Name        : ejercicioTres.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//bibliotecas.
#include <stdio.h>
#include <stdlib.h>
// int main funcion principal.
//nombre parametros y debolucion.
int main(void) {

	setbuf(stdout, NULL);
	// variables
	int numeroUno;
	int numeroDos;
	int numeroTres;

	//pintf es una que imprime por consola.
	printf("Ingrese primer numero \n");
	// scanf  pide un dato al usuario.
	scanf("%d", &numeroUno);

	printf("Ingrese segundo numero \n");
	scanf("%d", &numeroDos);

	printf("ingrese tercer numero \n");
	scanf("%d", &numeroTres);

	// empiezo la comparativa.
	if (numeroUno > numeroDos && numeroUno < numeroTres) {
		printf("El numero del medio es %d", numeroUno);
	} else if (numeroDos > numeroUno && numeroDos < numeroTres) {
		printf("El numero del medio es %d", numeroDos);
	} else if (numeroTres > numeroUno && numeroTres < numeroDos) {
		printf("El numero del medio es %d", numeroTres);
	} else {
		printf("No se encontro numero del medio");
	}

	return EXIT_SUCCESS;
} // fin.
