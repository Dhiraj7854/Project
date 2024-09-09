#include <stdio.h>
int main()
{
    long int a,b,c,n = 0,result = 0;
    printf("Enter an integer: ");
    scanf("%lu",&a);

    b = a;

    while(b != 0)
    {
       b /= 10;
       ++n; 
    }
    
    b = a;
    
    while( b != 0)
    {
        c = b % 10;
        long int q = 1;
        for(long int i = 0;i < n;i++)
        {
            q *= c;
        }
            result += q;
            b /= 10;

    }

    if(result == a)
    { printf("%lu is Armstrong Number.",a);}
    else
    { printf("%lu is not Armstrong Number.",a);}
}
