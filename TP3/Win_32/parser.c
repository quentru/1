#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
    char buffer[4][20];
    int cantidadLectura, valorDeRetorno = 0;
    if(pFile!=NULL && pArrayListEmployee!=NULL)
        {
             while(!feof(pFile))
                        {
                            cantidadLectura=fscanf(pFile, "%c,%[^,],%[^,],%[^,]\n", buffer[0],buffer[1],buffer[2],buffer[3]);
                            if(cantidadLectura==4)
                            {
                                Employee* nuevoEmpleado = employee_new();
                                nuevoEmpleado = employee_newParametros(buffer[0],buffer[1],buffer[2],buffer[3]);
                                ll_add(pArrayListEmployee, nuevoEmpleado);
                            }
                        }
        }else
        {
            fclose(pFile);
            free(pfile);
            valorDeRetorno=1;
        }
    return valorDeRetorno;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{

    return 1;
}
