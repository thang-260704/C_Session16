#include <stdio.h>

int main() {
    int number = 10;
    int *ptr = &number;

    printf("Gia tri cua bien number: %d\n", number);
    printf("Đia chi cua bien number: %p\n", &number);
    printf("Gia tri cua bien number thong qua con tro: %d\n", *ptr);
    printf("Đia chi cua bien number thong qua con tro: %p\n", ptr);

    return 0;
}