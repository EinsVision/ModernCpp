#pragma once
#include "projects.h"
class Cal8
{
private:
	int value;

public:
	Cal8(int init_value); // »ý¼ºÀÚ
	 
	void add(int input_value);
	void minus(int input_value);
	void mul(int input_value);
	Cal8& add_ref(int input_value);
	Cal8& minus_ref(int input_value);
	Cal8& mul_ref(int input_value);
	void print();
};
