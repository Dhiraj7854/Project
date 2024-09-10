#include <stdio.h>
int main()
{
    int N,num;
    int max,min;

    printf("Enter the number of elements: ");
    scanf("%d",&N);

    printf("Enter the number 1: ");
    scanf("%d",&num);

    max = min = num;

    for(int i = 2;i <= N;i++)
    {printf("Enter the number %d: ",i);
    scanf("%d",&num);
    
    if(num > max)
    { max = num;}
    
    else if(num < min)
    { min = num;}
    }
    printf("Maximum number is: %d\n",max);
    printf("Minimum number is: %d",min);

}