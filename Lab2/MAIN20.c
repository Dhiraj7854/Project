#include <stdio.h>
int main()
{
    float a,b;

     char op;
    printf("Enter the operator :");
    scanf("%c",&op);

    printf("Enter 2 numbers :");
    scanf("%f%f",&a,&b);

    switch(op)
    {
        case '+':
        printf("%f + %f = %f",a,b,a+b);
        break;

        case '-':
        printf("%f - %f = %f",a,b,a-b);
        break;

        case '*':
        printf("%f * %f = %f",a,b,a*b);
        break;

        case '/':
        if(b != 0)
        {printf("%f / %f = %.2f",a,b,a/b);}
        else
        { printf("Division by 0 Error");}
        break;

        default:
        printf("Invalid operation");


    }
}