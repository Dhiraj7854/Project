#include <stdio.h>
int main()
{
    float p,r,t,i;

    printf("Enter your principal value:");
    scanf("%f",&p);

    printf("Enter your rate:");
    scanf("%f",&r);

    printf("Enter your time in years :");
    scanf("%f",&t);

    i = (p*r*t)/100;
    printf("Final interest is: %f", i);
}
