#include<iostream>
#include<random>

using namespace std;

double** stworz(int n, int m) 
{
	random_device r;
	mt19937 gen(r());
	uniform_int_distribution<> dist(1, 20);
	double** tab;
	tab = new double* [n];
	for (int i = 0; i < n; i++) {
		tab[i] = new double[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			tab[i][j] = dist(gen);
		}
	}
	return tab;
}

double** dodawanie(double** tab1, double** tab2, int n, int m) {
	double** tab_dodawnaie;
	tab_dodawnaie = new double* [n];
	for (int i = 0; i < n; i++) {
		tab_dodawnaie[i] = new double[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			tab_dodawnaie[i][j] = tab1[i][j] + tab2[i][j];
		}
	}

	return tab_dodawnaie;
}

double** odejmowanie(double** tab1, double** tab2, int n, int m) {
	double** tab_odejmowanie;
	tab_odejmowanie = new double* [n];
	for (int i = 0; i < n; i++) {
		tab_odejmowanie[i] = new double[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			tab_odejmowanie[i][j] = tab1[i][j] - tab2[i][j];
		}
	}

	return tab_odejmowanie;
}

double** mnorzenie_prze_liczbe(double** tab1, int n, int m, double liczba) {
	double** tab_mnorzenie_prze_liczbe;
	tab_mnorzenie_prze_liczbe = new double* [n];
	for (int i = 0; i < n; i++) {
		tab_mnorzenie_prze_liczbe[i] = new double[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			tab_mnorzenie_prze_liczbe[i][j] = tab1[i][j] * liczba;
		}
	}
	return tab_mnorzenie_prze_liczbe;
}

void wypisz(double** tab, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << tab[i][j] << " ";
		}
		cout << endl;
	}

}

void max(double** tab, int n, int m) {
	int max = INT_MIN;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (max < tab[i][j]) {
				max = tab[i][j];
			}
		}
	}
	cout << max << endl;
}

void min(double** tab, int n, int m) {
	int min = INT_MAX;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (min > tab[i][j]) {
				min = tab[i][j];
			}
		}
	}
	cout << min << endl;
}

int main() {
	cout << "Podaj wymiar tablicy: " << endl;
	int n, m;
	cin >> n >> m;
	system("cls");
	double** tab1 = stworz(n, m);
	double** tab2 = stworz(n, m);
	cout << "Pierwsza tablica: " << endl;
	wypisz(tab1, n, m);
	cout << endl;
	cout << "Druga tablica: " << endl;
	wypisz(tab2, n, m);
	cout << endl;
	cout << "Dodadawnie Macierzy:" << endl;
	double** tab_dodawanie = dodawanie(tab1, tab2, n, m);
	wypisz(tab_dodawanie, n, m);
	cout << endl;
	cout << "Odejmowanie Macierzy:" << endl;
	double** tab_odejmowanie = odejmowanie(tab1, tab2, n, m);
	wypisz(tab_odejmowanie, n, m);
	cout << endl;
	cout << "Podaj liczbe prze jaka chcesz przemnorzyc: " << endl;
	double liczba;
	cin >> liczba;
	cout << endl << "Mnorzenie Macierzy prze liczbe: " << endl;
	double** tab_mnorzenie_prze_liczbe = mnorzenie_prze_liczbe(tab1, n, m, liczba);
	wypisz(tab_mnorzenie_prze_liczbe, n, m);
	cout << endl;
	cout << "Wartosc Maksymalan macierzy: " << endl;
	max(tab1, n, m);
	cout << endl;
	cout << "Wartosc Minimalna macierzy: " << endl;
	min(tab1, n, m);
	cout << endl;
	system("pause");
	return 0;
}