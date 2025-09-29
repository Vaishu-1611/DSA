#include<stdio.h>
int main()
{
    int arr[]={1,2,32,4,5,7,8,88,99,0,-1,92};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("the initial size of array is %d\n",size);
    int max=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int min=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("the maximum element in the array is %d\n",max);
    printf("the minimum element in the array is %d\n",min);
    return 0;
}