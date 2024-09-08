#include <stdio.h>
int main()
{
    int a,b,res=1,i=1;
    printf("Enter the base number :");
    scanf("%d",&a);

    printf("Enter the power: ");
    scanf("%d",&b);

    while(i<=b)
    {
        res = res*a;
        i++;
    }
    printf("%d",res);
    
}