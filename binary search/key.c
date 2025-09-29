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
int binarySearch(int arr[], int size, int key) {
    int start = 0, end = size - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2; // To avoid potential overflow
        if (arr[mid] == key) {
            return mid; // Key found
        } else if (arr[mid] < key) {
            start = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
    }
    return -1; // Key not found
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
    int key=25;
    int result = binarySearch(arr, n, key);
    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in array\n", key);
    }
    
    return 0;
}