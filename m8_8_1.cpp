#include "m8_8.h"

Cal8::Cal8(int init_value)
	:value(init_value)
{

}
void Cal8::add(int input_value)
{
	value += input_value;
}

void Cal8::minus(int input_value)
{
	value -= input_value;
}

void Cal8::mul(int input_value)
{
	value *= input_value;
}

Cal8& Cal8::add_ref(int input_value)
{
	value += input_value;
	return *this;
}

Cal8& Cal8::minus_ref(int input_value)
{
	value -= input_value;
	return *this;
}

Cal8& Cal8::mul_ref(int input_value)
{
	value *= input_value;
	return *this;
}

void Cal8::print()
{
	cout << value << endl;
}
