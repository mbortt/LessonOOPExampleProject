#include "Human.h"



// default constructor
Human::Human() {
	
	//cout << "default constructor" << endl;
	name = "no name";
	surname = "no surname";
	age = 15;
	
}

// constructor with arguments
Human::Human(string nm, string surnm, int a) {
	count++;
	//cout << "constructor with arguments" << endl;
	name = nm;
	surname = surnm;
	age = a;
	
}

Human::~Human() {
	
	//cout << "destructor" << endl;
}

string Human::getName() {
	return name;
}

void Human::setName(string n) {
	name = n;
}

string Human::getSurname() {
	return surname;
}

void Human::setSurname(string n) {
	surname = n;
}

int Human::getAge() {
	return age;
}

void Human::setAge(int a) {
	if (a > 0 && a < 110) {
		age = a;
	}
}


string Human::convert() {
	string msg = "";
	msg += name;
	msg += " " + surname;
	msg += " ( age = " + to_string(age);
	msg += ", average mark = " + to_string(avg_mark);
	msg += ")";
	return msg;
}
