#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <dos.h>

using namespace std;

int _max_char = 20;
struct pelanggan
{
        char NAMA[20];
        char NIK[20];
} plgn;

struct lokasi
{
        char ID_LOC[20];
        float X;
        float Y;
} l;

struct alamat
{
        int nomerRecord;
        pelanggan orang;
        lokasi tempat;
        int No;
        char RT[20];
        char RW[20];
        char desa[20];
        char kec[20];
        char nama_jalan[20];
        char kode_pos[20];
} alm;
int _terminator = -1;

void masukanKeDaftar ( alamat, alamat*& );
int jumlahDaftar ( alamat * );
alamat* initDaftar ( alamat* a, int jumlahDaftar );
alamat terminator ();
alamat inputPelanggan ();
alamat* cariPelanggan ( int nomerRecord, alamat* a );

alamat* cariPelanggan ( int nomerRecord, alamat* a )
{
        cout
        << "cariPelanggan ( " << nomerRecord << " ) "
        << "jumlah daftar=" << jumlahDaftar ( a ) << endl;
        for (int i=0; i < jumlahDaftar ( a ); i++)
        {
                cout
                << "i="
                << i << " punya nomerRecord "
                << a [ i ].nomerRecord
                << endl;
                if ( a [ i ].nomerRecord == nomerRecord )
                        return &a [ i ];
        }
        return NULL;
}


alamat* initDaftar ( alamat* a, int jumlahDaftar )
{
        alamat* a_baru = new alamat [ jumlahDaftar + 1 ];
        int i=0;
        while ( i < jumlahDaftar )
        {
                a_baru [ i ] = a [ i ];
                i++;
        }
        a_baru [ i ] = terminator ();
        return a_baru;
}
alamat terminator ()
{
        alamat terminator;
        terminator.No = _terminator;
        return terminator;
}
int jumlahDaftar ( alamat * a)
{
        int i = 0;

        while ( a [ i ].No != _terminator )
                i++;

        return i;
}

void masukanKeDaftar
(
        alamat a,
        alamat*& daftar
)
{
        int jumlahDaftar_ = jumlahDaftar ( daftar );
        jumlahDaftar_ = jumlahDaftar_ + 2;
        alamat* daftarBaru = new alamat [ jumlahDaftar_ ];
        int i=0;
        while ( i < jumlahDaftar_ )
        {
                daftarBaru [ i ] = daftar [ i ];
                i++;
        }
        jumlahDaftar_ = jumlahDaftar ( daftarBaru );
        //nomerRecord pertama adalah 1 bukan 0
        a.nomerRecord = jumlahDaftar_ + 1;
        daftarBaru [ jumlahDaftar_ ] = a;
        jumlahDaftar_++;
        daftarBaru [ jumlahDaftar_ ] = terminator ();
        delete [] daftar;
        daftar = daftarBaru;
}

//alamat inputPelanggan (int nomer)
alamat inputPelanggan ()
{
        char dummy [ 1 ];
        alamat a;
        char koma;
        cout << "Masukan NIK   = ";
        cin.getline (dummy, 1);
        cin.getline ( a.orang.NIK, _max_char );
        gets(plgn.NIK);

        cout << "Masukan Nama  = ";
        cin.getline ( a.orang.NAMA, _max_char );
        cout << "Masukan ID P  = ";
        cin>> a.tempat.ID_LOC;
        cout << "Masukan Koordinat (X_Y)";
        cout<<"\n\t\t";
        cin >> a.tempat.X >> koma >> a.tempat.Y;
        cout<<"Masukan Alamat \n"<<endl;
        cout << "No = ";
        cin>>a.No;
        cout<<"Nama_jalan = ";
        cin.getline (dummy, 1);
        cin.getline (a.nama_jalan, _max_char);
        gets(alm.nama_jalan);
        cout << "No_RT = ";
        cin>>a.RT;
        cout << "NO_RW = ";
        cin>>a.RW;
        cout << "Desa = ";
        cin.getline (dummy, 1);
        cin.getline (a.desa, _max_char);
        gets(alm.desa);
        cout<<"Masukkan Kec      = ";
        cin.getline ( a.kec, _max_char );
        cout<<"Masukkan Kode pos = ";
        cin.getline ( a.kode_pos, _max_char );
        cout<<"___________________Data Selanjutnya__________________________";cout<<endl;
        return a;
}


void printPelanggan (alamat a)
{
        cout
        <<" NIK = "
        <<plgn.NIK
        <<"\n NAMA = "
        <<a.orang.NAMA
        <<"\n ID P = "
        <<a.tempat.ID_LOC
        <<"\n Koordinat (X,Y) = ("
        <<a.tempat.X
        << ", "
        << a.tempat.Y
        <<")\n"


        <<" Alamat (no = "
        << a.No
        << " Jalan = "
        << alm.nama_jalan
        << " rt = " << a.RT
        << " rw = " << a.RW
        << " desa = " <<alm.desa
        << ") \n kec = " << a.kec
        << "\n kode_pos = " << a.kode_pos
        << endl;
}
int main()
{
        alamat* daftar = new alamat [ 1 ];
        daftar [ 0 ] = terminator ();
        int pil;
        int i,b;
        char lagi='1';

        while ( pil != 3 )
        {
                //clrscr();
                cout<<"============================="<<endl;
                cout<<" MENU UTAMA "<<endl;
                cout<<"============================="<<endl;
                cout<<"[1] Input Data"<<endl;
                cout<<"[2] Lihat Data"<<endl;
                cout<<"[3] Keluar Sistem"<<endl;
                cout<<"============================="<<endl;
                cout<<" Pilihan Anda: ";

                cin>>pil;

                switch ( pil )
                {
                        case 1:
                                system("cls");


                                cout<<"Masukan Jumlah Pelanggan= ";
                                cin>>b;
                                char koma;
                                for(i=1;i<=b;i++)
                                {
                                        cout <<"masukan data no " << i << endl;
                                        alamat a = inputPelanggan ();
                                        masukanKeDaftar (a, daftar);
                                        cout << "jumlah daftar sekarang=" <<
                                        jumlahDaftar ( daftar ) << endl;
                                }
                                cout<<endl;
                                cout<<"___________________Data Selanjutnya__________________________";cout<<endl;
                                cout<<"Lagi ? (Ya = 1 / Tidak = 0) : ";
                                cin>>lagi;
                                while ( toupper ( lagi ) == '1' )
                                {
                                        alamat a = inputPelanggan ();
                                        masukanKeDaftar (a, daftar);

                                        cout<<endl;
                                        cout<<"___________________Data Selanjutnya__________________________";
                                        cout<<"Lagi ? (Ya = 1 / Tidak = 0) : ";
                                        cin>>lagi;
                                }



                                break;

                        case 2:
                                system("cls");
                                cout<<"Masukkan No urut Pelanggan : ";
                                cin>>i ;
                                alamat * a_ptr;
                                a_ptr = cariPelanggan ( i, daftar );
                                if (a_ptr != NULL)
                                {
                                        alamat a;
                                        a = a_ptr [ 0 ];
                                        printPelanggan ( a );
                                }
                                else
                                {
                                        cout
                                        << "No urut pelanggan "
                                        << i
                                        << " tidak ketemu\n";
                                }
                                break;
                                default:
                                system("cls");
           cout<<"Bye- bye . . . "<<endl;_sleep(2);
           cout<<endl;
                        }

                }//end while

                //getch();
        return 0;
}
