#include <iostream>

using namespace std;

int N, angka;

int main() {
	cout << "Masukkan nilai N : ";
	cin >> N;

	for (int angka = 1; angka <= N; angka++)
	{
		cout << angka << " ";
	}

	cin.get();
	return 0;
}