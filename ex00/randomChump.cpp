//
// Created by yuumo on 2022/07/29.
//

#include "Zombie.h"

/**
 *
 * @param name
 *
 * The life of a zombie is complete within this function.
 */
void	randomChump(std::string name) {
	Zombie	newZombieInstance(name);
	newZombieInstance.announce();
}