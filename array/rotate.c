#include<stdio.h>
void rotate(int arr[],int size,int d)
{
    int temp=arr[size-1];
    for(int i=0;i<d;i++)
    {
        int last=arr[size-1];
        for(int j=size-1;j>0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=last;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int d=2;
    printf("the initial size of array is %d\n",size);
    rotate(arr,size,d);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}