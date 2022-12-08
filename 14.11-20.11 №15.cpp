#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;

int main()
{
	int a[3][3];
	int sum1 = 0;
	int sum2 = 0;
	int min = 1;
	int max = 10;
	srand(time(NULL));
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			a[i][j] = min + rand() % (max - min + 1);
		}
	}
	for (int i = 0; i < 3; ++i) {
		sum1 = a[i][i] + sum1;
	}
	for (int i = 0, j = 2; i < 3; ++i, --j) {
		sum2 = a[i][j] + sum2;
	}

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	cout << sum1 << " - first diagonal " << endl << sum2 << " - second diagonal";
}