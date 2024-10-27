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
    fgets(a,200,stdin);
    a[strcspn(a, "\n")] = '\0';

    int len = length(a);
    printf("String length is : %d",len);
}