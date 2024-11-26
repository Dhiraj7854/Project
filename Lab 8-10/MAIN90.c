//
// Created by dheeraj on 14/11/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *c = (char *) malloc(500 * sizeof(char));
    printf("Enter string: ");
    fgets(c,500,stdin);
    c[strcspn(c, "\n")] = '\0';
    int count=0;
    printf("Size with space: %d\n",sizeof(c));
    for(int i=0;i<strlen(c);i++) {
        if(c[i] != ' ') {
            count++;
        }
    }
    printf("Size without space: %d",count);
    free(c);
    return 0;
}
