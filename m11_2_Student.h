#pragma once
#include "m11_2_Person.h"
// Student와 Teacher 공통점은 사람이라는 것이다.
class Student : public Person
{
//private:
protected:
	/*std::string m_name;*/
	int m_intel;

public:
	Student(const std::string& name_in = "No Name", const int& intel_in = 0)
		: Person(name_in), m_intel(intel_in)
	{

	}

	void setIntel(const int& intel_in)
	{
		m_intel = intel_in;
	}

	int getIntel()
	{
		return m_intel;
	}

	void study()
	{
		cout << getName() << " is studying." << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Student& student)
	{
		out << student.getName() << " " << student.m_intel;
		return out;
	}
};