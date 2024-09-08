#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter your marks: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    float p = ((a+b+c+d+e)/5);
    printf("%f",p);
}