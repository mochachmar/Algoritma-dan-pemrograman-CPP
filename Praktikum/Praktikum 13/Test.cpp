// Ascending = Pengurutan kecil ke besar
#include <iostream>
#include <iomanip>
#define N 6

using namespace std;
 
int A[6];
int indeks1,indeks2, temp;

int main() {
	// Baca nilai vektor
	for(indeks1=1; indeks1<=6; indeks1++)
	{
	  	cout <<"\tMasukkan Element A ke "<< indeks1 <<" : ";
	 	cin >> A[indeks1];
	}

	// Cetak data sebelum diurutkan
	cout << "\nData sebelum diurutkan" << endl;
	for (indeks1=1; indeks1<=N; indeks1++)
	{
		cout << A[indeks1] << setw(5);
	}

	// Urutkan data
	cout << "\nData setelah diurutkan" << endl;
	for(indeks1=1; indeks1<=N-1; indeks1++) {
	    for(indeks2=indeks1; indeks2<=6; indeks2++) {
	        if(A[indeks1] > A[indeks2]) {
	            temp = A[indeks2];
	            A[indeks2] = A[indeks1];
	            A[indeks1] = temp;
	        }
	    }
	}

	// Cetak data setelah diurutkan
	for(indeks1=1;indeks1<=N;indeks1++) {
       cout<<A[indeks1]<< setw(5);
	}

	return 0;
}
