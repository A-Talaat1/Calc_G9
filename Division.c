double Division(double *result, double operand1 ,double  operand2) 
{
   if(operand2 == 0){
        printf("it's forbidden");
        return 0;
    }
*result = operand1/operand2;
return 1; //succeeded
}