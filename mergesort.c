#include<stdio.h>
#include<limits.h>
void merge(int*a , int si, int mid, int li){
	int n1 = mid-si+1;
	int n2 = li-mid;
	int left[n1+1];
	int right[n2+1];
	int i,j,k;
	for(i=1; i<=n1; i++){
		left[i-1] = a[si+i-1];
	}
	for(j=1; j<=n2; j++){
		right[j-1] = a[mid+j];
	}
	left[n1] = INT_MAX;
	right[n2] = INT_MAX;
	i=0;
	j=0;
	for(k=si; k<=li; k++){
		if(left[i] <= right[j]){
			a[k] = left[i];
			i++;
		}else{
			a[k] = right[j];
			j++;
		}
	}
}
void mergeSort(int* a, int si, int li){
	if(si<li){
		int mid = (si+li)/2;
		mergeSort(a, si, mid);
		mergeSort(a, mid+1, li);
		merge(a, si, mid, li);
	}
}
void printArray(int* a, int len){
	int i;
	for(i=0; i<len; i++){
		printf("%d\t", a[i]);
	}
	printf("\n");
}
int main(int argc, char** argv){
	int si, li;
	int arr[] = {7,4,5,32,8,6,1};
	int len = sizeof(arr)/sizeof(arr[0]);
	si = 0;
	li = len-1;
	printf("Unsorted Array: \n");
	printArray(arr, len);
	printf("Sorted Array: \n");
	mergeSort(arr, si , li);
	printArray(arr, len);
	return 0;
}
