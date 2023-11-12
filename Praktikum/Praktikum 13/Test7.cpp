#include <iostream>
#include <array>

using namespace std;

int i;
int arr[6]; 

void merge_sort(int *arr, int start, int last);
void merge(int *arr, int start, int last);
// Driver Code
int main()
{    
    for(i=0; i<6; i++)
    {
        cout <<"\nInsert Array Elements Into "<< i <<" : ";
        cin >> arr[i];
    }
    
    // int arr[] = {0, 98, 761, 100, -982, -72};
    size_t len = sizeof(arr)/sizeof(arr[0]);
    // Calling the merge_sort function which recursively divides array into half
    merge_sort(arr, 0, len-1);
    // Printing Output
    cout << "The sorted Array is: ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
// This function divides array recursively.
void merge_sort(int *arr, int start, int last)
{
    if (start < last)
    {
        int mid = (start + last) / 2;
        merge_sort(arr, start, mid);  // Recurssion
        merge_sort(arr, mid + 1, last); // Recurssion
        merge(arr, start, last);
    }
}
// This function merges two sorted subarray into one in ascending order
void merge(int *arr, int start, int last)
{
    // Creating temporary array to store sorted array
    int temp[(last - start) + 1];
    int pos = 0;
    int i = start,j=(start + last)/2 + 1;
    // Filling the array in ascending order
    while(i<(start + last)/2 + 1 && j<=last)
    {
        if(arr[i] > arr[j])
        {
            temp[pos]=arr[j];
            j++;
        }
        else
        {
            temp[pos]=arr[i];
            i++;
        }
        pos++;
    }
    if(j>last)
    {
        while(i<((start + last)/2 + 1))
        {
            temp[pos]=arr[i];
            i++;
            pos++;
        }
    }
    else
    {
        while(j <= last)
        {
            temp[pos]=arr[j];
            j++;
            pos++;
        }
    }
    // Storing temp in array
    for(int i=0; i<(last - start + 1); i++)
    {
        arr[start + i] = temp[i];
    }
}