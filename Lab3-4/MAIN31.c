#include <stdio.h>
int main()
{
    int num,q,res=0;
    printf("Enter number: ");
    scanf("%d",&num);

    while(num != 0) 
    {
        q = num%10;
        res += q;
        num = num/10;
    }

    printf("%d",res);
}