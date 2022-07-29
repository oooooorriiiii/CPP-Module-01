//
// Created by yuumo on 2022/07/29.
//

#include "HumanB.h"

HumanB::HumanB(std::string name) : _name(name) {
	this->_name = name;
}

HumanB::~HumanB() {}

void	HumanB::attack() {
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}
