#pragma once
#include <string>
class Exception
{
public:
	std::string error;
	Exception();
	Exception(std::string error);
};

