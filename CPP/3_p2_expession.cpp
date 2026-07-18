#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    
    if (s == '+') {
        if (a + b == c) {
            cout << "Yes" << endl;
        } else {
            cout << a + b << endl;
        }
    } else if (s == '-') {
        if (a - b == c) {
            cout << "Yes" << endl;
        } else {
            cout << a - b << endl;
        }
    } else if (s == '*') {
        if (a * b == c) {
            cout << "Yes" << endl;
        } else {
            cout << a * b << endl;
        }
    }
    
    return 0;
}

// +------------------+
// | alaminonline.com |
// +------------------+
// W. Mathematical Expression
// time limit per test0.25 seconds
// memory limit per test256 MB
// Given a mathematical expression. The expression will be one of the following expressions:

// A + B = C, A - B = C and A * B = C

// where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign

// Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.

// Input
// Only one line containing the expression: A, S, B, Q, C respectively (0 ≤ A, B ≤ 100,  - 105 ≤ C ≤ 105) and S can be ('+', '-', '*') without the quotation.

// Output
// Output either "Yes" (without the quotation) or the right answer depending on the statement.

// Examples
// InputCopy
// 5 + 10 = 15
// OutputCopy
// Yes
// InputCopy
// 3 - 1 = 2
// OutputCopy
// Yes
// InputCopy
// 2 * 10 = 19
// OutputCopy
// 20