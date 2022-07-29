//
// Created by yuumo on 2022/07/29.
//

#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon) {
	this->_name = name;
}

HumanA::~HumanA() {}

void	HumanA::attack() {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
