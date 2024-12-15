#include<stdio.h>
void update(int number[],int size, int vitri){
	for(int i=vitri;i<size;i++){
		number[i]=number[i+1];
	}
}
int main(){
	int arr[]={14,2,22,7,1,27,9,6};
	int size=sizeof(arr)/sizeof(int);
	printf("Gia tri cua mang ban dau la : \n");
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		printf("%d\t",arr[i]);
	}
	int index;
	printf("\nMoi ban nhap vi tri can xoa : ");
	scanf("%d", &index);
	update(arr,size,index);
	printf("\nGia tri cua mang sau khi thay doi la : \n");
	for(int i=0;i<size-1;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
