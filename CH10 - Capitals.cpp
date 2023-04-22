#include <iostream>
#include <map> // #A
#include <string>
#include <algorithm>

bool compare_no_case(std::wstring str1, std::wstring str2) // #B
{
	std::transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
	std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
	return (str1 == str2);
}

void add_capital(std::map<std::wstring, std::wstring>& Capitals, std::wstring country, std::wstring capital) // #C
{
	Capitals.insert(std::make_pair(country, capital));
}
int main()
{
	std::map<std::wstring, std::wstring> Capitals; // #D
	std::wstring input{ L"" }, output{ L"" }; // #E

		Capitals.insert(std::make_pair(L"France", L"Paris"));
	Capitals.insert(std::make_pair(L"USA", L"Washington DC"));
	Capitals.insert(std::make_pair(L"Israel", L"Jerusalem"));
	Capitals.insert(std::make_pair(L"Jordan", L"Amman"));
	Capitals.insert(std::make_pair(L"Australia", L"Canbara"));
	Capitals.insert(std::make_pair(L"Belgium", L"Brussles"));

	std::wcout << L"Enter a country and I will tell you its capital" << std::endl;
	std::wcout << L"Enter 'q' to quit" << std::endl;
	std::wcin >> input; // #F
	while (input != L"q") // #G
	{
		std::map<std::wstring, std::wstring>::iterator it = Capitals.begin(); // #H
		bool found{ false };

		while (it != Capitals.end())
		{
			if (compare_no_case(it->first, input))// #I
			{
				std::wcout << L"The capital of " << input.c_str() << L" is " << it->second.c_str() << std::endl; // #J
				found = true; // #K
				break;
			}
			it++; // #J
		}
		if (!found) // #L
		{
			std::wcout << L"Sorry. I don't know the capital of " << input.c_str() << L" Please tell me: " << std::endl;
			std::wstring new_capital;
			std::wcin >> new_capital;
			add_capital(Capitals, input, new_capital); // #M
			std::wcout << L"Now I know that the capital of " << input << L" is " << new_capital << std::endl;
		}
		std::wcout << L"Enter a country and I will tell you its capital" << std::endl;
		std::wcout << L"Enter 'q' to quit" << std::endl;
		std::wcin >> input;
	}
}
/*
#A We include <map>
#B This function receives 2 wstrings and return 'true' if they are identical when comparing them without cases sensitivity, and 'false' if they aren't
#C This function that receives a vector of map of 2 wstrings, a country and a capital and add them to the vector
#D This is our vector where we hold the pairs of countries and their capitals
#E Our input and output
#F Accepting input from the user ('q' to quit)
#G As long as the user doesn't want to quit, we continue
#H Iterate through all elements in std::map
#I In case we found a match
*/