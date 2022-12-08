#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
	int temp;
	int a[5];
	int min = 1;
	int max = 50;
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		a[i] = min + rand() % (max - min + 1);
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	temp = a[0];
	a[0] = a[4];
	a[4] = temp;

	for (int i = 0; i < 5; i++) {
		cout << a[i] << ' ';
	}

}