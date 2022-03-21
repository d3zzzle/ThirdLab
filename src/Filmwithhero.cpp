#include "Filmwithhero.h"
#include <iostream>


TFilmwithhero::TFilmwithhero()
{
	numofheroes > 0;
}

TFilmwithhero::TFilmwithhero(TFilmwithhero& wh)
{
	longing = wh.longing;
	numofheroes = wh.numofheroes;
	datacount = wh.datacount;
}

TFilmwithhero::TFilmwithhero(int _longing, int _numofheroes)
{
	SetLonging(_longing);
	SetDataCount(_numofheroes);
}

void TFilmwithhero::Print()
{
	std::cout << "  longing of (wh) film = \t  " << this->GetLonging() << "  datacount (wh) = \t  " << this->GetDataCount() <<
		((presofenemy == true) ? " Presence of enemy " : " Doesn't have an enemy ") << std::endl;
}

bool TFilmwithhero::GetPresOfEnemy()
{
	return presofenemy;
}

void TFilmwithhero::SetPresOfEnenmy(bool f)
{
	presofenemy = f;
}

void TFilmwithhero::cinema()
{
	longing += 5;
}
