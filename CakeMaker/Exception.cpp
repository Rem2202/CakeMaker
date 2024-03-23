#include "Exception.h"

Exception::Exception()
{
	error = "";
}

Exception::Exception(std::string error)
{
	this->error = error;
}