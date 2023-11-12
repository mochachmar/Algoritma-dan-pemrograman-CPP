#include <iostream>

using namespace std;

int main() {
	int i = 0;

	for (int x = 13; x > 1; i++)
	{
		if (x % 2 == 1)
		{
			x = 3 * x + 1;
		} else {
			x = x / 2;
		}
	}

	cout << i << endl;

	cin.get();
	return 0;
}
