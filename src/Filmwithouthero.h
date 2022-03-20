#pragma once

#include "Films.h"

class TFilmwithouthero : public TFilms
{
public:
	TFilmwithouthero();
	TFilmwithouthero(TFilmwithouthero& woh);
	TFilmwithouthero(int _longing, int _numofheroes);

	virtual void Print();

	bool GetStoryTelling();
	void SetStoryTelling(bool k);

	void cinema();

protected:
	bool storytelling;
};
