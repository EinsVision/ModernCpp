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

	Teacher* teacher; // �л����� intel�� ����ȭ �Ǳ� ���ؼ��� 
	std::vector<Student* > students; // ��ü�� �ּҸ� �޾ƿ;� �Ѵ�.

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
		// �̷��� �л��� intel�� ����ȭ�� �ȵǴ� ���� ������ ������ �ִ�.
		// &student_input!= students[0]
		// �̷��� �ٸ� ������ Student class�� ��ü�� �����ϱ� �����̴�.
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