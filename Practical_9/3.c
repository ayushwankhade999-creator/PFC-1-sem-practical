#include <stdio.h>
//Ayush Wankhade 
//10359
int main() {
    int arr[100], n, i;
    int sum = 0;
     printf("Enter number of elements: ");
    scanf("%d", &n);
     printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            sum = sum + arr[i];
        }
    }
    printf("Sum of even elements = %d", sum);
     return 0;
}

/*
Sample Input:
Enter number of elements: 6
Enter array elements:
1 2 3 4 5 6

Output:
Sum of even elements = 12
*/