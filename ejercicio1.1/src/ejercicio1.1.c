
//bibliotecas.
#include <stdio.h>
#include <stdlib.h>

// prototipo, firma de la funcion.
int sumarEnteros(int numeroUno, int numeroDos);
// int main funcion principal.
//nombre parametros y debolucion.

int main(void) {
	setbuf(stdout, NULL);

	//variables.
	int numeroUno;
	int numeroDos;
	int suma;

	//pedir un numro por consola por scanf.
	printf("Dato numeroUno: ");
	scanf("%d", &numeroUno); // "%d" de digito.
	printf("Dato numeroDos: ");
	scanf("%d", &numeroDos);
	fflush(stdin);

	suma = sumarEnteros(numeroUno, numeroDos);// invoco la funcion sumaEnteros

	printf(" La suma es: %d ", suma);

	return 0;
}

// defino una funcion , le doy los parametros

// ingreso el tipo de dato de retorno. int
// nombre de la funcion. sumarEnteros
//  parametros datos de entra de la funcion las variables.
// indicar el tipo de dato de las variables.


int sumarEnteros(int datoUno, int datoDos)// prototimo,tipo de dato que de vuelve, el nombre, y el tipo de dato que recibe de parametro
{
	int respuesta; //declaro la variable local.

	 respuesta = datoUno + datoDos; //  hago la suma

	return respuesta; // retorno el valor.
}

