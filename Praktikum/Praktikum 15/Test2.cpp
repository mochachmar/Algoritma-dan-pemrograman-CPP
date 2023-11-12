#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

struct nilai
{
	char Nim[15];
	char nama[50];
	float n_tugas, n_tugass, n_tugas_1, n_tugas_2, n_tugas_3, n_quiz, n_uts, n_uas, n_kehadiran, n_akhir;
	string grade;
};

int main()
{
	char ulang;
	ulang = 'Y';
	while ((ulang == 'Y') || (ulang == 'y'))
	{
		system("cls");
		nilai mhs;
		cout << "=====================================" << endl;
		cout << "Contoh Program Penilaian Mahasiswa Memakai Struct!" << endl;
		cout << "NIM : 222362" << endl;
		cout << "NAMA : MOCH ACHMAR" << endl;
		cout << "=====================================" << endl;
		cout << "Nim : ";
		cin.getline(mhs.Nim, 15);

		cout << "Nama : ";
		cin.getline(mhs.nama, 50);

		cout << "Nilai Tugas 1 : ";
		cin >> mhs.n_tugas_1;

		cout << "Nilai Tugas 2 : ";
		cin >> mhs.n_tugas_2;

		cout << "Nilai Tugas 3 : ";
		cin >> mhs.n_tugas_3;

		cout << "Nilai Quiz : ";
		cin >> mhs.n_quiz;

		cout << "Nilai UTS : ";
		cin >> mhs.n_uts;

		cout << "Nilai UAS : ";
		cin >> mhs.n_uas;

		cout << "Input Nilai Kehadiran : ";
		cin >> mhs.n_kehadiran;

		mhs.n_tugass = mhs.n_tugas_1 + mhs.n_tugas_2 + mhs.n_tugas_3;
		mhs.n_tugas = mhs.n_tugass / 3;

		mhs.n_akhir = (mhs.n_tugas * 30 / 100) + (mhs.n_uts * 20 / 100) + (mhs.n_uas * 25 / 100) + (mhs.n_quiz * 15 / 100) + (mhs.n_kehadiran * 10 / 100);

		if (mhs.n_akhir >= 86)
		{
			mhs.grade = "A";
		}
		else if ((mhs.n_akhir >= 81) && (mhs.n_akhir <= 86))
		{
			mhs.grade = "A-";
		}
		else if ((mhs.n_akhir >= 76) && (mhs.n_akhir <= 81))
		{
			mhs.grade = "B+";
		}
		else if ((mhs.n_akhir >= 71) && (mhs.n_akhir <= 76))
		{
			mhs.grade = "B";
		}
		else if ((mhs.n_akhir >= 66) && (mhs.n_akhir <= 71))
		{
			mhs.grade = "B-";
		}
		else if ((mhs.n_akhir >= 61) && (mhs.n_akhir <= 66))
		{
			mhs.grade = "C+";
		}
		else if ((mhs.n_akhir >= 56) && (mhs.n_akhir <= 61))
		{
			mhs.grade = "C";
		}
		else if ((mhs.n_akhir >= 41) && (mhs.n_akhir <= 56))
		{
			mhs.grade = "D";
		}
		else if ((mhs.n_akhir >= 0) && (mhs.n_akhir <= 41))
		{
			mhs.grade = "E";
		}

		cout << "\n=====================================" << endl;
		cout << "Output Rangkuman Nilai Yang Didapat" << endl;
		cout << "=====================================" << endl;
		cout << "Nim : " << mhs.Nim << endl;
		cout << "Nama : " << mhs.nama << endl;
		cout << "Nilai Tugas : " << mhs.n_tugas << endl;
		cout << "Nilai Kuiz : " << mhs.n_quiz << endl;
		cout << "Nilai UTS : " << mhs.n_uts << endl;
		cout << "Nilai UAS : " << mhs.n_uas << endl;
		cout << "Mendapatkan Nilai Akhir : " << mhs.n_akhir << endl;
		cout << "Nilai Huruf (Grade) : " << mhs.grade << endl;

		cout << "\t\t\tMasih Ada Data ? [Y/T] :";
		cin >> ulang;
	}
	system("cls");
	return 0;
}
