#include<stdio.h>
int removeDuplicate(int arr[],int size)
{
    int i,j,k;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<size-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                size--;
            }
            else
            {
                j++;
            }
        }
    }
    return size;
}
int main()
{
    int arr[]={1,2,2,3,4,5,5,6,3,7,8,8,9,1,};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("the initial size of array is %d\n",size);
    int newsize=removeDuplicate(arr,size);
    for(int i=0;i<newsize-1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}