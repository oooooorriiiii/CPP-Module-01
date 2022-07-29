//
// Created by yuumo on 2022/07/29.
//
#include <iostream>
#include "Zombie.h"

int main(void) {
	Zombie	zombieA("Alice");
	zombieA.announce();

	Zombie	*zombieB = newZombie("Bob");
	zombieB->announce();

	randomChump("Carol");

	delete zombieB;
	return 0;
}
