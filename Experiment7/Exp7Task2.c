/*Aim:WAP to calculate sum of two matrix.

Name: Jeevan Poojary
UIN: 241A028
Class: AI & DS
Roll no: 24
*/
#include<stdio.h>

int main(){
    int arr1[50][50], brr1[50][50], crr1[50][50], i, j, n;

    printf("\n\nAddition of two Matrices:\n");
    printf("------------------------\n");
    printf("Input the size of the square matrix: ");
    scanf("%d", &n);

    printf("Input elements in the first matrix:\n");
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            printf("element-[%d],[%d]:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Input elements in the second matrix:\n");
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            printf("element-[%d],[%d]:",i,j);
            scanf("%d",&brr1[i][j]);
        }
    }

    for (i=0; i<n; i++)
        for (j=0;j<n; j++)
            crr1[i][j] = arr1[i][j] + brr1[i][j];

    printf("\nThe Addition of two matrix is:\n");
    for (i=0; i<n; i++){
        printf("\n");
        for (j=0; j<n; j++){
            printf("%d\t",crr1[i][j]);
        }

    return 0;
    }
}
