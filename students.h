#include "birthday.h"
#include <string>
struct StudentInfo {
	string studentcode, name;
	b_day Birthday;
	float maths, physics, english;
};
 
void inputStudentInfo(struct StudentInfo&);
void outputStudentInfo(struct StudentInfo);
float averageGrade(struct StudentInfo);