//
// Created by dheeraj on 18/11/24.
//
#include <stdio.h>
#define MAX(a,b) ((a>b) ? a : b)
int main() {
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    printf("Max = %d",MAX(a,b));
    return 0;
}