// Praktikum 12.5
#include <iostream>
#include <function.h>

using namespace std;

char lagi = 'Y';
float p, l, a, t, r;

void input() {
	cout << "Ketik Nilai Panjang : ";
	cin >> p;
	cout << "Ketik Nilai Lebar : ";
	cin >> l ;
	cout << "Ketik Nilai Alas : ";
	cin >> a ;
	cout << "Ketik Nilai Tinggi : ";
	cin >> t ;
	cout << "Ketik Jari - Jari Lingkaran: ";
	cin >> r ;
}

void cetak(float A, float B, float C, float D) {
	cout << "Luas Persegi Panjang : " << A << endl;
	cout << "Luas Segitiga : " << B << endl;
	cout << "Luas Lingkaran : " << C << endl;
	cout << "Luas Tanah Kosong : " << D;
}

void proses() {
	float L_Segitiga, L_Persegi, L_Lingkaran, L_Kosong;
	L_Segitiga = LS(a, t);
	L_Persegi = LP(p, l);
	L_Lingkaran = LL(r);
	L_Kosong = L_Persegi - L_Segitiga - L_Lingkaran;
	cetak(L_Persegi, L_Segitiga, L_Lingkaran, L_Kosong);
}

int main() {
	while ((lagi == 'y') || (lagi == 'Y')) {
		system("cls");
		input();
		proses();

		cout << "\nMASIH ADA DATA [Y/T] : ";
		cin >> lagi;
	}

	return 0;
}