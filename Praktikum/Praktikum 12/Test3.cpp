// Praktikum 12.4
#include <iostream>
#include <function.h>

using namespace std;

char lagi = 'Y';
int pilihan;

void segitiga() {
	float a, t;
	cout << "Ketik Nilai Alas : ";
	cin >> a;
	cout << "Ketik Nilai Tinggi : ";
	cin >> t;
	cout << "Luas Segitiga : " << LS(a, t);
}

void persegipanjang() {
	float p, l;
	cout << "Ketik Nilai Panjang : ";
	cin >>  p;
	cout << "Ketik Nilai Lebar : ";
	cin >>  l;
	cout << "Luas PersegiPanjang : " << LP(p, l);
}

void lingkaran() {
	float r;
	cout << "Ketik Jari - Jari Lingkaran : ";
	cin >> r;
	cout << "Luas Lingkaran : " << LL(r) << endl;
	cout << "Keliling Lingkaran : " << KL(r);
}

void selesai() {
	system("cls");
}

int main() {
	do {
	while ((pilihan < 1) || (pilihan > 3)) {
		system("cls");
		cout << "\nMENU PILIHAN OPERASI" << endl;
		cout << "======================" << endl;
		cout << "1. MENGHITUNG LUAS SEGITIGA" << endl;
		cout << "2. MENGHITUNG LUAS PERSEGI PANJANG" << endl;
		cout << "3. MENGHITUNG KELILING DAN LUAS LINGKARAN" << endl;

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
    case 3 :
        lingkaran();
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
