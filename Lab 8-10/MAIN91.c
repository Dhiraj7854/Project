//
// Created by dheeraj on 14/11/24.
//
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int *pn = &n;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("Square: %d\n",*pn * *pn);
    printf("Cube: %d",*pn * *pn * *pn);
    return 0;
}