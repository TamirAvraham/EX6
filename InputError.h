#pragma once
#include <exception>

class InputError:std::exception
{
public:
	virtual const char* what() const
	{
		return "Input Error\n";
	}
};
