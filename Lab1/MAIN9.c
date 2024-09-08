#include <stdio.h>
int main()
{
    int h,m,s;
    printf("Enter your time as hour,minute,second respt:");
    scanf("%d%d%d",&h,&m,&s);
    int s1 = (h*3600)+(m*60)+s;
    printf("Total Seconds is : %d",s1);

}