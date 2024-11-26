//
// Created by dheeraj on 14/11/24.
//
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter sizeof square matrix: ");
    scanf("%d", &n);
    int (*a)[n] = (int (*)[n]) malloc(n * n * sizeof(int));
    int (*b)[n] = (int (*)[n]) malloc(n * n * sizeof(int));
    int (*c)[n] = (int (*)[n]) malloc(n * n * sizeof(int));

    printf("Array 1: \n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d",(*(a+i)+j));
        }
    }

    printf("Array 2: \n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d",(*(b+i)+j));
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            *(*(c+i)+j) = 0;
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            for(int k=0; k<n; k++) {
                *(*(c+i)+j) += *(*(a+i)+k) * *(*(b+k)+j);
            }
        }
    }
    printf("Product array: \n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%d ",*(*(c+i)+j));
        }
        printf("\n");
    }
    free(a);
    free(b);
    free(c);
    return 0;
}