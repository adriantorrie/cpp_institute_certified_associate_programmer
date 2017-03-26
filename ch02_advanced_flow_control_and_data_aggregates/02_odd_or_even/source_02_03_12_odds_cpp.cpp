/* program reads a sequence of numbers and counts how many numbers
is even and how many is odd;
program terminates when a zero is entered */

#include <iostream>

using namespace std;

int main(void) {
    /* we will count the numbers here */
    int Evens = 0, Odds = 0;

    /* we will store the incoming numbers here */
    int Number;

    /* read first number */
    cout << "Enter some numbers (Enter \"0\" to exit):\n";
    cin >> Number;

    /* 0 terminates execution */
    while(Number != 0) {
        /* check if the number is odd */
        if(Number % 2 == 1){
            /* increase „odd” counter */
            Odds++;
        }
        else{
            /* increase „even” counter */
            Evens++;
        }

        /* read next number */
        cin >> Number;
    }

    /* print results */
    cout << "Even numbers: " << Evens << endl;
    cout << "Odd numbers: " << Odds << endl;

    return 0;
}
