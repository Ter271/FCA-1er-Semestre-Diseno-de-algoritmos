/*
Nombre del programa: Ordenamiento descendente
Descripci�n:  El programa solicita al usuario 3 n�meros, los cuales deber�n ser mayores
              de 3 y menores de 15. El programa regresa los n�meros ordenados de mayor 
			  a menor e  indica un error si el usuario ingresa n�meros fuera de los par�metros 
              establecidos. 
Variables: i- contador para imprimir y ordenar arreglo
           j- contador para ordenar arreglo
		   index- posicion del arreglo
		   arreglo[n] - Arreglo de los n�meros ingresados por el usuario

Constantes: n- tama�o del arreglo

Fecha de creaci�n: 25/Noviembre/2024
Autor: Farf�n Brenda
*/

//Se agrega libreria
#include<stdio.h>
#include<locale.h>

int main()
{   //Declaracion de variables
	int i, j, index, n=3;
	float arreglo[n];
	
	//Se agregan car�cteres del espa�ol
	setlocale(LC_ALL,"spanish");
	
    //Bienvenida al usuario e instrucciones
    printf("�Bienvenido!, ingresa tres n�meros para ordenarlos en orden descendente.\n");
    printf("RECUERDA: Deben ser mayores a 3 y menores a 15.\n\n");
    
	//Lectura de numeros con restricciones (mayores a 3 y menores a 15)
	do{
		printf("Ingresa el primer n�mero:");
		scanf("%f",&arreglo[0]);
	}while(arreglo[0]<3 || arreglo[0]>15);
	
	printf("\n");

	do{    
    printf("Ingresa el segundo n�mero:");
    scanf("%f",&arreglo[1]);
	}while(arreglo[1]<3 || arreglo[1]>15);
	
	printf("\n");
    
	do{   
    printf("Ingresa el tercer n�mero:");
    scanf("%f",&arreglo[2]);
	}while(arreglo[2]<3 || arreglo[2]>15);

    //Imprimir arreglo en desorden
    printf("\nN�meros en desorden: ");
	for (i=0; i<3; i++){
    	printf("%.2f ",arreglo[i] );
    }
    printf("\n");
    
    //Ordenamiento de arreglo
    for(i=1; i<n; i++){
	index = arreglo[i];
    j= i-1;
    while(j>=0 && arreglo[j]>index){
    	arreglo[j+1]=arreglo[j];
    	j--;
    }
    arreglo[j+1]=index;
    }
    
    
    //Imprimir arreglo en orden descendente
    printf("N�meros en orden   : ");

    for (i=n-1; i>=0; i--){
    	printf("%.2f ",arreglo[i] );
    }

    printf("\n");
    return 0;

    }


	

