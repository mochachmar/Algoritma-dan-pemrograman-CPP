#include <iostream>
#include <cstdlib>
#include <conio.h>
 
using namespace std;

string nama, nik, jabatan, kawin;
char kodejabatan, ulang, status;
int gol, anak;
int gajipokok, tunjanganjabatan, tunjagananak, tunjangankeluarga, pajak, totalgaji, gajibersih;

int main() {
        ulang='Y';
        while ((ulang == 'Y') || (ulang == 'y')) {
			system ("cls");
			cout << "|------------------------------------------------------------------|\n";
			cout <<"|\t\t\t\tTUGAS PRAKTIKUM\t\t\t   |" << "\n";
			cout << "|\t\t\t     Created By Moch Achmar\t\t   |";
			cout <<"\n|\t\t     GAJI KARYAWAN SUMBER REJEKI BERSAMA\t   |"<<endl;
			cout << "|------------------------------------------------------------------|\n";

			cout << "\t\tInput Nomor Induk Karyawan 	  : ";
			cin >> nik;

			cout << "\t\tInput Nama Karyawan 	     	  : ";
			cin >> nama;

			do {
				cout << "\t\tInput Golongan Karyawan [1,2,3,4] : ";
				cin >> gol;
				if ((gol < 1) || (gol > 4)) {
				cout <<"\t\tGolongan Yang Anda Masukkan Salah Silahkan Masukkan Kembali !"<<endl;}	
			} while ((gol < 1) || (gol > 4));

			do {
				cout << "\t\tInput Kode Jabatan [D,M,K,N] 	  : ";
				cin >> kodejabatan;

			if ((kodejabatan != 'D') && (kodejabatan != 'M') && (kodejabatan != 'K') && (kodejabatan != 'N')) {
				cout << "\t\tKode Jabatan Yang Anda Masukkan Salah Silahkan Masukkan Kembali" << endl;}	
			} while ((kodejabatan != 'D') && (kodejabatan != 'M') && (kodejabatan != 'K') && (kodejabatan != 'N'));

			do {
			cout << "\t\tInput Status Kawin [K/T] 	  : ";
			cin >> status;

			if ((status != 'K') && (status!='T')){
				cout << endl << "\t\tStatus Kawin Yang Anda Masukkan Salah Silahkan Masukkan Kembali !" << endl;}	
			} while ((status != 'K') && (status != 'T'));

			if (status == 'K') {
				cout << "\t\tinput Jumlah Anak 		  : ";
				cin >> anak;
			}

			//Menentukan Gaji Pokok
			if (gol == 1) {
				gajipokok = 3000000;
			} else if (gol == 2) {
				gajipokok = 3500000;
			} else if (gol == 3) {
				gajipokok = 4000000;
			} else {
				gajipokok = 4500000;
			}

			//Menentukan Jabatan Dan tunjangan Jabatan
			if (kodejabatan == 'D') {
				jabatan = "Direktur";
				tunjanganjabatan = 1500000;
			} else if (kodejabatan == 'M') {
				jabatan = "Manager";
				tunjanganjabatan = 1250000;
			} else if (kodejabatan == 'K') {
				jabatan = "Kepala Bagian";
				tunjanganjabatan = 800000;
			} else {
				jabatan = "Non Jabatan";
				tunjanganjabatan = 0;
			}

			//Menentukan Tunjangan Keluarga

			if (status == 'K') {
				kawin = "KAWIN!";
				tunjangankeluarga = 0.1 * gajipokok;
			} else {
				status == 'T';
				kawin = "BELUM KAWIN!";
				tunjangankeluarga = 0;
			}

			//Menentukan Tunjangan Anak
			if (anak == 1) {
				tunjagananak = 0.02 * gajipokok;
			} else if (anak >= 2) {
				tunjagananak = 2 * 0.02 * gajipokok;
			} else {
				tunjagananak = 0;
			}

			//Menghitung Total Gaji
			totalgaji = gajipokok + tunjanganjabatan + tunjangankeluarga + tunjagananak;
			pajak = 0.05 * totalgaji;
			gajibersih = totalgaji - pajak;

			//Menampilkan Output
			cout.setf(ios::fixed);
			cout.precision(0);

			system("cls");
			cout << "|------------------------------------------------------------------|\n";
			cout <<"|\t\t\t\tTUGAS PRAKTIKUM\t\t\t   |" << "\n";
			cout << "|\t\t\t     Created By Moch Achmar\t\t   |";
			cout <<"\n|\t\t     GAJI KARYAWAN SUMBER REJEKI BERSAMA\t   |"<<endl;
			cout << "|------------------------------------------------------------------|\n";
			cout << "\t\tNIK                	: " << nik << endl;
			cout << "\t\tNAMA               	: " << nama << endl;
			cout << "\t\tGOLONGAN           	: " << gol << endl;
			cout << "\t\tGAJI POKOK         	: Rp." << gajipokok << endl;
			cout << "\t\tJABATAN            	: " << jabatan << endl;
			cout << "\t\tTUNJANGAN JABATAN  	: Rp." << tunjanganjabatan <<endl;
			cout << "\t\tSTATUS KAWIN       	: " << kawin << endl;
			cout << "\t\tTUNJANGAN KELUARGA 	: Rp." << tunjangankeluarga << endl;
			cout << "\t\tTUNJANGAN ANAK     	: Rp." << tunjagananak << endl;
			cout << "\t\tTOTAL GAJI         	: Rp." << totalgaji << endl;
			cout << "\t\tPAJAK              	: Rp." << pajak << endl;
			cout << "\t\tGAJI BESRIH        	: Rp." << gajibersih << endl;
			cout << "|------------------------------------------------------------------|\n";

			cout << "\t\t\tMasih Ada Data ? [Y/T] :";
			cin >> ulang;
		}
			system ("cls");
			return 0;
	}