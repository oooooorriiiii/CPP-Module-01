//
// Created by yuumo on 2022/07/29.
//

#include "Zombie.h"

Zombie::Zombie() {}

Zombie::~Zombie(void) {
	std::cout << getZombieName() << " died" << std::endl;
}

void Zombie::announce() {
	std::cout << getZombieName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getZombieName(void) {
	return _name;
}

void	Zombie::setZombie(std::string _ZombieName) {
	this->_name = _ZombieName;
	std::cout << getZombieName() << " is born." << std::endl;
}
