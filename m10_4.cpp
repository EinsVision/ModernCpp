#include "projects.h"

class Doctor;

class Patient
{
private: 
	string m_name;
	vector<Doctor*> m_doctors; // 이 환자가 만나는 의사들은 여러 명이다.
public:
	Patient(string name_in)
		: m_name(name_in)
	{

	}

	void addDoctor(Doctor* new_doctor)
	{
		m_doctors.push_back(new_doctor);
	}

	void meetDoctors();

	friend class Doctor;
};

class Doctor
{
private:
	string m_name;
	vector<Patient*> m_patients; // 의사가 진료해야 하는 환자들의 목록
public:
	Doctor(string name_in)
		: m_name(name_in)
	{

	}

	void addPatient(Patient* new_patients)
	{
		m_patients.push_back(new_patients);
	}

	void meetPatients()
	{
		for (auto& ele : m_patients)
		{
			cout << "meet Patient: " << ele->m_name << endl;
		}
	}

	friend class Patient; 
};

void Patient::meetDoctors()
{
	for (auto& ele : m_doctors)
	{
		cout << "meet doctor: " << ele->m_name << endl;
	}
}

void Projects_10::m10_4()
{
	// 10.4 제휴관계
	Patient* p1 = new Patient("Jack Jack");
	Patient* p2 = new Patient("Doljabi");
	Patient* p3 = new Patient("coffee");

	Doctor* d1 = new Doctor("Doctor K");
	Doctor* d2 = new Doctor("Doctor J");

	p1->addDoctor(d1);
	d1->addPatient(p1);

	p2->addDoctor(d2);
	d2->addPatient(p2);

	p2->addDoctor(d1);
	d1->addPatient(p1);

	p1->meetDoctors();
	cout << endl; 

	p2->meetDoctors();
	cout << endl;

	d1->meetPatients();
	cout << endl;

	d2->meetPatients();
	cout << endl;

	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;
}