#include<stdio.h>
void sapxep(int number[],int size){
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
		if(number[j]>number[j+1]){
			int temp;
			temp=number[j];
			number[j]=number[j+1];
			number[j+1]=temp;
		}
		}
	}
}
int main(){
	int arr[]={14,2,22,7,1,27,9,6};
	int size=sizeof(arr)/sizeof(int);
	printf("Gia tri cua mang truoc khi sap xep la : ");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	sapxep(arr,size);
	printf("\nGia tri cua mang sau khi sap xep la : ");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
