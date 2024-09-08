#include <stdio.h>
int main()
{
    int a,b,c,d,e,s;
    printf("Enter your marks of 5 subjects:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("Enter the total marks of one subject :");
    scanf("%d",&s);
    int t = a+b+c+d+e;
    float p = (t*100)/(5.0*s);
    printf("Your total marks: %d\n",t);

    if(90<p<100)
    { printf("Grade = A");}
    else if(80<p<90)
    { printf("Grade = B");}
    else if(70<p<80)
    { printf("Grade = C");}
    else if(60<p<70)
    { printf("Grade = D");}
    else if(50<p<60)
    { printf("Grade = E");}
    else
    { printf("Grade = F");}

}