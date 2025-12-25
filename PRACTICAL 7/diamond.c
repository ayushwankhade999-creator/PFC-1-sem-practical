#include <stdio.h>
int main() {
    // Ayush Wankhade
    // 10359
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    
    for(int i=1; i<=n; i++) {
        for(int j=i; j<n; j++) printf(" ");
        for(int j=1; j<=2*i-1; j++) printf("*");
        printf("\n");
    }
    
    for(int i=n-1; i>=1; i--) {
        for(int j=i; j<n; j++) printf(" ");
        for(int j=1; j<=2*i-1; j++) printf("*");
        printf("\n");
    }
    return 0;
}
// Output 
// ; if ($?) { gcc Diamond.c -o Diamond } ; if ($?) { .\Diamond }
// Enter n: 7
//       *
//      ***
//     *****
//    *******
//   *********
//  ***********
// *************
//  ***********
//   *********
//    *******
//     *****
//      ***
//       *