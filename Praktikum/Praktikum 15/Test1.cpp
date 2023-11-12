#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Alamat {
	char Jalan[40];
	char Kota[20];
	char Pos[6];
};

struct Tgl_lahir {
	char Tgl[4];
	char Bln[4];
	char Thn[4];
};

struct Mahasiswa {
	char Nim[9];
	char Nama[25];
	char Alamat[40];
};

main() {
	Mahasiswa Mhs;
	Alamat Alamat;
	Tgl_lahir Tgl_lahir;
	cout << "Nim : ";
	cin.getline(Mhs.Nim,9);

	cout << "Nama : ";
	cin.getline(Mhs.Nama,25);

	cout << "Alamat : ";
	cin.getline(Mhs.Alamat,40);

	cout << "Jalan : ";
	cin.getline(Alamat.Jalan,40);

	cout << "Kota : ";
	cin.getline(Alamat.Kota,20);

	cout << "Kode Pos : ";
	cin.getline(Alamat.Pos,6);

	cout << "Tanggal : ";
	cin.getline(Tgl_lahir.Tgl,4);

	cout << "Bulan : ";
	cin.getline(Tgl_lahir.Bln,4);

	cout << "Tahun : ";
	cin.getline(Tgl_lahir.Thn,4);

	cout << "\n\nMencetak kembali nilai anggota\n\n";
	cout << "\nNim : " << Mhs.Nim;
	cout << "\nNama : " << Mhs.Nama;
	cout << "\nAlamat : " << Mhs.Alamat;
	cout << "\nJalan : " << Alamat.Jalan;
	cout << "\nKota : " << Alamat.Kota;
	cout << "\nKode Pos : " << Alamat.Pos;
	cout << "\nTanggal lahir : " << Tgl_lahir.Tgl << "-";
	cout << Tgl_lahir.Bln << "-" << Tgl_lahir.Thn;

	getch();
}
