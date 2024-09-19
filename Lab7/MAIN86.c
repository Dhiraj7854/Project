#include <stdio.h>
#include <string.h>
int length(char x[])
{
    return strlen(x);
}

int main()
{
    char a[200];
    printf("Enter your String: ");
    gets(a);

    int len = length(a);
    printf("String length is : %d",len);
}