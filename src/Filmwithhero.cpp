#include "Filmwithhero.h"
#include <iostream>


TFilmwithhero::TFilmwithhero()
{
	for (int i = 0; i < datacount; i++)
	{
		datacin[i] = i;
	}
}

TFilmwithhero::TFilmwithhero(TFilmwithhero& wh)
{
	longing = wh.longing;
	numofheroes = wh.numofheroes;
	datacount = wh.datacount;
	datacin = new int[datacount];
	for (int i = 0; i < datacount; i++)
	{
		datacin[i] = wh.datacin[i];
	}
}

TFilmwithhero::TFilmwithhero(int _longing, int _numofheroes)
{
	SetLonging(_longing);
	SetDataCount(_numofheroes);
}

void TFilmwithhero::Print()
{
	std::cout << "longing of (wh) film = \t" << this->GetLonging() << "datdcount (wh) = \t " << this->GetDataCount() <<
		((presofenemy == true) ? "Presence of enemy" : "Doesn't have an enemy") << std::endl;
	std::cout << "Data of films : ";
	for (int i = 0; i < datacount; i++)
	{
		std::cout << datacin[i]<<"\n";
	}
	std::cout << std::endl;
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
