#include<stdio.h>
int main()
{
    int arr[]={3,1,4,3,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("the initial size of array is %d\n",size);
    int rep_num,miss_num;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                rep_num=arr[i];
            }
        }
    }
    for(int i=1;i<=size;i++)
    {
        int flag=0;
        for(int j=0;j<size;j++)
        {
            if(arr[j]==i)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            miss_num=i;
            break;
        }
    }
    printf("the repeating number is %d\n",rep_num);
    printf("the missing number is %d\n",miss_num);  
    return 0;

}