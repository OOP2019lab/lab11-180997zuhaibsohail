

#include "Person.h"
#pragma once

class student : public person
{
private:
	float cgpa;
public:
	
	//student();
	student(string fn,string ln, int sg,float cpa);
	~student();
	float getcp();
	void setcp(float);
	void printstudent();
};
