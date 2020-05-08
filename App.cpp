#include "Repo.h"
#include "Film.h"
#include "Benutzer.h"
int main() {
	vector<Film> ListaFilme;
	Repo r(ListaFilme);
	int x = -1;
	while (x != 0) {
		cout << "1 fur Administratormodus\n"
			"2 fur Benutzermodus\n"
			"0 fur EXIT\n";
		cout << "x=";
		cin >> x;
		if (x == 1) {
			int opt = -1;
			while (opt != 0) {
				cout << "1 - Add\n"
					"2 - Delete\n"
					"3 - Film List\n"
					"0 - Exit\n"
					"\n";
				cout << "Option->";
				cin >> opt;
				if (opt == 1) {
					string Titel;
					cout << "Title";
					cin >> Titel;
					int Year;
					cout << "Year";
					cin >> Year;
					string Genre;
					cout << "Genre";
					cin >> Genre;
					int Like;
					cout << "Likes";
					cin >> Like;
					string Trailer;
					cout << "Trailer";
					cin >> Trailer;
					Film Movie(Titel, Genre, Trailer, Year, Like);
					r.addFilm(Movie);
				}
				if (opt == 2) {
					string Titel;
					cout << "Title ";
					cin >> Titel;
					int Year;
					cout << "Year ";
					cin >> Year;
					string Genre;
					cout << "Genre ";
					cin >> Genre;
					int Like;
					cout << "Likes ";
					cin >> Like;
					string Trailer;
					cout << "Trailer ";
					cin >> Trailer;
					Film Movie(Titel, Genre, Trailer, Year, Like);
					r.deleteFilm(Movie);
				}
				if (opt == 3) {
					r.show_List();
					cout << "\n";
				}
			}

		}
		else
			if (x == 2) {
				vector<Film> Whatchlist;
				Benutzer b(Whatchlist);
				int opt = -1;
				while (opt != 0) {
					cout << "1 - Search genre\n"
						"2 - Delete Watch\n"
						"3 - show Watchlist\n"
						"4 - show Repo\n"
						"0 - Exit\n";
					cin >> opt;
					if (opt == 1) {
						string Genre;
						cout << "Genre->";
						cin >> Genre;
						b.showGenre(Genre, ListaFilme);
					}
					if (opt == 2) {
						b.showWatchlist();
						string Titel;
						cout << "Title ";
						cin >> Titel;
						int Year;
						cout << "Year ";
						cin >> Year;
						string Genre;
						cout << "Genre ";
						cin >> Genre;
						int Like;
						cout << "Likes ";
						cin >> Like;
						string Trailer;
						cout << "Trailer ";
						cin >> Trailer;
						Film Movie(Titel, Genre, Trailer, Year, Like);
						b.deletefromWatchlist(Movie);
					}
					if (opt == 3) {
						b.showWatchlist();
						cout << "\n";
					}
					if (opt == 4) {
						r.show_List();
						cout << "\n";
					}

				}
			}
	}
	return 0;
}