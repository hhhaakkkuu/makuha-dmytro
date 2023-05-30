#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    int n;
    cout << "Ââåäiòü êiëüêiñòü åëåìåíòiâ ìàñèâó: ";
    cin >> n;

    float* arr = new float[n];


    srand(time(NULL));
    for (float* i = arr; i < arr + n; i++) {
        *i = (rand() % 401 - 200) / 100.0;
    }


    cout << "Ìàñèâ: ";
    for (float* i = arr; i < arr + n; i++) {
        cout << *i << " ";
    }
    cout << endl;


    int positive_count = 0, negative_count = 0;
    for (float* i = arr; i < arr + n; i++) {
        if (*i > 0) {
            positive_count++;
        }
        else if (*i < 0) {
            negative_count++;
        }
    }


    cout << "Êiëüêiñòü äîäàòíèõ åëåìåíòiâ: " << positive_count << endl;
    cout << "Êiëüêiñòü âiä'ºìíèõ åëåìåíòiâ: " << negative_count << endl;

    delete[] arr;

    return 0;
}