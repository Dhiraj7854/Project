#include <stdio.h>
int main()
{
    char c;
    printf("Enter your character: ");
    scanf("%c",&c);

    if(c >= 'a' && c <= 'z')
    { printf("Character is Small Case Letter.");}
     else if(c >= 'A' && c <= 'Z')
    { printf("Character is Capital Case letter.");}
    else if(c >= '0' && c <= '9')
    { printf("Character is a Digit.");}
    else
    { printf("Character is Special Symbol.");}
    

}