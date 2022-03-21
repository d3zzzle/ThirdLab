#include "Films.h"
#include <string>
#include<iostream>




TFilms::TFilms()
{
	longing = 0;
	numofheroes = 0;
	datacount = 4;
	name = "\0";
}

TFilms::~TFilms()
{
	longing = 0;

	numofheroes = 0;

	datacount = 0;
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


std::string TFilms::GetName()
{
	return name;
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
		datacount = _datacount;
}


void TFilms::SetName(std::string _name)
{
	name = _name;
}

void TFilms::cinema()
{
	longing += 10;
}

void TFilms::PrintName()
{
	std::cout << "name of the film - \t" << this->GetName() << std::endl;
}

