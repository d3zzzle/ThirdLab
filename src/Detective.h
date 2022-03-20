#pragma once

#include "Filmwithhero.h"

class TDetective : public TFilmwithhero
{
public:
	TDetective();

	bool GetSolFind();

	void SetSolFind(bool j);

protected:
	bool solfind;

};