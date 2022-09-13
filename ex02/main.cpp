//
// Created by yuumo on 2022/07/29.
//

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strPTR = &str;
	std::string &strREF = str;

	std::cout << "str                     : " << str << std::endl;
	std::cout << "str address (&str)      : " << &str << std::endl;

	std::cout << "strPTR                  : " << strPTR << std::endl;
	std::cout << "strPTR content (*strPTR): " << *strPTR << std::endl;

	std::cout << "strREF                  : " << strREF << std::endl;
	std::cout << "strREF address (&strREF): " << &strREF << std::endl;
}
