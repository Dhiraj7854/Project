#include <stdio.h>
int main()
{
    int income,rent,transport,tax;
    printf("Enter your income,rent,transport and tax date: ");
    scanf("%d%d%d%d",&income,&rent,&transport,&tax);
    int G = income+rent+transport+tax;
    printf("Your Gross Income is : %d",G); 
    }