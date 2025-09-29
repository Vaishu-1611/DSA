#include<stdio.h>
int dup(int arr[],int size,int k)
{
    for (int i=0;i<size;i++)
    {
        for(int c=1;c<=k && (i+c)<size;c++)
        {
            int j=i+c;
            if(arr[i]==arr[j])
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[]={1,2,3,4,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=5;
    printf("the initial size of array is %d\n",size);
    int ans=dup(arr,size,k);
    if(ans==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}