#include "Film.h"
#include <vector>

class Repo {
public:
	vector<Film> ListaFilme;
	Repo(vector<Film> Lista_filme);
	void addFilm(Film newFilm);
	void deleteFilm(Film Film);
	void show_List();
};