/*
 ============================================================================
 Se ingresan 10 numero y 10 letras
 se necesita saber:
 A) promedio de numeros.
 B) Cantidad de vocales.(cuantas a, cuantas e....)
 C) de a letra " a " el valor mas grande
 D) el factor de todos los numeros ingresados

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define L 5 // const.
int main() {

	int numero;
	char letra;

	int acumuladorNum = 0;
	//int contador = 0;
	float promedio;
	int contadorA = 0;
	int contadorE = 0;
	int contadorI = 0;
	int contadorO = 0;
	int contadorU = 0;
	int maxNumero = 0;
	int maxLetraA = 0;
	int multi = 1;

	for (int i = 0; i < L; i++) {

		printf("ingrese un numero");
		fflush(stdin); //limpia memoria buffer.
		scanf("%d", &numero);

		printf("ingrese una letra");
		fflush(stdin); //limpia memoria buffer.
		scanf("%c", &letra);

	switch (letra) {
		case 'a':
		contadorA++;

		if (numero > maxNumero || maxLetraA == 0) {
			maxNumero = numero;
			maxLetraA = 1;
		}
	break;
		case 'e':
		contadorE++;
	break;
		case 'i':
		contadorI++;
	break;
		case 'o':
		contadorO++;
	break;
		case 'u':
		contadorU++;
	break;
		}
		acumuladorNum += numero;
		multi *= numero;
	}
	promedio = (float) acumuladorNum / L;
	printf("El promedio es: %f\n", promedio);
	printf("Se ingresaron: %d letras a\n", contadorA);
	printf("Se ingresaron: %d letras e\n", contadorE);
	printf("Se ingresaron: %d letras i\n", contadorI);
	printf("Se ingresaron: %d letras o\n", contadorO);
	printf("Se ingresaron: %d letras u\n", contadorU);

	if (contadorA > 0) {
		printf("El maximo es: %d\n", maxNumero);
	} else {
		printf("No se ingresaron letras a para calcular el maximo");
	}
	printf("\nEl factor es: %d", multi);

	return 0;
}
