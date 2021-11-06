#include "animal.hpp"

class Dog : public Animal
{
public:
	Dog()
	{
		cout << "Woof!\r\n";
		typeOfAnimal = "dog";
	}
};
