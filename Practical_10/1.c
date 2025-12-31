#include <stdio.h>
//Ayush Wankhade 
//10359
int main() {
    int arr[10][10];
    int rows, cols, i, j;
    int max, min;
     printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
     printf("Enter elements of the 2D array:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
      max = min = arr[0][0];
     for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(arr[i][j] > max)
                max = arr[i][j];
            if(arr[i][j] < min)
                min = arr[i][j];
        }
    }
     printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);
    return 0;
}

/*
Sample Input:
Enter number of rows and columns: 2 3
Enter elements of the 2D array:
1 5 3
8 2 6
Output:
Maximum element = 8
Minimum element = 1
*/