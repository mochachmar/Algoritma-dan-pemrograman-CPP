// Praktikum 12.3
#include <iostream>
#include <function.h>

using namespace std;

char lagi;
int pilihan;

void segitiga() {
	float a, t;
	cout << "Ketik Nilai Alas : ";
	cin >>  a;
	cout << "Ketik Nilai Tinggi : ";
	cin >>  t;

	cout << "Luas Segitiga : " << LS(a, t) << endl;
}

void persegipanjang() {
	float p, l;
	cout << "Ketik Nilai Panjang : ";
	cin >>  p;
	cout << "Ketik Nilai Lebar : ";
	cin >>  l;

	cout << "Luas PersegiPanjang : " << LP(p, l) << endl;
}

void selesai() {
	system("cls");
}

int main() {
	do {
    system("cls");
	while ((pilihan < 1) || (pilihan > 2)) {
		system("cls");
		cout << "\nMENU PILIHAN OPERASI" << endl;
		cout << "======================" << endl;
		cout << "1. MENGHITUNG LUAS SEGITIGA" << endl;
		cout << "2. MENGHITUNG LUAS PERSEGI PANJANG" << endl;

		cout << "Ketik pilihan anda : ";
		cin >> pilihan;
	}

	switch (pilihan) {
	case 1 :
		segitiga();
		break;
	case 2 :
		persegipanjang();
		break;
	default :
		selesai();
		break;
	}

	cout << "\nMASIH ADA DATA [Y/T] : ";
	cin >> lagi;

	} while ((lagi == 'y') || (lagi == 'Y'));

	cin.get();
	return 0;
}
