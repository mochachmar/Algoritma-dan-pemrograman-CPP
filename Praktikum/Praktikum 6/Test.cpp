/*
// Praktikum 6-1 & 6-2
#include <iostream>
#include <math.h>

using namespace std;

int bil;

int main(){
	cout << "222362 Moch Achmar\n";

	cout << "Ketik sebuah bil bulat : ";
	cin >> bil;

	if (bil / 2 == 0)
	{
		cout << bil << " adalah bilangan genap" << endl;
	} else {
		cout << bil << " adalah bilangan ganjil" << endl;
	}

	cin.get();
	return 0;
}
*/

/*
// Praktikum 6-3
#include <iostream>
#include <math.h>

using namespace std;

int bil;

int main() {
	cout << "Ketik sebuah bil bulat : ";
	cin >> bil;

	if (bil <= 0)
	{
		cout << "Bilangan ini merupakan bilangan negatif" << endl;
	} else if (bil >= 0){
		cout << "Bilangan ini merupakan bilangan positif" << endl;
	}

	cin.get();
	return 0;
}
*/

#include <iostream>

using namespace std;

string nama_konsumen;
string nama_barang;
int harga_barang;
int jumlah_barang;
int total;
int diskon;
int jumlah_bayar;

int main () {
	cout << "Masukkan nama konsumen : ";
	cin >> nama_konsumen;

	cout << "Masukkan nama barang : ";
	cin >> nama_barang;

	cout << "Masukkan harga barang : ";
	cin >> harga_barang;

	cout << "Masukkan jumlah barang : ";
	cin >> jumlah_barang;

	total = harga_barang * jumlah_barang;

	if (total >= 5000000)
	{
		diskon = 0.1 * total;
	} else {
		diskon = 0;
	}

	jumlah_bayar = total - diskon;

	cout << "Atas nama konsumen " << nama_konsumen << endl;
	cout << "Total barang : " << total << endl;
	cout << "Dengan diskon : " << diskon << endl;
	cout << "Jumlah yang akan dibayar : " << jumlah_bayar << endl;

	cin.get();
	return 0;
}
