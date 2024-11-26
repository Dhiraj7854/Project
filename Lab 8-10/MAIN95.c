//
// Created by dheeraj on 26/11/24.
//
//
// Created by dheeraj on 14/11/24.
//
#include <stdio.h>
struct employee {

    int number;
    char name[50];
    float salary;
}employ[50];
int main()
{
    struct employee *ptr=employ;
    int n;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    printf("Enter employee details: \n");
    for(int i=0; i<n; i++)
    {
        printf("Enter employee number: ");
        scanf("%d",&ptr->number);
        printf("Enter employee name: ");
        scanf("%s",ptr->name);
        printf("Enter employee salary: ");
        scanf("%f",&ptr->salary);
        ptr++;
    }
    ptr = employ;
    printf("\n\nEmployee details are: \n");
    for(int i=0; i<n; i++)
    {
        printf("\nEmployee number: %d\n",ptr->number);
        printf("Employee name: %s\n",ptr->name);
        printf("Employee salary: %.2f\n",ptr->salary);
        ptr++;
    }
    return 0;
}
