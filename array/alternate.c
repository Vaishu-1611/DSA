#include<stdio.h>
int main()
{
    int arr[100]={1,2,3,4,5,6,7,8,9,10};
    printf("Elements at odd positions:\n");
    for(int i=0;i<10;i=i+2)
    {
        printf("%d ",arr[i]);
    }
    printf("\nElements at even positions:\n");
    for(int i=1;i<10;i=i+2)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}