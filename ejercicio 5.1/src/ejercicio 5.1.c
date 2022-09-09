/*
 ============================================================================

Pedir el ingreso de 5 números. Mostrarlos y
calcular la sumatoria de los mismos.

 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#define cantidad 5

int main(void) {
	setbuf(stdout, NULL);

	int arraysNumero[cantidad];
	int i;
	int acumulador =0;


	for (i=0;i<cantidad;i++){
	printf("Ingrese un numero");
	scanf("%d",&arraysNumero[i]);
	}


	if ( arraysNumero != NULL && cantidad >0){
	for (i=0;i<cantidad;i++){
		printf("\n\n la posicion es %d y el numeros es: %d",i ,arraysNumero[i]);
		}
	}// fin del if.


	for (i=0;i<cantidad;i++){
			acumulador += arraysNumero[i];
		}
 printf ("\n\n La suma de los numeros es: %d", acumulador);

	return 0;
}
