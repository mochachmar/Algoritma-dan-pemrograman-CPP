#include <iostream>

using namespace std;

int main(){
     
     // Deklarasi dan inisialisasi array dua dimensi
     int matrikscontoh [3][2] = {{1,2}, {3,4}, {5,6}};

     // Mendeklarasi variabel untuk indeks perulangan
     int i, j;

     cout << "##  Tampil Matriks Ordo 3x2 ##" << endl;
     cout << "==========================================" << endl;
     cout << endl;

     // Menampilkan matriks contoh
     cout <<"\nMenampilkan matriks contoh\n";
     for (i = 0;i < 3;i++) // jumlah elemen baris = 3
     { 
          for (j = 0;j < 2;j++) // jumlah elemen kolom = 2
          {
               cout << matrikscontoh[i][j] << " ";
          }
               cout << endl;
     }
     return 0;
}
