#pragma once
#include <iostream>

using namespace std;

class Base
{
private:
	int x;
public:
	Base();
	~Base();
	virtual void mf1() = 0;
	virtual void mf1(int);
	virtual void mf2();
	void mf3();
	void mf3(double);
};