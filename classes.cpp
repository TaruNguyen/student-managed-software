# include "classes.h"

void InputClass(struct ClassInformation&c) {
	int choice;
	do 
	{
		cout << "--------MENU---------" << endl;
		cout << "1. ADD STUDENT" << endl;
		cout << "2. EXIT MENU" << endl;
		cout << "---------------------" << endl;
		cout << " >> ";
		cin >> choice;
		if (choice == 1) {
			fflush(stdin);
			StudentInfo sv;
			inputStudentInfo(sv);
			c.A.push_back(sv);	
		}
	} while (choice != 2);

}
void OutputClass(struct ClassInformation c) {
	int size = c.A.size();
	system("cls");
	for (int i = 0; i < size; i++) {
		cout << "[--------------------]" << endl;
		outputStudentInfo(c.A[i]);
	}
}
