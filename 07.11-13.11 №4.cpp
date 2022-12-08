#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int Number() {
	int x;
	cout << " Enter number: ";
	cin >> x;
	return x;
}

int main() {
	int A = Number();
	int temp = 0;
	int a[5];
	int min = 1;
	int max = 30;
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		a[i] = min + rand() % (max - min + 1);
	}
	for (int i = 0; i < 5; i++) {
		if (A < a[i])
			temp++;
	}
	cout << "Number elements of the given array greater than A -  " << temp << endl;
	system("pause");
}