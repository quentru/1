#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //si defino la cadena con 50 elementos
    //podre ingresar 49 caracteres por que el ultimo caracter
    //se encargara de cerrar la cadena y por lo tanto bloqueara un espacio.
    //strcmp(CAD1, CAD)://Comparador de cadenas String.
    //STRCMP es sensible a mayusculas y minusculas y la comparacion de cadenas string
    //se basa en la comparacion de cada uno de los caractreres evaluando su valor en el codigo ascii.
    //si las dos cadenas son Iguales el valor resultante es 0.
    //si la primera cadena es mas grande devolvera un valor mayor a 0 y si es menor un valor menor a 0.
    //strcpy para copiar cadena por que no se pueden igualar dos cadenas por que el tipo string no existe como tipo
    //nativo de datos en el lenguage C. strcpy(cad1,cad2);
    char cadena[50];
    int cantidad;
    fflush(stdin);
    //scanf("%s", cadena)
    //gets(cadena);//No se usa
    fgets(cadena,sizeof(cadena)-2, stdin);
    //strlen obtiene la cantidad de caracteres que tiene cada cadena.
    //sizeof obtiene la cantidad de bytes que tiene una cadena.
    cantidad = strlen(cadena);
    cadena[cantidad-1]='\0';
    printf("%s", cadena);
    return 0;
}
