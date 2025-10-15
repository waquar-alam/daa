#include<stdio.h>
void SMMR(int i, int j, int a[j+1][j+1], int b[j+1][j+1], int c[j+1][j+1]){
	if((j-i)==0){
		c[i][j] = a[i][j]xb[i][j];
	}else{
		c[i][j] = SMMR(i, j/2, a,b,c)+SMMR(i/2+1, j,a,b,c);
		c[i][j+1] = SMMR(i, j/2+1, a,b,c)+SMMR(i/2+1, j/2+1, a,b,c);
		c[i+1][j] = SMMR(i+1/2, j/2, a,b,c)+SMMR(i+1/2, j/2+1, a,b,c);
		c[i+1][j+1] = SMMR(i+1/2, j/2+1, a,b,c)+SMMR(i+1/2, j,a,b,c);
	}
}
void SMMR(int i, int j, int(*)[]){
