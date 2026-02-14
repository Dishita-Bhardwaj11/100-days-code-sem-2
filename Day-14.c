// Write a program to check whether a given square matrix is an Identity Matrix. An identity matrix is a square matrix in which all diagonal elements are 1 and all non-diagonal elements are 0.
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter matrix elements:\n");

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isIdentity = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j && matrix[i][j] != 1)
                isIdentity = 0;
            if(i != j && matrix[i][j] != 0)
                isIdentity = 0;
        }
    }

    if(isIdentity)
        printf("It is an Identity Matrix.\n");
    else
        printf("It is NOT an Identity Matrix.\n");

    return 0;
}
