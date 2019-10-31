#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Employee.h"
Employee* employee_new()
{
    Employee* nuevoEmpleado = (Employee*)malloc(sizeof(Employee));
    if(nuevoEmpleado != NULL)
        {
            nuevoEmpleado->id=0;
            strcpy(nuevoEmpleado->nombre, "");
            nuevoEmpleado->horasTrabajadas = 0;
            nuevoEmpleado->sueldo = 0;
        }
        return nuevoEmpleado;
}
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* sueldoStr)
{
    Employee* nuevoEmpleado = employee_new();
    if(employee_setId(nuevoEmpleado, atoi(idStr)) && employee_setNombre(nuevoEmpleado, nombreStr) && employee_setHorasTrabajadas(nuevoEmpleado, atoi(horasTrabajadasStr)) && employee_setSueldo(nuevoEmpleado, atoi(sueldoStr)))
        {
            return nuevoEmpleado;
        }
        printf("Ocurrio un error\n");
}

int employee_setId(Employee* this,int id)
{
    int retorno = 1;
    if(this==NULL)
    {
        retorno = 0;
    }else
    {
        this->id = id;
    }
    return retorno;
}
int employee_setNombre(Employee* this, char* nombre)
{
    int retorno = 1;
    if(this==NULL)
    {
        retorno = 0;
    }else
    {
        strcpy(this->nombre, nombre);
    }
    return retorno;
}
int employee_setHorasTrabajadas(Employee* this, int horasTrabajadas)
{
    int retorno = 1;
    if(this==NULL)
    {
        retorno = 0;
    }else
    {
        this->horasTrabajadas = horasTrabajadas;
    }
    return retorno;
}
int employee_setSueldo(Employee* this, int sueldo)
{
    int retorno = 1;
    if(this==NULL)
    {
        retorno = 0;
    }else
    {
        this->sueldo = sueldo;
    }
    return retorno;
}
int employee_getId(Employee* this,int* id)
{
    int retorno = 1;
    if(this==NULL)
    {
        retorno = 0;
    }else
    {
        id = this->id;
    }
    return retorno;
}
int employee_getNombre(Employee* this, char* nombre)
{
    int retorno = 1;
    if(this==NULL)
    {
        retorno = 0;
    }else
    {
        strcpy(nombre, this->nombre);
    }
    return retorno;
}
int employee_setHorasTrabajadas(Employee* this, int* horasTrabajadas)
{
    int retorno = 1;
    if(this==NULL)
    {
        retorno = 0;
    }else
    {
        horasTrabajadas = this->horasTrabajadas;
    }
    return retorno;
}
int employee_setSueldo(Employee* this, int* sueldo)
{
    int retorno = 1;
    if(this==NULL)
    {
        retorno = 0;
    }else
    {
        sueldo = this->sueldo;
    }
    return retorno;
}
