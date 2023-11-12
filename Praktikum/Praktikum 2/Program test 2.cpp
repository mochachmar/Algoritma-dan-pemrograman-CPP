//Praktikum21.CPP
//Program Menghitung Volume + Luas Permukaan Kotak


#include <iostream>

using namespace std;

float P, L, T, VK, LP, VK_LP;

int main(){
	cout << "Ketik panjang kotak = ";
	cin >> P;
	cout << "Ketik lebar kotak = ";
	cin >> L;
	cout << "Ketik tinggi kotak = ";
	cin >> T;

	VK = P*L*T;
	LP = 6*(P*L);
	VK_LP = VK + LP;

	cout << "\nVolume kotak = " << VK << endl;
	cout << "Luas permukaan kotak = " << LP << endl;
	cout << "Volume + Luas permukaan kotak = " << VK_LP << endl;

	cin.get();
	return 0;
}


//Praktikum22.CPP
//Program Menghitung Jarak 2 Titik

/*
#include <iostream>
#include <math.h>

float d, X1, X2, Y1, Y2;

using namespace std;

int main(){
	cout << "Ketik Nilai X1 : ";
	cin >> X1;
	cout << "Ketik Nilai X2 : ";
	cin >> X2;
	cout << "Ketik Nilai Y1 : ";
	cin >> Y1;
	cout << "Ketik Nilai Y2 : ";
	cin >> Y2;

	d = sqrt(pow((X2-X1),2) + pow((Y2-Y1),2));

	cout << "\nJarak Antara Titik ("<<X1<<","<<X2<<") dengan Titik ("<<Y1<<","<<Y2<<") adalah "<<d;

	cin.get();
	return 0;

}
*/

/*
//Praktikum23.CPP
//Program Menghitung Nilai

#include <iostream>

using namespace std;

string nostb, nama;

float nilai_tugas, nilai_UTS, nilai_UAS, total_nilai;

int main(){
	cout << "Ketik No. Stambuk : ";
	cin >> nostb;
	cout << "Ketik Nama Mahasiswa : ";
	cin >> nama;
	cout << "Ketik Nilai Tugas : ";
	cin >> nilai_tugas;
	cout << "Ketik Nilai UAS : ";
	cin >> nilai_UAS;
	cout << "Ketik Nilai UTS : ";
	cin >> nilai_UTS;

	total_nilai = 0.2 * nilai_tugas + 0.35 * nilai_UTS + 0.45 * nilai_UAS;

	cout << "\nNilai akhir = " << total_nilai;

	cin.get();
	return 0;
}
*/

/*
//Praktikum34.CPP
//Program Menghitung Volume Tabung

#include <iostream>
#include <math.h>

using namespace std;

const float phi = 3.14;

float r, t, v;

int main (){
	cout <<"Ketik Nilai jari-jari : ";
	cin >> r;
	cout << "Ketik Tinggi tabung : ";
	cin >> t;

	v = phi * pow (r, 2) * t; // POW adalah fungsi untuk mencari pangkat xy

	cout << "\nVolume Tabung = " << v;

	cin.get();
	return 0;
}
*/