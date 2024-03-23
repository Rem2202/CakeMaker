#include "RecipeCake.h"
#include <string>

RecipeCake::RecipeCake()
{
	this->time = 0;
	this->name = "";
}

RecipeCake::RecipeCake(std::string name, int time)
{
	time = 5;
	this->name = name;
	this->time = time;
}

std::string RecipeCake::getName()
{
	return name;
}

int RecipeCake::getTime()
{
	return time;
}