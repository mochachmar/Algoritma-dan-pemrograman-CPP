#include <iostream>

using namespace std;

int kodehari;
string hari;

int main() {
	cout << "Masukkan kode hari : ";
	cin >> kodehari;

	if (kodehari == 1)
	{
		cout << "Senin" << endl;
	} else if (kodehari == 2)
	{
		cout << "Selasa" << endl;
	} else if (kodehari == 3)
	{
		cout << "Rabu" << endl;
	} else if (kodehari == 4)
	{
		cout << "Kamis" << endl;
	} else if (kodehari == 5)
	{
		cout << "Jumat" << endl;
	} else if (kodehari == 6)
	{
		cout << "Sabtu" << endl;
	} else if (kodehari == 7)
	{
		cout << "Minggu" << endl;
	} else {
		cout << "Masukkan kode hari dengan benar!" << endl;
	}

	cin.get();
	return 0;
}