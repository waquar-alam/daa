#include<stdio.h>
void insertionSort(int*a, int len){
	int i,j,key;
	for(j=1; j<len; j++){
		key = a[j];
		i = j-1;
		while(i>=0 && a[i]>key){
			a[i+1] = a[i];
			i--;
		}
		a[i+1]=key;
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
	int arr[] = {4,7,3,8,6,9,2,1};
	int length = sizeof(arr)/sizeof(arr[0]);
	printArray(arr,length);
	printf("Sorted Array:\n");
	insertionSort(arr,length);
	printArray(arr,length);
	return 0;
}
