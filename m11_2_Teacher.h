#pragma once
#include "m11_2_Person.h"
// Student�� Teacher �������� ����̶�� ���̴�.
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
		//out << teacher.m_name; // Person class�� m_name�� 
		// protected: �� �� �ڵ嵵 �����ϴ�.
		out << teacher.getName();
		return out;
	}
};