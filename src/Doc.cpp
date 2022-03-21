#include "Doc.h"
#include<iostream>

TDoc::TDoc()
{

}

std::string TDoc::GetChannelName()
{
	return channelname;
}

void TDoc::SetChannelName(std::string _channelname)
{
	channelname = _channelname;
}

void TDoc::PrintChannelName()
{
	std::cout << "Channel name - " << this->GetChannelName() << std::endl;
}
