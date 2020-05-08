#pragma once
#include <iostream>
using namespace std;

class Film
{
private:
	string Titel;
	string Genre;
	int Jahr;
	int Likes;
	string Trailer;
public:
	Film(string, string, string, int, int);
	string getterTitel();
	string getterGenre();
	int getterJahr();
	int getterLikes();
	string getterTrailer();
	void setterTitel(string);
	void setterGenre(string);
	void setterJahr(int);
	void setterLikes(int);
	void setterTrailer(string);
};