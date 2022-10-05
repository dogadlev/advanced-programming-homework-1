// task_2.cpp : std::variant.
#include <algorithm>
#include <variant>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

std::variant<int, std::string, std::vector<int>> get_variant() {
	std::srand(std::time(nullptr));
	int random_variable = std::rand() % 3;

	std::variant<int, std::string, std::vector<int>> result;
	switch (random_variable)
	{
	case 0:
		result = 5;
		break;
	case 1:
		result = "string";
		break;
	case 2:
		result = std::vector<int>{ 1, 2, 3, 4, 5 };
		break;
	default:
		break;
	}
	return result;
}

void printResults(std::variant<int, std::string, std::vector<int>> &var) {
	if (std::holds_alternative<int>(var)) {
		std::cout << std::get<int>(var) * 2;
	}
	else if (std::holds_alternative<std::string>(var)) {
		std::cout << std::get<std::string>(var);
	}
	else {
		for (int num : std::get<std::vector<int>>(var)) {
			std::cout << num << " ";
		}
	}
	std::cout << std::endl;
}

int main(int argc, char** argv)
{
	std::variant<int, std::string, std::vector<int>> var = get_variant();
	printResults(var);
	
    return 0;
}