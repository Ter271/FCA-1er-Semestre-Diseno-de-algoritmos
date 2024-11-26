/*
Nombre del programa: Selecci�n de comida r�pida
Descripci�n:  Programa que permite a un cliente seleccionar 4 paquetes de comida r�pida 
              de su elecci�n. El programa deber� de mostrar las opciones al usuario el cual podr� 
              seleccionar el que desee de dicho men�. 
              Se emplea la estructura Switch para realizarlo. 
Variables: pedido- elecci�n del usuario

Constantes: N/A

Fecha de creaci�n: 26/Noviembre/2024
Autor: Farf�n Brenda
*/

//Se agrega libreria
#include<stdio.h>
#include<locale.h>

int main()
{   //Declaracion de variables
	int pedido;
	
	//Se agregan car�cteres del espa�ol
	setlocale(LC_ALL,"spanish");
	
	//Bienvenida al usuario
    printf("�Bienvenido a Jalape�o's burguer!,\nA continuaci�n te mostraremos el men� y despu�s tomaremos tu orden");
    
    //Se muestra men� al usuario
	printf("\n\n------------------------\n");
	printf("MEN�\n");
    printf("Paquete 1 - Hamburguesa sencilla\nHamburguesa con carne, queso amarillo, lechuga, jitomate, jalape�os y cebolla.\nIncluye refresco mediano y papas a la francesa medianas\n\n");
    printf("Paquete 2 - Hamburguesa hawaiana\nHamburguesa con carne, jam�n, queso amarillo, pi�a, lechuga, jitomate, jalape�os y cebolla.\nIncluye refresco mediano y papas a la francesa medianas\n\n");
    printf("Paquete 3 - Hamburguesa de pollo\nHamburguesa con pollo empanizado, queso amarillo, lechuga, jitomate, jalape�os y cebolla.\nIncluye refresco mediano y papas a la francesa medianas\n\n");
    printf("Paquete 4 - Hamburguesa jalape�o's\nHamburguesa con doble carne, queso chihuahua, cebolla caramelizada, guacamole, lechuga, jitomate, jalape�os y cebolla.\nIncluye refresco mediano y papas a la francesa medianas");
	printf("\n------------------------\n");
	    
    //Se toma orden al usuario
    printf("\nBien, �qu� paquete deseas ordenar? ");
    scanf("%i",&pedido);
    
    //Estructura de selecci�n
    switch(pedido){
    	case 1: printf("Has escogido el paquete 1 - Hamburguesa sencilla.");break;
    	case 2: printf("Has escogido el paquete 2 - Hamburguesa hawaiana.");break;
    	case 3: printf("Has escogido el paquete 3 - Hamburguesa de pollo.");break;
    	case 4: printf("Has escogido el paquete 4 - Hamburguesa jalape�o's.");break;
    	default : printf("No has seleccionado un combo, vuelve a intentarlo. Selecciona el combo de tu agrado (1-4).");break;
    }
    
    //Despedida al usuario
    printf("\n�Que disfrutes tu comida!\n");
    
    return 0;

    }

