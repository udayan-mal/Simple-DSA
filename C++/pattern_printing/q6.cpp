// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 
// C++ Program to print the inverted triangle pattern
#include <iostream>
using namespace std;

// function to print inverted triangle
void printInvTriangle(int n)
{

    // outer loop to go thruough every row
    for (int i = 0; i < n; i++) {

        // leading space counter
        int space = i;

        // inner loop to print space and star * in each row
        for (int j = 0; j < 2 * n - i - 1; j++) {

            // condition to check weather the star * or
            // whitespace is to be printed
            if (space) {
                cout << "  ";
                space--;
            }
            else {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

// driver code
int main()
{
    printInvTriangle(5);

    return 0;
}

//Inverted Triangle Pattern in C++