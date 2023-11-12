#include <iostream>
#include <cstdlib>

using namespace std;
string nama,nik,jabatan,kawin;
char kodejabatan,ulang,status;
int gol,anak;
int gajipokok,tunjanganjabatan,tunjagananak,tunjangankeluarga,pajak,totalgaji,gajibersih;

int main()
{
ulang='Y';
while ((ulang=='Y')||(ulang=='y'))
{
system ("cls");
system ("color 03");
cout <<"Created By Kamil Mahsyar Akbar"<<endl;
cout <<"Tugas Praktikum 9.1"<<endl;
cout <<"\n";
cout <<"\n";
cout<<"\t\tMasukkan DATA GAJI KARYAWAN SUMBER REJEKI"<<endl;
cout<<"\t\t========================================="<<endl;
cout<<"\t\tInput Nomor Induk Karyawan :";
cin>>nik;
cout<<"\t\tInput Nama Karyawan :";
cin>>nama;

do{
cout<<"\t\tInput Golongan Karyawan [1,2,3,4] :";
cin>>gol;
if ((gol<1)||(gol>4)){
cout <<endl<<"\t\tGolongan Yang Anda Masukkan Salah Silahkan Masukkan Kembali !"<<endl;}	
}while ((gol<1)||(gol>4));

do{
cout<<"\t\tInput Kode Jabatan[D,M,K,N]:";
cin>>kodejabatan;

if((kodejabatan!='D')&&(kodejabatan!='M')&&(kodejabatan!='K')&&(kodejabatan!='N')){
cout<<endl<<"\t\tKode Jabatan Yang Anda Masukkan Salah Silahkan Masukkan Kembali"<<endl;}	
}while ((kodejabatan!='D')&&(kodejabatan!='M')&&(kodejabatan!='K')&&(kodejabatan!='N'));

do{
cout<<"\t\tInput Status Kawin [K/T] :";
cin>>status;

if ((status!='K')&&(status!='T')){
	cout<<endl<<"\t\tStatus Kawin Yang Anda Masukkan Salah Silahkan Masukkan Kembali !"<<endl;}	
}while((status!='K')&&(status!='T'));

anak=0;
if (status=='K'){
	cout<<"\t\tinput Jumlah Anak :";
	cin>>anak;
}	
//Menentukan Gaji Pokok
if (gol==1){
	gajipokok=3000000;
}
else if (gol==2){
	gajipokok=3500000;
}
else if (gol==3){
	gajipokok=4000000;
}
else{
	gajipokok=4500000;
}
//Menentukan Jabatan Dan tunjangan Jabatan
if (kodejabatan=='D'){ 
	jabatan="Direktur";
	tunjanganjabatan=150000;
}
else if (kodejabatan=='M'){
	jabatan="Maneger";
	tunjanganjabatan=125000;
}
else if (kodejabatan=='K'){
	jabatan="Kepala Bagian";
	tunjanganjabatan=800000;
}
else{ 
	jabatan="Non Jabatan";
	tunjanganjabatan=0;
}
//Menentukan Tunjangan Keluarga

if (status=='K'){
	kawin="Kawin";
	tunjangankeluarga=0.1*gajipokok;
}
else {
	status=='T';
	kawin="Belum Kawin";
	tunjangankeluarga=0;
}
//Menentukan Tunjangan Anak
if (anak > 2){
	tunjagananak=2*0.02*gajipokok;
}
else{
	tunjagananak=0.02*anak*gajipokok;
}
//Menghitung Total Gaji
totalgaji=gajipokok+tunjanganjabatan+tunjangankeluarga+tunjagananak;
pajak=0.05*totalgaji;
gajibersih=totalgaji-pajak;
system ("cls");
//Menampilkan Output
system ("color 02");
cout <<"\t\t\t\tGAJI KARYAWAN SUMBER REJEKI BERSAMA"<<endl;
cout <<"\t\t================================================================="<<endl;
cout <<"\t\t|\t\tNIK                :"<<nik<<"\t\t\t|"<<endl;
cout <<"\t\t|\t\tNAMA               :"<<nama<<"\t\t\t|"<<endl;
cout <<"\t\t|\t\tGOLONGAN           :"<<gol<<"\t\t\t\t|"<<endl;
cout <<"\t\t|\t\tGAJI POKOK         :Rp."<<gajipokok<<"\t\t\t|"<<endl;
cout <<"\t\t|\t\tJABATAN            :"<<jabatan<<"\t\t|"<<endl;
cout <<"\t\t|\t\tTUNJANGAN JABATAN  :Rp."<<tunjanganjabatan<<"\t\t\t|"<<endl;
cout <<"\t\t|\t\tSTATUS KAWIN       :"<<kawin<<"\t\t\t|"<<endl;
cout <<"\t\t|\t\tTUNJANGAN KELUARGA :Rp."<<tunjangankeluarga<<"\t\t\t|"<<endl;
cout <<"\t\t|\t\tTUNJANGAN ANAK     :Rp."<<tunjagananak<<"\t\t\t|"<<endl;
cout <<"\t\t|\t\tTOTAL GAJI         :Rp."<<totalgaji<<"\t\t\t|"<<endl;
cout <<"\t\t|\t\tPAJAK              :Rp."<<pajak<<"\t\t\t|"<<endl;
cout <<"\t\t|\t\tGAJI BESRIH        :Rp."<<gajibersih<<"\t\t\t|"<<endl;
cout <<"\t\t=================================================================="<<endl;
cout <<"\n";
cout <<"Created By Kamil Mahsyar Akbar"<<endl;
cout <<"Tugas Praktikum 9.1"<<endl;
cout <<"\t\t\t\tMasih Ada Data ? [Y/T] :";
cin >>ulang;
system("pause");
}
system ("cls");
cout <<"\t\t\tTerima Kasih :)"<<endl;
cout <<"Created By Kamil Mahsyar Akbar"<<endl;
cout <<"Tugas Praktikum 9.1"<<endl;
return 0;
}