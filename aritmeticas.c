#include <stdio.h>
#include <stdlib.h>
#include "aritmeticas.h"

int sumarOperandos(int a, int b)
{
    int resultado;
    resultado = a + b;
    return resultado;
}

int restarOperandos(int a, int b)
{
    int resultado;
    resultado = a - b;
    return resultado;
}

float dividirOperandos(int a, int b)
{
    float resultado;
    if(b != 0)
      {
        resultado =  a/b;
      }
    else if (b == 0)
        {
        printf("La division entre cero no esta permitida. ");
        return -1;
        }

    return resultado;
}

int multiplicarOperandos(int a, int b)
{

    int resultado;
    resultado = a * b;
    return resultado;

}

int factorialA(int num) {

        int factorial;

        if (num == 1 || num == 0){
            factorial = 1;
        }
        else{
            factorial = num * factorialA(num - 1);
        }
        return factorial;
}

int factorialB(int num) {

        int factorial;

        if (num == 1 || num == 0){
            factorial = 1;
        }
        else{
            factorial = num * factorialB(num - 1);
        }
        return factorial;
}
