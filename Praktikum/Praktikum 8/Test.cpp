/* #include <iostream>

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

	switch (operasi) {
		case '+' : 
			jumlah = bil1 + bil2;
			break;
		case '-' : 
			jumlah = bil1 - bil2;
			break;
		case '/' : 
			jumlah = bil1 / bil2;
			break;
		case '*' : 
			jumlah = bil1 * bil2;
			break;
		default :
			jumlah = 0;
			cout << endl << "Jenis operasi salah!" << endl;
	}

	cout << bil1 << operasi << bil2 << " = " << jumlah << endl;

	cin.get();
	return 0;
}
*/

#include <iostream>
#include <math.h>

using namespace std;
char choice;
const float phi = 3.14;
double a, t, p, l, r, s;
double luas, volume;

int main() {
	cout << "MENU PILIHAN OPERASI :" << endl;
	cout << "1. MENGHITUNG LUAS SEGITIGA" << endl;
	cout << "2. MENGHITUNG LUAS PERSEGI PANJANG" << endl;
	cout << "3. MENGHITUNG LUAS LINGKARAN" << endl;
	cout << "4. MENGHITUNG VOLUME KUBUS" << endl;

	cout << "\nKETIK PILIHAN ANDA : ";
	cin >> choice;

	switch(choice) {
		case '1' :
			cout << "Masukkan nilai alas : ";
			cin >> a;
			cout << "Masukkan nilai tinggi : ";
			cin >> t;

			luas = 0.5 * a * t;

			cout << "nilai luasnya adalah : " << luas << endl;
			break;
		case '2' :
			cout << "Masukkan nilai panjang : ";
			cin >> p;
			cout << "Masukkan nilai lebar : ";
			cin >> l;

			luas = p * l;

			cout << "nilai luasnya adalah : " << luas << endl;
			break;
		case '3' :
			cout << "Masukkan nilai jari-jari : ";
			cin >> r;

			luas = phi * pow (r, 2);

			cout << "nilai luasnya adalah : " << luas << endl;
			break;
		case '4' :
			cout << "Masukkan nilai sisi : ";
			cin >> s;

			volume = pow (s, 3);

			cout << "nilai volume nya adalah : " << volume << endl;
			break;
		default :
			cout << "Format yang anda masukkan salah!" << endl;
			break;
	}

	cin.get();
	return 0;
}