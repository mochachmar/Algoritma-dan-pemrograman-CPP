/*
#include <iostream>

using namespace std;

string wujud;
float suhu;

int main() {
	cout << "Ketik suhu cairan : ";
	cin >> suhu;

	if (suhu >= 100) {
		wujud = "menguap/mendidih";
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

#include <iostream>
#include <conio.h>

using namespace std;
string wujud, menguap, mencair, membeku;
float suhu;
char repeat;

int main() {
    do {
	cout << "|------------------------------------------------------------------|\n";
	cout <<"|\t\t\t\tTUGAS PRAKTIKUM\t\t\t   |" << "\n";
	cout << "|\t\t\t     Created By Moch Achmar\t\t   |";
	cout << "\n|------------------------------------------------------------------|\n";
	cout << "     Ketik wujud benda cair (menguap/mencair/membeku) : ";
	cin >> wujud;

	if (wujud == "menguap" || wujud == "Menguap")  {
		cout << "\t\t   Suhu nya melebihi 100 derajat celsius\n";
	} else if (wujud == "mencair") 
	{
		cout << "\t\t   Suhu nya 0 hingga 100 derajat celsius\n";
	} else if (wujud == "membeku") {
		cout << "\t\t   Suhu nya kurang dari 0 derajat celsius\n";
	} else {
		cout << "Ketik wujud benda cair dengan benar!" << endl;
	}
    cout << "|------------------------------------------------------------------|\n";

	cout << "\t\t\t       Masih Adakah (y/n)? ";
	cin >> repeat;

	cout << "\t\t\t\t    Loading ..." << endl;

    cout << "|------------------------------------------------------------------|\n";

	system("cls");
    } while (repeat != 'n');

    system ("cls");

    getch();
}
