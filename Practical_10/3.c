#include <stdio.h>
//Ayush Wankhade 
//10359
int main() {
    int arr[10][10];
    int rows, cols, i, j;
    int sum;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements of the 2D array:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i = 0; i < rows; i++) {
        sum = 0;
        for(j = 0; j < cols; j++) {
            sum = sum + arr[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }
    return 0;
}

/*
Sample Input:
Enter number of rows and columns: 2 3
Enter elements of the 2D array:
1 2 3
4 5 6

Output:
Sum of row 1 = 6
Sum of row 2 = 15
*/