#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;

int main()
{
	int a[4][6];
	int sum = 0;
	int min = 1;
	int max = 10;
	srand(time(NULL));
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 6; ++j) {
			a[i][j] = min + rand() % (max - min + 1);
		}
	}
	for (int j = 0; j < 6; ++j) {
		sum = 0;
		for (int i = 0; i < 4; ++i) {
			sum = a[i][j] + sum;
		}
		cout << "for " << j << " sum = " << sum << endl;
	}
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 6; ++j) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}