/*
 ============================================================================
 Name        : 4.2.c

Realizar un programa que permita la carga de
temperaturas en celsius y fahrenheit , validando que las temperaturas ingresadas estén entre
el punto de congelación y ebullición del agua para cada tipo de escala.
Las validaciones se hacen en una biblioteca.


Las funciones de transformación de fahrenheit a
celsius y de celsius a fahrenheit se hacen en otra biblioteca.
Extra:

 */


#include <stdio.h>
#include <stdlib.h>
#include "Validacion.h"
#include "calculos.h"
int main(void) {
	setbuf(stdout, NULL);
	gradoValidacion ();
	return 0;
}



