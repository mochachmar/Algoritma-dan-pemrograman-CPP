#include <iostream>
#include <stdlib.h>
#define phi 3.14

using namespace std;
int pilihan;
char lagi;

void persegipanjang() {
	float p, l, L;
	cout << "Ketik Nilai Panjang : ";
	cin >> p;
	cout << "Ketik Nilai lebar : ";
	cin >> l;

	L = p * l;

	cout << "Luas Persegi Panjang = " << L;
}

void lingkaran() {
	float r, L, K;
	cout << "Ketik Nilai r : ";
	cin >> r;

	L = phi * r * r;
	K = 2 * phi * r;

	cout << "Luas Lingkaran = " << L << endl;
	cout << "Keliling Lingkaran = " << K;
}

void segitiga() {
	float a, t, L;
	cout << "Ketik Nilai Alas : ";
	cin >> a;
	cout << "Ketik Nilai Tinggi : ";
	cin >> t;

	L = 0.5 * a * t;

	cout << "Luas Segitiga = " << L;
}

void kubus() {
	float s, V;
	cout << "Ketik Nilai sisi : ";
	cin >> s;

	V = s * s * s;

	cout << "Volume Sisi = " << V;
}

void selesai() {
	system("cls");
}

int main() {
	do {
		while ((pilihan < 1) || (pilihan > 5)) {
			system("cls");
			cout << "\nPILIHAN OPERASI" << endl;
			cout << "1. Persegi Panjang" << endl;
			cout << "2. Lingkaran" << endl;
			cout << "3. Segitiga" << endl;
			cout << "4. Kubus" << endl;
			cout << "5. Selesai" << endl;

			cout << "Ketik pilihan anda : ";
			cin >> pilihan;
		}

		switch (pilihan) {
			case 1 :
				persegipanjang();
				break;
			case 2 :
				lingkaran();
				break;
			case 3 :
				segitiga();
				break;
			case 4 :
				kubus();
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
