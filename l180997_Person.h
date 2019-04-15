#include <iostream>
#include <string>
using namespace std;
#pragma once
class person
{
private:
	string first_name;
	string last_name;
protected:
	int age;
public:
	//person();
	person(string f_n,string l_n,int agen);
	~person();
	string getfina();
	string getln();
	int getage();
	void setfina(string);
	void setln(string);
	void setag(int);
	void print();

};