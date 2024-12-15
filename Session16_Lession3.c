#include <stdio.h>

void tinhTong(int a, int b, int *ketQua) {
    *ketQua = a + b;
}

int main() {
    int so1, so2, tong;

    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);

    printf("Nhap so thu hai: ");
    scanf("%d", &so2);

    tinhTong(so1, so2, &tong);

    printf("Tong cua hai so la: %d\n", tong);

    return 0;
}