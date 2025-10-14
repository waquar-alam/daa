#include<stdio.h>
void bubbleSort(int *a, int len){
	if(len == 1) return;
	int i, temp;
	for(i=1; i<len; i++){
		if(a[i] < a[i-1]){
			temp = a[i];
			a[i] = a[i-1];
			a[i-1] = temp;
		}
	}
	bubbleSort(a, len-1);
}
void printArray(int *a, int len){
	int i;
	for(i=0; i<len; i++){
		printf("%d\t", a[i]);
	}
	printf("\n");
}
int main(int argc, char** argv){
	int arr[] = {4,5,2,1,3};
	int len = sizeof(arr)/sizeof(arr[0]);

	printf("Unsorted Array: \n");
	printArray(arr, len);

	bubbleSort(arr, len);

	printf("Sorted Array: \n");
	printArray(arr, len);

	return 0;
}
