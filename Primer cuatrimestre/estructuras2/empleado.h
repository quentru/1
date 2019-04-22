#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

typedef struct
{
    int dia, mes, anio;
} eFecha;

typedef struct
{

    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    int ocupado;
    int idSector;
    eFecha fechaNac;
} eEmpleado;

typedef struct
{
    int id;
    char descripcion [20];
}eSector;


int menu();
void inicializarEmpleados(eEmpleado vec[], int tam);
void mostrarEmpleado(eSector sectores, int tam, eEmpleado emp);
void mostrarEmpleados(eSector sectores, eEmpleado vec[], int tam);
int buscarLibre(eEmpleado vec[], int tam);
int buscarEmpleado(eEmpleado vec[], int tam, int legajo);
void altaEmpleado(eEmpleado vec[], int tam);
void obtenerSector(eSector sectores[], int tam, int idSector, char desc[]);

