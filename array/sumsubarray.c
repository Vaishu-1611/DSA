#include<stdio.h>
void subarray(int arr[],int size)
{
    int sum=0;
    printf("the subarrays are:\n");
    for (int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            for(int k=i;k<=j;k++)
            {
                printf("%d ",arr[k]);
            }
            printf("\n");
        }
    }
}
int main()
{
    int arr[]={1,2,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("the initial size of array is %d\n",size);
    subarray(arr,size);
    return 0;
}