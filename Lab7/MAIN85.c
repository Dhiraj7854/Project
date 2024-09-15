#include <stdio.h>
void cha(char c)
{
    if(c == 'a'|| c=='e'|| c=='i'|| c=='o'|| c=='u'|| c == 'A'|| c=='E'|| c=='I'|| c=='O'|| c=='U')
    {
        printf("Character is vowel");
    }

    else
    {
        printf("Character is consonant");
    }
}

int main()
{
    char x;
    printf("Enter a character: ");
    scanf("%c",&x);
    cha(x);
}