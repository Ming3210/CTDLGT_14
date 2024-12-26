#include <stdio.h>

void searchElement(int arr[],int n, int value){
	for(int i = 0;i< n;i++){
		if(arr[i] == value){
			printf("Phat hien gia tri o index thu %d",i);
			return;
		}
	}
	printf("\nKo phat hien phan tu da tim");
	
}

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

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArr(int arr[],int n){
	printf("\n");
	for(int i = 0;i<n;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}
}

int main(){
	int n,value,result;
	printf("Nhap n: ");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap cac gia tri cua mang\n");
	for(int i =0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Nhap gia tri can tim: ");
	scanf("%d",&value);
	searchElement(arr,n,value);
	insertionSort(arr,n);
	printArr(arr,n);
	
	printf("Nhap gia tri can tim: ");
	scanf("%d",&value);
	int size = sizeof(arr)/sizeof(arr[0]);
	result =  binarySearch(arr,size,value);
	if(result != -1){
		printf("Tim thay phan tu o index %d",result);
	}else{
		printf("Ko tim thay phan tu");
	}

	
	return 0;
}
