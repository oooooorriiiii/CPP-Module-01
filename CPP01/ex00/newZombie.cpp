//
// Created by yuumo on 2022/07/29.
//

#include "Zombie.h"

Zombie	*newZombie(std::string name) {
	Zombie *newZombieM = new Zombie(name);
	return newZombieM;
}