#include <stdio.h>
int main()
{
   int N,res,q;
   printf("Enter your number: ");
   scanf("%d",&N);
   if (N >= 0 && N <= 9)
   { printf("%d",N);}
  else
  {

   while(N > 9){
   res = 0;
   while( N != 0)
   {
    
     q = N % 10;
     res += q;
     N = N / 10;
   }
   N = res;
   }
   printf("%d",res);
  }
}
