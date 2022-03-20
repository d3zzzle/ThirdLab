#include <iostream>
#include "Filmwithhero.h"
#include "Action.h"

TAction::TAction()
{
	rt = 0;
}

double TAction::GetRT()
{
	return rt;
}

void TAction::SetRT(double _rt)
{
	if (_rt > 0)
		rt = _rt;
}

void TAction::PrintRT()
{
	std::cout << "Rotten Tommatos graduation : \t" << rt << std::endl;
}
