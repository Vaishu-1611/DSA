#include<stdio.h>
#include<stdbool.h>
bool sumof2(int arr[],int size,int sum)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                printf("the pair is (%d,%d)\n",arr[i],arr[j]);
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[]={10,15,3,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=16;
    printf("the initial size of array is %d\n",size);
    bool ans=sumof2(arr,size,sum);
    if(ans==true)
    {
        printf("the pair exists");
    }
    else
    {
        printf("the pair does not exist");
    }
    return 0;
}