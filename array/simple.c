#include<stdio.h>
void printArray(int m, int n, int arr[100][100])
{
    for(int i = 0; i < m; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int m, n;
    int arr[100][100];
    printf("Enter the number of rows(m) and columns(n): ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < m; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The array is:\n");
    printArray(m, n, arr);
    return 0;
}