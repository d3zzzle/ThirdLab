#include "Mus.h"
#include<iostream>

TMus::TMus()
{
}

std::string TMus::GetGroupName()
{
	return groupname;
}

void TMus::SetGroupName(std::string _groupname)
{
	groupname = _groupname;
}

void TMus::PrintGN()
{
	std::cout << "Film by - \t" << this->groupname << std::endl;
}
