#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "input.h"

void getInt(int numero)
{
    while(numero<0||numero>65535)
        {
            printf("El numero debe ser mayor a 0 y menor a 65535");
        }
}
void getFloat(float numero)
{
    while(numero<0||numero>65535)
        {
            printf("El numero debe ser mayor a 0 y menor a 65535");
        }
}
void getChar(char caracter)
{
    tolower(caracter);
}
void getString(char mensaje[])
{
    char auxiliar[100];
    while(strcmp(mensaje, auxiliar)>0)
        {
            printf("la cadena ingresada es demasiado larga, pruebe dentro del rango de 100 caracteres");
        }
}
