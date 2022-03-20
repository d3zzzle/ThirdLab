#include "Doc.h"

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
