#include "C_Question.h"

#include <iostream>

int C_Question::Question2_5()
{
	int ival = 0;
	std::cout << "Bitte einen Wert eingeben: ";
	std::cin >> ival;
	std::cout << "Die Eingabe lautete: " << ival;
	return 0;
}

void C_Question::PrintSomeUnicode()
{
	char16_t c16val{ u'Ω' }; // (mind.) 16 Bit breites Zeichen
	char32_t c32val{ U'Ω' }; // (mind.) 32 Bit breites Zeichen
	std::cout << sizeof(c16val) << std::endl;
	std::cout << sizeof(c32val) << std::endl;
	std::cout << u8"\u00a9 Jürgen Wolf" << std::endl;
}

void C_Question::WriteLine(std::string value)
{
	std::cout << value << std::endl;
}

void C_Question::GetMiles()
{
	double km;
	WriteLine("Enter km:");
	std::cin >> km;

	auto result = km * 1.6;
	WriteLine(std::to_string(result));
}

