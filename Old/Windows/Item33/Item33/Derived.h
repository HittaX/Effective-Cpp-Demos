#pragma once
#include "Base.h"
#include <iostream>

using namespace std;

class Derived :
	private Base
{
public:
	/*using Base::mf1;
	using Base::mf3;*/
	Derived();
	~Derived();
	virtual void mf1()
	{
		Base::mf1();
	}
	void mf3();
	void mf4();
};

