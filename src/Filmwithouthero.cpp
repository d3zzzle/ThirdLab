#include "Filmwithouthero.h"
#include <iostream>

TFilmwithouthero::TFilmwithouthero() : TFilms()
{
	storytelling = false;
}

TFilmwithouthero::TFilmwithouthero(TFilmwithouthero& woh)
{
	longing = woh.longing;
	numofheroes = woh.numofheroes;
	datacount = woh.datacount;
	storytelling = woh.storytelling;
	datacin = new int[datacount];
		for (int i = 0; i < datacount; i++)
		{
			datacin[i] = woh.datacin[i];
		}
}

TFilmwithouthero::TFilmwithouthero(int _longing, int _numofheroes) : TFilms()
{
	SetLonging(_longing);
	SetDataCount(_numofheroes);
	storytelling = false;
}

void TFilmwithouthero::Print()
{
	std::cout << "longing of film (woh) = \t" << this->GetLonging() << "datdcount (woh) = \t " << this->GetDataCount() <<
		((storytelling == true) ? "Have one" : "Doesn't have") << std::endl;
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

