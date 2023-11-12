/* #include <iostream>

using namespace std;

float x, y;

int main () {
	cout << "Ketik nilai X = ";
	cin >> x;

	cout << "Ketik nilai Y = ";
	cin >> y;

	cout << "Bilangan terbesar adalah : " << max(x, y) << endl;
	cout << "Bilangan terkecil adalah : " << min(x, y);

	cin.get();
	return 0;
}
*/

/*
#include <iostream>
#include <math.h>

using namespace std;

float x, y;

int main () {
	cout << "Ketik nilai X = ";
	cin >> x;

	cout << "Ketik nilai Y = ";
	cin >> y;

	cout << "Hasil dari " << x << "/" << y << " = " << x/y << endl;
	cout << "Sisa bagi dari " << x << "/" << y << " = " << fmod(x, y) << endl;
	cout << "Pembulatan ke atas : " << ceil(x/y) << endl;
	cout << "Pembulatan ke bawah : " << floor(x/y);

	cin.get();
	return 0;
}
*/

/*
#include <iostream>
#include <math.h>

using namespace std;

float x, y;

int main () {
	cout << "Ketik nilai X = ";
	cin >> x;

	cout << "Ketik nilai Y = ";
	cin >> y;

	cout << "Hasil dari " << x << " pangkat " << y << " = " << pow(x,y) << endl;

	cout << "Akar kuadrat dari " << x << " = " << sqrt(x) << endl;

	cout << "Akar kuadrat dari " << y << " = " << sqrt(y) << endl;

	cout << "Akar pangkat 3 dari " << x << " = " << cbrt(x) << endl;

	cout << "Akar pangkat 3 dari " << y << " = " << cbrt(y) << endl;

	cin.get();
	return 0;
}
*/


#include <iostream>
#include <math.h>

using namespace std;

const float phi = 3.1415965;
float x;

int main () {
	cout << "Ketik nilai sudut X = ";
	cin >> x;

	// ubah ke radian = cos(x * phi/180);
	// ubah dari radian ke pecahan = sin(radian(30));

	cout << "cos ("<<x<<") = " << cos(x * phi/180) << endl;

	cout << "sin ("<<x<<") = " << sin(x * phi/180) << endl;

	cout << "tan ("<<x<<") = " << tan(x * phi/180) << endl;

	cin.get();
	return 0;
}


/*
#include <iostream>
#include <math.h>

using namespace std;

float a, b, c;

int main () {
	cout << "Ketik nilai tinggi (a) = ";
	cin >> a;

	cout << "Ketik nilai alas (b) = ";
	cin >> b;

	c = sqrt(pow(a, 2) + pow(b, 2));

	cout << "Panjang sisi miring (c) = " << c << endl;

	cin.get();
	return 0;
}
*/

/*
#include <iostream>
#include <string>

using namespace std;

string namaDepan;
string namaBelakang;
string namaLengkap;

int main () {
	cout << "Ketik Nama Depan Anda : ";
	cin >> namaDepan;

	cout << "Ketik Nama Belakang Anda : ";
	cin >> namaBelakang;

	namaLengkap = namaDepan + " " + namaBelakang;

	cout << "Nama Lengkap Anda : " << namaLengkap;

	cin.get();
	return 0;
}
*/

/*
#include <iostream>
#include <string>

using namespace std;

string namaDepan;
string namaBelakang;
string namaLengkap;

int main () {
	cout << "Ketik Nama Depan Anda : ";
	cin >> namaDepan;

	cout << "Ketik Nama Belakang Anda : ";
	cin >> namaBelakang;

	namaLengkap = namaDepan.append(" ");

	namaLengkap = namaDepan.append(namaBelakang);

	cout << "Nama Lengkap Anda : " << namaLengkap;

	cin.get();
	return 0;
}
*/

/*
#include <iostream>
#include <string>

using namespace std;

string kalimat;
int panjang;

int main() {
	cout << "Ketik Sebuah kalimat : ";
	getline(cin, kalimat);

	panjang = kalimat.length();

	cout << "Panjang kalimat " << kalimat << " = " << panjang;

	cin.get();
	return 0;
}
*/

/*
#include <iostream>
#include <string>

using namespace std;

string kalimat;
int panjang;

int main() {
	cout << "Ketik Sebuah kalimat : ";
	getline(cin, kalimat);

	panjang = kalimat.size();

	cout << "Panjang kalimat " << kalimat << " = " << panjang;

	cin.get();
	return 0;
}
*/