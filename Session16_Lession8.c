#include<stdio.h>

int main(){
	int index;
	printf("Moi ban nhap so luong phan tu : ");
	scanf("%d", &index);
	int arr[index];
	for(int i=0;i<index;i++){
		printf("Moi ban nhap gia tri thu %d : ",i);
		scanf("%d", &arr[i]);
	}
	printf("Gia tri cua inputString la : \n");
	int *inputString=arr;
	for(int i=0;i<index;i++){
		printf("%d\t",*(inputString + i));
	}
	int number[index];
	int *reverseString=number;
	for(int i=0;i<index;i++){
		*(reverseString+index-i-1)=*(inputString+i);
	}
	printf("\nGia tri cua reverseString la : \n");
	for(int i=0;i<index;i++){
		printf("%d\t",*(reverseString + i));
	}
	return 0;
}
