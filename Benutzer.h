#include "Film.h"
#include <vector>

class Benutzer {
private:
	friend class Repo;
	vector<Film> Watchlist;
public:
	Benutzer(vector<Film> Watch);
	void addToWatchlist(Film Filme);
	void deletefromWatchlist(Film Filme);
	void showGenre(string Genre, Repo repo);
	void Like(string Filme);
	void showWatchlist();
};