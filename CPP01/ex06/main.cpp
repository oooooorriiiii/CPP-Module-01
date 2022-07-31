//
// Created by yuumo on 2022/07/30.
//

#include "Harl.h"

typedef enum	levelType {
	DEBUG = 0,
	INFO,
	WARNING,
	ERROR,
	DEFAULT,
}				levelType;

levelType getLevelType(const std::string& level) {
	if (level == "DEBUG")
		return DEBUG;
	else if (level == "INFO")
		return INFO;
	else if (level == "WARNING")
		return WARNING;
	else if (level == "ERROR")
		return ERROR;
	else
		return DEFAULT;
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
		case DEBUG:
			std::cout << "[ " + levels[DEBUG] << " ]" << std::endl;
			harl.complain("DEBUG");
			std::cout << std::endl;
			//fall through
		case INFO:
			std::cout << "[ " + levels[INFO] << " ]" << std::endl;
			harl.complain("INFO");
			std::cout << std::endl;
			//fall through
		case WARNING:
			std::cout << "[ " + levels[WARNING] << " ]" << std::endl;
			harl.complain("WARNING");
			std::cout << std::endl;
			//fall through
		case ERROR:
			std::cout << "[ " + levels[ERROR] << " ]" << std::endl;
			harl.complain("ERROR");
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return 0;
}