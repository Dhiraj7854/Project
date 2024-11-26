//
// Created by dheeraj on 14/11/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char *c = (char *) malloc(500 * sizeof(char));
    printf("Maximum size of string: 500\n");
    printf("Enter string: ");
    fgets(c,500,stdin);
    c[strcspn(c, "\n")] = '\0';
    char *b = (char *) malloc(500 * sizeof(char));
    for(int i=0; i<strlen(c); i++) {
        *(b+i) = *(c+strlen(c)-i-1);
    }
    printf("Initial string: %s\n", c);
    printf("Final string: %s\n", b);
    free(c);
    free(b);
    return 0;
}