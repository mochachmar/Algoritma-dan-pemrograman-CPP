#include <iostream>
#include <string>
#include <fstream>
#include <ctype.h>
#include <stdio.h>
using namespace std;
//variabel
    string barang[]={"LG LCD TV","dell inspiron","swis army","iphone X","macbook pro","sony a6000","samsung gear","hp pavilion","sandisk 32GB","epson printer"};
    int harga[]={79,105,410,231,312,600,707,800,32,210};
    int stok[]={5,3,6,7,2,4,8,9,0,7};
    string cart_barang[100];
    int cart_harga[100];
    int jumlah,indeks=–1,N;
    string barang_nama;
    int barang_harga,barang_stok;
////////////////////////////////////////////////////////////////////////
/////////////////////// untuk daftar barang ///////////////////////////////////
string cbarang(string barang[],int harga[],int stok[]){
//    int N = tambahBarang();
    cout << "—————————————————————————–\n";
    cout << "  kode\t\t  barang\t\tharga\t\t\tstok barang|\n";
    cout << "—————————————————————————–\n";
   for(int i=0;i<9;i++){
        cout << " " << i << "\t\t" << barang[i] << "\t\tRp. " << harga[i] << ".000\t\t\t" << stok[i] << "  " << endl;
   }
   cout << "——————————————————————————\n";
   cout << endl;
}
////////////////////////////////////////////////////////////////////////
/////////////////////// untuk Keranjang Pesanan ////////////////////////////////
int cart(){
    char lagi;
    char input;
    do{
        int N[100];
        int kode;
        cout << "masukkan kode barang : ";
        cin >> kode;
        if(stok[kode]==0){
            cout << "Barang yang anda pilih Out Of Stock” << endl;
        } else{
        cout << "nama barang \t: " << barang[kode] << endl;
        cout << "harga barang \t: " << harga[kode] << endl;
        cout << "stok barang \t: " << (stok[kode]–1) << endl;
        indeks=indeks+1;
        cart_barang[indeks]=barang[kode];
        cart_harga[indeks]=harga[kode];
        stok[kode]=(stok[kode]–1);
        jumlah=jumlah+harga[kode];
        cout << "total harga \t: " << jumlah << endl;
        }
        cout << "belanja lagi?[y/n] ";
        cin >> lagi;
        cout << endl;
    }while(lagi=='Y' || lagi=='y');
}
////////////////////////////////////////////////////////////////////////
/////////////////////// untuk Keranjang Belanja ////////////////////////////////
string keranjang(int maks,string cart_barang[],int cart_harga[]){
    cout << endl;
    cout << "—————————————————————————\n";
    cout << "Daftar Barang yang anda beli:" << endl;
    for(int i=0;i<=maks;i++){
        cout << "\t" << i+1 << ". " << cart_barang[i] << "\t\t\tRp. " << cart_harga[i] << endl;
    }
}
int main(){
    int pilih;
    cbarang(barang,harga,stok);
    cart();
    keranjang(indeks,cart_barang,cart_harga);
    cout << "—————————————————————————\n";
    cout << "\ttotal harga yang harus anda bayar adalah : ";
    cout << jumlah << endl;
    cout << "—————————————————————————\n";
}
