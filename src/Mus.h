#pragma once

#include "Filmwithouthero.h"
#include <string>

class TMus : public TFilmwithouthero
{
public:
	TMus();

	std::string GetGroupName();

	void SetGroupName(std::string _groupname);
	void PrintGN();

protected:

	std::string groupname;
};