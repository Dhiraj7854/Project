//
// Created by dheeraj on 14/11/24.
//
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int *arr = (int *) malloc(n * sizeof(int));
    for(int i=0; i<n; i++) {
        scanf("%d",arr+i);
    }
    int max = arr[0];
    for(int i=1; i<n; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    printf("Maximum value is %d",max);
    free(arr);
    return 0;
}