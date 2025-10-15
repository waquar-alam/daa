#include<stdio.h>
void printArray(int, int, int(*)[]);
void mulArray(int, int, int, int(*)[], int(*)[], int(*)[]);
int main(int argc, char**argv){
	int td[3][4] = {{2,4,6,8},{1,3,9,5},{7,8,10,15}};
	int sd[4][3] = {{8,2,4},{3,2,6},{2,5,8},{1,3,6}};
	int result[3][3];
	int row1 = sizeof(td)/sizeof(td[0]);
	int col1 = sizeof(td[0])/sizeof(td[0][0]);
	int row2 = sizeof(sd)/sizeof(sd[0]);
	int col2 = sizeof(sd[0])/sizeof(sd[0][0]);
	printf("first matrix(3x4): \n");
	printArray(row1, col1, td);
	printf("\nSecond matrix(4x3): \n");
	printArray(row2, col2, sd);
	mulArray(row1, col1, col2, td, sd, result);
	printf("\nMultiplication of two matrix(3x3): \n");
	printArray(row1,col2,result);
	return 0;
}
void printArray(int row, int col, int a[row][col]){
	int i,j;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
void mulArray(int row1, int col1, int col2, int a[row1][col1], int b[col1][col2], int c[row1][col2]){
	int i, j, k;
	for(i=0; i<row1; i++){
		for(j=0; j<col2; j++){
			c[i][j] = 0;
			for(k=0; k<col1; k++){
				c[i][j] = c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
}
