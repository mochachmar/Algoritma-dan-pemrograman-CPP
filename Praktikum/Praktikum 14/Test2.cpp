#include <iostream>

using namespace std;

int j, k, n;

int main()
{
    for (j = 1; j <= 5;)
    {
        cout << j;
        for (k = j + 1; k <= 5;)
        {
            cout << k;
            k++;
        }
        cout << endl;
        j++;
    }
}
