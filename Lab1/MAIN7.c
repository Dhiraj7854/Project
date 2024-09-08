#include <stdio.h>
int main()
{
    float b,h,a;
    printf("Enter base and height respt.:");
    scanf("%f%f",&b,&h);
    a = (1.0/2)*b*h;
    printf("Area is : %f",a);
    return 0;
}