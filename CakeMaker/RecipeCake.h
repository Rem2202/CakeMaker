#pragma once
#include <string>
class RecipeCake
{
protected:
	std::string name;
	int time;
public:
	RecipeCake();
	RecipeCake(std::string name, int time);
	std::string getName();
	int getTime();
};