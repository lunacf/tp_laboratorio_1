#include <stdio.h>
#include <stdlib.h>
#include "aritmeticas.h"
#include <conio.h>

int main()
{

    int opcion;
    int primerOperando=0;
    int segundoOperando=0;

    int resultadoSuma;
    int resultadoResta;
    int resultadoMulti;
    float resultadoDivision;

    int flagDiv = 0;

    int resultadoFactorialA;
    int resultadoFactorialB;

    do{
        fflush(stdin);
        printf("\n    /-----BIENVENIDO A LA CALCULADORA-------/ ");
        printf("\n    /-->1.- Ingresar primer operando A = %d / ",primerOperando);
        printf("\n    /-->2.- Ingresar segundo operando B = %d/ ",segundoOperando);
        printf("\n    /-->3.- Calculo de operandos            / ");
        printf("\n    /-->4.- Resultado de los operandos      / ");
        printf("\n    /-->5.- Salir                           / \n");
        printf("\n   /---> Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {

            system("cls");

            case 1:
                printf("Ingrese primer operando:");
                scanf("%d", &primerOperando);
                break;
            case 2:
                printf("Ingrese segundo operando:");
                scanf("%d", &segundoOperando);
                break;
            case 3:
                printf("Calculo todas las operaciones\n");
                resultadoSuma = sumarOperandos(primerOperando, segundoOperando);
                resultadoResta = restarOperandos(primerOperando, segundoOperando);
                resultadoMulti = multiplicarOperandos(primerOperando, segundoOperando);
                if (segundoOperando == 0)
                {
                    flagDiv = 1;
                }
                else if (primerOperando < segundoOperando)
                {
                     flagDiv = 1;
                }
                else
                {
                    resultadoDivision = dividirOperandos(primerOperando, segundoOperando);
                    flagDiv = 0;
                }
                resultadoFactorialA = factorialA(primerOperando);
                resultadoFactorialB = factorialB(segundoOperando);
                break;
            case 4:
                printf("Informando todos los resultados.. \n");
                printf("    El resultado de la suma es: %d \n", resultadoSuma);
                printf("    El resultado de la resta es: %d \n", resultadoResta);
                printf("    El resultado de la multiplicacion es: %d \n", resultadoMulti);
                if (flagDiv == 0)
                {
                    printf("    El resultado de la division es: %.2f \n", resultadoDivision);
                }
                else if (segundoOperando > primerOperando)
                {
                    printf(" El segundo operando no debe ser mayor al primero. ");
                }
                else
                {
                    printf("    No se puede dividir por 0\n");
                }
                printf("    El resultado del factorial A es: %d \n", resultadoFactorialA);
                printf("    El resultado del factorial B es: %d \n", resultadoFactorialB);
                printf("    Ingrese cualquier tecla para volver al menu: ");
                getch();
                break;

            case 5:
                printf("Saliendo de la calculadora.");
                break;
        }
     }while(opcion != 5);

    return 0;
}
