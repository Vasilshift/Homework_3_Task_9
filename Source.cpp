#include <iostream>
using namespace std;

int main() {
		
	int x, i, j = 0, d = 0;
	float sum = 0;
	float sred;
	cout << "Please, enter the value: ";
	cin >> x;
	cout << endl;
	
	
	for (i = 0; x > 0; i++) {

		d = x % 10;
		sum = sum + d;
		x = x / 10;
		
		if (d == 0) {

			j = j + 1;

		}
		
		
	}

	sred = sum / i;

	cout << "Quantity digits of value = " << i << endl;
	cout << "Sum of digits = " << sum << endl;
	cout << "Arithmetical mean = " << sred << endl;
	cout << "Quantity number 0 in value = " << j << endl;



	return 0;
}