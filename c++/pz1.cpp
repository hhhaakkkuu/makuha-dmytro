#include <iostream>
using namespace std;



int main() {
    setlocale(LC_ALL, "ukr");
    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int n = sizeof(vector) / sizeof(vector[0]);

    int* ptr = vector;
    int min_val = *ptr;

    while (++ptr < vector + n) {
        if (*ptr < min_val) {
            min_val = *ptr;
        }
    }

    cout << "Íàéìåíøèé åëåìåíò ìàñèâó: " << min_val << endl;
    return 0;
}