#include <iostream>
#include "student.h"
#include <cstring>
#include<string>

using namespace std;

int main()
{
	CStudent obj1;
	CStudent* objp = &obj1;
	obj1.registerStudent();
	obj1.get_student_info();
}

