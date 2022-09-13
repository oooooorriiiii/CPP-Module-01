//
// Created by yuumo on 2022/07/29.
//

#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.h"

/**
 * HumanA may always have a Weapon
 */
class HumanA {
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void	attack();
private:
	std::string _name;
	Weapon&		_weapon;
};

#endif //HUMANA_H
