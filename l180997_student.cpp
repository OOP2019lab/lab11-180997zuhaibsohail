#include "Faculty.h"
#include "student.h"
#pragma once

student :: student(string fn,string ln, int sg,float cpa):person(fn,ln,sg)
{
	cgpa=cpa;
    cout<<"parametrized constructor for student called"<<endl;
}
student :: ~student()
{
	cout<<"destructor for student called : "<<endl;
}

float student :: getcp()
{
	return cgpa;
}
void student :: setcp(float a)
{
	cgpa=a;
}
void student :: printstudent()
{
	print();
	cout<<" his cgpa is "<< cgpa<<endl;
}