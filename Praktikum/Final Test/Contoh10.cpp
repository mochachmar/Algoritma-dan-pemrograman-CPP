#include <iostream>
#include <ctime>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main() {
     atas:
     ulang:
     double b1,b2,b3,b4,b5,d,jm,km,r,t;
     int pil,n;
     char melang;
     cout <<"" <<endl;
     time_t now = time(0);
     char*dt=ctime (&now);
     cout << " Tanggal : "<< dt;
     cout << "========================================================== " << endl;
     cout << " | TOKO ANEKA BARU | " << endl;
     cout << " | JL KENANGA NO 10 TEGAL | " << endl;
     cout << "=========================================================== " << endl;
     cout << "" << endl;
     cout << " ----------------------------------------------------------- " << endl;
     cout << "" << endl;
     cout << " 1. MUKENAH :Rp 80.000"<<endl;
     cout << " 2. BAJU KOKO :Rp 100.000"<<endl;
     cout << " 3. GAMIS :Rp 150.000"<<endl;
     cout << " 4. KERUDUNG :Rp 50.000"<<endl;
     cout << " 5. KEMEJA :Rp 70.000"<<endl;
     cout << "" << endl;
     cout << " ----------------------------------------------------------- " << endl;
     cout << " Masukan yang ingin anda beli : ";
     cin>>pil;

        if(pil==1){
            cout << " Anda Membeli MUKENAH dengan harga Rp.80.000 "<<endl;
            b1 = 80000;
            cout << " Masukan jumlah yang anda inginkan: ";
            cin>>n;
            jm=b1*n;
        goto hasil;
        } else if (pil==2){
            cout << " Anda Membeli BAJU KOKO dengan harga Rp.100.000 "<<endl;
            b2 = 100000;
            cout << " Masukan jumlah yang anda inginkan: ";cin>>n;
            jm=b2*n;
            goto hasil;
        } else if (pil==3){
            cout << " Anda Membeli GAMIS dengan harga Rp.150.000 "<<endl;
            b3 = 150000;
            cout << " Masukan jumlah yang anda inginkan: ";cin>>n;
            jm=b3*n;
            goto hasil;
        } else if (pil==4){
            cout << " Anda Membeli KERUDUNG dengan harga Rp.50.000 "<<endl;
            b4 = 50000;
            cout << " Masukan jumlah yang anda inginkan: ";cin>>n;
            jm=b4*n;
            goto hasil;
        } else if (pil==5){
            cout << " Anda Membeli KEMEJA dengan harga Rp.70.000 "<<endl;
            b5 = 70000;
            cout << " Masukan jumlah yang anda inginkan: ";cin>>n;
            jm=b5*n;
            goto hasil;
        } else {
            cout<<" Maaf yang Anda masukan tidak terdaftar di menu"<< endl;
        }

        cout << "" <<endl;
        cout << " apakah anda ingin mengulangi nya lagi? [y/t]";
        scanf("%s", &melang);
        if(melang=='y' || melang=='Y') {
            system("CLS");
            goto ulang;
        } else if(melang=='t' || melang=='T') {
            goto selesai;
        } hasil:

        cout << "\n JUMLAH : Rp." << jm;
        if (jm>=50000){
            d=jm*15/100;
        } else if (jm<50000){
            d=0;
        }

        cout << "" << endl;
        cout << "" << endl;
        cout << " DISKON : Rp." << d;
        cout << "" << endl;
        t=jm-d;
        cout << "" << endl;
        cout << " TOTAL : Rp." << t;
        cout << "" << endl;
        cout << " BAYAR : Rp.";
        cin>>r;

        if(r>=t){
            km=r-t;
            cout << " KEMBALIAN : Rp." << km <<endl;
        } else if(r<t){
            cout << " maaf uang yang anda bayarkan kurang,silahkan lakukan pembayaran kembali " << endl;
        }

        cout << "" << endl;
        cout << " apakah anda ingin mengulangi nya lagi? [y/t]";
        scanf("%s", &melang);
        if(melang=='y' || melang=='Y'){
            system("CLS");
            goto ulang;
        } else if(melang=='t' || melang=='T'){
            goto selesai;
        } selesai:

        cout << "" << endl;
        cout << " TERIMA KASIH TELAH BERKUNJUNG DAN BERBELANJA" << endl;
        cout << " BARANG YANG SUDAH DIBELI TIDAK BOLEH DIKEMBALIKAN " << endl;
        cout << "======================================================= " << endl;
        goto atas;

        return 0;
}
