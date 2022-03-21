#pragma once
#include<string>

class TFilms 
{
public:
	TFilms();
	~TFilms();
	int GetLonging();
	int GetNumOfHeroes();
	int GetDataCount();
	std::string GetName();

	void SetLonging(int _longing);
	void SetNumOfHeroes(int _numofheroes);
	void SetDataCount(int _datacount);
	void SetName(std::string _name);

	virtual void Print() = 0;

	void cinema();

	void PrintName();


protected:
	int longing;
	int numofheroes;

	int datacount;

	std::string name;
};