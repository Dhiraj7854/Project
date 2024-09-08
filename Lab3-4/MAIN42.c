#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int a,b,flag = 1;
    printf("Enter your number: ");
    scanf("%d",&a);

    if(a <= 1)
    { printf("Number is Composite");}

    else
    {
        for(b = 2;b <= a/2;b++)
        {
            if(a % b == 0)
            {flag = 0;
            break;}

        }
    }

    if(flag == 1)
    { printf("Number is prime");}
    else
    { printf("Number is Composite");}
}