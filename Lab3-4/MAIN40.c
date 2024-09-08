#include <stdio.h>
int main()
{
    system("cls");
    int n,sum=0;
    do 
    { 
        printf("Enter a number(positive): ");
        scanf("%d",&n);

        if(n >= 0)
        { sum += n;}
    }
    while(n >= 0);

    printf("Sum of the numbers: %d",sum);

}
