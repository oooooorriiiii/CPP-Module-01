//
// Created by yuumo on 2022/07/30.
//

#include "Harl.h"

int getLevelType(const std::string& level) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			return i;
		}
	}
	return (-1);
}

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Error: Enter a single argument." << std::endl;
		return 1;
	}
	Harl	harl;
	std::string level(argv[1]);
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	switch (getLevelType(level))
	{
		case 0:
			std::cout << "[ " + levels[0] << " ]" << std::endl;
			harl.complain("DEBUG");
			std::cout << std::endl;
			//fall through
		case 1:
			std::cout << "[ " + levels[1] << " ]" << std::endl;
			harl.complain("INFO");
			std::cout << std::endl;
			//fall through
		case 2:
			std::cout << "[ " + levels[2] << " ]" << std::endl;
			harl.complain("WARNING");
			std::cout << std::endl;
			//fall through
		case 3:
			std::cout << "[ " + levels[3] << " ]" << std::endl;
			harl.complain("ERROR");
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return 0;
}