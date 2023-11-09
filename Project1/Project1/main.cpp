//eliska odd

#include <iostream>
int main()
{
	int number = 6;
	//input
	std::cout << "HEY YOU! NUMBER:" << std::endl;
	std::cin >> number;

	if (number % 2 == 1) {
		std::cout << "GUESS WHATTTT, ITS ODD" << std::endl;
	}

	system("pause");
	return 1;
 }