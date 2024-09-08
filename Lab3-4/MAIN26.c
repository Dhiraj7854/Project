#include <stdio.h>
int main()
{
    int n,s1=0,s2=0;
    printf("Enter value of n: ");
    scanf("%d",&n);

   for(int i = 1;i <= n;i++)
   {
    if(i%2 == 0)
    {s1 += i;}
    else
    {s2 += i;}
   }

   printf("Sum of even: %d\n",s1);
   printf("Sum of odd: %d",s2);
}