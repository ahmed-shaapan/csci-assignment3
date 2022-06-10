#include <iostream>
#include <cstring>

using namespace std;

class CStudent
{
private:

	char student_name[50];
	int student_ID;
	char student_email_username[10];
	char student_major[10];
	char student_grades[5];
	float student_score;
	char student_email_password[10];

public:
	// Setters
	void set_student_name(char* value) {
		strcpy(student_name, value);
	}
	void set_student_id(int ID) {
		student_ID = ID;
	}
	void set_student_email_username(char* value) {
		strcpy(student_email_username, value);

	}
	void set_student_major(char* value) {
		strcpy(student_major, value);
	}
	void set_student_grades(char* value) {
		strcpy(student_grades, value);
	}
	void set_student_score(float value) {
		student_score = value;
	}
	void set_student_email_password(char* value) {
		strcpy(student_email_password, value);
	}
	//Getters
	void get_student_name() {
		cout << student_name << "\n" << "hello baby";
	}


};

int main()
{
	CStudent obj1;
	obj1.set_student_name("mohamed");
	obj1.get_student_name();
}
