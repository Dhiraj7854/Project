#include <stdio.h>
int main()
{
    int unit;
    printf("Enter the number of units: ");
    scanf("%d",&unit);

    if(unit <= 200)
    { printf("Total Amount: %.2f",unit*0.5);}

    else if(unit > 200 && unit <= 400)
    { printf("Total Amount: %.2f",100+(0.65*(unit-200)));}

    else if(unit > 400 && unit <= 600)
    { printf("Total Amount: %.2f",230+0.8*(unit-400));}

    else 
    {printf("Total Amount: %.2f",425+1.25*(unit-600));}
}