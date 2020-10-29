// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "C_Question.h"

int main()
{
    std::cout << "Hello User, instantiate an object of the type C_Question and execute the corresponding method to see the results!" << std::endl;
	
	C_Question c_question;

	c_question.WriteLine("Method to 2.5:");
	c_question.Question2_5();

	c_question.WriteLine("Print me some Unicode");
	c_question.PrintSomeUnicode();

	c_question.WriteLine("\nPrint me some limits");
	c_question.WriteLine(std::to_string(std::numeric_limits<short>::min()));
	c_question.WriteLine(std::to_string(std::numeric_limits<short>::max()));
	c_question.WriteLine(std::to_string(std::numeric_limits<int>::min()));
	c_question.WriteLine(std::to_string(std::numeric_limits<int>::max()));
	c_question.WriteLine(std::to_string(std::numeric_limits<long>::min()));
	c_question.WriteLine(std::to_string(std::numeric_limits<long>::max()));

	
	c_question.WriteLine("Print me the size of a long");
	c_question.WriteLine(std::to_string(sizeof(long)));

	// only run compile time
	static_assert(sizeof(long) == 4, "Require long to be 4 bytes");

	// var equivalent
	auto someInteger = 23;

	c_question.WriteLine("Print the value of 4.6.2");
	
	int i = 1;
	std::cout << i-- << '\n';
	std::cout << ++i << '\n';
	std::cout << i++ << '\n';
	std::cout << ++i << '\n';

	c_question.WriteLine("Print the value of 4.6.3");

	int ival1, ival2 = 2;
	float fval1 = 3.5f;

	ival1 = fval1;
	std::cout << ival1 << '\n';
	std::cout << fval1 / ival2 << '\n';
	std::cout << static_cast<int>(fval1 / ival2) << '\n';
	std::cout << static_cast<float>(fval1 / ival2) << '\n';

	c_question.GetMiles();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
