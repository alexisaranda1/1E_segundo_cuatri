/*  Ejercicio 3-1:
 Crear una función que muestre por pantalla el número flotante
 que recibe como parámetro.*/

#include <stdio.h>
#include <stdlib.h>

void mostarNumero(float flotante);

int main(void) {

	setbuf(stdout, NULL);
	float pedirNumero;

	printf("Ingrese un numero: \n ");
	scanf("%f", &pedirNumero);
	fflush(stdin);

// invoco la funcion
	mostarNumero(pedirNumero);

	return 0;
}
// Creo una funcion de tipo float.

// para imprimir se usa void.
void mostarNumero(float flotante) {

	printf("Numero ingresado: %.2f", flotante);
}
