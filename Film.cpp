#include "Film.h"

Film::Film(string Ti, string Gen, string Trl, int J, int L)
{
	Titel = Ti;
	Genre = Gen;
	Trailer = Trl;
	Jahr = J;
	Likes = L;
}

string Film::getterTitel()
{
	return Titel;
}

string Film::getterGenre()
{
	return Genre;
}

int Film::getterJahr()
{
	return Jahr;
}

int Film::getterLikes()
{
	return Likes;
}

string Film::getterTrailer()
{
	return Trailer;
}

void Film::setterTitel(string Ti)
{
	Titel = Ti;
}

void Film::setterGenre(string Gen)
{
	Genre = Gen;
}

void Film::setterJahr(int J)
{
	Jahr = J;
}

void Film::setterLikes(int L)
{
	Likes = L;
}

void Film::setterTrailer(string Trl)
{
	Trailer = Trl;
}