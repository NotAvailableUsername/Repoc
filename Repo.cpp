#include "Repo.h"
#include <vector>
#include "Film.h"
#include "iostream"

using namespace std;

Repo::Repo(vector<Film> Lista_filme) {
	ListaFilme = Lista_filme;
}

void Repo::show_List() {

	for (int i = 0; i < ListaFilme.size(); i++) {
		cout << ListaFilme[i].getterTitel() << " " << ListaFilme[i].getterGenre() << " " <<ListaFilme[i].getterJahr() << " " <<ListaFilme[i].getterTrailer() << " " <<ListaFilme[i].getterLikes() << " ";
		cout << "\n";
	}
}

void Repo::addFilm(Film newFilm) {
	
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
			ListaFilme.push_back(newFilm);
}

void Repo::deleteFilm(Film Film) {
	bool found = false;
	int p = 0;
	for (int i = 0; i < ListaFilme.size(); i++) {
		if (Film.getterTitel() == ListaFilme[i].getterTitel()) {
			found = true;
			p = i;
		}
	}
	if (found) {
		cout << "Like?->1" << "\n" << "maybe not?->2";
		int x;
		std::cin >> x;
		if (x == 1)
			ListaFilme[p].setterLikes(ListaFilme[p].getterLikes() + 1);
		ListaFilme.erase(ListaFilme.begin() + p);
	}
	else
		cout << "non existent";
}