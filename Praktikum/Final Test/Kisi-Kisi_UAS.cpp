#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <cstring>

using namespace std;

struct tumpukan  //struktur tumpukan
{
	char no_rekening[15][100], max[999];
	char meter_awal[15][100], max1[999];
	char meter_akhir[15][100], max2[999];
	char tgl_pembayaran[15][100], max3[999];
	char jumlah_pemakaian[15][100], max4[999];
	char nama_pelanggan[15][100], max5[999];
	char gol[15][100], max6[999];
	int i, j;
} stack;

void push()  //push untuk mengisi data
{
			cout << "|------------------------------------------------------------------|\n";
			cout <<"|\t\t\t\tTUGAS PRAKTIKUM\t\t\t   |" << "\n";
			cout << "|\t\t\t     Created By Moch Achmar\t\t   |";
			cout << "\n|------------------------------------------------------------------|\n";
	stack.i++;
	cout << "Masukkan No Rekening : ";
	cin >> stack.max;
	strcpy (stack.no_rekening[stack.i], stack.max);  //perintah menyalin data char panjang menggunakan fungsi string

	stack.i++;
	cout << "Masukkan Nama Pelanggan : ";
 	cin >> stack.max5;
	strcpy (stack.nama_pelanggan[stack.i], stack.max5);  //perintah menyalin data char panjang menggunakan fungsi string

	stack.i++;
	cout << "Masukkan Golongan Meter : ";
	cin >> stack.max6;
	strcpy (stack.gol[stack.i], stack.max6);  //perintah menyalin data char panjang menggunakan fungsi string

	stack.i++;
	cout << "Masukkan Meter Awal (Bulan lalu) : ";
	cin >> stack.max1;
	strcpy (stack.meter_awal[stack.i], stack.max1);  //perintah menyalin data char panjang menggunakan fungsi string

	stack.i++;
	cout << "Masukkan Meter Akhir (Bulan ini) : ";
	cin >> stack.max2;
	strcpy (stack.meter_akhir[stack.i], stack.max2);  //perintah menyalin data char panjang menggunakan fungsi string

	stack.i++;
	cout << "Masukkan Tanggal Bayar : ";
	cin >> stack.max3;
	strcpy (stack.tgl_pembayaran[stack.i], stack.max3);  //perintah menyalin data char panjang menggunakan fungsi string

	stack.i++;
	cout << "Jumlah Pemakaian (hari) : ";
	cin >> stack.max4;
	strcpy (stack.jumlah_pemakaian[stack.i], stack.max4);  //perintah menyalin data char panjang menggunakan fungsi string
}

void view (int n)  //print untuk menampilkan data
{
 if (stack.j > 0)  //menampilkan isi data menggunakan perulangan for
 {
  for (int e = n; e >= 1; e--)
  {
   cout << stack.no_rekening[e] << endl;
   cout << stack.meter_awal[e] << endl;
   cout << stack.meter_akhir[e] << endl;
   cout << stack.tgl_pembayaran[e] << endl;
   cout << stack.jumlah_pemakaian[e] << endl;
   cout << stack.nama_pelanggan[e] << endl;
   cout << stack.gol[e] << endl;
  }
 }
 else
  cout << "tak ada data tersimpan" << endl;  //jika tidak ada data
}

void clear()  //clear untuk menghapusdata
{
 stack.j = 0; stack.i = 0;  //perintah untuk menghapus keseluruhan data
}

int main() {
	// float biaya_pemakaian, biaya_beban, tarif, denda, total_pembayaran, total_pemasukan, total_denda, biaya_operasi;
	// if (gol == 'A')
	// {
	// 	biaya_beban = 20000;
	// 	tarif = 900;
	// 	if (tgl_pembayaran > 10)
	// 	{
	// 		denda = 7000;
	// 	} else {
	// 		denda = 0;
	// 	}
	// } else if (gol == 'B')
	// {
	// 	biaya_beban = 15000;
	// 	tarif = 700;
	// 	if (tgl_pembayaran > 20)
	// 	{
	// 		denda = 6000;
	// 	} else {
	// 		denda = 0;
	// 	}

	// } else if (gol == 'C')
	// {
	// 	biaya_beban = 10000;
	// 	tarif = 500;
	// 	if (tgl_pembayaran > 31)
	// 	{
	// 		denda = 5000;
	// 	} else {
	// 		denda = 0;
	// 	}
	// } else {
	// 	cout << "Masukkan Golongan denda benar!" << endl;
	// }

	// jumlah_pemakaian = meter_akhir - meter_awal; // Jumlah pemakaian
	// biaya_pemakaian = jumlah_pemakaian * tarif; // Biaya pemakaian
	// total_pembayaran = biaya_pemakaian + biaya_beban + denda; // Total pembayaran
	// total_pemasukan = total_pembayaran * 0.1; // Total pemasukan

	// system("cls");

	// cout << "Nama Pelanggan : " << nama << endl;
	// cout << "Nomor Rekening : " << no_rekening << endl;
	// cout << "Tanggal Pembayaran : " << tgl_pembayaran << endl;
	// cout << "Denda : " << denda << endl;
	// cout << "Total Pembayaran : Rp. " << total_pembayaran << endl;

	// cout << "Total pemasukan yang diraih sebesar Rp. " << total_pemasukan << endl;
 	int n, pilih;
 	ayo:
			cout << "|------------------------------------------------------------------|\n";
			cout <<"|\t\t\t\tTUGAS PRAKTIKUM\t\t\t   |" << "\n";
			cout << "|\t\t\t     Created By Moch Achmar\t\t   |";
			cout << "\n|------------------------------------------------------------------|\n";
   	stack.no_rekening[n];
   	stack.meter_awal[n];
   	stack.meter_akhir[n];
   	stack.tgl_pembayaran[n];
   	stack.jumlah_pemakaian[n];
   	stack.nama_pelanggan[n];
   	stack.gol[n];
  	stack.i = 0;
  	stack.j = 0;
  	balik:  //fungsi goto

   	cout << "\n1. Tambah data pelanggan\n2. Lihat data pelanggan\n3. Hapus semua data\n4. quit\n";
   	cout << "\npilih : ";  cin >> pilih;
   	cout << "\n";

   	if (pilih == 1)  //pemilihan pilihan menggunakan if
   	{
    	if (stack.j < n)
    	{
     		stack.j++;
     		push();
	    } else {
	        cout << "tumpukan penuh" << endl;
	        getch();
	    } goto balik;
   	} else if (pilih == 2)
   	{
      view (stack.i);  getch();
      goto balik;
    } else if (pilih == 3)
    {
       clear();  getch();
       goto balik;
    } else if (pilih == 4)
    {
       getch();
       goto ayo;
    } else
    {
       cout << "Input anda masukan salah !!!";
       getch();
       goto ayo;
    }
}
