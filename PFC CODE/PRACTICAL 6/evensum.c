#include <stdio.h>
int main() {
    // Ayush Wankhade
    // 10359
    int pin, attempt = 0, correctPin = 1035;

    while(attempt < 3) {
        printf("Enter ATM Pin: ");
        scanf("%d", &pin);

        if(pin == correctPin) {
            printf("Access Granted!\n");
            return 0;
        } else {
            printf("Incorrect Pin. Try again.\n");
        }
        attempt++;
    }
    printf("Card Blocked!\n");
    return 0;
}