#pragma once

#include"Filmwithouthero.h"
#include <string>

class TDoc : public TFilmwithouthero
{
public:
	TDoc();

	std::string GetChannelName();

	void SetChannelName(std::string _channelname);

	void PrintChannelName();


protected:

	std::string channelname;


};
