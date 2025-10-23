#include<stdio.h>
int binarysearch(int* a, int left, int right, int data){
	int mid;
	while(left <= right){
	mid = (left+right)/2;
	if(data == a[mid]){
		return mid;
	}else if(data < a[mid]){
		right = mid-1;
	}else{
		left = mid+1;
		}
	}
	return -1;
}
int main(int argc, char**argv){
	int left , right , data;
	int arr[] = {2,4,6,8,10,12,14,16,18,20};
	int len = sizeof(arr)/sizeof(arr[0]);
	left = 0;
	right = len-1;
	printf("enter data to be searched: \n");
	scanf("%d", &data);
	int result = binarysearch(arr, left, right, data);
	if(result == -1) printf("element not found\n");
	else printf("element found at %d\n", result);
	return 0;
}
