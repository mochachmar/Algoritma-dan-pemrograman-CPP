/*
//Tidak menggunakan endl
#include <iostream>

using namespace std;

int main() {

    float a, b, c;
    a = 7.5;
    b = 8.4;
    c = 8;

    cout<<"Nilai A: " << a; 
    cout<<"Nilai B: " << b;

    c = a + b;

    cout<<"Nilai C: " << c;

    cin.get();
    return 0;
}
*/

/*
//Menggunakan endl
#include <iostream>

using namespace std;

int main() {

    float a, b, c;
    a = 7.5;
    b = 8.4;
    c = 8;

    cout<<"Nilai A: " << a << endl;; 
    cout<<"Nilai B: " << b << endl;

    c = a + b;

    cout<<"Nilai C: " << c << endl;

    cin.get();
    return 0;
}
*/

/*
#include <iostream>
#include <iomanip>

using namespace std;

int nilai;

int main() {
    cout<<"Ketik Sebuah Nilai: "; 
    cin >> nilai; 

    cout<<"Nilai = "<< nilai <<endl;

    cout << "Nilai ke Octal = "<< oct << nilai <<endl; 
    cout << "Nilai ke Hexadesimal = "<< hex << nilai <<endl;
    cout << "Nilai ke Desimal = "<< dec << nilai <<endl;

    cin.get();
    return 0;
}
*/

/*
#include<iostream>
#include<iomanip>

float angka;

int main() {

    angka = 3.14159;

    cout << setprecision(1) << angka << endl;
    cout << setprecision(2) << angka << endl;
    cout << setprecision(3) << angka << endl;
    cout << setprecision(4) << angka << endl;
    cout << setprecision(5) << angka << endl;
    cout << setprecision(6) << angka << endl;
    cout << setprecision(7) << angka << endl;
    cout << setprecision(8) << angka << endl;
    cout << setprecision(9) << angka << endl;
    cout << setprecision(10) << angka << endl;
    cout << setprecision(11) << angka << endl;
    cout << setprecision(12) << angka << endl;
    cout << setprecision(13) << angka << endl;
    cout << setprecision(14) << angka << endl;
    cout << setprecision(15) << angka << endl;

    system("pause");
    return 0;
}
*/

/*
#include <iostream>

#include <iomanip>

using namespace std;

int main(){

    cout<<"Penggunaan Manipulator setw()" <<endl; 
    cout<<"---------------------------------"<<endl;

    cout<<setw(1)<<"1"<<endl;
    cout<<setw(2)<<"2"<<endl;
    cout<<setw(3)<<"3"<<endl;
    cout<<setw(4)<<"4"<<endl;
    cout<<setw(5)<<"5"<<endl;
    cout<<setw(6)<<"6"<<endl;
    cout<<setw(7)<<"7"<<endl;
    cout<<setw(8)<<"8"<<endl;
    cout<<setw(9)<<"9"<<endl;
    cout<<setw(10)<<"10"<<endl;
    cout<<"---------------------"<<endl;

    system("pause");
    return 0;
}
*/

/*
#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;

    int main() {
    cout << setfill('*');
    cout<<setw(1)<<"1"<<endl;
    cout<<setw(2)<<"2"<<endl;
    cout<<setw(3)<<"3"<<endl;
    cout<<setw(4)<<"4"<<endl;
    cout<<setw(5)<<"5"<<endl;
    cout<<setw(6)<<"6"<<endl;
    cout<<setw(7)<<"7"<<endl;
    cout<<setw(8)<<"8"<<endl;
    cout<<setw(9)<<"9"<<endl;
    cout<<setw(10)<<"10"<<endl;
    cout<<"---------------------"<<endl;
    getch();
}
*/

/*
#include<iostream>
#include<iomanip>

using namespace std; 

int main(){
    cout << "|" << setw(30) << "UNDIPA MAKASSSAR" << "|" << endl;
    cout << "|" << setw(30) << setionsflags (ios::left) << "UNDIPA MAKASSSAR" << "|" << endl;
    cout << "|" << resetw(30) << setionsflags (ios::left) << "UNDIPA MAKASSSAR" << "|" << endl;

    cin.get();
    return 0;
}
*/