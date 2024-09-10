#include <stdio.h>
int main()
{
    int N,num;
    int max,max2;

    printf("Enter the number of elements: ");
    scanf("%d",&N);

    if(N < 2)
    { printf("Enter atleast 2 numbers.");}

    else {
      printf("Enter the number 1: ");
      scanf("%d",&num);

      max = max2 = num;

      for(int i = 2;i <= N;i++)
        {
          printf("Enter the number %d: ",i);
          scanf("%d",&num);

          if(num > max)
          { 
            max2 = max;
            max = num;

          }

          else if(num > max2 && num < max)
          { 
            max2 = num;

          }
        }
    

      if(max == max2)
      { printf("No second maximum value."); }
      else
      { printf("Maximum value is: %d\n",max);
      printf("Second Maximum value is: %d",max2); }

         }
}