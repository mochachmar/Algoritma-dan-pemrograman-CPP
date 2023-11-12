#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

short MatriksA[10][10], MatriksB[10][10], MatriksC[10][10];
short i, j, baris, kolom;

void input(short m[10][10], char n) {
	cout << "Masukkan Element dari Matriks " << n << " : \n";
	for (i = 0; i < baris; i++)
	{
		for (j = 0; j < kolom; j++)
		{
			cout << "Elemen [" << i << "," << j << "] : ";
			cin >> m[i][j];
		}

		cout << endl;
	}
}

void cetak(short m[10][10]) {
	for (i = 0; i < baris; i++) {
		for (j = 0; j < kolom; j++) {
			cout << setw(4) << m[i][j];
			cout << endl;
		}
	}
}
 
void Hitung(short x[10][10], short m[10][10], short n[10][10]) {
	for (i = 0; i < baris; i++)
	{
		for (j = 0; j < kolom; j++) {
			x[i][j] = m[i][j] + n[i][j];
		}
	}
}

int main() {
	system("cls");
	cout << "Program Penjumlahan Matriks \n";
	cout << "Masukkan jumlah baris : ";
	cin >>  baris;
	cout << "Masukkan jumlah kolom : ";
	cin >>  kolom;

	input(MatriksA, 'A');
	cout << endl;
	input(MatriksB, 'B');
	
	system("cls");

	cout << "Elemen Matriks A : \n";
	cetak(MatriksA);
	cout << "Elemen Matriks B : \n";
	cetak(MatriksB);

	Hitung(MatriksC, MatriksA, MatriksB);
	cout << "Hasil Matriks A + Matriks B = \n";
	cetak(MatriksC);
}