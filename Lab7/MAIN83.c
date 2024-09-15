#include <stdio.h>
int maxfind(int n,int array[n])
{
    int max = array[0];
    for(int i=1; i<n; i++)
    {
        if(array[i]>max)
        {
            max = array[i];
        }
    }
    return max;

}

int main()
{
    int x;
    printf("Enter the array size: ");
    scanf("%d",&x);

    int arr[x];

    for(int i=0; i<x; i++)
    {
        printf("Enter element[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    
    printf("Maximum value: %d",maxfind(x,arr));
}