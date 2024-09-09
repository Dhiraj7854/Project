#include <stdio.h>
int main()
{
    int a,b,flag = 1;
    printf("Enter your number: ");
    scanf("%d",&a);

    if(a <= 1)
    { printf("Number is non-prime");}

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
    { printf("Number is non-prime");}
}
