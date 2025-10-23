#include<stdio.h>
int maxsubarray(int*a, int len){
	int msf = 0, sum = 0;
	int i,j;
	for(i=0; i<len; i++){
		sum = 0;
		for(j=i; j<len; j++){
			sum += a[j];
			msf = (sum > msf) ? sum:msf;
		}
	}
	return msf;
}
void printarray(int*a, int len){
	int i;
	for(i=0; i<len; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
int main(int argc, char**argv){
	int arr [] = {13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("original Araay: \n");
	int result = maxsubarray(arr, len);
	printf("maximum subarray = %d\n", result);
	return 0;
}

