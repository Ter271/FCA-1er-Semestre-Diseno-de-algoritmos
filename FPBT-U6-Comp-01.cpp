/*
Nombre del programa: Selección de comida rápida
Descripción:  Programa que permite a un cliente seleccionar 4 paquetes de comida rápida 
              de su elección. El programa deberá de mostrar las opciones al usuario el cual podrá 
              seleccionar el que desee de dicho menú. 
              Se emplea la estructura Switch para realizarlo. 
Variables: pedido- elección del usuario

Constantes: N/A

Fecha de creación: 26/Noviembre/2024
Autor: Farfán Brenda
*/

//Se agrega libreria
#include<stdio.h>
#include<locale.h>

int main()
{   //Declaracion de variables
	int pedido;
	
	//Se agregan carácteres del español
	setlocale(LC_ALL,"spanish");
	
	//Bienvenida al usuario
    printf("¡Bienvenido a Jalapeño's burguer!,\nA continuación te mostraremos el menú y después tomaremos tu orden");
    
    //Se muestra menú al usuario
	printf("\n\n------------------------\n");
	printf("MENÚ\n");
    printf("Paquete 1 - Hamburguesa sencilla\nHamburguesa con carne, queso amarillo, lechuga, jitomate, jalapeños y cebolla.\nIncluye refresco mediano y papas a la francesa medianas\n\n");
    printf("Paquete 2 - Hamburguesa hawaiana\nHamburguesa con carne, jamón, queso amarillo, piña, lechuga, jitomate, jalapeños y cebolla.\nIncluye refresco mediano y papas a la francesa medianas\n\n");
    printf("Paquete 3 - Hamburguesa de pollo\nHamburguesa con pollo empanizado, queso amarillo, lechuga, jitomate, jalapeños y cebolla.\nIncluye refresco mediano y papas a la francesa medianas\n\n");
    printf("Paquete 4 - Hamburguesa jalapeño's\nHamburguesa con doble carne, queso chihuahua, cebolla caramelizada, guacamole, lechuga, jitomate, jalapeños y cebolla.\nIncluye refresco mediano y papas a la francesa medianas");
	printf("\n------------------------\n");
	    
    //Se toma orden al usuario
    printf("\nBien, ¿qué paquete deseas ordenar? ");
    scanf("%i",&pedido);
    
    //Estructura de selección
    switch(pedido){
    	case 1: printf("Has escogido el paquete 1 - Hamburguesa sencilla.");break;
    	case 2: printf("Has escogido el paquete 2 - Hamburguesa hawaiana.");break;
    	case 3: printf("Has escogido el paquete 3 - Hamburguesa de pollo.");break;
    	case 4: printf("Has escogido el paquete 4 - Hamburguesa jalapeño's.");break;
    	default : printf("No has seleccionado un combo, vuelve a intentarlo. Selecciona el combo de tu agrado (1-4).");break;
    }
    
    //Despedida al usuario
    printf("\n¡Que disfrutes tu comida!\n");
    
    return 0;

    }

