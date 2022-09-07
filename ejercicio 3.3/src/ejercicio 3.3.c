/*
 *
Crear una función que pida el ingreso de un entero y lo retorne.

 */
#include <stdio.h>
#include <stdlib.h>

 int entero (int);

int main(void) {
	setbuf(stdout, NULL);
	int numeroIngresado=0;
	int mensaje=0;

mensaje = entero (numeroIngresado);

// mira bien y pone % no &!!!!!!!!!!!!!
printf("Numero ingresado es: %d \n",mensaje);

	return 0;

} // fin de la funcion main.

 int entero (int numero){

	 fflush(stdin);
	 printf ("ingrese un numero (entero).");
	 	scanf("%d", &numero);

	 return numero;
 }
