#include <stdio.h>
//Ayush Wankhade 
//10359
int main() {
    int arr[100], n, i;
    int max, min;
     printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     max = min = arr[0];
     for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
     printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}

/*
Sample Input:
Enter number of elements: 5
Enter array elements:
10 25 5 40 15

Output:
Maximum element = 40
Minimum element = 5
*/