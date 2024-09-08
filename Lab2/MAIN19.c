#include <stdio.h>
int main()
{
    char c;
    printf("Enter a letter:");
    scanf("%c",&c);

    (c >= 'a' && c <= 'z')?printf("Letter is small case letter"):printf("Letter is not small case");
}