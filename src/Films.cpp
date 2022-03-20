#include "Films.h"

TFilms::TFilms()
{
	longing = 0;

	numofheroes = 0;

	datacount = 4;

	datacin = new int[datacount];

}

TFilms::~TFilms()
{
	longing = 0;

	numofheroes = 0;

	delete[] datacin;

}

int TFilms::GetLonging()
{
	return longing;
}
int TFilms::GetNumOfHeroes()
{
	return numofheroes;
}
int TFilms::GetDataCount()
{
	return datacount;
}

int* TFilms::GetDatacin()
{
	return datacin;
}

void TFilms::SetLonging(int _longing)
{
	if (_longing > 0)
		longing = _longing;
}

void TFilms::SetNumOfHeroes(int _numofheroes)
{
	if (_numofheroes)
		numofheroes = _numofheroes;
}

void TFilms::SetDataCount(int _datacount)
{
	if (_datacount > 0)
	{
		int* tmp = new int[_datacount];
		for (int i = 0; i < (datacount > _datacount ? _datacount : datacount); i++)
		{
			tmp[i] = datacin[i];
		}
		delete[] datacin;
		datacin = tmp;
		datacount = _datacount;
	}
}

void TFilms::SetDatacin(int data, int i)
{
	if (i >= 0 && i < datacount)
	{
		this->datacin[i] = data;
	}
}

void TFilms::cinema()
{
	longing += 10;
}

