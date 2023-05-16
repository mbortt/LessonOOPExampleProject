#include "student.h"

int Student::count = 0;

int Student::getCount() {
	return count;
}

// default constructor
Student::Student() {
	count++;
	//cout << "default constructor" << endl;
	setName ("no name");
	setSurname ("no surname");
	setAge (15);
	avg_mark = 4;
}

// constructor with arguments
Student::Student(string nm, string surnm, int a, float mark) {
	count++;
	//cout << "constructor with arguments" << endl;
	setName(nm);
	setSurname  (surnm);
	setAge  (a);
	avg_mark = mark;
}

Student::~Student() {
	
	//cout << "destructor" << endl;
}

float Student::getAvgMark() {
	return avg_mark;
}

void Student::setAvgMark(float mark) {
	if (mark >= 0 && mark <= 10) {
		avg_mark = mark;
	}
}
