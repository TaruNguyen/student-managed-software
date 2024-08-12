#include "birthday.h"

void inputB_day(b_day&x) {
	cout << "Please input your birth day :" << endl;
	cin >> x.day;
	cout << "Please input your birth month :" << endl;
	cin >> x.month;
	cout << "Please input your birth year :" << endl;
	cin >> x.year;
}
void outputB_day(b_day x) {
	cout << "Your birthday is : " << x.day << "/" << x.month << "/" << x.year  << endl;
}