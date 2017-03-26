#include <iostream>

using namespace std;

int main(void) {
	int number;
	int max = -100000;
	int counter = 0;

	cout << "Enter a number (Enter \"-1\" to exit):\n";

	for( ; ; ){
		cin >> number;

		if(number == -1){
			break;
		}

		if(number > max){
			max = number;
		}

		counter++;
	}

	if(counter){
		cout << "The largest number is " << max << endl;
	}
	else {
		cout << "Are you kidding? You haven't entered any number!" << endl;
	}

	return 0;
}
