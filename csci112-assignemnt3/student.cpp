#include <iostream>
#include <cstring>

using namespace std;

class CStudent
{
private:

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
        char name[50];
        int ID;
        char username[10];
        char major[10];
        float grades[5];
        float score;
        char password[10];

        cout << "Enter Student Name: ";
        fgets(name,50,stdin);
        set_student_name(name);

        cout << "Enter Student ID: ";
        scanf("%d", &ID);
        set_student_id(ID);
        fflush(stdin);

        cout << "Enter Student Major: ";
        fgets(major,50,stdin);
        set_student_major(major);
        fflush(stdin);

        cout << "Enter Student Username: ";
        fgets(username,10,stdin);
        set_student_email_username(username);
        fflush(stdin);

        cout << "Enter Student Password: ";
        gets(password);
        set_student_email_password(password);
    /*
        cout << "Enter Student Grades (5 courses): ";
        for(int i = 5; i<5;++i)
            cin >>grades[i];
        set_student_grades(grades);
    */

    }

	//Name
	void set_student_name(char* name) {
		strcpy(student_name, name);
	}
	char* get_student_name()
	{
	    return student_name;
	}
	//ID
	void set_student_id(int ID) {
		student_ID = ID;
	}
	int get_student_ID()
	{
	    return student_ID;
	}
	//Username
	void set_student_email_username(char* username) {
		strcpy(student_email_username, username);
	}
	char* get_student_username()
	{
	    return student_email_username;
	}
	//Password
	void set_student_email_password(char* password)
	{
	    strcpy(student_email_password, password);
	}
	char* get_student_password()
	{
	    return student_email_password;
	}
	//Major
	void set_student_major(char* major) {
		strcpy(student_major, major);
	}
	char* get_student_major()
	{
	    return student_major;
	}
	//Grades
	void set_student_grades(float gds[5]) {
		for(int i = 0; i<5;++i)
            student_grades[i] = gds[i];
	}
	//Score
	void set_student_score(float value) {
	    int sum;
		for(int i = 0; i<5;++i)
            sum += student_grades[i];
        student_score = sum/100;
	}
	float get_student_score()
	{
	    return student_score;
	}

	//Getters
	void get_student_info() {
		cout << "Name: " << get_student_name();
		cout << "ID: " << get_student_ID() << "\n";
        cout << "Major: " << get_student_major();
		cout << "Email Username: " << get_student_username();
		cout << "Email Password: " << get_student_password();
		/*
		cout << "Grades: " << student_grades << endl;

		cout << "Score: " << student_score << endl;
		*/
	}


};

int main()
{
	CStudent obj1;
	CStudent * objp=&obj1;
    obj1.registerStudent();
	obj1.get_student_info();
}
