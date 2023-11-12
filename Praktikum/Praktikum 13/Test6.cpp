#include <iostream>
#include <array>

using namespace std;

int i;
int arr[6]; 

void selection_sort(int* arr, int len)
{
    int min, temp;
    // Iterating for each element except first element.
    for (int i = 0; i < len - 1; i++)
    {
        min = arr[i];
        // Finding the minimum element from unsorted array and adding to sorted array.
        for (int j = i; j < len; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                temp = j;
            }
        }
        arr[temp] = arr[i];
        arr[i] = min;
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

    // Calling selection_sort function with given array
    selection_sort(arr, len);

    // Printing Output
    cout << "\nThe sorted Array is: ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}