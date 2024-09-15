#include <stdio.h>
void palindrome(int a)
{
    int b,sum = 0,q;
    b = a;
    while(b > 0)
    {
        q = b % 10;
        sum = sum*10 + q;
        b /= 10;
    }

    if(a == sum)
    { printf("Number is palindrome");}
    else
    { printf("Number isn\'t palindrome");}

}

int main()
{
    int x;
    printf("Enter your number: ");
    scanf("%d",&x);
    palindrome(x);
}
