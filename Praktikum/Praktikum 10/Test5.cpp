#include <iostream>

using namespace std;

int N, angka, jumlah;

int main() {
	cout << "Masukkan nilai N : ";
	cin >> N;

	for (int angka = 1; angka <= N; angka++)
	{
		if (angka % 2 == 0)
		{
			cout << angka << " ";
			jumlah = jumlah + angka;
		} else {
			cout << -angka << " ";
			jumlah = jumlah+(-angka);
		}
	}

	cout << "\n\nJumlah Deret 1 s.d. " << N << " = " << jumlah;

	cin.get();
	return 0;
}