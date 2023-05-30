#include <iostream>
#include <ctime>
using namespace std;
int main(void) {
	time_t t = time(NULL);
	tm tl = *localtime(&t);
	cout << tl.tm_year + 1900 << "-" << tl.tm_mon + 1 << "-" << tl.tm_mday << endl;
	return 0;
}
struct Date {
	int year;
	int month;
	int day;
};
bool isLeap(int year) {
	return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

int monthLength(int year, int month) {
	switch (month) {
	case 2:
		return isLeap(year) ? 29 : 28;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	default:
		return 31;
	}
}
Date today(void) {
	time_t t = time(NULL);
	tm tl = *localtime(&t);

	Date d;
	d.year = tl.tm_year + 1900;
	d.month = tl.tm_mon + 1;
	d.day = tl.tm_mday;

	return d;
}
int daysPassed(Date d) {
	int days = d.day;

	for (int m = 1; m < d.month; m++) {
		days += monthLength(d.year, m);
	}

	return days;
}

int daysBetween(Date d1, Date d2) {
	int days = 0;

	if (d1.year == d2.year) {
		days += daysPassed(d2) - daysPassed(d1);
	}
	else {
		// days left in d1's year
		days += monthLength(d1.year, d1.month) - d1.day;
		for (int m = d1.month + 1; m <= 12; m++) {
			days += monthLength(d1.year, m);
		}

		// days in full years between d1 and d2
		for (int y = d1.year + 1; y < d2.year; y++) {
			days += isLeap(y) ? 366 : 365;
		}

		// days passed in d2's year
		days += daysPassed(d2);
	}

	return days;
}
int main(void) {
	Date t = today();
	cout << t.year << "-" << t.month << "-" << t.day << endl;
	return 0;
}