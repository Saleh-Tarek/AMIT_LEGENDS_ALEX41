/*
============================================================
Author: Tarek Saleh
Target: Modular Programming
============================================================

============================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "Calculator.h"


int main()
{
    int input_1;
    double input_2;
    char operation;
    while (1)
    {
        printf("Please enter 2 numbers to calculate.\n");
        printf("The first number: ");
        scanf("%d", &input_1);
        printf("The second number: ");
        scanf("%lf", &input_2);
        printf("The operation: ");
        scanf("%s", &operation);
        printf("%d %c %.0lf = ", input_1, operation, input_2);

        switch (operation)
        {
        case '+':
            {
                printf("%d\n", GetAdd(input_1, input_2));
                break;
            }
        case '-':
            {
                printf("%d\n", GetSubtract(input_1, input_2));
                break;
            }
        case '*':
            {
                printf("%d\n", GetMultiply(input_1, input_2));
                break;
            }
        case '/':
            {
                printf("%.1lf\n", GetDivide(input_1, input_2));
                break;
            }
        case '%':
            {
                printf("%.0lf\n", GetRemainder(input_1, input_2));
                break;
            }
    case 'm':
            {
                printf("The max number is %.0lf\n", Max(input_1, input_2));
            printf("The min number is %.0lf\n\n", Min(input_1, input_2));
                break;
            }
        default:
            {
                printf("\nPlease enter a basic arithmetic operation.\n");
                printf("+ - * / %%\n");
                break;
            }

    }//End of switch


    }//End of while

    return 0;
}//End of main
