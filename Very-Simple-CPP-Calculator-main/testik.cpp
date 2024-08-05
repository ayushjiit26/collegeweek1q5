#include <iostream>
using namespace std;

int main () {

	float a;
	float b;

	cout << "input 1: ";
	cin >> a;
	cout << a << endl;
	cout << "input 2: ";
	cin >> b;
	cout << b << endl;

	float sum = a+b;
	float multiply = a*b;
	float divide = a/b;
	float minus = a-b;

	cout << "+: " << sum << endl;
	cout << "x: " << multiply << endl;
	cout << "/: " << divide << endl;
	cout << "-: " << minus << endl;

		return 0;

}