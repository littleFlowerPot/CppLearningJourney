#include <iostream>
#include "timeClass.h"

int main()
{
	Time a(10, 20, 30), b(11, 21, 31);

	std::cout << "\nThe time stored in a is originally ";
	a.showTime();
	std::cout << "\nThe time stored in b is originally ";
	b.showTime();
	std::cout << "\nNow assign the contents of b into a ";
	a = b;
	std::cout << "After assignment the time stored in a is ";
	a.showTime();
	std::cout << std::endl;

	return 0;
}

