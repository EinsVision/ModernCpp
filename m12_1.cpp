#include "projects.h"

class Animal
{
protected:
	string m_name;

public:
	Animal(string name_in)
		:m_name(name_in)
	{

	}

	string getName()
	{
		return m_name;
	}

	virtual void speak() const
	{
		cout << m_name << " ??? " << endl;
	}
};

class Cat : public Animal
{
public:
	Cat(string name)
		: Animal(name)
	{}

	void speak() const
	{
		cout << m_name << " Meow " << endl;
	}
};

class Dog : public Animal
{
public:
	Dog(string name)
		: Animal(name)
	{}

	void speak() const
	{
		cout << m_name << " Bark " << endl;
	}
};

void Projects_12::m12_1()
{
	// 12.1 다형성의 기본 개념
	// 상속과 포인터를 연관지어서 
	// 자식 클래스의 객체에 부모 클래스의 포인터를 사용한다면?
	Animal animal("my animal");
	Cat cat("my cat");
	Dog dog("my dog");

	animal.speak();
	cat.speak();
	dog.speak();

	Animal* ptr_animal1 = &cat;
	Animal* ptr_animal2 = &dog;
	// 자식 class를 부모 class의 포인터로 cating을 해서 출력하면 
	// 자식 class가 부모 class인 줄 알고 동작한다.
	// my cat ? ? ?
	// my dog ? ? ?
	// virtual keyword를 쓰니깐 ? ? ? 가 나오지 않는다.
	// Animal* ptr_animal1, ptr_animal2가 부모 class 인데, 
	// 자식 class 인 것 처럼 동작한다.
	ptr_animal1->speak();
	ptr_animal2->speak();

	Cat cats[]
	{
		Cat("cat1"), Cat("cat2"), Cat("cat3"),
		Cat("cat4"), Cat("cat5")
	};

	Dog dogs[]
	{
		Dog("dog1"), Dog("dog2")
	};

	for (int i = 0; i < 5; i++)
	{
		cats[i].speak();
	}

	for (int i = 0; i < 2; i++)
	{
		dogs[i].speak();
	}

	Animal* my_animals[]
	{
		&cats[0],& cats[1],& cats[2],& cats[3],& cats[4],
		&dogs[0], &dogs[1]
	};

	for (int i = 0; i < 7; i++)
	{
		my_animals[i]->speak();
	}
}