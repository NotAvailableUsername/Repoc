#include "Repo.h"
#include "Benutzer.h"
#include <vector>
#include "assert.h"

int main() {
	vector<Film> MovieList;
	Repo r(MovieList);
	Film Movie("Jumanji", "Adventure", "www.google.ro/jumanji", 2019, 20);
	r.addFilm(Movie);
	assert(Movie.size() == 0);

	return 0;
}