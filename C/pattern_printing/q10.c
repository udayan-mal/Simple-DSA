// 1          |   A
// 2 3        |   B C
// 4 5 6      |   D E F
// 7 8 9 10   |   G H I J

#include <stdio.h>

int main()
{
    int rows = 4;
    int n = 1;

    // outer loop to print all rows
    for (int i = 0; i < rows; i++)
    {

        // innter loop to print abphabet in each row
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", n++);
        }
        printf("\n");
    }
    return 0;
}
//In Floyd's Triangle pattern, instead of starting the sequence of the numbers from 1 in each row,
//  we print consecutive natural numbers.
//  We can also print this pattern for alphabet sequence