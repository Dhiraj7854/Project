#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers to be swapped :");
    scanf("%d%d",&a,&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The swapped value is : %d,%d",a,b);
}