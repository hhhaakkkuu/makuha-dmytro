#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;

int main()
{
	int a[5][7];
	int sum = 0;
	int min = 1;
	int max = 10;
	srand(time(NULL));
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 7; ++j) {
			a[i][j] = min + rand() % (max - min + 1);
		}
	}
	for (int i = 0; i < 5; ++i) {
		sum = 0;
		for (int j = 0; j < 7; ++j) {
			sum = a[i][j] + sum;
		}
		cout << "for " << i << " sum = " << sum << endl;
	}
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 7; ++j) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}