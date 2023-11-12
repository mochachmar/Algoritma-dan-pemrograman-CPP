#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	//deklarasi variabel
	int pilih[100],jumlah[100],sub_total[100],harga[100],jumlah_diskon[100];
	float diskon[100];
	string menu[100];
	int total_bayar=0;
	int total_diskon=0;
	int i=0;
	bool selesai=false;
	
	cout<<"**************DAFTAR BARANG*******************"<<endl;
	cout<<"1. Holder HP						Rp.100.000"<<endl;
	cout<<"2. Mouse						Rp.150.000"<<endl;
	cout<<"3. Keyboard						Rp.500.000"<<endl;
	cout<<"4. Headset						Rp.400.000"<<endl;
	cout<<"5. Microphone						Rp.250.000"<<endl;
	cout<<"6. Hardisk						Rp.900.000"<<endl;
	cout<<"7. Flashdisk						Rp.150.000"<<endl;
	cout<<"8. Charger						Rp.200.000"<<endl;
	cout<<"9. Case HP						Rp.105.000"<<endl;
	cout<<"10. Mouse Pad						Rp.100.000"<<endl;
		
	cout<<"Tekan 0 jika selesai melakukan pemesanan"<<endl;
	
	while (selesai==false){
		cout<<"Pilih Barang (Masukan nomor barang): ";
		cin>>pilih[i];
		
		if (pilih[i]<=10){
			
			if (pilih[i]==0){
				selesai=true;
			}else {
				
				switch (pilih[i]){
				case 1 : 
					menu[i]="Holder HP"; 
					harga[i]=100000; 
					diskon[i]=0; 
					break;
				case 2 : 
					menu[i]="Mouse"; 
					harga[i]=150000; 
					diskon[i]=0.1; 
					break;
				case 3 : 
					menu[i]="Keyboard"; 
					harga[i]=500000; 
					diskon[i]=0; 
					break;
				case 4 : 
					menu[i]="Headset"; 
					harga[i]=400000; 
					diskon[i]=0.1; 
					break;
				case 5 : 
					menu[i]="Microphone"; 
					harga[i]=250000; 
					diskon[i]=0.05; 
					break;
				case 6 : 
					menu[i]="Hardisk"; 
					harga[i]=900000; 
					diskon[i]=0.1; 
					break;
				case 7 : 
					menu[i]="Flashdisk"; 
					harga[i]=150000; 
					diskon[i]=0; 
					break;
				case 8 : 
					menu[i]="Charger"; 
					harga[i]=200000; 
					diskon[i]=0.1; 
					break;
				case 9 : 
					menu[i]="Case HP"; 
					harga[i]=105000; 
					diskon[i]=0; 
					break;
				case 10 : 
					menu[i]="Mouse Pad"; 
					harga[i]=100000; 
					diskon[i]=0.1; 
					break;
				default : 
					menu[i]=""; 
					harga[i]=0;
					diskon[i]=0;
					break;
				}
				
				cout<<"Jumlah = "<<menu[i]<<"  : ";
				cin>>jumlah[i];
				cout<<endl;
				
				sub_total[i]=jumlah[i]*harga[i];
				jumlah_diskon[i]=sub_total[i]*diskon[i];
				
				total_bayar+=sub_total[i];
				total_diskon+=jumlah_diskon[i];
				i++;
				
			}
			
		}else {
			cout<<"Barang yang dipilih tidak sesuai"<<endl;
			cout<<endl;
		}
	}
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"							INVOICE PEMBELIAN								"<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"No	Nama Barang		Harga		Jumlah		Sub Total		Diskon		Harga Setelah Diskon"<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------------"<<endl;
	
	for (int a=0;a<i;a++){
		cout<<a+1<<setw(17)<<menu[a]<<setw(20)<<harga[a]<<setw(14)<<jumlah[a]<<setw(19)<<sub_total[a]<<setw(19)<<diskon[a]*100<<" %"<<setw(23)<<sub_total[a]-jumlah_diskon[a]<<endl;
	}
	
	cout<<"----------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"Total Belanja = Rp. "<<total_bayar<<endl;
	cout<<"Potongan      = Rp. "<<total_diskon<<endl;
	cout<<endl;
	cout<<"Total Bayar   = Rp. "<<total_bayar-total_diskon<<endl;
	
}