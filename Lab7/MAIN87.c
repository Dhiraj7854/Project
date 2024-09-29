#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    int marks;
};

void highscore(struct Student students[])
{
    printf("Students with marks greater than 500: \n");
    for(int i = 0;i<10;i++)
    {
        if(students[i].marks > 500)
        {
            printf("Roll number: %d\n",students[i].roll);
            printf("Name : %s\n",students[i].name);
            printf("Marks : %d\n\n",students[i].marks);
        }
    }

}

int main()
{
    struct Student students[10];
    printf("Enter Student Details: \n");
    for(int i = 0;i<10;i++)
    {
        printf("Enter roll number: ");
        scanf("%d",&students[i].roll);

        printf("Enter Name: ");
        scanf("%s",students[i].name);

        printf("Enter marks: ");
        scanf("%d",&students[i].marks);

    }

    highscore(students);
}

