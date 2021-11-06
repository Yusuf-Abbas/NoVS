#ifndef ANIMAL_HPP_INCLUDED
#define ANIMAL_HPP_INCLUDED
#include <iostream>
using namespace std;

class Animal
{
protected:
	int age, height;
	const char* typeOfAnimal;
public:
	int getAge()
	{
		return age;
	}
	int getHeight()
	{
		return height;
	}
	void setAge(int age)
	{
		if (age >= 0)
			this->age = age;
	}
	void setHeight(int height)
	{
		if (height >= 0)
			this->height = height;
	}
	void showInfo()
	{
		cout << "The " << typeOfAnimal << " is " << getAge() << " years old and " << getHeight() << " inches high.\r\n";
	}
};
#endif
