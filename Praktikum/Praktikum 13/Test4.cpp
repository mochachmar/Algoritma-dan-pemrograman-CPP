#include <iostream>
#include <array>
#define N 6

using namespace std;

int i;
int arr[6]; 

//Bubble Sort Algorithm
void bubble_sort(int* arr, size_t len)
{
    int temp;
    for (int i = 0; i < len; i++)
        {
            for (int j = 0; j + 1 < len - i; j++)
            {
                // Swaping the elements if first one
                // is greater than second one.
                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
}
// Driver Code
int main()
{    
    for(i=0; i<6; i++)
    {
        cout <<"Insert Array Elements Into "<< i <<" : ";
        cin >> arr[i];
    }

    // int arr[] = {0, 98, 761, 100, -982, -72};
    size_t len = sizeof(arr)/sizeof(arr[0]);
    
    // Calling bubble_sort function with given array
    bubble_sort(arr, len);

    // Printing Output
    cout<<"\nThe sorted array is: ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}