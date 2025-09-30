#include<stdio.h>
#include<stdlib.h>
#define MAX 100

void mul(int A[][MAX], int B[][MAX], int C[][MAX], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int rowsA, colsA, rowsB, colsB;

    printf("Enter number of rows and columns for first matrix: ");
    scanf("%d %d", &rowsA, &colsA);

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter number of rows and columns for second matrix: ");
    scanf("%d %d", &rowsB, &colsB);

    if (colsA != rowsB) {
        printf("Matrix multiplication not possible with given dimensions.\n");
        return 1;
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    mul(A, B, C, rowsA, colsA, colsB);

    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}