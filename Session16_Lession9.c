#include<stdio.h>
void update(int number[],int giatri, int vitri, int size){
	for(int i=size;i>=vitri;i--){
		number[i]=number[i-1];
	}
	number[vitri]=giatri;
	if(vitri<0){
		printf("Vi tri khong hop le");
	}
}
int main(){
	int arr[]={14,2,22,7,1,27,9,6};
	int size=sizeof(arr)/sizeof(int);
	printf("Gia tri cua mang ban dau la : ");
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		printf("%d\t",arr[i]);
	}
	int a;
	printf("\nMoi ban nhap gia tri muon them vao : ");
	scanf("%d", &a);
	int index;
	printf("\nMoi ban nhap vi tri cho gia tri muon them vao : ");
	scanf("%d", &index);
	update(arr,a,index,size);
	printf("\nGia tri cua mang sau khi thay doi la : ");
	for(int i=0;i<=sizeof(arr)/sizeof(int);i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
