#pragma once
#include <string>
class Cake
{
private:
	std::string name;
public:
	Cake();
	Cake(std::string name);
	std::string getName();
};