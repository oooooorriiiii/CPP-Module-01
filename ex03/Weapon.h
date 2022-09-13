//
// Created by yuumo on 2022/07/29.
//

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>


class Weapon {
public:
	const std::string	&getType();
	void				setType(std::string type);
	Weapon(std::string type);
	~Weapon();

private:
	std::string	_type;
};


#endif
