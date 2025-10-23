#include<stdio.h>
void bubblesort(int* a, int len){
	int flag = 0;
	int i,j,temp;
	for(i=1; i<len; i++){
		flag = 0;
		for(j=1; j<len-i+1; j++){
		if(a[j-1] > a[j]){
			flag++;
			temp = a[j-1];
			a[j-1] = a[j];
			a[j] = temp;
		}
	}
	if(flag==0) break;
	}
}
void printArray(int*a, int len){
	int i;
	for(i=0; i<len; i++){
		printf("%d\t", a[i]);
	}
	printf("\n");
}
int main(int argc, char**argv){
	int arr[] = {4,7,8,6,9,2,1};
	int length = sizeof(arr)/sizeof(arr[0]);
	printArray(arr, length);
	printf("Sorted Array: \n");
	bubblesort(arr, length);
	printArray(arr, length);
	return 0;
}
