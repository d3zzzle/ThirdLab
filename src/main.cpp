#include <iostream>
#include "Films.h"
#include"Filmwithhero.h"
#include "Filmwithouthero.h"
#include "Action.h"
#include"Detective.h"
#include"Doc.h"
#include"Mus.h"
#include<string>

int main()
{
	
	TDetective f;
	f.SetName("True detective");
	f.SetDataCount(4);
	f.Print();
	f.PrintName();

	TDoc l;
	l.cinema();
	l.SetLonging(100);
	l.SetChannelName("TMZ");
	l.PrintChannelName();

	TFilmwithouthero o;
	o.SetStoryTelling(true);
	o.Print();

	return 0;
}  