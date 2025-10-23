#include<stdio.h>
int maxsumarray(int*a, int len){
	int msf = 0, meh = 0;
	int i,temp;
	for(i=0; i<len; i++){
		temp = meh + a[i];
		meh = (temp>0) ? temp: 0;
		msf = (meh>msf) ? meh: msf;
	}
	return msf;
}
void printarray(int*a, int len){
	int i;
	for(i=0; i<len; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main(int argc, char**argv){
	int arr[] = {13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("given array: ");
	printarray(arr,len);
	int max_sum=maxsumarray(arr,len);
	printf("the max sum of subarray is %d\n",max_sum);
	return 0;
}
