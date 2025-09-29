#include<stdio.h>
int main()
{
    int arr[]={1,1,0,0,1,0,1,0,1,0,1,1,1,0,1,0,0,1,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("the initial size of array is %d\n",size);
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==1)
        {
            count++;
        }
    }
    printf("the number of 1's in the array is %d\n",count);
     printf("the number of 0's in the array is %d\n",size-count);

    return 0;
}