#include "Cake.h"
#include <string>

Cake::Cake()
{
	this->name = "";
}
Cake::Cake(std::string name)
{
	this->name = name;
}
std::string Cake::getName()
{
	return name;
}