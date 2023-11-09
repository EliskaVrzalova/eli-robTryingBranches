//eliska odd
//rob even

#include <iostream>

int main()
{
	int number = 6;
	//input

	std::cout << "WHAT IS YOUR NUMBER, ORGANIC LIFE FORM?!" << std::endl;
	std::cin >> number;

	if (number % 2 == 1) {
		std::cout << "GUESS WHATTTT, ITS ODD" << std::endl;
	}
	else
	{
		std::cout << "OH, excuse me, your number is even, that's quite reasonable." << std::endl;
	}

	system("pause");
	return 0;
 }