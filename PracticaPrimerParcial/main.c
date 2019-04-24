#include <stdio.h>
#include <stdlib.h>
#define TAM 5

typedef struct
{
    int id;
    char descripcion[20];
}eSector;

//void init(eSector sectores[], int cantidad);//prototipo

typedef struct
{
    int codigoMenu;
    char descripcion[20];
    float importe;
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
    eFecha fechaAlmuerzo;
}eAlmuerzo;


typedef struct
{
    int leagajo;
    char nombre[20];
    char apellido[20];
    char sexo;
    int salario;
    int idSector;
    int isEmpty;
    eFecha fechaIngreso;

}eEmpleado;

int menu();
void inicializarEmpleado(eEmpleado emp[], int tam);
int main()
{
    int confirma;
    int seguir = 's';
    //int cantidad;
    eSector sectores[]={{1, "RRHH"},{ 2, "Sistemas"},{3, "Ventas"},{4,"Logistica"}};
    eMenu menus[]={{1, "Sopa", 30},{ 2, "Fideos", 50},{3, "Pan con manteca", 10},{4,"ensalada", 50},{5,"paty", 60},{6,"albondigas", 100},{7,"sanguche",10},{8,"guiso", 5},{9,"asado", 500},{10,"pescado", 50}};
    //void init(sectores, cantidad);
    do
    {
        switch(menu())
        {

        case 1:
            printf("\nAlta empleado\n\n");
            //altaEmpleado(lista, TAM, sectores, TAMSEC);
            system("pause");
            break;

        case 2:
            printf("\nBaja empleado\n\n");
            system("pause");
            break;

        case 3:
            printf("\nModificacion empleado\n\n");
            system("pause");
            break;

        case 4:
            printf("\nOrdenar empleados\n\n");
            system("pause");
            break;

        case 5:
            printf("\nListar empleados\n\n");
            //mostrarEmpleados(lista, TAM, sectores, TAMSEC);
            system("pause");
            break;

        case 6:
            printf("\nListar empleados\n\n");
            //mostrarSectoresConEmpleados(lista, TAM, sectores, TAMSEC);
            system("pause");
            break;
         case 7:
            printf("\nListar empleados\n\n");
            //mostrarCantEmpleadosXSector(lista, TAM, sectores, TAMSEC);
            system("pause");
            break;

        case 8:
            printf("\nConfirma salida s/n?: ");
            fflush(stdin);
            confirma = getche();

            if( tolower(confirma) == 's')
            {
                seguir = 'n';
            }
            break;

        default:
            printf("\n Opcion invalida\n\n");
            system("break");
        }
    }
    while(seguir == 's');

    return 0;
}

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
    printf("8- Salir\n\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}
void inicializarEmpleado(eEmpleado emp[], int tam)
{
    for(int i; i<tam;i++)
        {
            emp[i].isEmpty=1;
        }
}
/*void init(eSector sectores[], int cantidad);
eSector sec[]={1, "RRHH"; 2, "Sistemas"; 3, "Ventas"; 4,"Logistica"};
for(int i=0; i<cantidad; i++)
{
	sectores[i].id=sec[i].id;
	strcpy(sectores[i].descripcion, sec[i].descripcion);
}*/
