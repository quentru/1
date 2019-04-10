#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct datosPersonales
{
    char nombre[20];
    char apellido[20];
    char calle[20];
    int numero;
    float promedioEscolar;
};
int main()
{
    struct datosPersonales vecAgenda[3];
    int i;
    ///copiar cadena de texto en el campo de una estructura
    //strcpy(agenda.nombre,"Paula");
    //printf(agenda.nombre);
    for(i=0; i<3; i++){
    printf("Ingrese su nombre\n");
    gets(vecAgenda[i].nombre);
    printf("Ingrese su apellido\n");
    gets(vecAgenda[i].apellido);
    printf("Ingrese el nombre de su calle\n");
    gets(vecAgenda[i].calle);
    printf("Ingrese el numero de la calle\n");
    scanf("%d", &vecAgenda[i].numero);
    printf("Ingrese su promedio escolar\n");
    scanf("%f", &vecAgenda[i].promedioEscolar);
    fflush(stdin);
    }
    for(i=0; i<3; i++){
        printf("%s %s %s %d %f\n", vecAgenda[i].nombre, vecAgenda[i].apellido, vecAgenda[i].calle, vecAgenda[i].numero, vecAgenda[i].promedioEscolar);
    }
    return 0;
}
///pide todos los datos de cada campo una sola vez
   /*struct datosPersonales agenda[3];
/*printf("Ingrese su nombre\n");
    gets(agenda.nombre);
    fflush(stdin);
    printf("Ingrese su apellido\n");
    gets(agenda.apellido);
    fflush(stdin);
    printf("Ingrese el nombre de su calle\n");
    gets(agenda.calle);
    fflush(stdin);
    printf("Ingrese el numero de la calle\n");
    scanf("%d", &agenda.numero);
    printf("Ingrese su promedio escolar\n");
    scanf("%f", &agenda.promedioEscolar);*/
    ///Utilizacion de vectores y estructuras para ingresar y mostrar mas de una vez todos los datos de una estructura
    /*struct datosPersonales vecAgenda[3];
    int i;
    for(i=0; i<3; i++){
    printf("Ingrese su nombre\n");
    gets(vecAgenda[i].nombre);
    printf("Ingrese su apellido\n");
    gets(vecAgenda[i].apellido);
    printf("Ingrese el nombre de su calle\n");
    gets(vecAgenda[i].calle);
    printf("Ingrese el numero de la calle\n");
    scanf("%d", &vecAgenda[i].numero);
    printf("Ingrese su promedio escolar\n");
    scanf("%f", &vecAgenda[i].promedioEscolar);
    fflush(stdin);
    }
    for(i=0; i<3; i++){
        printf("%s %s %s %d %f\n", vecAgenda[i].nombre, vecAgenda[i].apellido, vecAgenda[i].calle, vecAgenda[i].numero, vecAgenda[i].promedioEscolar);
    }*/
