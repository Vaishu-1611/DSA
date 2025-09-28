#include<stdio.h>
int isSorted(int arr[], int n) 
{
    int result;
    for(int i = 1; i < n; i++) 
    {
        if(arr[i-1] < arr[i]) 
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int result;
    int arr[100]={1,2,3,4,5,6,7,8,6,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    result = isSorted(arr, size);
    if( result == 0)
    {
        printf("The array is sorted in ascending order.\n");
    } 
    else 
    {
        printf("The array is not sorted in ascending order.\n");
    }
    return 0;
}