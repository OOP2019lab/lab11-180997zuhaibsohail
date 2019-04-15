#include "Faculty.h"
#include "student.h"
#pragma once

person :: person(string f_n,string l_n,int agen)
{
	first_name=f_n;
	last_name=l_n;
	age=agen;
	cout<<"parametrized constructor for person called"<<endl;
}
person :: ~person()
{
	cout<<"destructor for person called : "<<endl;
}
string person :: getfina()
{
	return first_name;
}
string person :: getln()
{
	return last_name;
}
int person :: getage()
{
	return age;
}
void person :: setfina(string g)
{
	first_name=g;
}
void person :: setln(string l)
{
	last_name=l;
}
void person :: setag(int a)
{
	age=a;
}
void person :: print()
{
	cout<<first_name<<" "<<last_name<<" "<<"is "<<age<<" years old."<<endl;
}