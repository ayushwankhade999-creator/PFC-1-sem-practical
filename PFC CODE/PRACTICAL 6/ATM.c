#include <stdio.h>
int main() {
    // Ayush Wankhade
    // 10359
    int n, sum = 0;
    printf("Enter limit: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) 
            continue; 
        sum = sum+i;
        
    }
    printf("Sum of even numbers = %d\n", sum);
    return 0;
}