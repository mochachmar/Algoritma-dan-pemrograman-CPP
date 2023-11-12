// Praktikum 12.2
#include <iostream>

using namespace std;

int pangkat(int X, int Y) {
	int i, hasil = 1;
	for (int i = 1; i < Y; i++)
	{
		hasil = hasil * X;
		return hasil;
	}
}

int main() {
	int A, B, Hasil;

	cout << "Ketik Nilai  : ";
	cin >>  A;
	cout << "Ketik Nilai  : ";
	cin >>  B;

	Hasil = pow (A,B);

	cout << A << " dipangkat " << B << " = " << Hasil;

	return 0;
}
