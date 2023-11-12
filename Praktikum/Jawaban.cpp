/*
#include <iostream>

using namespace std;

int main() {
	int i = 0;

	for (int x = 13; x > 1; i++)
	{
		if (x % 2 == 1)
		{
			x = 3 * x + 1;
		} else {
			x = x / 2;
		}
	}

	cout << i << endl;

	cin.get();
	return 0;
}
*/

#include <iostream>

using namespace std;

string nama, rasa;
float jarak;
int kode;
char ulang;
int harga;

int main() {
	cout << "\t\t  Menu Makanan ZERO CAFE" << endl;
	cout << "\t\t--------Coffee--------" << endl;
	cout << "KODE MINUMAN\t\t\tNAMA MINUMAN  " << endl;        
	cout << "KGA\t\t\t\t\t\tKopi Gula Aren		" << endl; 
	cout << "KSK\t\t\t\t\t\tKopi Susu Krimi	" << endl;	
	cout << "KP\t\t\t\t\t\tKopi Pandan" << endl;

	cout << "\t\t---------Tea----------" << endl;
	cout << "KODE MINUMAN\t\t\tNAMA MINUMAN" << endl;
	cout << "LT\t\t\t\t\t\tLemon Tea" << endl;
	cout << "MT\t\t\t\t\t\tMilk Tea" << endl;
	cout << "TT	\t\t\t\t\t\tThai Tea          " << endl;

	cout << "\t\t------Milk Based------" << endl;
	cout << "KODE MINUMAN\t\t\tNAMA MINUMAN  " << endl;
	cout << "C\t\t\t\t\t\tChocolate" << endl;
	cout << "CB\t\t\t\t\t\tChocolate Booster" << endl;
	cout << "GTM\t\t\t\t\t\tGreen Tea Matcha" << endl;


	cout << "\t\t-------RICE BOWL------" << endl;
	cout << "KODE MAKANAN\t\t\tNAMA MAKANAN  " << endl;
	cout << "RBASLH\t\t\t\t\t\tRice Bowl Ayam Saos Lada Hitam" << endl;
	cout << "RBASK\t\t\t\t\t\tRice Bowl Ayam Saos Keju" << endl;
	cout << "RBAK\t\t\t\t\t\tRice Bowl Ayam Katsu" << endl;


	cout << "\t\t------NASI GORENG-----" << endl;
	cout << "KODE MAKANAN\t\t\tNAMA MAKANAN" << endl;
	cout << "NGS\t\t\t\t\t\tNasi Goreng Skripsi" << endl;
	cout << "NGT\t\t\t\t\t\tNasi Goreng Tesis" << endl;
	cout << "NGM\t\t\t\t\t\tNasi Goreng Merah		" << endl;	     		       

	cout << "\t\t-------INDOMIE--------" << endl;
	cout << "KODE MAKANAN\t\t\tNAMA MAKANAN" << endl;
	cout << "IG\t\t\t\t\t\tIndomie Goreng" << endl;
	cout << "IS\t\t\t\t\t\tIndomie Soto" << endl;
	cout << "ISE\t\t\t\t\t\tIndomie Seblak" << endl;

	cout << "\t\t--------XTRA----------" << endl;
	cout << "KODE MAKANAN\t\t\tNAMA MAKANAN  " << endl;
	cout << "NP\t\t\t\t\t\tNasi Putih" << endl;
	cout << "TMS\t\t\t\t\t\tTelur Mata Sapi" << endl;

	cout << "Masukkan nama pelanggan : ";
	cin >> nama;

	cout << "Masukkan jarak : ";
	cin >> jarak;

	cout << "Masukkan Kode : ";
	cin >> kode;

	if (kode == "")
	{
		/* code */
	}

	cin.get();
	return 0;
}