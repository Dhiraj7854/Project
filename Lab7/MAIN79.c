#include <stdio.h>
void interchange(int a,int b)
{
    printf("Before swap: %d,%d\n",a,b);
    int c = a;
    a = b;
    b = c;
    printf("Swapped values: %d,%d",a,b);
}

int main()
{
    int x,y;
    printf("Enter 2 number: ");
    scanf("%d%d",&x,&y);
    interchange(x,y);
}
