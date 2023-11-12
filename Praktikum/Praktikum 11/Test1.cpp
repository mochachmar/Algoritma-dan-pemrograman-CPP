// cout << "222362 Moch Achmar" << endl;
#include <iostream>
#include <stdlib.h>
#define phi 3.14

using namespace std;

float r, L, K;
int pilihan;
char lagi;

void luas() {
	L = phi * r * r;
	cout << "Luas Lingkaran = " << L;
}

void keliling() {
	K = 2 * phi * r;
	cout << "Keliling Lingkaran = " << K;
}

int main() {
	do {
		system("cls");
		cout << "Ketik Nilai jari - jari Lingkaran : ";
		cin >> r;

		cout << "\nPILIHAN OPERASI" << endl;
		cout << "1. Luas Lingkaran" << endl;
		cout << "2. Keliling Lingkaran" << endl;

		cout << "Ketik pilihan anda : ";
		cin >> pilihan;

		if (pilihan == 1)
		{
			luas();
		} else {
			keliling();
		}

		cout << "\nMASIH ADA DATA [Y/T] : ";
		cin >> lagi;
	} while ((lagi == 'y') || (lagi == 'Y'));

	cin.get();
	return 0;
}