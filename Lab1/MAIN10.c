#include <stdio.h>
int main()
{
    int M,P,C,E;
    printf("Enter your Maths,Physics,Chemistry,Entrance :");
    scanf("%d%d%d%d",&M,&P,&C,&E);
    int CM = M/2 + P/2 + C/2 +E;
    printf("Cutoff Marks is : %d",CM);
    
    
}