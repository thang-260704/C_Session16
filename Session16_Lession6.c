#include<stdio.h>

int main(){
	int arr[]={14,2,22,7,1,27,9,6};
	int index;
	printf("Moi ban nhap gia tri muon tim kiem : ");
	scanf("%d", &index);
	int a=0;
	int *arrPtr=arr;
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		if(*(arrPtr+i)==index){
			printf("Gia tri ban muon tim nam o vi tri : %d",i);
			a=1;
		}
	}
	if(a==0){
		printf("Gia tri ban muon tim kiem khong ton tai trong mang ");
	}
	return 0;
}
