#include "Filmwithouthero.h"
#include <iostream>

TFilmwithouthero::TFilmwithouthero() : TFilms()
{
	numofheroes = 0;
	storytelling = false;
}

TFilmwithouthero::TFilmwithouthero(TFilmwithouthero& woh)
{
	longing = woh.longing;
	numofheroes = woh.numofheroes;
	datacount = woh.datacount;
	storytelling = woh.storytelling;
}

TFilmwithouthero::TFilmwithouthero(int _longing, int _numofheroes) : TFilms()
{
	SetLonging(_longing);
	SetDataCount(_numofheroes);
	storytelling = false;
}

void TFilmwithouthero::Print()
{
	std::cout << "  longing of film (woh) = \t  " << this->GetLonging() << "  datacount (woh) = \t   " << this->GetDataCount() <<
		((storytelling == true) ? "  Have one (storytelling) " : "  Doesn't have (storytelling) ") << std::endl;
}

bool TFilmwithouthero::GetStoryTelling()
{
	return storytelling;
}

void TFilmwithouthero::SetStoryTelling(bool k)
{
	storytelling = k;
}

void TFilmwithouthero::cinema()
{
	longing -= 5;
}

