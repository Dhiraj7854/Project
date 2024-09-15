#include <stdio.h>
int fibonacci(int a)
{
    int x=0,y=1,z;
    for(int i = 1;i <= a;i++)
    {
        z = x+y;
        x = y;
        y = z;
        printf("%d ",x);
    }
}

int main()
{
    int num;
    printf("Enter the number of values: ");
    scanf("%d",&num);
    fibonacci(num);
}