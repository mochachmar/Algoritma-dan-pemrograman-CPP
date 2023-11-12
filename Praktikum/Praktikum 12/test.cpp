// Praktikum 12.1
#include <iostream>

using namespace std;

int A, B;

void input() {
	cout << "Ketik Nilai  : ";
	cin >>  A;
	cout << "Ketik Nilai  : ";
	cin >>  B;
}
 
int proses(int X, int Y) {
	return X + Y;
}

void output() {
	int C;
	C = proses(A, B);
	cout << A << " + " << B << " = " << C;
}

int main() {
	input();
	output();

	cin.get();
	return 0;
}