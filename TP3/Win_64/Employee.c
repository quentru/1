#include "Employee.h"
#include <stdio.h>
#include <stdlib.h>
int employes_setSueldo(Employee* this,int sueldo)
{
    int todoOk=0;
    if(this != NULL && sueldo>0 && sueldo<100000{
    this -> sueldo = sueldo;
    todoOk=1;
    }
}

int employee_getNombre(Employee* this,char* nombre)
{
    int todoOk = 0;
    if(this!=NULL && sueldo!=NULL)
        {
            nuevoEmpleado->sueldo=sueldo;
        }
}

eEmpleado* new_Empleado(){
    Employee* nuevoEmpleado =(Employee*)malloc(sizeof(Employee));
    if(nuevoEmpleado != NULL)
        {
            nuevoEmpleado->legajo = 0;
            strcpy(nuevoEmpleado->nombre, "");
            strcpy(nuevoEmpleado->apellido, "");
            nuevoEmpleado->sueldo = 0;
        }
    return nuevoEmpleado;
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,  char* sueldo)
{
    eEmpleado* nuevoEmpleado = (eEmpleado*)malloc( sizeof(eEmpleado));

if(nuevoEmpleado!= NULL){
        if(employee_setSueldo(nuevoEmpleado, sueldo)==1){
        todoOk=1;
        }
        if(todoOk==0){
    free(nuevoEmpleado);
    nuevoEmpleado=NULL;
    }
}
    nuevoEmpleado->id = (idStr);
    strcpy(nuevoEmpleado->nombre, nombreStr);
    strcpy(nuevoEmpleado->apellido, apellido);
    nuevoEmpleado->sueldo = sueldo;

}
return nuevoEmpleado;
}
