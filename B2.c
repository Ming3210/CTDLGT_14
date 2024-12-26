#include <stdio.h>

int binarySearch(int arr[],int size,int value){
	int left = 0;
	int right = size - 1;
	while(left <= right){
		int mid = (left+right)/2;
		if(arr[mid] == value){
			return mid;
		}else if(arr[mid] > value){
			right = mid-1;
		}else{
			left = mid +1;
		}
	}
	return -1;
}

int main(){
	int arr[] = {2,4,5,7,11,18,24,29,33,39,49,78,88,90,101,202,252,289,300,301};
	int size = sizeof(arr)/sizeof(arr[0]);
	int value,result;
	printf("Nhap gia tri can tim: ");
	scanf("%d",&value);
	
	result =  binarySearch(arr,size,value);
	if(result != -1){
		printf("Tim thay phan tu o index %d",result);
	}else{
		printf("Ko tim thay phan tu");
	}
	return 0;
}
