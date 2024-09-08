#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 2 nos. that needs to be swapped:");
    scanf("%d%d",&a,&b);

    c = a; 
    a = b; // old b value to a
    b = c; // new b value from c

    printf("The swapped nos. are: %d,%d",a,b);

}