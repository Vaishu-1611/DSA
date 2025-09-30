#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int determinant(int matrix[MAX][MAX], int n) {
    int det = 0;
    if (n == 1) {
        return matrix[0][0];
    }
    if (n == 2) {
        return (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]);
    }
    int temp[MAX][MAX];
    for (int x = 0; x < n; x++) {
        int subi = 0;
        for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
                if (j == x)
                    continue;
                temp[subi][subj] = matrix[i][j];
                subj++;
            }
            subi++;
        }
        det += (x % 2 == 0 ? 1 : -1) * matrix[0][x] * determinant(temp, n - 1);
    }
    return det;
}

int main() {
    int matrix[MAX][MAX], n;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int det = determinant(matrix, n);
    printf("Determinant of the matrix is: %d\n", det);
    return 0;
}