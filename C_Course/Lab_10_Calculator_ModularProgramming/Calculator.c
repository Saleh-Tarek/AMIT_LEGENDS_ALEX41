
//#include "Calculator.h"
#include <stdio.h>

int GetAdd(int x, int y)
{
    return x + y;
}

int GetSubtract(int x, int y)
{
    return x - y;
}

int GetMultiply(int x, int y)
{
    return x * y;
}

double GetDivide(int x, int y)
{
    if (y == 0)
    {
        printf("\nCannot divide by ZERO.\n\n");
        return 0;
    }
    else return x / y;
}

double GetRemainder(int x, int y)
{
    return x % y;
}

