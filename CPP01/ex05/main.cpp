//
// Created by yuumo on 2022/07/30.
//

#include "Harl.h"

int main() {
	Harl	harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("hoge");

	return 0;
}