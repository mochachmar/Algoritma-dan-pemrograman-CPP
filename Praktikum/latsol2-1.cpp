#include <iostream>
using namespace std;


int main()
{
	char kodemakanan,kodeminuman,jenis ='p';
	string nama,namamakanan,namaminuman;
	int biaya_layanan =4000, ongkir,jarak;
	float total,total1,diskon,order,hargamakanan,hargaminuman;
	char jawab = 'y';
	
	cout << "---------MINUMAN---------" << endl;
	cout << "Kode" <<"\t\t Nama Minuman" << endl;
	cout << "1" <<"\t\t Vanila Latte " << endl;
	cout << "2" <<"\t\t Americano " << endl;
	cout << "3" <<"\t\t Avocado Tea " << endl << endl;
	
	cout << "---------MAKANAN---------" << endl;
	cout << "Kode" <<"\t\t Nama Makanan" << endl;
	cout << "1" <<"\t\t Nasi Goreng Biasa " << endl;
	cout << "2" <<"\t\t Nasi Goreng Spesial " << endl;
	cout << "3" <<"\t\t Kentang Goreng " << endl << endl;
	
	do{
		cout << "Nama Anda :";
		getline(cin,nama);
		cout << "Masukkan Kode Makanan Anda : ";
		cin >> kodemakanan;
		cout << "Masukkan Kode Minuman Anda : ";
		cin >> kodeminuman;
		cout << "Dingin[d] / Panas[p] : ";
		cin >> jenis;
		cout << "Masukkan jarak (km) : ";
		cin >> jarak;
		cout << "Masih Ada Yang Ingin Dipesan y/n ?";
		cin >> jawab;
		cout << "================================================================"<< endl;
	}while( jawab=='y');
	
	switch (kodemakanan){
		case '1' :
			namamakanan = "Nasi Goreng Biasa";
			hargamakanan = 20000;
		break;
		case '2' :
			namamakanan = "Nasi Goreng Spesial";
			hargamakanan = 25000;
		break;
		case '3' :
			namamakanan =  "Kentang Goreng";
			hargamakanan = 15000;
		break;
		default :
			cout << "Pesanan Anda Tidak Ada Dimenu";
		break;
		
	}
	
	switch (kodeminuman){
		case '1' :
			namaminuman = "Vanila Latte";
			if(jenis == 'p'){
				hargaminuman = 20000;
			}else{
				hargaminuman = 22000;
			};
		break;
		case '2' :
			namaminuman = "Americano";
			if(jenis == 'p'){
				hargaminuman = 23000;
			}else{
				hargaminuman = 21000;
			};
		break;
		case '3' :
			namaminuman = "Avocado Tea";
			if(jenis == 'p'){
				hargaminuman = 20000;
			}else{
				hargaminuman = 22000;
			};
		break;
		default :
			cout << "Pesanan Anda Tidak Ada Dimenu";
		break;
		
	}
	
	
	cout << "Nama Anda : " << nama << endl;
	cout << "Nama Makanan Anda : " << namamakanan << endl;
	cout << "Harga Makanan Anda :Rp. " << hargamakanan << endl;
	cout << "Nama Minuman Anda : " << namaminuman << endl;
	cout << "Harga Minuman Anda :Rp. " << hargaminuman << endl;
	
	ongkir = jarak * 10000;

	cout << "Ongkir Anda :Rp. " << ongkir << endl;
	cout << "Biaya Layanan Anda :Rp. " << biaya_layanan << endl;
	cout << "================================================================"<< endl;
	
	total = hargamakanan + hargaminuman + ongkir + biaya_layanan;
	if(total >= 25000){
		diskon =
		0.3;
	}
	else if( total >=40000){
		diskon =3000;
	}
	else {
		cout <<"0";
	}
	cout << "Diskon Anda :  " << diskon << endl;
	
	total1 = total * diskon;
	cout << "Total Pembayaran Anda :Rp.  " << total1 << endl;
	
return 0;
}
