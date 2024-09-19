#include <stdio.h>
#include <math.h>
int arms(int a)
{
    int n=0,b,sum=0,rem;
    b=a;
    while(b != 0)
    {
        b /= 10;
        n++;
    }
    b=a;
    while(b != 0)
    {
        rem = b%10;
        sum += pow(rem,n);
        b /= 10;
    }

    if(a == sum)
    { return 0;}
    else
    { return 1;}
}

int main()
{
    int x;
    printf("Enter your number: ");
    scanf("%d",&x);
    int res = arms(x);

    if(res == 1)
    {
        printf("Number is not armstrong");
    }

    else
    {
        printf("Number is armstrong");
    }
}