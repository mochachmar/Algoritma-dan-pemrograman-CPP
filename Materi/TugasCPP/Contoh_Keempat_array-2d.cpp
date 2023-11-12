#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;
char repeat;

int main() {
    do {
    int Mat_A[10][10], Mat_B[10][10];
    int Mat_C[10][10], Mat_D[10][10], Mat_E[10][10], Mat_F[10][10], Mat_G[10][10];
    int i, j;
    int baris1, kolom1, baris2, kolom2;

    do {
        system("cls");
        cout << "|------------------------------------------------------------------|\n";
        cout <<"|\t\t\t\tTUGAS KELOMPOK\t\t\t   |" << "\n";
        cout << "|\t\tCreated By Moch Achmar & Kamil Mahsyar Akbar\t   |"  << "\n";;
        cout << "|\t\t\t\t  ARRAY 2-D\t\t\t   |";
        cout << "\n|------------------------------------------------------------------|\n";
        cout << "|\t\tBaris dan kolom tidak boleh lebih dari 10!\t   |\n";
        cout << "\t\tMasukkan banyak baris matriks A (1-10) : ";
        cin >> baris1;
        cout << "\t\tMasukkan banyak kolom matriks A (1-10) : ";
        cin >> kolom1;
        cout << "\t\tMasukkan banyak baris matriks B (1-10) : ";
        cin >> baris2;
        cout << "\t\tMasukkan banyak kolom matriks B (1-10) : ";
        cin >> kolom2;
        cout << "|------------------------------------------------------------------|\n";
    } while (baris1 > 10 || kolom1 > 10 || baris2 > 10 || kolom2 > 10);

    system("cls");

    cout << "|------------------------------------------------------------------|\n";
    cout <<"|\t\t\t\tTUGAS KELOMPOK\t\t\t   |" << "\n";
    cout << "|\t\tCreated By Moch Achmar & Kamil Mahsyar Akbar\t   |"  << "\n";;
    cout << "|\t\t\t\t  ARRAY 2-D\t\t\t   |";
    cout << "\n|------------------------------------------------------------------|\n";

    //membaca elemen-elemen matriks A
    cout << "\t\t\t\tMatriks A (" << baris1 << "x" << kolom1 << ")\n";
    for (i = 0;i < baris1;i++){
        for (j = 0;j < kolom1;j++){
            cout << "\t\t\t\tElemen " << i << "," << j << " = ";
            cin >> Mat_A[i][j];
        }
    }
    cout << endl;

    //membaca elemen-elemen matriks B
    cout << "\t\t\t\tMatriks B (" << baris2 << "x" << kolom2 << ")\n";
    for (i = 0;i < baris2;i++) {
        for (j = 0;j < kolom2;j++){
            cout << "\t\t\t\tElemen " << i << "," << j << " = ";
            cin >> Mat_B[i][j];
        }
    }

    cout << endl;

    system("cls");

    cout << "----------------------------------------------------\n";
    cout <<"\t\t  TUGAS KELOMPOK" << "\n";
    cout << "   Created By Moch Achmar & Kamil Mahsyar Akbar"  << "\n";;
    cout << "\t\t     ARRAY 2-D";
    cout << "\n----------------------------------------------------\n";

    //Mencetak elemen A
    cout << "Matriks A (" << baris1 << "x" << kolom1 << ")\n";
    for (i = 0;i < baris1;i++){
        for (j = 0;j < kolom1;j++){
            cout << setw(3) << Mat_A[i][j];
        }
        cout << endl;
    }

    cout << "----------------------------------------------------\n";
    //Mencetak elemen B
    cout << "Matriks B (" << baris2 << "x" << kolom2 << ")\n";
    for (i = 0;i < baris2;i++){
        for (j = 0;j < kolom2;j++){
            cout << setw(3) << Mat_B[i][j];
        }
        cout << endl;
    }

    if ((baris1 == baris2) && (kolom1 == kolom2)) {
        //Menghitung jumlah dan selisih dua buah matriks
        for (i=0;i<baris1;i++){
            for (j=0;j<kolom1;j++){
                Mat_C[i][j]=Mat_A[i][j]+Mat_B[i][j]; //hitung jumlah(+)
                Mat_D[i][j]=Mat_A[i][j]-Mat_B[i][j]; //hitung selisih(-)
                Mat_E[i][j]=Mat_A[i][j]*Mat_B[i][j]; //hitung kali (*)
                Mat_F[i][j]=Mat_A[i][j]/Mat_B[i][j]; //hitung bagi (/)
                Mat_G[i][j]=Mat_A[i][j]%Mat_B[i][j]; //hitung mod (%)
            }
        }
        
        cout << "----------------------------------------------------\n";
        //Mencetak elemen matriks C
        cout << "Matriks C (" << baris1 << "x" << kolom1 << ") = ";
        cout << "Matriks A (" << baris1 << "x" << kolom1 << ") + ";
        cout << "Matriks B (" << baris2 << "x" << kolom2 << ") \n";
        for (i = 0;i < baris1;i++){
            for(j = 0;j < kolom1;j++){
                cout << setw(3) << Mat_C[i][j];
            }
            cout << endl;
        }
        
        cout << "----------------------------------------------------\n";
        //Mencetak elemen matriks D
        cout << "Matriks D (" << baris1 << "x" << kolom1 << ") = ";
        cout << "Matriks A (" << baris1 << "x" << kolom1 << ") - ";
        cout << "Matriks B (" << baris2 << "x" << kolom2 << ") \n";
        for (i = 0;i < baris1;i++){
            for(j = 0;j < kolom1;j++){
                cout << setw(3) << Mat_D[i][j];
            }
            cout << endl;
        }

        cout << "----------------------------------------------------\n";
        //Mencetak elemen matriks E
        cout << "Matriks E (" << baris1 << "x" << kolom1 << ") = ";
        cout << "Matriks A (" << baris1 << "x" << kolom1 << ") * ";
        cout << "Matriks B (" << baris2 << "x" << kolom2 << ") \n";
        for (i = 0;i < baris1;i++){
            for(j = 0;j < kolom1;j++){
                cout << setw(3) << Mat_E[i][j];
            }
            cout << endl;
        }

        cout << "----------------------------------------------------\n";
        //Mencetak elemen matriks F
        cout << "Matriks F (" << baris1 << "x" << kolom1 << ") = ";
        cout << "Matriks A (" << baris1 << "x" << kolom1 << ") / ";
        cout << "Matriks B (" << baris2 << "x" << kolom2 << ") \n";
        for (i = 0;i < baris1;i++){
            for(j = 0;j < kolom1;j++){
                cout << setw(3) << Mat_F[i][j];
            }
            cout << endl;
        }

        cout << "----------------------------------------------------\n";
        //Mencetak elemen matriks G
        cout << "Matriks G (" << baris1 << "x" << kolom1 << ") = ";
        cout << "Matriks A (" << baris1 << "x" << kolom1 << ") % ";
        cout << "Matriks B (" << baris2 << "x" << kolom2 << ") \n";
       for (i = 0;i < baris1;i++){
            for(j = 0;j < kolom1;j++){
                cout << setw(3) << Mat_G[i][j];
            }
            cout << endl;
        }
    }
        cout << "----------------------------------------------------\n";
        cout << "\t\tMasih Adakah (Y/N)? ";
        cin >> repeat;

        cout << "Loading ..." << endl;

        system("cls");
       } while ((repeat == 'Y') || (repeat == 'y'));

        system ("cls");

        getch();
}
