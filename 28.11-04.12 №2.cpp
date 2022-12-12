int main() {
    int t1, t2;
    Date date1 = {};
    Date date2 = {};


    cin >> date1.hours;
    cin >> date1.minutes;

    cin >> date2.hours;
    cin >> date2.minutes;

    t1 = date1.hours * 60 + date1.minutes;
    t2 = date2.hours * 60 + date2.minutes;


    t1 -= t2;

    if (t1 < 0)
        t1 = t1 * -1;

    date1.hours = t1 / 60;
    date1.minutes = t1 % 60;
    cout << date1.hours << ":" << date1.minutes;

    return 0;

}