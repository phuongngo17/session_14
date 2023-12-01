#include <stdio.h>

int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    printf("Nhap gia tri cua a: ");
    scanf("%d", &a);
    printf("Nhap gia tri cua b: ");
    scanf("%d", &b);

    printf("Gia tri cua a va b truoc khi doi cho la %d va %d\n", a, b);
    swap(&a, &b);
    
    printf("Gia tri cua a va b sau khi doi cho la %d va %d\n", a, b);
    
    printf("Hieu cua a va b truoc khi doi cho la %d\n", a - b);
    swap(&a, &b);
    
    printf("Hieu cua a va b sau khi doi cho la %d\n", a - b);
    
    return 0;
}

