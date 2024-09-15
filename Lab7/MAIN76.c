#include <stdio.h>


    int even_odd(int a)
    {
        if(a % 2 == 0)
        {return 0;}
        else
        {return 1;}

    }

    int main()
    {
        int num;
        printf("Enter your number: ");
        scanf("%d",&num);
        int x = even_odd(num);

        if(x == 0)
        {
            printf("Number is even");
        }
        else
        {
            printf("Number is odd");
        }
    }
