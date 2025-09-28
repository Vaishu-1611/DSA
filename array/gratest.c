#include<stdio.h>
int main ()
{
    int arr[100]={1,2,3,4,5,6,7,8,9,10};
    int greatest=arr[0];
    for(int i=1;i<10;i++)
    {
        if(arr[i]>greatest)
        {
            greatest=arr[i];
        }
    }
    printf("Greatest element in the array is: %d\n",greatest);
    return 0;
}