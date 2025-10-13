#include<stdio.h>

void main(){
	int A[50][50];
	int B[50][50];
	int row, col;
	printf("Enter the number of rows and columns: ");
	scanf("%d %d", &row, &col);

	printf("Matrix A\n");
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("Enter element at %d %d: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	
	printf("Matrix B\n");
        for(int i = 0; i < row; i++){
                for(int j = 0; j < col; j++){
                        printf("Enter element at %d %d: ", i, j);
                        scanf("%d", &B[i][j]);
                }
        }
	
	printf("Matrix SUM\n");
        for(int i = 0; i < row; i++){
                for(int j = 0; j < col; j++){
                        printf("%d ", A[i][j] + B[i][j]);
                }
	printf("\n");
        }

}
