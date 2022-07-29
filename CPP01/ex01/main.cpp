//
// Created by yuumo on 2022/07/29.
//
#include "Zombie.h"

int	main(void)
{
	Zombie	*zombieHordeInstance;
	int 	zombieNum = 10;

	zombieHordeInstance = zombieHorde(zombieNum, "Alice");

	zombieHordeInstance[1].announce();
	zombieHordeInstance[9].announce();
	delete [] zombieHordeInstance;
	return 0;
}
