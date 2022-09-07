/*
 ============================================================================
 Name        : ejercicioDos.c
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

	//variables.
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int resultado;

    //pedir un numro por consola por scanf.
    scanf("%d", &numeroUno); // "%d" de digito.
    scanf("%d", &numeroDos);
    scanf("%d", &numeroTres);

    if(numeroUno > numeroDos && numeroUno > numeroTres){
        resultado = numeroUno;
    }else if(numeroDos > numeroTres){
        resultado = numeroDos;
    }else{
        resultado = numeroTres;
    }

    printf("El Numero mayor es: %d ", resultado);

    return 0;
}
