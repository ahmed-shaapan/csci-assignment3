#include <cstring>
#include <string>
#include<iostream>
using namespace std;

class CStudent
{
private:
//Data Members
	char student_name[50];
	int student_ID;
	char student_email_username[10];
	char student_major[50];
	float student_grades[5];
	float student_score;
	char student_email_password[10];

public:
    void registerStudent()
    {
//A function that prompts user for information and puts it in data members through setters
        char name[50];
        int ID;
        char username[10];
        char major[10];
        char password[10];
//Prompt User to enter name and put it in data member
        cout << "Enter Student Name: ";
        cin>>name;
        set_student_name(name);
//Prompt User to enter ID and put it in data member
        cout << "Enter Student ID: ";
		cin >> ID;
        set_student_id(ID);
//Prompt User to enter Major and put it in data member
        cout << "Enter Student Major: ";
		cin >> major;
		set_student_major(major);

        cout << "Enter Student Username: ";
		cin >> username;
		set_student_email_username(username);
//Prompt User to enter Password and put it in data member
        cout << "Enter Student Password: ";
		cin >> password;
		set_student_email_password(password);
   /*
        cout << "Enter Student Grades (5 courses): ";
        for(int i = 5; i<5;++i)
            cin >>grades[i];
        set_student_grades(grades);
    */

    }

	//Name (setter and getter)
	void set_student_name(char* name) {
		strncpy_s(student_name, name, 50);
	}
	char* get_student_name()
	{
	    return student_name;
	}
	//ID (setter and getter)
	void set_student_id(int ID) {
		student_ID = ID;
	}
	int get_student_ID()
	{
	    return student_ID;
	}
	//Username (setter and getter)
	void set_student_email_username(char* username) {
		strncpy_s(student_email_username, username,10);
	}
	char* get_student_username()
	{
	    return student_email_username;
	}
	//Password (setter and getter)
	void set_student_email_password(char* password)
	{
		strncpy_s(student_email_password, password, 10);
	}
	char* get_student_password()
	{
	    return student_email_password;
	}
	//Major (setter and getter)
	void set_student_major(char* major) {
		strcpy_s(student_major, major);
	}
	char* get_student_major()
	{
	    return student_major;
	}
	//Grades (setter and getter)
	void set_student_grades(float gds[5]) {
		for(int i = 0; i<5;++i)
            student_grades[i] = gds[i];
	}
	//Score (setter and getter)
	void set_student_score(float value) {
	    float sum=0;
		for(int i = 0; i<5;++i)
            sum += student_grades[i];
        student_score = sum/100;
	}
	float get_student_score()
	{
	    return student_score;
	}

	void get_student_info() {
	//A function that displays all of the students information
		cout << "Name: " << get_student_name();
		cout << "ID: " << get_student_ID() << "\n";
        cout << "Major: " << get_student_major();
		cout << "Email Username: " << get_student_username();
		cout << "Email Password: " << get_student_password();
	}
};
