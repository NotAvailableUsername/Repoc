#include "Repo.h"
#include "Benutzer.h"
#include <vector>
#include "iostream"

using namespace std;

Benutzer::Benutzer(vector<Film> Watch) {
	Watchlist = Watch;
}

void Benutzer::addToWatchlist(Film newFilm) {
	vector<Film> ListaFilme;
	Repo r(ListaFilme);
	r.show_List();
	bool found = false;
	for (int i = 0; i < ListaFilme.size(); i++) {
		if (newFilm.getterTitel() == ListaFilme[i].getterTitel())
			found = true;
	}
	if (found) {
		cout << "already exists";
		return;
	}
	else
		Watchlist.push_back(newFilm);

}

void Benutzer::deletefromWatchlist(Film Filme) {
	bool found = false;
	int p = 0;
	vector<Film> ListaFilme;
	Repo r(ListaFilme);
	for (int i = 0; i < ListaFilme.size(); i++) {
		if (Filme.getterTitel() == ListaFilme[i].getterTitel()) {
			found = true;
			p = i;
		}
	}
	if (found) {
		cout << "Like?->1" << "\n" << "maybe not?->2";
		int x;
		cin >> x;

		if (x == 1)
			Watchlist.erase(Watchlist.begin() + p);
	}
	else
		cout << "non existent";
}

void Benutzer::showGenre(string Genre, Repo repo) {
	bool found = false;
	int i = 0;
	while(i < repo.ListaFilme.size() && found == false){
		cout << repo.ListaFilme[i].getterLikes() << "\n";
		if (Genre == repo.ListaFilme[i].getterGenre())
			found = true;
		else i = i + 1;
	}
	if (found == true) {
		i = 0;
		while (i != -1) {
			if (Genre == repo.ListaFilme[i].getterGenre()) {
				cout << repo.ListaFilme[i].getterTitel() << " " << repo.ListaFilme[i].getterGenre() << " " << repo.ListaFilme[i].getterJahr() << " " << repo.ListaFilme[i].getterTrailer() << " " << repo.ListaFilme[i].getterLikes() << " ";
				cout << "\n";
				cout << "Add to WatchList-->1\n"
					"For stop-->2\n"
					"For like-->3\n";
				int y;
				cin >> y;
				if (y == 1)
					addToWatchlist(repo.ListaFilme[i]);
				if (y == 2)
					i = -1;
				if (y == 3)
					Like(repo.ListaFilme[i].getterTitel());
			}
			else
				if (i >= repo.ListaFilme.size() && i != -1)
					i = 0;
				else i = i + 1;
		}
	}
	else
		repo.show_List();
}

void Benutzer::Like(string Filme) {
	bool found = false;
	int p = 0;
	vector<Film> ListaFilme;
	Repo r(ListaFilme);
	for (int i = 0; i < ListaFilme.size(); i++) {
		if (Filme == ListaFilme[i].getterTitel()) {
			found = true;
			p = i;
		}
	}
	if (found)
		ListaFilme[p].setterLikes(ListaFilme[p].getterLikes() + 1);
}

void Benutzer::showWatchlist() {
	vector<Film> ListaFilme;
	Repo r(ListaFilme);
	for (int i = 0; i < Watchlist.size(); i++) {
		cout << ListaFilme[i].getterTitel() << " " << ListaFilme[i].getterGenre() << " " << ListaFilme[i].getterJahr() << " " << ListaFilme[i].getterTrailer() << " " << ListaFilme[i].getterLikes() << " ";
		cout << "\n";
	}
}
