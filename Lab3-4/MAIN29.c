#include <stdio.h>
int main()
{
   int num,sum=0,q,temp;
   printf("Enter a number: ");
   scanf("%d",&num);
   temp = num;
   while(num>0)
   {
    q = num%10;
    sum = sum*10 + q;
    num /= 10;
   }

   if(temp == sum)
   { printf("%d is a palindrome number.",temp);}

   else
   { printf("%d is not paindrome number.",temp);}
}