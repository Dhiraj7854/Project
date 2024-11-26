//
// Created by dheeraj on 26/11/24.
//
typedef struct {
    char name[20],author[20];
    int edn;
    float price;
}book;
#include <stdio.h>
int main() {
    book b1;
    book *p1 = &b1;
    printf("Enter name: ");
    scanf("%s",p1->name);
    printf("Enter author: ");
    scanf("%s",p1->author);
    printf("Enter edn: ");
    scanf("%d",&p1->edn);
    printf("Enter price: ");
    scanf("%f",&p1->price);
    printf("\nBook Details: \n");
    printf("Name: %s\n",p1->name);
    printf("Author: %s\n",p1->author);
    printf("Edn: %d\n",p1->edn);
    printf("Price: %.2f\n",p1->price);
    return 0;
}