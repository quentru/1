#include <stdio.h>
#include <stdlib.h>
#define TAM 5
typedef struct
{
    int dia;
    int mes;
    int año;
}eFecha;
typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    eFecha Ingreso;
}eEmpleado;
//void getChar(char* message, char* caracter);
//void mostarCadena(char* cadena);
int main()
{
    eEmpleado empleado={1234,"Juan",'m', 3030000, 14/05/1999};
    eEmpleado* punteroEmpleado;
    punteroEmpleado = &empleado;
    printf("Legajo: %d\n",punteroEmpleado->legajo);
    printf("Legajo: %s\n",punteroEmpleado->nombre);
    printf("Legajo: %f\n",punteroEmpleado->sueldo);
    printf("Legajo: %d %d %d\n",punteroEmpleado->Ingreso.año, punteroEmpleado->Ingreso.mes, punteroEmpleado->Ingreso.dia);
    /*char mensaje[] = "Ingrese texto";
    char sexo;
    char nombre[20]="Sebastian";
    mostarCadena(mensaje);
    getChar(mensaje, &sexo);
    printf(mensaje, sexo);
*/
    return 0;
}
/*void getChar(char* message, char* caracter)
{
    printf("%s", message);
    fflush(stdin);
    scanf("%c", caracter);
}
void mostarCadena(char* cadena)
{
    //for(int i=0;*(cadena+i)!=)
    while(*cad != '\0')
        {
            printf("%c", *cadena);
    cadena++;
        }
}
*/
