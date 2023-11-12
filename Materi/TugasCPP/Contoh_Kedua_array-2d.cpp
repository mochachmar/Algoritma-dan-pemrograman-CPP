#include <iostream>

using namespace std;

int main(){

     // Deklarasi array dua dimensi
     // jumlah elemen baris = 3
     // jumlah elemen kolom = 2
     int matriksa [3][2];
     int matriksb [3][2];
     int matriksc [3][2];

     // Mendeklarasi variabel untuk indeks perulangan
     int i, j;

     cout << "##  Penjumlahan Matrik Ordo 3x2 ##" << endl;
     cout << "==========================================" << endl;
     cout << endl;

     // Mengisi nilai kedalam elemen-elemen array matriks a

     for (i = 0;i < 3;i++){
          for (j = 0;j < 2;j++){
               cout << "matrik a [" << i << "] [" << j << "] = ";
               cin >> matriksa[i][j];
          }
     }
     cout << endl;

     // Mengisi nilai kedalam elemen-elemen array matriks a

     for (i = 0;i < 3;i++){
          for (j = 0;j < 2;j++){
               cout << "matrik b [" << i << "] [" << j << "] = ";
               cin >> matriksb[i][j];
          }
     }
     cout << endl;

     // penjumlahan array matriks a dan matriks b
     // menyimpan hasilnya ke array matriks c;

     for (i = 0;i < 3;i++) {
          for(j = 0;j < 2;j++) {
               matriksc[i][j] = matriksa[i][j] + matriksb[i][j];
          }
     }

     // Menampilkan matriks a
     cout << "\nMatriks a\n";
     for(i = 0;i < 3;i++){
          for(j = 0;j < 2;j++){
               cout << matriksa[i][j]<<" ";
          }
          cout << endl;
     }

     // Menampilkan matriks b
     cout << "\nMatriks b\n";
     for(i = 0;i < 3;i++){
          for(j = 0;j < 2;j++){
               cout << matriksb[i][j] << " ";
          }
          cout << endl;
     }

     // Menampilkan hasil penjumlahan / matriks c
     // (dalam bentuk matriks dengan ordo 3x2)
     cout <<"\nMatriks c atau hasil\n";
     for(i = 0;i < 3;i++){
          for(j = 0;j < 2;j++){
               cout << matriksc[i][j] << " ";
          }
          cout << endl;
     }

     cin.get();
     return 0;
}