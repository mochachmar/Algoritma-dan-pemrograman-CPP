#include <iostream>

using namespace std;

string nama_penyewa, nama_kendaraan, kode;
char ulang;
int lama_hari, lama_sewa, sewa;
float diskon, total;

int main() {
	ulang='Y';
    while ((ulang == 'Y') || (ulang == 'y')) {
    system("cls");
	cout << "Masukkan Nama Penyewa : ";
	cin >> nama_penyewa;

	cout << "Masukkan Kode Tipe : ";
	cin >> kode;

	cout << "Masukkan Lama Sewa : ";
	cin >> lama_hari;

	if (kode == "AD")
	{
		nama_kendaraan = "AVANZA DELUXE";
		sewa = 250000;
	} else if (kode == "AV")
	{
		nama_kendaraan = "AVANZA VELOX";
		sewa = 275000;
	} else if (kode == "XS")
	{
		nama_kendaraan = "XENIA SPORTY";
		sewa = 260000;
	} else if (kode == "RZ")
	{
		nama_kendaraan = "TOYOTA RUSH";
		sewa = 300000;
	} else if (kode == "TR")
	{
		nama_kendaraan = "TERIOS";
		sewa = 285000;
	} else if (kode == "IV")
	{
		nama_kendaraan = "INNOVA";
		sewa = 350000;
	} else if (kode == "FR")
	{
		nama_kendaraan = "FORTUNER";
		sewa = 450000;
	} else {
		nama_kendaraan = "KODE MOBIL TIDAK DITEMUKAN";
		sewa = 0;
	}

	lama_sewa = sewa * lama_hari;

	if ((lama_hari >= 10) && (lama_hari <= 20))
	{
		diskon = 0.05 * lama_sewa;
	} else if (lama_hari > 20){
		diskon = 0.1 * lama_sewa;
	} else {
		diskon = 0;
	}



    system("cls");
	cout.setf(ios::fixed);
	cout.precision(0);
	cout << "Nama Penyewa : " << nama_penyewa << endl;
	cout << "Kode Tipe : " << kode << endl;
	cout << "Nama Kendaraan : " << nama_kendaraan << endl;
	cout << "Lama Sewa : " << lama_hari << endl;
	cout << "Sewa/Hari : Rp. " << sewa << endl;
	cout << "Diskon : Rp. " << diskon << endl;
	cout << "Total Bayar : Rp. " << lama_sewa << endl;

	cout << "Masih Ada Data ? [Y/T] :";
	cin >> ulang;
	}

	system("cls");

	cin.get();
	return 0;
}
