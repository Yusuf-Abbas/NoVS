#include "animal.hpp"

class Cat : public Animal {
public:
	Cat()
	{
		cout << "Meow!\r\n";
		typeOfAnimal = "cat";
	}
};
