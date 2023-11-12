#include <iostream>
using namespace std;
string nostb = "222362", nama = "Moch Achmar";
int tahun_sekarang = 2022, tahun_lahir = 2004, umur;

int main (){
	cout << "Ketik No. Stambuk : " << nostb << endl;
	cout << "Ketik Nama Mahasiswa : " << nama << endl;
	cout << "Ketik Tahun Sekarang : " << tahun_sekarang << endl;
	cout << "Ketik Lahir : " << tahun_lahir << endl;
	umur = tahun_sekarang - tahun_lahir;
	cout << "Umur Anda Adalah " << umur << " Tahun";

	cin.get();
	return 0;
}
