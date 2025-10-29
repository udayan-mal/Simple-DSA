//     1 
//    1 1 
//   1 2 1 
//  1 3 3 1 
// 1 4 6 4 1 
//pascal triangle
#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {

        // Inner loop 1 for leading 
        // white spaces
        for (int j = 0; j < rows - i; j++) 
            printf(" ");
        
        // coefficient
        int C = 1; 

        // Inner loop 2 for 
        // printing numbers
        for (int k = 1; k <= i; k++) {
            printf("%d ", C);
            C = C * (i - k) / k;
        }
        printf("\n");
    }
    return 0;
}
//A Pascal's Triangle is a triangular array of binomial coefficients 
// where the nth row contains the binomial coefficients 
// nC0, nC1, nC2, ……. nCn. 
// The following example demonstrates one of the methods using which we can print Pascal's Triangle Pattern.