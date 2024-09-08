#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the table number: ");
    scanf("%d",&a);

    printf("How many numbers do you want: ");
    scanf("%d",&b);

    
    for(int j = 1;j <= b;j++)
    {
        printf("%d x %d = %d\n",a,j,a*j);
    }

}