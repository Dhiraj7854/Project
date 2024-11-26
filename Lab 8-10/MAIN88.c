//
// Created by dheeraj on 14/11/24.
//
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter array sizes: ");
    scanf("%d",&n);
    int *a = (int *) malloc(n * sizeof(int));
    int *b = (int *) malloc(n * sizeof(int));
    printf("Enter Array1: \n");
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter array2: \n");
    for(int i=0; i<n; i++) {
        scanf("%d",&b[i]);
    }
    int *c = (int *) malloc(n * sizeof(int));
    for(int i=0; i<n; i++) {
        *(c+i) = *(a+i);
        *(a+i) = *(b+i);
        *(b+i) = *(c+i);
    }
    printf("Swapped Array: \n");
    for(int i=0; i<n; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0; i<n; i++) {
        printf("%d ",b[i]);
    }
    free(a);
    free(b);
    free(c);
}
