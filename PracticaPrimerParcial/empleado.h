#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

typedef struct
{
    int id;
    char descripcion[100];
}eSector;

typedef struct
{
    int codigoMenu;
    char descripcion[100];
    float importe;
    int isEmpty;
}eMenu;



typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;


typedef struct
{
    int codigoAlmuerzo;
    int indiceMenu;
    int legajoEmpleado;
    int isEmpty;
    eFecha fechaAlmuerzo;
}eAlmuerzo;


typedef struct
{
    int legajo;
    char nombre[20];
    char apellido[20];
    char sexo;
    int salario;
    int idSector;
    int isEmpty;
    eFecha fechaIngreso;

}eEmpleado;

int menu();
void init(eSector sectores[], int cant);//prototipo
void inicializarEmpleado(eEmpleado vec[], int tam);
void mostrarEmpleado(eSector sectores[], int tam, eEmpleado vec);
void mostrarEmpleados(eEmpleado vec[], int tam, eSector sectores[], int tamSector);
int buscarLibre(eEmpleado vec[], int tam);
int buscarEmpleado(eEmpleado vec[], int tam, int legajo);
void altaEmpleado(eEmpleado vec[], int tam, eSector sectores[], int tamSector);
void bajaEmpleado(eEmpleado vec[], int tam, eSector sectores[], int tamSector);
void ModificarEmpleado(eEmpleado vec[], int tam, eSector sectores[], int tamSector);
int obtenerSector(eSector sectores[], int tam, int idSector, char desc[]);
void mostrarSectoresConEmpleados(eEmpleado empleados[], int tam, eSector sectores[], int tamSec);
void mostrarCantEmpleadosXSector(eEmpleado empleados[], int tam, eSector sectores[], int tamSec);
void inicializarMenus(eMenu vec[], int tammenu);
void mostrarMenu(eMenu vec[], int indice);
int buscarLibreMenus(eMenu vec[], int tammenu);
void altaMenu(eMenu vec[], int tammenu);
void ModificarMenu(eMenu vec[], int tammenu);
void obtenerMenu(eMenu vec[],int tammenu, int codigoMenu, char descripcionMenu[],int indice);
void obtenerEmpleado(eEmpleado vec[],int tam, int legajo, char apellido[], int indice);
void altaAlmuerzos(eAlmuerzo almuerzo[], int tamAlmuerzo);
int buscarLibreAlmuerzo(eAlmuerzo almuerzo[],int tamAlmuerzo);
void inicializarAlmuerzo(eAlmuerzo almuerzo[],int tamAlmuerzo);
void mostrarAlmuerzo(eAlmuerzo almuerzo[],int tamAlmuerzo,eEmpleado vec[], int tam,eMenu menu[], int tammenu);
