// cout << "222362 Moch Achmar" << endl;
#include <iostream>

using namespace std;

int A, B, C;

void input() {
	cout << "Ketik nilai A : ";
	cin >> A;
	cout << "Ketik nilai B : ";
	cin >> B;
	return;
}

void proses() {
	C = A + B;
}

void output() {
	cout << A << " + " << B << " = " << C;
}

int main() {
	input();
	proses();
	output();

	cin.get();
	return 0;
}
