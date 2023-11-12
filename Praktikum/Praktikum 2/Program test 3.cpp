#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

// LTK (Luas Tanah Kosong)
// LT (Luas Tanah) = Persegi Panjang
// LB (Luas Bangunan) = Persegi
// LS (Luas Sumur) = Lingkaran

float LTK, LT, LB, LS, P, L, S, d;

const float phi = 3.14;

int main () {
	cout << "|------------------------------------------------------------------|\n";
	cout <<"|                            TUGAS PRAKTIKUM                       |" << "\n";
	cout << "|                         Created By Moch Achmar" << "                   |";
	cout << "\n|------------------------------------------------------------------|";
	cout << "\n                      Masukkan nilai Panjang        = ";
	cin >> P;

	cout << "                      Masukkan nilai Lebar          = ";
	cin >> L;

	cout << "                      Masukkan nilai Sisi           = ";
	cin >> S;

	cout << "                      Masukkan nilai Diameter Sumur = ";
	cin >> d;

	LT = P * L;
	LB = S * S;
	LS = phi * pow (d, 2);
	LTK = LT - LB - LS;

	cout << "|------------------------------------------------------------------|";
	cout << "\n                      Nilai Luas Tanah              = " << LT << endl;
	cout << "                      Nilai Luas Bangunan           = " << LB << endl;
	cout << "                      Nilai Luas Sumur              = " << LS << endl;
	cout << "   Jadi, luas area yang kosong dalam tanah tersebut adalah " << LTK << endl;
    cout << "|------------------------------------------------------------------|\n";

	getch();
}









