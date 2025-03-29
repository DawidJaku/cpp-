#include <iostream>
#include <random>
using namespace std;

double** stworz(int wrs, int kol) {
	double** macierz = new double* [wrs];
	for (int i = 0; i < wrs; i++) {
		macierz[i] = new double[kol];
	}
	for (int i = 0; i < wrs; i++) {
		for (int j = 0; j < kol; j++) {
			cin >> macierz[i][j];
		}
	}
	return macierz;
}
void wypisz(double** macierz, int wrs, int kol)
{
	cout << endl;
	for (int i = 0;i < wrs;++i)
	{
		for (int j = 0;j < kol;++j)
			cout << macierz[i][j] << "  ";
		cout << endl;
	}

}
int sumaelementow(double** macierz, int wrs, int kol)
{
	double suma = 0;
	for (int i = 0;i < wrs;++i)
	{
		for (int j = 0;j < kol;++j)
			suma += macierz[i][j];

	}
	return suma;
}
void najw_suma_kol(double** macierz, int wrs, int kol)
{
	double suma_kol = 0, najw_suma = 0, kolumna = 0;
	double* tab = new double[kol];
	for (int i = 0;i < wrs;++i)
		najw_suma += macierz[i][0];
	for (int i = 0;i < kol;++i)
	{
		for (int j = 0;j < wrs;++j)
		{
			suma_kol += macierz[j][i];
			tab[i] = suma_kol;
		}
		if (najw_suma < suma_kol)
		{
			najw_suma = suma_kol;
			kolumna = i + 1;
		}
		suma_kol = 0;
	}
	cout << "najwiêksza sume kolumny ma: to:";
	for (int i = 0;i < kol;++i)
		if (najw_suma == tab[i])
			cout << " " << i + 1;

}



int main()
{
	int wrs, kol;
	double suma_elementow = 0;

	cout << "Podaj rozmiar macierzy" << endl;
	cin >> wrs;
	cout << "x" << endl;;
	cin >> kol;
	double** macierz = stworz(wrs, kol);
	wypisz(macierz, wrs, kol);
	suma_elementow = sumaelementow(macierz, wrs, kol);
	cout << endl << "suma elementow macierzy:" << suma_elementow << endl;
	najw_suma_kol(macierz, wrs, kol);



	return 0;
}