/*     Praktikum Algoritma dan Stuktur Data
       Praktikum 4 - Sorting (2 November 2015)
       ------------------------------------------------------
       Nama : Achmad Kharis
       NIM  : J1F114002
       ------------------------------------------------------
       Program - Bubble Sort Ascending 
*/
//onlygreatshare.blogspot.com
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i,j,n;
    int Arr[50];
    int tmp;
cout << "\n   ---------------------------------------------";
cout << "\n   |       >> Program Pengurutan Data <<       |";
cout << "\n   |           >> Secara Ascending <<         |";
cout << "\n   |              >> Bubble Sort <<            |";
cout << "\n   ---------------------------------------------\n";
//onlygreatshare.blogspot.com
cout << "\n   ==> Inputkan banyak data yg akan diurutkan: ";
cin >> n;
cout << "\n";
for(i=1; i<=n; i++)
{
       cout<<"\tInputkan data ke-"<<i<<" = ";
       cin>>Arr[i];
}

//Pengurutan secara Ascending (Bubble Sort)
for(i=1; i<=n; i++)
{
       for(j=i; j<=n; j++)
       {
              if(Arr[i] > Arr[j])
              {
                     tmp = Arr[j];
                     Arr[j] = Arr[i];
                     Arr[i] = tmp;
              }
       }
}
cout << "\n   ---------------------------------------------\n";
cout << "   ## Hasil Pengurutan data Secara Ascending ##\n";
cout << "   ---------------------------------------------\n";
cout << "\n";
//onlygreatshare.blogspot.com
for(i=1;i<=n;i++)
{
       cout<<"\tElement "<<i<<" = "<<Arr[i]<<endl;
}
cout << "\n Created By Achmad Kharis :)";
getch();
}