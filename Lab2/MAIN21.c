#include <stdio.h>
int main()
{
    char op;
    printf("1.a -> +\n2.b -> -\n3.c -> *\n4.d -> /\n");
    printf("Enter your operator :");
    scanf("%c",&op);

    float a,b;
    printf("Enter 2 numbers :");
    scanf("%f%f",&a,&b);

    switch(op)
    {
        case 'a':
        printf("%.2f + %.2f = %.2f",a,b,a+b);
        break;

        case 'b':
        printf("%.2f - %.2f = %.2f",a,b,a-b);
        break;

        case 'c':
        printf("%.2f * %.2f = %.2f",a,b,a*b);
        break;

        case 'd':
        if(b != 0)
        printf("%.2f / %.2f = %.2f",a,b,a/b);
        else
        printf("Error Division by 0");
        break;

        default:
        printf("Invalid operation");


    }
}