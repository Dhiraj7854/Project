#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    for(int i = 1;i <= n-1;i++)
    { printf("%d/%d! + ",i,i);}

    printf("%d/%d!",n,n);
}