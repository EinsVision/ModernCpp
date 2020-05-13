#pragma once
#include <vector>
#include "m10_3_Student.h"
#include "m10_3_teacher.h"

class Lecture
{
private:
	std::string m_name;

	/*Teacher teacher;
	std::vector<Student> students;*/

	Teacher* teacher; // 학생들의 intel이 동기화 되기 위해서는 
	std::vector<Student* > students; // 객체의 주소를 받아와야 한다.

public:
	Lecture(const std::string& name_in)
		:m_name(name_in)
	{}

	~Lecture()
	{

	}

	void assignTeacher( Teacher* const teacher_input)
	{
		teacher = teacher_input;
	}

	void registerStudent( Student* const student_input)
	{
		students.push_back(student_input);
		// 이렇게 학생의 intel이 동기화가 안되는 것은 다음의 이유가 있다.
		// &student_input!= students[0]
		// 이렇게 다른 이유는 Student class의 객체를 복사하기 때문이다.
	}

	void study()
	{
		std::cout << m_name << " Study " << std::endl;
		for (auto element : students) // auto element doesn't work
		{
			/*(*element).setIntel((*element).getIntel() + 1);*/
			element->setIntel(element->getIntel() + 1);
		}
	}

	friend std::ostream& operator << (std::ostream& out, const Lecture& lecture)
	{
		out << "Lecture name: " << lecture.m_name << std::endl;
		out << lecture.teacher << std::endl;
		for (auto element : lecture.students)
		{
			out << *element << std::endl;
		}
		
		return out;
	}
};