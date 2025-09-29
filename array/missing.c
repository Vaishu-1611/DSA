#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,6,7,8,9,10,11,12,13,14,15,17,19,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("the initial size of array is %d\n",size);
    for (int i=1;i<=20;i++)
    {
        if(arr[i-1]!=i)
        {
            printf("the missing number is %d\n",i);
            break;
        }
    }
    return 0;
}