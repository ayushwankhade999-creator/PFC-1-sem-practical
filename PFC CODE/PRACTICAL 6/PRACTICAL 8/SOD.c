#include <stdio.h>
int sumOfDigits(int n) {
    //Ayush WAnkhade
    //10359
    int sum = 0;
    while(n > 0) {
        sum = sum+ n % 10;
        n =n/ 10;
    }
    return sum;
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Sum of digits = %d\n", sumOfDigits(num));
    return 0;
}
