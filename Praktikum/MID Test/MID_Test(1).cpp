#include <iostream>

using namespace std;

float celcius, fahrenheit, reamur;

int main() {
	cout << "Masukkan suhu dalam celsius : ";
	cin >> celcius;

	fahrenheit = (9.0/5.0 * celcius) + 32;

	reamur = celcius * (4.0/5.0);

	cout << "fahrenheit : " << fahrenheit << endl;
	cout << "reamur : " << reamur << endl;

	cin.get();
	return 0;
}