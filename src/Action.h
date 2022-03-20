#pragma once

#include "Filmwithhero.h"

class TAction : public TFilmwithhero
{
public:
	TAction();

	double GetRT();

	void SetRT(double _rt);
	void PrintRT();

protected:
	double rt;

};
