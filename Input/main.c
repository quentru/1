#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inc/input.h"


int main()
{
    char email[52];
    int anio;
    int mes;
    int dia;
    char numero, caracter;
    char genero;
    int edad;
    float precio;
    char continuar;
    char nombre[50];
    int r; // Respuesta


   // EJEMPLO DE USO DE getInt
   /*r = isChar(&caracter,"Ingresa un caracte", "Eso no es un caracter papa");
        if(r == 0)
        printf("\n CARACTER: %c\n",caracter);*/


        getEmail(&email,  "Ingrese su Email",  "Error al validar compruebe el largo del Email", 0, 51 );

   printf("la edad es: %d\n", edad);
    r = getInt(&edad,"¿Cual es tu edad?","Rango valido [0 - 100]",1,100);
    if(r == 0){
        printf("la edad es: %d\n", edad);
    }

    // EJEMPLO DE USO DE getFloat
    r = getFloat(&precio,"¿Cual es el precio?","Rango valido [0 - 10000]",1,10000);
    if(r == 0)
        printf("\nEl precio es: %0.2f\n",precio);


    // EJEMPLO DE USO DE getChar
    r = getChar(&continuar,"Ingrese Opcion [A][B][C]","Solo [A][B][C]",'a','c');
    if(r == 0)
        printf("\nContinuar: %c\n",continuar);


    // EJEMPLO DE USO DE getString
    r = getString(&nombre,"Nombre: ","El largo debe ser entre 2 y 50", 2, 50);
    if(r == 0)
        printf("\nNombre: %s\n",nombre);


    r = getGenre(&genero , "Ingrese su sexo: ", "Su sexo debe ingresarse con los caracters m o f", 'm', 'f');
    if(r == 0)
        printf("\n genero: %c\n",genero);

        r = getDate(&anio,  &mes, &dia, "ingreso", 1930, 2019);
        if(r == 0)
        printf("\n genero: %d %d %d\n",anio,mes,dia);

    return 0;
}
