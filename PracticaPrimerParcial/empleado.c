#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "empleado.h"
int menu()
{
    int opcion;

    system("cls");
    printf("  *** ABM Empleados ***\n\n");
    printf("1- Alta Empleado\n");
    printf("2- Baja Empleado\n");
    printf("3- Modificacion Empleado\n");
    printf("4- Ordenar Empleados\n");
    printf("5- Listar Empleados\n");
    printf("6- Listar Sectores con Empleados\n");
    printf("7- Cantidad de empleados por sector\n");
    printf("8- Alta menu\n");
    printf("9- modificacion menu\n");
    printf("10- Alta Almuerzos\n");
    printf("11- mostrar Almuerzos\n");
    printf("12- Salir\n\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}
void inicializarEmpleado(eEmpleado vec[], int tam)
{
    for(int i=0;i<tam;i++)
        {
            vec[i].isEmpty = 1;
        }
}
void mostrarEmpleado(eSector sectores[], int tam, eEmpleado vec){
    char descripcionSector[20];
    int consiguioNombre;
    consiguioNombre = obtenerSector(sectores, tam, vec.idSector, descripcionSector);
    printf("   %d       %s     %s    %.2d   %c     %d /%d /%d  %s\n\n", vec.legajo, vec.nombre, vec.apellido, vec.salario, vec.sexo, vec.fechaIngreso.dia, vec.fechaIngreso.mes, vec.fechaIngreso.anio, descripcionSector);
    if(!consiguioNombre)
        {
            printf(strcpy(descripcionSector, "sin definir"));
        }
}
void mostrarEmpleados(eEmpleado vec[], int tam, eSector sectores[], int tamSector){
    int contador = 0;
    printf(" Legajo   Nombre  Apellido  Sueldo        Sexo      Fecha de ingreso   Sector\n\n");
    for(int i=0; i < tam; i++){
            if(vec[i].isEmpty == 0){
                mostrarEmpleado(sectores, tamSector, vec[i]);
                contador++;
            }
    }
                if(contador == 0){
                printf("\nNo hay empleados que mostrar\n");
                }
}

int buscarLibre(eEmpleado vec[], int tam){

    int indice = -1;

     for(int i=0; i < tam; i++)
    {
        if(vec[i].isEmpty == 1){
            indice = i;
            break;
        }
    }
    return indice;
}
int buscarEmpleado(eEmpleado vec[], int tam, int legajo){

    int indice = -1;

     for(int i=0; i < tam; i++)
    {
        if(vec[i].isEmpty == 0 && vec[i].legajo == legajo){
            indice = i;
            break;
        }
    }

    return indice;
}


void altaEmpleado(eEmpleado vec[], int tam, eSector sectores[], int tamSector){
int contador;
int indice;
//int legajo;
//int esta;



indice = buscarLibre(vec, tam);
/*
if( indice == -1){

    printf("\nNo hay lugar en el sistema\n");
}
else{
     printf("Ingrese legajo: ");
     scanf("%d", &legajo);

     esta = buscarEmpleado(vec, tam, legajo);

     if( esta != -1){
        printf("Existe un empleado de legajo %d en el sistema\n", legajo);
        mostrarEmpleado(sectores, tamSector ,vec[esta]);
     }
     else{*/
        //vec[indice].legajo = legajo;
        contador=indice+1;
        vec[indice].legajo = contador;

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(vec[indice].nombre);

        printf("Ingrese su apellido: ");
        fflush(stdin);
        gets(vec[indice].apellido);

        printf("Ingrese su sexo: ");
        fflush(stdin);
        scanf("%c", &vec[indice].sexo );

        printf("Ingrese su sueldo: ");
        scanf("%d", &vec[indice].salario );

        printf("Ingrese el dia en el que ingreso: ");
        scanf("%d", &vec[indice].fechaIngreso.dia );

        printf("Ingrese el mes en el que ingreso: ");
        scanf("%d", &vec[indice].fechaIngreso.mes );

        printf("Ingrese el año en el que ingreso: ");
        scanf("%d", &vec[indice].fechaIngreso.anio );

        printf("--Ingrese el id de su sector:-- \n\n");
        printf("1- RRHH\n");
        printf("2- Ventas\n");
        printf("3- Logistica\n");
        printf("4- Computacion\n");
        printf("5- Comunicaciones\n");
        scanf("%d", &vec[indice].idSector);


        //printf("Ingrese sueldo: ");
        //scanf("%d", &vec[indice].idSector);

        vec[indice].isEmpty = 0;
        printf("Alta empleado exitosa!!!\n\n");

     }

//}

//}
void bajaEmpleado(eEmpleado vec[], int tam, eSector sectores[], int tamSector)
{
    int legajo;
    char confirma;
    printf("Ingrese el legajo del empleado al que se quiere dar de baja\n\n");
    scanf("%d", &legajo);
    for(int i=0; i<tam;i++)
        {
            if(vec[i].legajo == legajo)
                {
                    mostrarEmpleado(sectores, tamSector, vec[i]);
                    printf("Desea dar de baja a este usuario?? s/n \n");
                    fflush(stdin);
                    scanf("%c", &confirma);
                    if (tolower(confirma)=='s')
                        {
                            vec[i].isEmpty = 1;
                            printf("Se dio de baja satisfactoriamente\n\n");
                        }
                    /*switch(confirma)
                    {
                        case 's':
                        vec[i].isEmpty = 1;
                        break;
                        case 'n':
                        break;
                    }*/
                }else
                {
                    printf("No existe un empleado con ese legajo\n");
                }
                break;
        }
}


void ModificarEmpleado(eEmpleado vec[], int tam, eSector sectores[], int tamSector)
{
    int legajo;
    char confirma;
    printf("Ingrese el legajo del empleado al que se quiere modificar\n\n");
    scanf("%d", &legajo);
    for(int i=0; i<tam;i++)
        {
            if(vec[i].legajo == legajo)
                {
                    mostrarEmpleado(sectores, tamSector, vec[i]);
                    printf("Desea dar de baja a este usuario?? s/n \n");
                    fflush(stdin);
                    scanf("%c", &confirma);
                    if (tolower(confirma)=='s')
                        {
                            printf("Ingrese el nuevo nombre: ");
                            fflush(stdin);
                            gets(vec[i].nombre);

                            printf("Ingrese el nuevo apellido: ");
                            fflush(stdin);
                            gets(vec[i].apellido);

                            printf("Ingrese el nuevo sexo sexo: ");
                            fflush(stdin);
                            scanf("%c", &vec[i].sexo );

                            printf("Ingrese el nuevo sueldo: ");
                            scanf("%d", &vec[i].salario );

                            printf("Ingrese el nuevo dia en el que ingreso: ");
                            scanf("%d", &vec[i].fechaIngreso.dia );

                            printf("Ingrese el nuevo mes en el que ingreso: ");
                            scanf("%d", &vec[i].fechaIngreso.mes );

                            printf("Ingrese el nuevo año en el que ingreso: ");
                            scanf("%d", &vec[i].fechaIngreso.anio );
                            printf("--Ingrese el id de su sector:-- \n\n");
                                    printf("1- RRHH\n");
                                    printf("2- Ventas\n");
                                    printf("3- Logistica\n");
                                    printf("4- Computacion\n");
                                    printf("5- Comunicaciones\n");
                                    scanf("%d", &vec[i].idSector);

                            printf("Se modifico satisfactoriamente\n\n");
                        }
                }else
                {
                    printf("No existe un empleado con ese legajo\n");
                }
                break;
        }
}

int obtenerSector(eSector sectores[], int tam, int idSector, char desc[])
{

    int todoOk = 0;

    for(int i=0; i < tam; i++)
    {

        if(idSector == sectores[i].id)
        {

            strcpy(desc, sectores[i].descripcion);
            todoOk = 1;
            break;
        }
    }

    return todoOk;
}

void mostrarSectoresConEmpleados(eEmpleado empleados[], int tam, eSector sectores[], int tamSec)
{

    system("cls");
    for(int i=0; i < tamSec; i++)
    {
        printf("Sector: %s\n\n", sectores[i].descripcion);
        for(int j=0; j < tam; j++)
        {
            if( (empleados[j].idSector == sectores[i].id) && (empleados[j].isEmpty == 0))
            {
                mostrarEmpleado(sectores, tamSec, empleados[j]);
            }
        }

        printf("\n\n");
    }




}
void mostrarCantEmpleadosXSector(eEmpleado empleados[], int tam, eSector sectores[], int tamSec)
{

    int contador;
    system("cls");

    for(int i=0; i< tamSec; i++ )
    {
        contador = 0;
        printf("Sector: %s\n\n", sectores[i].descripcion);

        for(int j=0; j < tam; j++)
        {
            if(sectores[i].id == empleados[j].idSector && empleados[j].isEmpty == 0)
            {
                contador++;
            }
        }

        printf("Cantidad: %d\n\n", contador);
    }
}

void inicializarMenus(eMenu vec[], int tammenu)
{
 for(int i=0;i<tammenu;i++)
        {
            vec[i].isEmpty = 1;
        }
}

void mostrarMenu(eMenu vec[], int indice)
{
    printf("Codigo del menu     Descripcion del menu    Importe del menu\n\n");
    printf("%d                      %s                %f", vec[indice].codigoMenu, vec[indice].descripcion, vec[indice].importe);
}

int buscarLibreMenus(eMenu vec[], int tammenu)
    {
        int indice = -1;

         for(int i=0; i < tammenu; i++)
        {
            if(vec[i].isEmpty == 1){
                indice = i;
                break;
            }
        }
        return indice;
    }

    void altaMenu(eMenu vec[], int tammenu)
    {
        char auxiliar[51];
       int contador;
       int indice;

        indice = buscarLibreMenus(vec, tammenu);

        contador = indice + 1;
        vec[indice].codigoMenu = contador;
        printf("Ingrese descripcion del menu: ");
        fflush(stdin);
        gets(vec[indice].descripcion);
           while(strcmp(auxiliar, vec[indice].descripcion)<0)
            {
               printf("Ingrese descripcion del menu en 51 caracteres: ");
                fflush(stdin);
                gets(vec[indice].descripcion);
            }


        printf("Ingrese el importe del menu: ");
        scanf("%f", &vec[indice].importe );
        while(vec[indice].importe<=0)
            {
                printf("Ingrese el importe debe ser mayor a 0: ");
                scanf("%f", &vec[indice].importe );
            }

        vec[indice].isEmpty = 0;
        printf("Alta menu exitosa!!!\n\n");

     }

         void ModificarMenu(eMenu vec[], int tammenu)
        {
           int codigoMenu;
           char confirma;

            printf("Ingrese el legajo del empleado al que se quiere modificar\n\n");
            scanf("%d", &codigoMenu);
            for(int i=0; i<tammenu;i++)
            {
                if(vec[i].codigoMenu == codigoMenu)
                    {
                    mostrarMenu(vec,i);
                    printf("Desea modificar este menu?? s/n \n");
                    fflush(stdin);
                    scanf("%c", &confirma);
                    if (tolower(confirma)=='s')
                    {
                        printf("Ingrese una nueva descripcion del menu: ");
                        fflush(stdin);
                        gets(vec[i].descripcion);

                        printf("Ingrese el nuevo importe del menu: ");
                        scanf("%f", &vec[i].importe );

                        vec[i].isEmpty = 0;
                        printf("modificacion del menu exitosa!!!\n\n");

                    }
                    }

                    //contador = indice+1;
                    //vec[indice].codigoMenu = contador;
            }
         }

void obtenerMenu(eMenu vec[],int tammenu, int codigoMenu, char descripcionMenu[], int indice)
{
    //for(int i=0; i<tammenu; i++)
        //{
            if(vec[indice].codigoMenu==codigoMenu)
                {
                    strcpy(descripcionMenu,vec[indice].descripcion);

//                    break;
                }
        //}
}
void obtenerEmpleado(eEmpleado vec[],int tam, int legajo, char apellido[], int indice)
{
     //for(int i=0; i<tam; i++)
        //{
            if(vec[indice].legajo == legajo)
                {
                    strcpy(apellido,vec[indice].apellido);
                   // break;
                }
        //}
}






void inicializarAlmuerzo(eAlmuerzo almuerzo[],int tamAlmuerzo)
{
    for(int i=0;i<tamAlmuerzo;i++)
        {
            almuerzo[i].isEmpty = 1;
        }
}



int buscarLibreAlmuerzo(eAlmuerzo almuerzo[],int tamAlmuerzo)
{
     int indice = -1;

         for(int i=0; i < tamAlmuerzo; i++)
        {
            if(almuerzo[i].isEmpty == 1){
                indice = i;
                break;
            }
        }
        return indice;
}


void altaAlmuerzos(eAlmuerzo almuerzo[], int tamAlmuerzo)
{
     int contador;
       int indice;

        indice = buscarLibreAlmuerzo(almuerzo, tamAlmuerzo);

        contador = indice + 1;
        almuerzo[indice].codigoAlmuerzo = contador;

        printf("Ingrese indice del menu: ");
        fflush(stdin);
        scanf("%d", &almuerzo[indice].indiceMenu);

        printf("Ingrese el legajo del empleado: ");
        scanf("%d", &almuerzo[indice].legajoEmpleado );

        printf("Ingrese el dia del almuerzo: ");
        scanf("%d", &almuerzo[indice].fechaAlmuerzo.dia );

        printf("Ingrese el mes del almuerzo: ");
        scanf("%d", &almuerzo[indice].fechaAlmuerzo.mes );

        printf("Ingrese el año en del almuerzo: ");
        scanf("%d", &almuerzo[indice].fechaAlmuerzo.anio );

        almuerzo[indice].isEmpty = 0;
        printf("Alta menu exitosa!!!\n\n");
}



void mostrarAlmuerzo(eAlmuerzo almuerzo[],int tamAlmuerzo,eEmpleado vec[], int tam, eMenu menu[], int tammenu)
{
    char descripcionMenu[20];
    char apellido[20];
    for(int i=0; i<tamAlmuerzo; i++){
                if(almuerzo[i].isEmpty == 1)
        {
            break;
        }
    obtenerEmpleado(vec, tam, vec[i].legajo, apellido,i);
    obtenerMenu(menu, tammenu, menu[i].codigoMenu, descripcionMenu,i);
    printf("indice del almuerzo     menu pedido     apellido del empleado       fecha del almuerzo\n");
    printf("%d    %s    %s      %d      %d     %d\n", almuerzo[i].codigoAlmuerzo,   descripcionMenu,        apellido,   almuerzo[i].fechaAlmuerzo.dia, almuerzo[i].fechaAlmuerzo.mes,    almuerzo[i].fechaAlmuerzo.anio);
}
}
void init(eSector sectores[], int cant){
eSector sec[]={{1,"RRHH"},{2,"Ventas"},{3,"Logistica"},{4,"Computacion"},{5,"Comunicaciones"}};
    for(int i=0; i<cant; i++)
    {
        sectores[i].id  =   sec[i].id;
        strcpy(sectores[i].descripcion, sec[i].descripcion);
    }
}

