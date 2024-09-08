#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 nos. :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        { printf("a is the greatest.");}
        else
        { printf("c is the greatest.");}
    }

    else if(b>a) 
    {
        if(b>c)
        { printf("b is the greatest.");}
        else
        { printf("c is the greatest.");}
    }

}
