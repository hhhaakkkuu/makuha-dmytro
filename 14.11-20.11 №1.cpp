#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;

int main()
{
	int a[4][3];
	int k = 0;
	int min = 1;
	int max = 10;
	srand(time(NULL));
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 3; ++j) {
			a[i][j] = min + rand() % (max - min + 1);
		}
	}
	for (int i = 0; i < 4; ++i) {
		k = 0;
		for (int j = 0; j < 3; ++j) {
			if (a[i][j] % 2 == 0)
				k++;
		}
		cout << "for " << i << " k = " << k << endl;
	}
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 3; ++j) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}