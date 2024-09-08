#include <stdio.h>
int main()
{
    int a,c=1;
    printf("Enter the ending number of series: ");
    scanf("%d",&a);
    
    for(int i=1;i<=a;i++)
    {c = c*i; }
    printf("Factorial of number is: %d",c);


}
