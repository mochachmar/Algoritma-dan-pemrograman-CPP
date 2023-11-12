/* 
#include <iostream>

using namespace std;

string wujud;
float suhu;

int main() {
	cout << "Ketik suhu cairan : ";
	cin >> suhu;

	if (suhu >= 100) {
		wujud = "menguap";
	} else if ((suhu >= 0) && (suhu <= 100)) {
		wujud = "mencair";
	} else {
		wujud = "membeku";
	}

	cout << "Wujud benda cair adalah " << wujud;

	cin.get();
	return 0;
}
*/

/*
#include <iostream>

using namespace std;

const float phi = 3.14;
int pilihan;
float luas, volume, p, l, a, t, r, s;

int main() {
	cout << "MENU PILIHAN OPERASI" << endl;
	cout << "1. Menghitung luas segitiga" << endl;
	cout << "2. Menghitung luas persegi panjang" << endl;
	cout << "3. Menghitung luas lingkaran" << endl;
	cout << "4. Menghitung volume kubus" << endl;

	cout << "\nKETIK PILIHAN ANDA : ";
	cin >> pilihan;

	if (pilihan == 1) {
		cout << "Ketik nilai alas : ";
		cin >> a;

		cout << "Ketik nilai tinggi : ";
		cin >> t;

		luas = 0.5 * a * t;

		cout << "luas segitiga = " << luas;
	} else if (pilihan == 2) {
		cout << "Ketik nilai panjang : ";
		cin >> p;

		cout << "Ketik nilai lebar : ";
		cin >> l;

		luas = phi * r * r;

		cout << "luas lingkaran = " << luas;
	} else {
		cout << "Ketik panjang sisi kubus : ";
		cin >> s;

		volume = s * s * s;

		cout << "Volume kubus = " << volume;
	}

	cin.get();
	return 0;
}
*/

/*
#include <iostream>

using namespace std;

float bil1, bil2, jumlah;
char operasi;

int main() {
	cout << "Bilangan 1 : ";
	cin >> bil1;

	cout << "Bilangan 2 : ";
	cin >> bil2;

	cout << "Operasi [+, -, /, *] : ";
	cin >> operasi;

	if (operasi == '+')
	{
		jumlah = bil1 + bil2;
	} else if (operasi == '-')
	{
		jumlah = bil1 - bil2;
	} else if (operasi == '/')
	{
		jumlah = bil1 / bil2;
	} else if (operasi == '*')
	{
		jumlah = bil1 * bil2;
	} else {
		cout << endl << "Jenis operasi salah!";
		jumlah = '0';
	}

	cout << bil1 << " " << operasi << " " << bil2 << " = " << jumlah << endl;

	cin.get();
	return 0;
}
*/