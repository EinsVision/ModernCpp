#pragma once
#include "m11_2_Person.h"
// Student와 Teacher 공통점은 사람이라는 것이다.
class Teacher : public Person
{
//private:
protected:
	/*std::string m_name;*/

public:
	Teacher(const std::string& name_in = "No Name")
		: Person(name_in)
	{
		
	}

	void teach()
	{
		cout << getName() << " is teaching." << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Teacher& teacher)
	{
		//out << teacher.m_name; // Person class의 m_name이 
		// protected: 면 이 코드도 가능하다.
		out << teacher.getName();
		return out;
	}
};