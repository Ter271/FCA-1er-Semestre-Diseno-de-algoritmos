/******************************************************************************
Nombre del programa: Sucesión numérica
Descripción: Programa que muestra a partir de un número ingresado por el 
usuario los números generados a partir del 1 hasta el valor ingresado en l
a sucesion 1- (1/(n+1)^2)
Variables: 
    i- Contador de ciclo for
	denominador- Denominador del resultado final
	numerador- Numerador del resultado final
	num- Resultado de: (numero ingresado por el usuario) + 1
	n_cuadrada- Resultado de num al cuadrado
	F- Formula de la sucesión
Constantes: 
    n- Numero ingresado por el usuario hasta el cual llegara la sucesión.
Fecha de creación:10/noviembre/2024
Autora: Farfán Brenda

*******************************************************************************/

#include<stdio.h>
#include <math.h>

int main()
{
	int i, denominador, numerador;
	float n, num, n_cuadrada, F;

	//Ingresar numero
	printf("¡Bienvenido!, este programa obtiene los resultados de la sucesion 1- (1/(n+1)^2).\n");
	printf("Ingrese el numero hasta el cual llegaran los resultados (debe ser entero):\n");
	scanf("%f",&n);
	//Estructura iterativa
	for (i=1; i<=n; i++){
		//Formula del denominador
		num= i+1;
		n_cuadrada=pow(num,2);
		//Formula en decimal
		F= 1-(1/n_cuadrada);
		//Escribir en formato de fraccion
		numerador = n_cuadrada-1;
		denominador = n_cuadrada;
		//Mostrar valores en pantalla
		printf("El resultado %i en decimal es %f, ",i, F);
		printf("en fraccion es %i/%i.\n", numerador, denominador );
	}
	return 0;
}
