//
// Created by yuumo on 2022/07/29.
//

#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.h"

class HumanB {
public:
	HumanB(std::string name);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon &weapon);
private:
	std::string	_name;
	Weapon		*_weapon;
};

#endif //HUMANB_H
