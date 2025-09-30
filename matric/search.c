#include<stdio.h>
#include<stdbool.h>
#define MAX 100

bool search(int arr[MAX][MAX], int rows, int cols, int target) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}
int main ()
{
    int arr[MAX][MAX], rows, cols, target;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the target element to search: ");
    scanf("%d", &target);
    if (search(arr, rows, cols, target)) {
        printf("Element found in the matrix.\n");
    } else {
        printf("Element not found in the matrix.\n");
    }
    return 0;
}