#include <stdio.h>


//function prototype
double add(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);

// array of pointers to function that takes two double and returns a double
double (*fun[])(double, double) = { add, sub, mul, div }; 

int main()
{
    double op1,op2;
    int choice;

    printf("Enter two numbers for operation:\n");
    scanf("%lf %lf",&op1,&op2);

    printf("\nEnter number for operations 1-addition, 2-subtract, 3-multiply, 4-division\n");
    
    scanf("%d",&choice);
    
    double result = fun[choice-1](op1, op2);

    printf("\nThe result is %lf\n",result);

}

double add(double x, double y)
{
    return x + y;
}

double sub(double x, double y)
{
    return x - y;
}

double mul(double x, double y)
{
    return x * y;
}

double div(double x, double y)
{
    if(y != 0)
    return x / y;

    return 0;
}