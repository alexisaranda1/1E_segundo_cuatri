/*
 ============================================================================
 Ejercicio 2-4:

Ingresar 5 caracteres e informar cuantas letras p (minúsculas) se ingresaron.

 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

setbuf(stdout, NULL);
char caracter;
int contadorP=0;


for (int i= 0; i<5; i++){

printf("Ingrese un caracteres: \n");
scanf("%c", &caracter);
fflush(stdin);
if (caracter =='p'){
	contadorP++;
} // fin del if

} // fin de for

printf("Se ingresaron: %d 'p' minusculas ", contadorP);

return 0;

} // fin de la funcion
