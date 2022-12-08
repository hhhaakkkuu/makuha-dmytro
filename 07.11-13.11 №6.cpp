#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


int main() {
	int index = -1;
	int a[5];
	int min = 0;
	int max = 10;
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		a[i] = min + rand() % (max - min + 1);
	}
	for (int i = 0; i < 4; i++) {
		if (a[i] == 0 && index == -1)
			index = i;

	}
	for (int i = 0; i < 5; i++) {
		cout << a[i] << ' ';
	}
	if (index == -1)
		cout << "Array dont have zero" << endl;
	else
		cout << "Number index - " << index << endl;
	system("pause");
}