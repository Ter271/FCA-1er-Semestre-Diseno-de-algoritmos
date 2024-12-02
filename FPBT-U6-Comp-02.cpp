/*
Nombre del programa: Suma de numeros pares e impares
Descripción:  Programa que suma los primeros “n” números pares indicados por el usuario. El programa 
              permite al usuario ingresar un número “n” entero positivo, a partir de dicho número 
			  el programa deberá de ir mostrando la suma de los primeros números impares acorde 
			  a dicha cifra. 
Variables: i- Contador de bucle
           n- Número ingresado por usuario
		   Suma- Suma de numeros par/impar
		   Cont_imp- Contador de numeros par/impar localizador

Constantes: N/A

Fecha de creación: 01/Diciembre/2024
Autor: Farfán Brenda
*/

//Se agrega libreria
#include<stdio.h>
#include<locale.h>

int main()
{   //Declaracion de variables
	int par_imp, i, n, Suma=0, Cont_imp=0;
    
	//Se agregan carácteres del español
	setlocale(LC_ALL,"spanish");
	
	//Bienvenida al usuario
    printf("¡Bienvenido!,\nPresiona:\n(1) Si quieres obtener la suma de numeros impares.\n(2) Si quieres obtener la suma de numeros pares.\n\n");
    scanf("%i",&par_imp);
    
    if (par_imp == 1){
    	printf("Ingresa la cantidad hasta la cual se calculará la suma de los números impares: "); 
		scanf("%i",&n);
    	for(i=0;Cont_imp<n;i++){
    		if (i%2 == 1){
    			Cont_imp= Cont_imp +1;
    			Suma= Suma +i;
    			printf("Para n = %i (%i), Suma= %i\n",Cont_imp,i, Suma);
    		}
    	}
    }
    else {
    	printf("Ingresa la cantidad hasta la cual se calculará la suma de los números impares: "); 
		scanf("%i",&n);
    	for(i=1;Cont_imp<n;i++){
    		if (i%2 == 0){
    			Cont_imp= Cont_imp +1;
    			Suma= Suma +i;
    			printf("Para n = %i (%i), Suma= %i\n",Cont_imp, i, Suma);
    		}
    	}
    }
    return 0;

    }

