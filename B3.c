#include <stdio.h>

void bubbleSort(int arr[],int n){
	for(int i = 0;i<n-1;i++){
	int swapped = 0;
		for(int j = i+1;j<n-1-i;j++){
			if(arr[j]> arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swapped = 1;
			}
		}
		if(swapped != -1){
			break;
		}
	}
}

void printArr(int arr[],int n){
	printf("\n");
	for(int i = 0;i<n;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}
}

int main(){
	int n,value;
	printf("Nhap n: ");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap cac gia tri cua mang\n");
	for(int i =0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr,n);
	printArr(arr,n);
	return 0;
}
