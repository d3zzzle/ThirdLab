#pragma once

#include "Films.h"

class TFilmwithhero : public TFilms
{
public:
	TFilmwithhero();
	TFilmwithhero(TFilmwithhero& wh);
	TFilmwithhero(int _longing, int _numofheroes);

 void Print();

	bool GetPresOfEnemy();
	void SetPresOfEnenmy(bool f);

	void cinema();

protected:
	bool presofenemy;
};