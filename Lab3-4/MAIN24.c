#include <stdio.h>
#include <math.h>
int main()
{
    double x,n;
    
    printf("Enter valur of x: ");
    scanf("%lf",&x);

    printf("Enter value of n: ");
    scanf("%lf",&n);

    if(n == 1)
    { printf("Y = %.2lf",1+x);}

    else if(n == 2)
    { printf("Y = %.2lf",(x/n)+1);}

    else if(n  == 3)
    { printf("Y = %.2lf",pow(x,n)+1);}

    else if(n<1 || n>3)
    { printf("Y = %.2lf",x*n + 1);}

   
}
