//
// Created by dheeraj on 14/11/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int count = 0;
    char *c = (int *) malloc(500 * sizeof(c));
    printf("Maximum string size: 500\n");
    printf("Enter string: ");
    fgets(c,500,stdin);
    c[strcspn(c, "\n")] = '\0';
    for(int i=0; i < strlen(c); i++) {
        if(c[i] == 'a'||c[i] == 'e' || c[i] == 'i'||c[i] == 'o'||c[i] == 'u') {
            count++;
        }
    }
    printf("Number of vowels: %d",count);
    return 0;
}