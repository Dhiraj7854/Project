#include <stdio.h>
int main()
{
    int sales;
    printf("Enter the sales amount: ");
    scanf("%d",&sales);

    if(sales <= 500)
    { printf("Comission is Rs. %.2f",0.05*sales); }

    else if(sales >= 500 && sales <= 2000)
    { printf("Commission is Rs. %.2f",(35+0.1*(sales-500)));}

    else if(sales > 2000 && sales <= 5000)
    { printf("Commission is Rs. %.2f",(185+0.12*(sales-2000)));}

    else if(sales > 5000)
    { printf("Commission is Rs. %.2f",0.125*sales);}
}