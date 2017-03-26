#include <iostream>

using namespace std;

int main(void) {
    int pow = 1;

    for(int i = 0; i < 99999999999999; i += 1) {
        cout << "2 to the power of " << i << " is " << pow << endl;
        pow *= 2;

        // exit if overflowed
        if (pow < 0){
            break;
        }
    }

    return 0;
}
