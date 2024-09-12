#include <stdio.h>
int main()
{
   int num,sum=0,q;
   printf("Enter a number: ");
   scanf("%d",&num);
   
   while(num>0)
   {
    q = num%10;
    sum = sum*10 + q;
    num /= 10;
   }

   printf("Reverse of given number is: %d",sum);
}
