//
// Created by dheeraj on 26/11/24.
//
#include <stdio.h>
#include <stdlib.h>
int main() {
    char name[20],author[20];
    int edn;
    float price;
    printf("Enter book name: ");
    scanf("%s",name);
    printf("Enter author name: ");
    scanf("%s",author);
    printf("Enter price: ");
    scanf("%f",&price);
    printf("Enter edn: ");
    scanf("%d",&edn);

    printf("\nBook Details: \n");
    printf("Name: %s\n",name);
    printf("Author: %s\n",author);
    printf("Price: %.2f\n",price);
    printf("Edn: %d\n",edn);
    return 0;
}