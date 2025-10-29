// * * * * *   |   1 2 3 4 5   |   A B C D E 
// * * * *     |   1 2 3 4     |   A B C D
// * * *       |   1 2 3       |   A B C
// * *         |   1 2         |   A B
// *           |   1           |   A

#include <stdio.h>

int main()
{
    int rows = 5;

    // Outer loop to print all rows
    for (int i = 0; i < rows; i++)
    {

        // Inner loop to print the * in each row
        for (int j = 0; j < rows - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
//This pattern is the 180° flipped version of the Right Half Pyramid Pattern we discussed earlier.




