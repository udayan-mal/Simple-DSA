#include <iostream>
using namespace std;
int main() {
    int num;
    long factorial = 1;
    cout << "Enter an integer: ";
    cin >> num;
    for (int i = 1;i<= num;i++)
        factorial *= i;
    cout << "Factorial of "<<num<<" is " << factorial;
    return 0;
}