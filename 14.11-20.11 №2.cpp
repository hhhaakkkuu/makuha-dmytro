#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;

int main()
{
	int a[6][4];
	int k = 0;
	int min = 1;
	int max = 10;
	srand(time(NULL));
	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 4; ++j) {
			a[i][j] = min + rand() % (max - min + 1);
		}
	}
	for (int j = 0; j < 4; ++j) {
		k = 0;
		for (int i = 0; i < 6; ++i) {
			if (a[i][j] % 2 == 0)
				k++;
		}
		cout << "for " << j << " k = " << k << endl;
	}
	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 4; ++j) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}