#include <iostream>
#include <algorithm>
#include <array>
#define N 6

using namespace std;

int i;
int arr[6]; 

int main()
{
    for(i=0; i<6; i++)
    {
        cout <<"Insert Array Elements Into "<< i <<" : ";
        cin >> arr[i];
    }

    // Get size of array
    size_t len = sizeof(arr) / sizeof(arr[0]);
    
    // Calling sort() function from STL
    // passing starting and ending address of array.
    sort(arr, arr + len);

    // Printing Output
    cout<<"\nThe sorted array is: ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}