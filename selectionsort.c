#include<stdio.h>
void swap(int*, int*);
void selectionsort(int *a, int len){
	int i,j,min;
	for(i=0; i<len-1; i++){
		min=i;
		for(j=i+1; j<len; j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		swap(&a[i], &a[min]);
	}
}
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void printArray(int *a, int len){
	int i;
	for(i=0; i<len; i++){
		printf("%d\t", a[i]);
	}
	printf("\n");
}
int main(int argc,char** argv){
	int arr[]= {2,4,1,9,6};
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("Unsorted Array: \n");
	printArray(arr,len);
	printf("Sorted Array: \n");
	selectionsort(arr,len);
	printArray(arr,len);
	return 0;
}
