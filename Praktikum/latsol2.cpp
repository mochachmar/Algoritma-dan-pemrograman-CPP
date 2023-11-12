#include <iostream>
using namespace std;

void makanan(){
	string namamakanan;
	float hargamakanan;

}
void minuman(){
	string namaminuman;
	float hargaminuman;

}

int main()
{
	makanan();
	string nama,namamakanan,namaminuman;
	int biaya_layanan =4000, ongkir,jarak;
	float total,diskon,order,hargamakanan,hargaminuman;
	char jawab = 'y';
	
	
	do{
		cout << "Nama Anda :";
		getline(cin,nama);
		cout << "Makanan yang anda pesan :";
		getline(cin,namamakanan);
		cout << "Minuman yang anda pesan :";
		getline(cin,namaminuman);
		cout << "Masukkan jarak (km) : ";
		cin >> jarak;
		cout << "Masih Ada Yang Ingin Dipesan y/n ?";
		cin >> jawab;
	}while( jawab=='y');
	
	switch(makanan){
		case 'nasi' :
			if(namamakanan=='nasi goreng biasa'){
				hargamakanan = 15000;
			}else if(namamakanan =='nasi goreng spesial'){
				hargamakanan = 22000;
			}else if(namamakanan =='nasi goreng complite'){
				hargamakanan = 20000;
			}else{
				cout << " Makanan Yang Anda Masukkan Tidak Ada Dimenu";
			}
		break;
		case 'cemilan' :
			if(namamakanan=='kentang goreng biasa'){
				hargamakanan = 15000;
			}else if(namamakanan =='kentang goreng keju'){
				hargamakanan = 22000;
			}else if(namamakanan =='kentang goreng balado'){
				hargamakanan = 20000;
			}else{
				cout << " Makanan Yang Anda Masukkan Tidak Ada Dimenu";
			}
		break;
		default :
			cout << "Makanan Tidak Tersedia";
		
				
	}
	
	if(order >= 25000){
		diskon =0.3;
	}
	else if( order >=40000){
		diskon =3000;
	}
	else {
		cout <<"0";
	}
	
	
	cout << "Nama Anda : " << nama << endl;
	cout << "Nama Anda : " << namamakanan << endl;
	cout << "Nama Anda : " << namaminuman << endl;
	cout << "Nama Anda : " << hargamakanan << endl;
	
	
}
