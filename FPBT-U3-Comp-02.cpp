/*
Nombre del programa: Volumen de cilindro
Descripción: A partir del radio y altura, se calcula el volumen de un cilindro
Variables: h -Altura del cilindro, r -Radio del cilindro, 
           r_cuadrada - Radio elevado al cuadrado, V -Volumen de cilindro
Constantes: pi -Numero pi
Fecha de creación: 28/Septiembre/2024
Autor: Farfán Brenda
*/

/*Se agregan librerias */
#include <stdio.h>
#include <math.h>

int main()
{
    float h, r, V=0, pi=3.1416; //Se definen variables y constantes
    
    /*Instrucciones al usuario */
    printf("¡Bievenido a la calculadora para volumen de un cilindro!\nA continuacion, ingrese los datos solicitados:");
	printf("\nIngrese el valor del radio de la base del cilindro en centimetros (r): ");
    scanf("%f",&r);
    float r_cuadrada=pow(r,2); //Calculo del radio al cuadrado con funcion pow(base,exponente) y se define r_cuadrada
	printf("\nIngrese el valor de la altura en centimetros (h): ");
    scanf("%f",&h);
    V=pi*r_cuadrada*h; //Calculo del volumen
    printf("\nEl volumen del cilindro es: %f cm",V);

    return 0;
}
