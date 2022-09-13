//
// Created by yuumo on 2022/07/31.
//

#ifndef EX05_HARL_H
#define EX05_HARL_H

#include <iostream>

class Harl {
public:
	Harl();
	~Harl();
	void complain(std::string level);
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void (Harl::*arr[4])(void);
};


#endif //EX05_HARL_H
