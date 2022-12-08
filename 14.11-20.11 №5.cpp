#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;

int main()
{
	int a[3][4];
	int m;//i
	int n;//j
	int k = 0;
	int min = 1;
	int max = 10;
	srand(time(NULL));
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 4; ++j) {
			a[i][j] = min + rand() % (max - min + 1);
		}
	}
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 4; ++j) {
			if (a[i][j] > k) {
				k = a[i][j];
				m = i;
				n = j;
			}
		}
	}
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 4; ++j) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	cout << k << "[" << m << ";" << n << "]" << endl;
}