//          *           |           1           |           A
//        * * *         |         1 2 3         |         A B C
//      * * * * *       |       1 2 3 4 5       |       A B C D E
//    * * * * * * *     |     1 2 3 4 5 6 7     |     A B C D E F G
//  * * * * * * * * *   |   1 2 3 4 5 6 7 8 9   |   A B C D E F G H I
#include <stdio.h>

int main()
{
    int rows = 5;

    // This loop to print all rows
    for (int i = 0; i < rows; i++)
    {

        // Inner loop 1 to print white spaces for each row
        for (int j = 0; j < 2 * (rows - i) - 1; j++)
        {
            printf(" ");
        }

        // Inner loop 2 to print star (*) character for each row
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
//The Full Pyramid pattern looks similar to the Equilateral triangle. 
// We can see this as the combination of the Left Half and Right Half pyramids patterns. The following example demonstrates how to print this pattern using alphabets, numbers, or a star (*).