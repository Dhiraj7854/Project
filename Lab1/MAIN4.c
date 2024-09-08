#include <stdio.h>
int main()
{
    float F,C;
    printf("Enter temp in F :");
    scanf("%f",&F);
    C = ((F-32)*5)/9;
    printf("Temp in C is : %f",C);
}