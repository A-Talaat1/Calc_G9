#include "calculator.h"

#define E_OK 1

double modulus(double *result, double operand1 ,double  operand2) 
{
    *result = (int) operand1 % (int) operand2;
    return E_OK; 
}