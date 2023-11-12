#include <iostream>
#include <math.h>

using namespace std;

int N, angka, jumlah;

int main() {
	cout << "Masukkan nilai N : ";
	cin >> N;

	for (int angka = 1; angka <= N; angka++)
	{
		cout << pow(angka, 2) << " ";
		jumlah = jumlah + pow(angka, 2);
	}

	cout << "\n\nJumlah Deret 1 s.d. " << N << " = " << jumlah;

	cin.get();
	return 0;
}