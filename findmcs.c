#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int* fmcs(int* a,int low,int mid,int high){
	int* result = (int*)calloc(3,sizeof(int));
	int lsum = -INT_MAX; int mleft;
	int rsum = -INT_MAX; int mright;
	int sum = 0,i,j;
	for(i=mid; i>=low; i--){
		sum+=a[i];
		if(sum > lsum){
			lsum = sum;
			mleft = i;
		}
	}
	sum = 0;
	for(j=mid+1; j<=high; j++){
		sum+=a[j];
		if(sum > rsum){
			rsum = sum;
			mright = j;
		}
	}
	result[0] = mleft;
	result[1] = mright;
	result[2] = lsum + rsum;
	return result;
}
int* findmaxsubarray(int*a, int low,int high){
	int* result = (int*)calloc(3,sizeof(int));
	if(high == low){
		result[0] = low;
		result[1] = high;
		result[2] = a[low];
		return result;
	}else{
		int mid = (low + high)/2;
		int* dl = findmaxsubarray(a,low,mid);
		int* dr = findmaxsubarray(a,mid + 1, high);
		int* c = fmcs(a,low,mid,high);
		if((dl[2]>=dr[2]) && (dl[2]>=c[2])){
			return dl;
		}else if((dr[2]>=dl[2]) && (dr[2]>=c[2])){
			return dr;
		}else{
			return c;
		}
	}
}
void printArray(int* a, int low, int mid, int high){
	int i;
	for(i=mid; i<low; i++){
		printf("%d\t", a[i]);
	}
	printf("\n");
}
int main(int* argc, char**argv){
	int arr[] = {2,-3,8,7,9,4,5,-7,10};
	int len = sizeof(arr)/sizeof(arr[0]);

	int low  = 0;
	int high = len-1;
	int* result = findmaxsubarray(arr, low, high);
	printf("maximum subarray = %d\n", result[2]);
	return 0;
}
