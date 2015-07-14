// EquationParser.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <memory>
#include <regex>
#include "Node.h"

int main(int argc, char* argv[])
{
	std::regex tokens("[+-/*()]");
	std::string input;
	std::sregex_token_iterator rend; // defaults to end
	std::sregex_token_iterator iter;
	int submatches[] = { -1, 0 };

	std::cin >> input;
	while (input.compare("quit")){
		iter = std::sregex_token_iterator(input.begin(), input.end(), tokens, submatches);
		while (iter != rend){
			std::cout << *iter << std::endl;
			iter++;
		}
		std::cin >> input;
	}
	return 0;
}

