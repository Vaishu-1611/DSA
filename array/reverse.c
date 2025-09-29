#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("the initial size of array is %d\n",size);
    for (int i=0;i<size;i++)
    {
        printf("%d ",arr[size-i-1]);
    }
    return 0;
}