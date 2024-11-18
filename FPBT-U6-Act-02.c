/*
Nombre del programa: Signos zodiacales
Descripción: A partir de la fecha de nacimiento, el usuario obtiene su signo zodiacal.
Variables: dia_nac -Día de nacimiento del usuario.
           mes_nac -Mes de nacimiento del usuario.
Constantes: aries1 -Inicio de la fecha de aries.
			aries2 -Fin de la fecha de aries.
            tauro1 -Inicio de la fecha de tauro.
			tauro2 -Fin de la fecha de tauro.			
			geminis1 -Inicio de la fecha de géminis.
			geminis2 -Fin de la fecha de géminis.
            cancer1 -Inicio de la fecha de cáncer.
			cancer2 -Fin de la fecha de cáncer.
			leo1 -Inicio de la fecha de leo.
			leo2 -Fin de la fecha de leo.
            virgo1 -Inicio de la fecha de virgo.
			virgo2 -Fin de la fecha de virgo.			
			libra1 -Inicio de la fecha de libra.
			libra2 -Fin de la fecha de libra.
            escorpio1 -Inicio de la fecha de escorpio.
			escorpio2 -Fin de la fecha de escorpio.
			sagitario1 -Inicio de la fecha de sagitario.
			sagitario2 -Fin de la fecha de sagitario.
            capriocornio1 -Inicio de la fecha de capriocornio.
			capriocornio2 -Fin de la fecha de capriocornio.	
			acuario1 -Inicio de la fecha de acuario.
			acuario2 -Fin de la fecha de acuario.
            picis1 -Inicio de la fecha de picis.
			picis2 -Fin de la fecha de picis.						
					
Fecha de creación: 17/Noviembre/2024
Autor: Farfán Brenda
*/

//Se agrega libreria
#include<stdio.h>
#include<locale.h>

int main()
{   //Declaracion de variables
	int dia_nac;
	int mes_nac;
	
	//
	setlocale(LC_ALL,"spanish");
	
	//Bienvenida al usuario
    printf("¡Descubre tu signo zodiacal!, solo ingresa tu fecha de nacimiento.\n\n");
    
    //Bucle de condiciones de mes y dias aceptables para la entrada de datos    
    while(dia_nac< 1 || dia_nac> 31)
    {
    	printf("Ingresa tu día de nacimiento (en formato dd):");
    	scanf("%d",&dia_nac);
    }
	printf("\n");
    while(mes_nac< 1 || mes_nac> 12)
    {
    	printf("Ingresa tu mes de nacimiento (en formato mm): ");
    	scanf("%d",&mes_nac);
	}
   
	   
    //Declaracion de condiciones de signos zodiacales
    int aries1 = (mes_nac== 3 && dia_nac>= 21);
	int aries2 = (mes_nac== 4 && dia_nac<= 19);
	
	int tauro1 = (mes_nac== 4 && dia_nac>= 20);	
	int tauro2 = (mes_nac== 5 && dia_nac<= 20);
	
	int geminis1 = (mes_nac== 5 && dia_nac>= 21);	
	int geminis2 = (mes_nac== 6 && dia_nac<= 20);

    int cancer1 = (mes_nac== 6 && dia_nac>= 21);
	int cancer2 = (mes_nac== 7 && dia_nac<= 22);
	
	int leo1 = (mes_nac== 7 && dia_nac>= 23);	
	int leo2 = (mes_nac== 8 && dia_nac<= 22);
	
	int virgo1 = (mes_nac== 8 && dia_nac>= 23);	
	int virgo2 = (mes_nac== 9 && dia_nac<= 22);	

    int libra1 = (mes_nac== 9 && dia_nac>= 23);
	int libra2 = (mes_nac== 10 && dia_nac<= 22);
	
	int escorpio1 = (mes_nac== 10 && dia_nac>= 23);	
	int escorpio2 = (mes_nac== 11 && dia_nac<= 21);
	
	int sagitario1 = (mes_nac== 11 && dia_nac>= 22);	
	int sagitario2 = (mes_nac== 12 && dia_nac<= 21);

    int capricornio1 = (mes_nac== 12 && dia_nac>= 22);
	int capricornio2 = (mes_nac== 1 && dia_nac<= 19);
	
	int acuario1 = (mes_nac== 1 && dia_nac>= 20);	
	int acuario2 = (mes_nac== 2 && dia_nac<= 18);
	
	int picis1 = (mes_nac== 2 && dia_nac>= 19);	
	int picis2 = (mes_nac== 3 && dia_nac<= 20);	
	
	//Imprimir resultado final
	if (aries1 || aries2 )
		printf("\nEres aries");
	else if ( tauro1 || tauro2 )
	    printf("\nEres tauro");
	else if ( geminis1 || geminis2 )
	    printf("\nEres géminis");
	else if ( cancer1 || cancer2 )
	    printf("\nEres cáncer");
	else if ( leo1 || leo2 )
	    printf("\nEres leo");	 
	else if ( virgo1 || virgo2 )
	    printf("\nEres virgo");
	else if ( libra1 || libra2 )
	    printf("\nEres libra");
	else if ( escorpio1 || escorpio2 )
	    printf("\nEres escorpio");
	else if ( sagitario1 || sagitario2 )
	    printf("\nEres sagitario");	
	else if ( capricornio1 || capricornio2 )
	    printf("\nEres capricornio");
	else if ( acuario1 || acuario2 )
	    printf("\nEres acuario");	
	else
	    printf("\nEres picis");	
				   
    return 0;
}
