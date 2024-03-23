#pragma once
#include "Cake.h"
#include "RecipeCake.h"
class CakeMaker
{
public:
	CakeMaker();
	void takeCommand(RecipeCake *recipe);
};