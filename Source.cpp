#include <iostream>
using namespace std;

int main() {
		
	int x, i, sum = 0, j = 0, d = 0;
	long long sred;
	cout << "Please, enter the value: ";
	cin >> x;
	
	
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