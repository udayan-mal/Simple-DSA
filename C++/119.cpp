// infix expression to postfix expression using stack ops

#include <bits/stdc++.h>
using namespace std;

char stac[100];
string dat;
int top = -1;
int priority(char c)
{
    // defining priority of operators
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

// stack operations
void push(char c)
{
    stac[++top] = c;
}
char pop()
{
    return stac[top--];
}
int main(){
    cout << "Enter the infix expression: ";
    cin >> dat;
    for (int i=0; i<dat.length(); i++)
    {
        // core logic for infix to postfix conversion
        if ((dat[i] >= 'a' && dat[i] <= 'z') || (dat[i] >= 'A' && dat[i] <= 'Z'))
            cout << dat[i];
        else if (dat[i]== '(')
            push(dat[i]);
        else if (dat[i] == ')')
        {
            // closing bracket encountered
            while (top != -1 && stac[top] != '(')
                cout << pop();
            if (top != -1)
                pop();
        }
        else
        {
            // operator encountered
            while (top != -1 && priority(stac[top]) >= priority(dat[i]))
                cout << pop();
            push(dat[i]);
        }
    }
}
