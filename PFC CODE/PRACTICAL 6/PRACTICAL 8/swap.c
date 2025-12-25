#include <stdio.h>
void swap(int *x, int *y) {
    //Ayush Wankhade
    //10359
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);
    printf("After swap: a=%d, b=%d\n", a, b);
    return 0;
}