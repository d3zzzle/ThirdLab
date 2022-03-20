#pragma once

class TFilms 
{
public:
	TFilms();
	~TFilms();
	int GetLonging();
	int GetNumOfHeroes();
	int GetDataCount();
	int* GetDatacin();

	void SetLonging(int _longing);
	void SetNumOfHeroes(int _numofheroes);
	void SetDataCount(int _datacount);
	void SetDatacin(int data, int i);

	virtual void Print() = 0;

	void cinema();

protected:
	int longing;
	int numofheroes;

	int datacount;
	int* datacin;

};