
/* ejercicio 2.1
Ingresar 10 números enteros,
distintos de cero. Mostrar:

A) Cantidad de pares e impares.

B) El menor número ingresado.

C) De los pares el mayor número ingresado.

D) Suma de los positivos.

E) Producto de los negativos.

 */

#include <stdio.h>

int main() {
	setbuf(stdout, NULL);
	int numero;
	int menorNumero;
	int mayorNumeroPar;
	int contadorPares = 0;
	int contadorImpares = 0;
	int acumuladorPositivos = 0;
	int acumuladorNegativos = 0;
	int i;
	int flag = 1;

	for (i = 0; i < 10; i++){
		do {
			printf("Ingrese un numero: (enteros) %d\n",i+1);
			fflush(stdin);
			scanf("%d", &numero);
		} while (numero == 0);

		if (numero % 2 == 0) {
			contadorPares++;
		} else {
			contadorImpares++;
		}
		if (flag == 0 || numero < menorNumero) {
			menorNumero = numero;
		}
		if (flag == 0 || (numero > mayorNumeroPar && numero % 2 == 0)) {
			mayorNumeroPar = numero;
		}
		if (numero > 0) {
			acumuladorPositivos += numero;
		} else {
			acumuladorNegativos += numero;
		}
	}

	printf("Cantidad de pares: %d\n", contadorPares);
	printf("Cantidad de impares: %d\n", contadorImpares);
	printf("Menor Numero Ingresado: %d\n", menorNumero);
	printf("La suma de los positivos es: %d\n", acumuladorPositivos);
	printf("El producto de los negativos: %d", acumuladorNegativos);

	return 0;
}// fin.
























