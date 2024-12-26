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

void printArr(int arr[],int n){
	printf("/n");
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
	printf("Nhap gia tri can tim: ");
	scanf("%d",&value);
	searchElement(arr,n,value);
	printArr(arr,n);
	
	return 0;
}
