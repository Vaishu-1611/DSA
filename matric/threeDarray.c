#include<stdio.h>
int main()
{
    int l,m,n;
    printf("Enter the number of layers, rows and columns: ");
    scanf("%d %d %d",&l,&m,&n);
    int arr[l][m][n];
    printf("Enter the elements of the 3D array: \n");
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<n;k++)
            {
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    printf("The 3D array is: \n");
    for(int i=0;i<l;i++)
    {
        printf("Layer %d:\n",i+1);
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<n;k++)
            {
                printf("%d ",arr[i][j][k]);
            }
            printf("\n");
        }
    }
    return 0;
}