#include <stdio.h>

int main()
{
    int  n;
    printf("Enter numbers to be printed: ");
    scanf("%d",&n);

    for(int i = 1;i <= n;i++)
    {
        printf("%d ",i*i);
    }
}