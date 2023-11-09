//eliska odd
//rob even

#include <iostream>

int main()
{
	int inputNumber = 0;

	std::cout << "WHAT IS YOUR NUMBER, ORGANIC LIFE FORM?!" << std::endl;
	std::cin >> inputNumber;

	if (inputNumber % 2 == 0) 
	{
		std::cout << "OH, excuse me, your number is even, that's quite reasonable." << std::endl;
	}

	system("pause");
	return 1;
 }