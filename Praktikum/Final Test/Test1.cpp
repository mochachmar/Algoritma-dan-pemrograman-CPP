#include <iostream> 
#include <conio.h>
using namespace std; 
struct DataMatakuliah{ 
  string kodeMK; 
  string namaMK; 
  char NH; 
  short bobot; 
  short sks; 
}; 
struct DataMahasiswa{ 
  string NoPokok; 
  string NamaMHS; 
  short JumlahMK; 
  struct DataMatakuliah MK[70]; 
  short TotalSKS; 
  float IPK; 
}; 
struct DataMahasiswa MHS[40]; 
short bobot(char n){ 
  short hasil; 
  if(n=='A'){ 
    hasil=4; 
  }else if(n=='B'){ 
    hasil=3; 
  }else if(n=='C'){ 
    hasil=2; 
  }else if(n=='D'){ 
    hasil=1; 
  }else{ 
    hasil=0; 
  } 
  return hasil;
} 
int main(){ 
  int i=0; 
  string input="Y";  
  while(input=="Y"){ 
    system("cls");
    int jumlah_bobot=0; 
    int total_sks=0; 
    cout<<"----------------------------------------------"<<endl; 
    cout<<"INPUT DATA MAHASISWA KE-"<<i+1<<endl; 
    cout<<"----------------------------------------------"<<endl; 
    cout<<"No.Pokok: "; 
    cin>>MHS[i].NoPokok; 
    cout<<"Nama Mahasiswa: "; 
    cin>>MHS[i].NamaMHS; 
    cout<<"Jumlah Matakuliah: "; 
    cin>>MHS[i].JumlahMK; 
    if(MHS[i].JumlahMK>0){ 
      for(int x=0; x<MHS[i].JumlahMK; x++){ 
        cout<<"----------------------------------------------"<<endl; 
        cout<<"    MASUKKAN DATA MATAKULIAH KE-"<<x+1<<endl; 
        cout<<"    Kode Matakuliah: "; 
        cin>>MHS[i].MK[x].kodeMK; 
        cout<<"    Nama Matakuliah: "; 
        cin>>MHS[i].MK[x].namaMK; 
        cout<<"    Nilai Huruf [A/B/C/D/E]: "; 
        cin>>MHS[i].MK[x].NH; 
        MHS[i].MK[x].bobot=bobot(MHS[i].MK[x].NH); 
        cout<<"    Bobot Nilai: "<<MHS[i].MK[x].bobot<<endl;  
        cout<<"    Nilai SKS [1/2/3/4]: "; 
        cin>>MHS[i].MK[x].sks; 
        jumlah_bobot+=MHS[i].MK[x].bobot*MHS[i].MK[x].sks; 
        total_sks+=MHS[i].MK[x].sks; 
        cout<<"    Bobot x SKS: "<<MHS[i].MK[x].bobot*MHS[i].MK[x].sks<<endl;  
        cout<<"    Jumlah Bobot x SKS: "<<jumlah_bobot<<endl;  
        cout<<"    Total SKS: "<<total_sks<<endl;  
      } 
    } 
    system("cls");
    cout<<"---------------------------------------------------------------------"<<endl; 
    cout<<"                           TRANSKRIP NILAI"<<endl; 
    cout<<"---------------------------------------------------------------------"<<endl; 
    cout<<"No.Pokok       : " << MHS[i].NoPokok<<endl; 
    cout<<"Nama Mahasiswa : " << MHS[i].NamaMHS<<endl; 
    cout<<"---------------------------------------------------------------------"<<endl; 
    cout<<"|NO  | KODE MK  | NAMA MATAKULIAH  | NH | BOBOT | SKS | BOBOT X SKS |"<<endl; 
    cout<<"---------------------------------------------------------------------"<<endl; 
    for(int x=0; x<MHS[i].JumlahMK; x++){ 
      cout<<"| "<<x+1; 
      cout<<" | "<<MHS[i].MK[x].kodeMK; 
      cout<<" | "<<MHS[i].MK[x].namaMK; 
      cout<<" | "<<MHS[i].MK[x].NH; 
      cout<<" | "<<MHS[i].MK[x].bobot; 
      cout<<" | "<<MHS[i].MK[x].sks; 
      cout<<" | "<<MHS[i].MK[x].bobot*MHS[i].MK[x].sks<<endl; 
    } 
    cout<<"---------------------------------------------------------------------"<<endl; 
    cout<<"Total Bobot X SKS:"<<jumlah_bobot<<endl; 
    cout<<"Total SKS:"<<total_sks<<endl; 
    cout<<"Indeks Prestasi Kumulatif (IPK):"<<jumlah_bobot/total_sks<<endl; 
    cout<<"---------------------------------------------------------------------"<<endl; 
    cout<<"Input Transkrip Mahasiswa Lain ? [Y/T]: "; 
    cin>>input; 
    i++; 
  } 
}