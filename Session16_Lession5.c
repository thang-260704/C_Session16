#include<stdio.h>
void update(int number[],int giatri, int vitri){
	if(vitri>=0){
		number[vitri]=giatri;
	} else{
		printf("Vi tri khong hop le");
	}
}
int main(){
	int arr[]={14,2,22,7,1,27,9,6};
	printf("Gia tri cua mang ban dau la : ");
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		printf("%d\t",arr[i]);
	}
	int a;
	printf("\nMoi ban nhap gia tri muon thay doi : ");
	scanf("%d", &a);
	int index;
	printf("\nMoi ban nhap vi tri cho gia tri muon thay doi : ");
	scanf("%d", &index);
	update(arr,a,index);
	printf("\nGia tri cua mang sau khi thay doi la : ");
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
