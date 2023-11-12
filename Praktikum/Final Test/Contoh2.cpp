#include <iostream>
#include <conio.h>

using namespace std;

struct pelanggan_toko     //nama struct
{
char nama[20][20],alamat[20][20],kelamin[20];
int umur[20],telp[20];
};

pelanggan_toko data;

void main()
{
char temp[20][20]; int jumlah,i;
cout<<"INPUT DATA PELANGGAN\n";
cout<<"Jumlah pelanggan : ";cin>>jumlah;

for (i=1;i<=jumlah;i++)   // Input Data
{
cout<<"Nama Pelanggan Toko\t: ";
cin>>data.nama[i],sizeof(data.nama);
cout<<"Alamat Pelanggan Toko\t: ";
cin>>data.alamat[i],sizeof(data.alamat);
cout<<"Umur Pelanggan Toko\t: ";
cin>>data.umur[i];
cout<<"Jenis Kelamin Pelanggan\t: ";
cin>>data.kelamin[i];
cout<<"No telp Pelanggan\t: ";cin>>temp[i],sizeof(temp[20]);
data.telp[i] = atoi (temp[i]);

cout<<
for (i=1;i<=jumlah;i++)     // Menampilkan Data
{
cout<<"----------------------------------------------\n";
cout<<"Data Pelanggan Toko:\n";
cout<<"Nama\t: "<<
cout<<"Alamat\t: "<<
cout<<"Umur\t: "<<
cout<<"Kelamin\t: "<<
cout<<"No telp\t: 02743324"<<
cout<
}
getch();
}
