//
// Created by yuumo on 2022/07/29.
//

#include "Weapon.h"

Weapon::Weapon(std::string type): _type(type) {}
Weapon::~Weapon() {}

const std::string &Weapon::getType() {
	return (_type);
}

void Weapon::setType(std::string type) {
	_type = type;
}