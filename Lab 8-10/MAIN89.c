//
// Created by dheeraj on 14/11/24.
//
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    int *a = (int *) malloc(n * sizeof(int));
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    int *b = (int *) malloc(n * sizeof(int));
    for(int i=0; i<n; i++) {
        *(b+i) = *(a+n-i-1);
    }
    printf("Copied Array: \n");
    for(int i=0; i<n; i++) {
        printf("%d ", *(b+i));
    }
}