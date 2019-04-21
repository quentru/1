#include <stdio.h>
#include <stdlib.h>

    float pedirUnNumero();
    float calcularArea(float radio);
    int main()
    {
        float numeroPedido;
        float area;
        numeroPedido = pedirUnNumero();
        area = calcularArea(numeroPedido);
        printf("El area de un circulo es %.2f", area);
        return 0;
    }
    /**
    *\brief Pide un numero al usuario y lo retorna
    *\return numero de tipo float
    *
    */
    float pedirUnNumero()
    {
        float numero;
        printf("Ingrese un numero\n");
        scanf("%f", &numero);
        return numero;
    }
    /**
    *\brief recibe el radio y calcula el area de un circulo
    *\param radio del circulo correspondiente
    *\return el area de un circulo
    *
    */
    float calcularArea(float radio)
    {
        float resultado;
        resultado = 3.14 * radio * radio;
        return resultado;
    }
