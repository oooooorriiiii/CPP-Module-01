//
// Created by yuumo on 2022/07/29.
//

#include "Zombie.h"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombieHorde;

	zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zombieHorde[i].setZombie(name);
	}
	return zombieHorde;
}
