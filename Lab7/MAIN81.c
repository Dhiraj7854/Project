#include <stdio.h>
int prime(int a)
{
    if(a <= 1)
    {
        return 0;
    }
    for(int i = 2;i<=a/2;i++)
    {
        if(a % i == 0)
        {
            return 0;
        }
    }
    return 1;

}

int main()
{
    int x;
    printf("Enter your number: ");
    scanf("%d",&x);
    printf("%d",prime(x));

    return 0;
}