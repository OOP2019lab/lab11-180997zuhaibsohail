// l180997_lab11.cpp : Defines the entry point for the console application.
//

#include "Faculty.h"
#include "student.h"
#pragma once
int main()
{
	student s1("Ted","Thompson",22,3.91);
	faculty f1("Richard","Karp",45,2,420);
	//here the number of courses is 2
	//and the extension number is 420
	/*parametrized constructor for person called
	parametrized constructor for student called
	parametrized constructor for person called
	parametrized constructor for faculty called
	destructor for faculty called :
	destructor for person called :
	destructor for student called :
	destructor for person called :*/
	s1.print();
	//Ted Thompson is 22 years old.
	s1.printstudent();
	f1.printfaculty();
	return 0;
}

