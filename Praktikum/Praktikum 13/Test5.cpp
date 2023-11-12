#include <iostream>
#include <array>

using namespace std;

int i;
int arr[6]; 

void insertion_sort(int* arr, size_t len)
{
    int temp;
    // Assuming one element as sorted and inserting other elements to it
    for (int i = 1; i < len; i++)
    {
        temp = arr[i];
        // Finding the sorted position for selected element in sorted array and placing it into place.
        for (int j = i - 1; j >= 0; j--)
        {
            if (temp > arr[j])
            {
                arr[j + 1] = temp;
                break;
            }
            else if (temp <= arr[j])
            {
                arr[j + 1] = arr[j];
                if (j == 0)
                {
                    arr[j] = temp;
                }
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

    // Calling insertion_sort function with given array
    insertion_sort(arr, len);

    // Printing Output
    cout << "\nThe sorted Array is: ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}