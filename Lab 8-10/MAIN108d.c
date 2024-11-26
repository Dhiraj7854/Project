//
// Created by dheeraj on 17/11/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char *a = (char *) malloc(500 * sizeof(char));
    char *b = (char *) malloc(500 * sizeof(char));
    if(a == NULL || b == NULL) {
        printf("Memory Allocation Failed!");
        return -1;
    }
    printf("Enter your String: ");
    fgets(a,500,stdin);
    a[strcspn(a, "\n")] = '\0';
    const int n = strlen(a);
    for(int i=0; i<n; i++) {
        *(b + i) = *(a + n-i-1);
    }
    printf("Reversed String: ");
    printf("%s",b);
    free(a);
    free(b);
    return 0;
}