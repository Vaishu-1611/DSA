#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void transpose(int arr[MAX][MAX], int transposed[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = arr[i][j];
        }
    }
    return;
}

int main()
{
    int arr[MAX][MAX], transposed[MAX][MAX];
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Original matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    transpose(arr, transposed, rows, cols);
    printf("Transposed matrix:\n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++) 
        {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
    return 0;
}