#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <array>

using namespace std;

int main() {
	short pencacah = 0;
	short nilai[50]; // deklarasi array dimensi satu
	float total = 0;

	system("cls");

	cout << "Masukkan Data Bilangan Bulat " << endl;
	cout << "Akhiri Dengan Memasukkan Nilai Negatif " << endl;

	while(1) {
		cout << "Nilai ke- " << pencacah+1 << " = ";
		cin >> nilai[pencacah];
		
		if (nilai[pencacah] < 0) 
			break;
			total += nilai[pencacah];
			pencacah++;
		

		cout << "Data yang telah di input : ";
		short max = 0;

		for (short x = 0; x < pencacah; x++)
		{
			cout << setw(5) << nilai[x];
			if (max < nilai[x])
				max = nilai[x];
		}

		cout << "\nJumlah Data = " << pencacah << endl;
		cout << "Nilai Total = " << total << endl;
		cout << "Nilai Maximum = " << max << endl;
	}
 
	cin.get();
	return 0;
}