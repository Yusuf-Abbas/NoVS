#include "cat.hpp"
#include "dog.hpp"

int main()
{
	cout << "Hello, world!\r\n";
	Cat c;
	Dog d;

	/* cat info */
	c.setAge(3);
	c.setHeight(11);
	c.showInfo();

	/* dog info */
	d.setAge(999);
	d.setHeight(1337);
	d.showInfo();

	return 0;
}
