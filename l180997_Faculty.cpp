#include "Faculty.h"
#include "student.h"
#pragma once

faculty :: faculty(string fn,string l_n, int a,int cc,int tc) : person(fn,l_n,a)
{
	course_count=cc;
	tlno=tc;
	cout<<"parametrized constructor for faculty called"<<endl;
}

faculty :: ~faculty()
{
	cout<<"destructor for faculty called : "<<endl;
}

int faculty :: getcco()
{
	return course_count;
}
int faculty :: gettn()
{
	return tlno;
}
void faculty :: setcco(int c)
{
	course_count=c;
}
void faculty :: settn(int t)
{
	tlno=t;
}
void faculty :: printfaculty()
{
	cout<<"Faculty Member name: "<<person::getfina()<<"<< "<<person::getln()<<" Age: "<<person::getage()<<",Number of courses: "<<course_count<<",Ext."<<tlno<<endl;
}