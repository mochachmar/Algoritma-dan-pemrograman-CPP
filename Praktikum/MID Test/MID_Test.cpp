// No 4
#include <iostream>

using namespace std;

int bil1, bil2, hasil;
char operasi;

int main(){
	cout << "Bilangan 1 : ";
	cin >> bil1;
	cout << "Bilangan 2 : ";
	cin >> bil2;

	cout << "Operasi [+, -, /, *] : ";
	cin >> operasi;

	if (operasi == '+')
	{
		hasil = bil1 + bil2;
		cout << bil1 << operasi << bil2 << " = " << hasil << endl;
	} else if (operasi == '-')
	{
		hasil = bil1 - bil2;
		cout << bil1 << operasi << bil2 << " = " << hasil << endl;
	} else if (operasi == '/') {
		hasil = bil1 / bil2;
		cout << bil1 << operasi << bil2 << " = " << hasil << endl;
	} else if (operasi == '*')
	{
		hasil = bil1 * bil2;
		cout << bil1 << operasi << bil2 << " = " << hasil << endl;
	} else {
		cout << "Masukkan perintah yang ada!" << endl;
	}

	cin.get();
	return 0;
}
