#include <iostream>
using namespace std;

struct Birthday {
	int day, month, year;
};

typedef struct Birthday b_day;

void inputB_day(b_day&);
void outputB_day(b_day);