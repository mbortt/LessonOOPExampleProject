#include "manager.h"

int main() {
	Student s1("Ivan", "Ivanov", 14, 7.6);
	Student s2("Alex", "Invisible", 15, 10);
	Student s3("Peter", "Pen", 12, 4);

	{
		Student s4("Harry", "Potter", 14, 9.6);
	}

	Student s5("Alice", "Under", 13, 8);
	Student s6("Ivan", "Ivanov", 14, 7.6);
	Student s7("Alex", "Invisible", 15, 10);
	Student s8("Peter", "Pen", 12, 4);
	Student s9("Harry", "Potter", 14, 9.6);
	Student s10("Alice", "Under", 13, 8);

	cout << "Number of Students: " << Student::getCount() << endl;

	return 0;
}
