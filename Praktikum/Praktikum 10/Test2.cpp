#include <iostream>

using namespace std;

int angka;

int main() {
	for (int angka = 1; angka <= 25; angka++)
	{
		if (angka % 2 == 0)
		{
			cout << angka << " ";
		}
	}

	cin.get();
	return 0;
}