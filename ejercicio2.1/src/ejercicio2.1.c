/*
 Ejercicio 2-1: Ingresar 5 números enteros calcular y
 mostrar el promedio de los números.
 Probar la aplicación con distintos valores.

 Ejemplo 1:  3 - 5 - 7 - 9 - 1

 Ejemplo 2:  2 - 1 - 8 - 1 - 2
 */


 #include <stdio.h>
 #include <stdlib.h>
 // int main funcion principal.
 //nombre parametros y debolucion.
 int main(void) { //  tipo de retorno, fincion, parametro funcion.

 //declaro variables de tipo entero
 int numeroIngresado;
 int acumulador = 0;
 int contador = 0;
 float promedio;

 // EMPIEZO LA LOGICA.
 for (int i = 0; i < 5; i++) {
 printf("ingrese un numero: ");
 scanf("%d", &numeroIngresado);
 acumulador += numeroIngresado;
 contador++;
 }
 // CALCULO EL PROMEDIO.
 promedio = (float)acumulador / contador;

 printf("El promedio es: %.2f", promedio);

 return 0;
 } // fin.


/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numeroIngresado;
	int acumulador =0;
	int contador =0;

	for (int i = 0; i < 2; i++) {
			printf("ingrese un numero: ");

			do{
			scanf("%d", &numeroIngresado);
			} while(numeroIngresado==0);

			acumulador += numeroIngresado;
			contador++;
		}
	return EXIT_SUCCESS;
}
*/













