#include <iostream>

using namespace std;

string nama, kategori;
int tahun_kelahiran, tahun_sekarang, tahun;

int main() {
	cout << "Masukkan Nama Anda : ";
	cin >> nama;

	cout << "Masukkan Tahun Kelahiran Anda : ";
	cin >> tahun_kelahiran;

	cout << "Masukkan Tahun Sekarang : ";
	cin >> tahun_sekarang;

	tahun = tahun_sekarang - tahun_kelahiran;

	if (tahun <= 5) {
		cout << "Umur Anda Kurang Lebih = " << tahun << endl;
		cout << "termasuk kategori = BALITA" << endl;
	} else if ((tahun >= 5) || (tahun <= 10)) {
		cout << "Umur Anda Kurang Lebih = " << tahun << endl;
		cout << "termasuk kategori = ANAK - ANAK" << endl;
	} else if ((tahun >= 10 )|| (tahun <= 17)) {
		cout << "Umur Anda Kurang Lebih = " << tahun << endl;
		cout << "termasuk kategori = ABG" << endl;
	} else if ((tahun >= 17) || (tahun <= 25)) {
		cout << "Umur Anda Kurang Lebih = " << tahun << endl;
		cout << "termasuk kategori = REMAJA" << endl;
	} else if ((tahun >= 25) || (tahun <= 35)) {
		cout << "Umur Anda Kurang Lebih = " << tahun << endl;
		cout << "termasuk kategori = DEWASA" << endl;
	} else if ((tahun >= 35) || (tahun <= 50)) {
		cout << "Umur Anda Kurang Lebih = " << tahun << endl;
		cout << "termasuk kategori = ORANG TUA" << endl;
	} else if (tahun > 50) {
		cout << "Umur Anda Kurang Lebih = " << tahun << endl;
		cout << "termasuk kategori = LANSIA" << endl;
	} else {
		cout << "Tidak termasuk kedalam kategori!" << endl;
	}

	cin.get();
	return 0;
}