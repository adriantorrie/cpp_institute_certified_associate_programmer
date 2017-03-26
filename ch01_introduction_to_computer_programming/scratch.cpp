/*
    Author: Adrian Torrie
    Date:   2017-03-26

    Purpose:
        * Write some examples of using cout/cin
        * Write some examples of hex, octal, scientific notation representations
        * Write some examples for prefix vs postfix increments

    Usage:
        * Build and run this file
        * Enter a value when asked
        * Press ENTER to close the console window
*/
#include <iostream>

using namespace std;

int main(){
    /*
        Show cout and cin usage
    */
    int a;

    // cout
    cout << "-------------------------------------------------------------\n\n";
    cout << "This is a string" << endl;
    cout << "This is a string with two escaped newlines\n\n";
    cout << "-------------------------------------------------------------\n\n";

    // cin
    cout << "Enter a value for the variable: 'a'\n";
    cin >> a;
    cout << "You entered the value:\n" << a << "\n\n";
    cout << "-------------------------------------------------------------\n\n";

    /*
        Show oct, hex and scientific notation
    */
    int b, c;
    float d;

    b = 0x10;
    c = 010;
    d = -1e-2;

    cout << "(hex) ->\tb = 0x10 = " << b << endl;
    cout << "(oct) ->\tc = 010 = " << c << endl;
    cout << "(scientific) ->\td = -1e-2 = " << d << "\n\n" ;
    cout << "-------------------------------------------------------------\n\n";

    /*
        Show prefix vs. postfix
        The below declarations can also be declared as:
                -> int i = 3, j = ++i, k = ++i;
    */
    // prefix
    int i = 3;
    int j = ++i;
    int k = ++j;

    cout << "Prefix example:\n";
    cout << "int i = 3, j = ++i, k = ++j;\n";
    cout << "i << j << k" << endl;
    cout << i << j << k << "\n\n";
    cout << "-------------------------------------------------------------\n\n";

    // postfix
    int m = 3;
    int n = m++;
    int p = n++;

    cout << "Postfix example:\n";
    cout << "int m = 3, n = m++, p = n++;\n";
    cout << "m << n << p" << endl;
    cout << m << n << p << "\n\n";
    cout << "-------------------------------------------------------------\n\n";
}
