#pragma once
#include "main.h"

class Student {
private:
	static int count;

	string name;
	string surname;
	int age;
	float avg_mark;

public:
	Student();
	Student(string nm, string surnm, int a, float mark);
	Student(string nm, string surnm);
	Student(const Student& student);
	~Student();


	static int getCount();

	string getName();
	void setName(string n);
	string getSurname();
	void setSurname(string n);
	int getAge();
	void setAge(int a);
	float getAvgMark();
	void setAvgMark(float mark);

	void clear();
	string convert();
};