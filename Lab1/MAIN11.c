#include <stdio.h>
int main()
{
    int Seconds;
    printf("Enter total seconds: ");
    scanf("%d",&Seconds);
    int H = Seconds/3600;
    Seconds %= 3600;
    int M = Seconds/60;
    Seconds %= 60;
    printf("Time = %02d:%02d:%02d",H,M,Seconds);
}