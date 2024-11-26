//
// Created by dheeraj on 14/11/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *c = (char *) malloc(500 * sizeof(char));
    printf("Maximum character size is 500\n");
    printf("Enter string:");
    fgets(c,500,stdin);
    c[strcspn(c, "\n")] = '\0';
    int count = 0;
    for(int i=0; i<strlen(c); i++) {
        if(c[i] == ' ') {
            count++;
        }

    }
    printf("Number of words: %d",count+1);
    return 0;
}
