#include <stdio.h>
int factorial(int x, int y)
{
    int p=1,q=1,r=1;
    for(int i = 1;i<=x;i++)
    {
        p *= i;
    }
    for(int i = 1;i<=y;i++)
    {
        r *= i;
    }
    for(int i = 1;i<=x-y;i++)
    {
        q *= i;
    }

    return p/(q*r);
}

int main()
{
    int n,r;
    printf("Enter value of n,r: ");
    scanf("%d%d",&n,&r);

    printf("Value of nCr is: %d",factorial(n,r));
}