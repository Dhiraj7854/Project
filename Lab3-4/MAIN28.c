#include <stdio.h>
int main()
{
    int num,sum=0,q,temp;
    printf("Enter the num: ");
    scanf("%d",&num);
    temp = num;
    while(temp != 0)
    {
        q = temp%10;
        sum = sum + q*q*q;
        temp = temp/10;

    }
    if (sum == num)
    {printf("%d is armstrong number.",num);}

    else
    { printf("%d is not armstrong number.",num);}
}