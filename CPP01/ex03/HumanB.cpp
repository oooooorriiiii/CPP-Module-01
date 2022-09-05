//
// Created by yuumo on 2022/07/29.
//

#include "HumanB.h"

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB() {}

void	HumanB::attack() {
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << "error" << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}
