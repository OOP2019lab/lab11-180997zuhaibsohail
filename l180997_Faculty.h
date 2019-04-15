#include "Person.h"
#pragma once


class faculty : public person
{
private:
	int course_count;
	int tlno;
public:
	//faculty();
	faculty(string fn,string l_n, int a,int cc,int tc);
	~faculty();
	int getcco();
	int gettn();
	void setcco(int);
	void settn(int);
	void printfaculty();
};