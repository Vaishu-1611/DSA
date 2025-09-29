#include<stdio.h>
int main()
{
    int arr[]={1,34,56,23,89};  
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("the initial size of array is %d\n",size);
    int sum=0;
    int product=1;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
        product=product*arr[i];
    }
    printf("the sum of the array elements is %d\n",sum);
    printf("the product of the array elements is %d\n",product);
    return 0;
}