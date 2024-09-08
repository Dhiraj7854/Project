#include <stdio.h>
int main()
{
    int period = 31558150;
    int day = ((period/60)/60)/24;
    int hours = (period/60)/60;
    int minutes = period/60;
    printf("Days = %d \n Hours = %d \n Minutes = %d",&day,&hours,&minutes);

}