#pragma once
#include"main.h"
class Human
{
private:
	static int count;

	string name;
	string surname;
	int age;
	float avg_mark;

public:
	Human();
	Human(string nm, string surnm, int a);
	
	~Human();


	

	string getName();
	void setName(string n);
	string getSurname();
	void setSurname(string n);
	int getAge();
	void setAge(int a);
	

	
	string convert();
};

