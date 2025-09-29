#include<stdio.h>
void selection_sort(int arr[], int n) 
{
    int i, j, min_idx, temp;
    for (i = 0; i < n-1; i++) 
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        // Swap the found minimum element with the first element
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
void search(int arr[], int n, int x) 
{
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == x)
        printf("Element %d found at index %d\n", x, i);
    }
    return ;
}
int main()
 {
    int arr[] = {64,2,3,5,2,7,4,2,22, 25,2,12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("the size of array is %d\n",n);
    selection_sort(arr, n);
    printf("Sorted array: \n");
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    int x=2;
    search(arr, n, x);
    return 0;
}