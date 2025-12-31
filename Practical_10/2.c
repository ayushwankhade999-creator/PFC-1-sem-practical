#include <stdio.h>
//Ayush Wankhade 
//10359
int main() {
    int arr[10][10];
    int n, i, j;
    int sum = 0;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        sum = sum + arr[i][i];   // main diagonal
    }
    printf("Sum of diagonal elements = %d", sum);
     return 0;
}

/*
Sample Input:
Enter order of square matrix: 3
Enter elements of the matrix:
1 2 3
4 5 6
7 8 9

Output:
Sum of diagonal elements = 15
*/