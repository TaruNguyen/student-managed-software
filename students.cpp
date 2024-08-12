#include "students.h"
#include <conio.h>

void inputStudentInfo(struct StudentInfo&sd) {
	string j;
	getline(cin, j);
	cout << "Input student's code : " << endl;
	getline(cin, sd.studentcode);
	cout << "Input student's name : " << endl;
	getline(cin, sd.name);
	cout << "Input student's brithday : " << endl;
	inputB_day(sd.Birthday);
	fflush(stdin);
	cout << "Input student's maths grade : " << endl;
	cin >> sd.maths;
	cout << "Input student's physics grade : " << endl;
	cin >> sd.physics;
	cout << "Input student's english grade : " << endl;
	cin >> sd.english;
}
float averageGrade(struct StudentInfo sd) {
	return (sd.maths + sd.english + sd.physics) / 3; 
}
void outputStudentInfo(struct StudentInfo sd){
	cout << sd.name << "'s INFORMATION" << endl;
	cout << "Code : " << sd.studentcode << endl;
	cout << "Birthday : " << endl;
	outputB_day(sd.Birthday);
	cout << "Maths grades : " << sd.maths << endl;
	cout << "Physics grades : " << sd.physics << endl;
	cout << "English grades : " << sd.english << endl;
	cout << "AVERAGE GRADES : " << averageGrade(sd) << endl;
}
