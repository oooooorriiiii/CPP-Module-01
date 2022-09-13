//
// Created by yuumo on 2022/07/29.
//

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {
public:
	void announce(void);

	std::string getZombieName(void);

	void setZombie(std::string _name);

	Zombie();

	~Zombie();

private:
	std::string _name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
