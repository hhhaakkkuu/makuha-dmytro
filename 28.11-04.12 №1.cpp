#include <iostream>

using namespace std;

struct Date {
    int hours;
    int minutes;
};



int main() {
    int time;
    int t1;
    Date date = {};

    cin >> date.hours;
    cin >> date.minutes;

    cin >> time;

    t1 = date.hours * 60 + date.minutes;
    t1 += time;

    date.hours = t1 / 60;
    date.minutes = t1 % 60;
    cout << date.hours << ":" << date.minutes;

    return 0;

}
#include <iostream>

using namespace std;

struct Date {
    int hours;
    int minutes;
};
