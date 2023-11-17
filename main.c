#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

int main()
{
    double result; 
    double firstOperand =0;
    double secondOperand =0;
    int operation ; 
    printf("enter the first operand : \n");
    scanf("%lf", &firstOperand);
    printf("enter the second operand : \n");
    scanf("%lf", &secondOperand);
    printf("0:addition , 1:subtraction \n 2: multiplication , 3:Division \n" );
    printf("choose the number of operation \n" );
    scanf("%d",&operation);
    
    switch(operation){
        case 0:
        addition(&result ,firstOperand ,secondOperand);
        break;
        case 1:
        subtraction(&result ,firstOperand ,secondOperand);
        break;
        case 2:
        multiplication(&result ,firstOperand ,secondOperand);
        break;
        case 3:
        Division(&result ,firstOperand ,secondOperand);
        break;
        default:
        printf("it's done");
        
    }

    printf("%f", result);

    return 0;
}
double addition(double *result, double operand1 ,double  operand2) 
{
*result = operand1+operand2;
return 1; //succeeded
}

double subtraction(double *result, double operand1 ,double  operand2) 
{
*result = operand1-operand2;
return 1; //succeeded
}


double multiplication(double *result, double operand1 ,double  operand2) 
{
*result = operand1*operand2;
return 1; //succeeded
}

double Division(double *result, double operand1 ,double  operand2) 
{
   if(operand2 == 0){
        printf("it's forbidden");
        return 0;
    }
*result = operand1/operand2;
return 1; //succeeded
}
double Division(double *result, double operand1 ,double  operand2) 
{
   if(operand2 == 0){
        printf("it's forbidden");
        return 0;
    }
*result = operand1/operand2;
return 1; //succeeded
}
