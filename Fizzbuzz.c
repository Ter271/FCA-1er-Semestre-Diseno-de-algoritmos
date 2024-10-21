/******************************************************************************
Nombre del programa: FizzBuzz
Descripción: Programa que muestra del 1 a 100, sustituyendo lo siguiente:
  - Múltiplos de 3 por la palabra "fizz".
  - Múltiplos de 5 por la palabra "buzz".
  - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
Variables: 
    i - Contador de ciclo for
	multiplo3 - Residuo de la division con 3 como divisor
    multiplo5 - Residuo de la division con 5 como divisor
Constantes: N/A
Fecha de creación:11/octubre/2024
Autora: Farfán Brenda

*******************************************************************************/

#include <stdio.h>

int main()
{
	int i;
	float multiplo3, multiplo5;
	for (i=1; i<=100;i++)
	{
	multiplo3=i%3;
	multiplo5=i%5;
	if (multiplo3== 0 && multiplo5 == 0){
		printf("fizzbuzz\n");
		}
	else if(multiplo3== 0){
		printf("fizz\n");
		}
	else if(multiplo5== 0)
		{printf("buzz\n");
		}
	else
		printf("%i\n",i);
	}	
    return 0;
}

