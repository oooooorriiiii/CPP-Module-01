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

	void setZombieName(std::string _name);

	Zombie(std::string name);

	~Zombie();

private:
	std::string _name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
