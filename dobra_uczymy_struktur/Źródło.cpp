#include<iostream>
#include<random>
#include<typeinfo>
using namespace std;

struct punkt
{
	double x, y;

};

double odl(punkt);

punkt* stworz(int);

void wypisz(punkt tab[], int n);

int main()
{

	punkt A;
	A.x = 1;
	A.y = 5;
	int n = 5;

	cout << odl(A) << endl;
	punkt* T = stworz(5);
	wypisz(T, n);
	system("pause");
	return 0;
}

//wartoœæ to jest kopia na której pracujemy w funckcji
double odl(punkt A)
{
	return sqrt((A.x * A.x) + (A.y * A.y));
};
//wskaŸnik gdy zmienimy zmienia siê w ca³ym kodzie
double odl(punkt* A)
{
	A->x = 2;
	return sqrt((A->x * A->x) + (A->y * A->y));
}

punkt* stworz(int n)
{
	punkt* tab = new punkt[n];
	random_device R;
	for (int i = 0; i < n; i++)
	{
		tab[i].x = (20.0 * R() / R.max() - 10);
		tab[i].y = (20.0 * R() / R.max() - 10);
	}
	return tab;
};

void wypisz(punkt tab[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << tab[i].x << " ";
		cout << tab[i].y << endl;
	}
};