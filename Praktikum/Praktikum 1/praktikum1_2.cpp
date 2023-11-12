//Praktikum1_2.CPP
//Program Menginput dan Menampilkan Biodata Masing-Masing

#include <iostream>

using namespace std;

int nostb = 222362;
string nama = "Moch Achmar", alamat = "Jl. Maros 10 Blok B No 191", prodi = "Teknik Informatika";

int main (){
	cout << "No. Stambuk : " << nostb << endl;

	cout << "Nama Mahasiswa : " << nama << endl;

	cout << "Alamat Mahasiswa : " << alamat << endl; 

	cout << "Program Studi : " << prodi << endl;

	cout << "Saudara " << nama << " Nomor Stambuk Anda : " << nostb << " Anda Tinggal di " << alamat << " Dan diterima di Program Studi " << prodi << endl;

	cin.get();
	return 0;
}
