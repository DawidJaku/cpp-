//#include <iostream>
//
//using namespace std;
////zad1
//int** tablica(const int n, const int m)
//{
//	int a = 0;
//	int** tab = new int* [n];
//	for (int i = 0;i < n;++i)
//	{
//		tab[i] = new int[m];
//	}
//	for (int i = 0;i < n;++i)
//	{
//
//		if (i % 2 == 0)
//		{
//			for (int j = 0;j < m;++j)
//				tab[i][j] = j + 1 + a;
//		}
//		else
//		{
//			for (int j = m - 1;j >= 0;--j)
//				tab[i][j] = j + 1 + a;
//		}
//		a += m;
//	}
//	return tab;
//}
//
//int main()
//{
//	const int n = 3, m = 4;
//	int** tab = new int* [n];
//	for (int i = 0;i < n;++i)
//		tab[i] = new int[m];
//	tab = tablica(n, m);
//	for (int i = 0;i < n;++i)
//	{
//		for (int j = 0;j < m;++j)
//			cout << tab[i][j] << " ";
//		cout << endl;
//	}
//	return 0;
//}

//zad2
//#include <iostream>
//#include<iostream>
//using namespace std;
//char znak(char a, char b, char c)
//{
//	char zwrot;
//	int licznikDuzych = 0, licznikMalych = 0;
//	if (a >= 'A' && a <= 'Z')
//		++licznikDuzych;
//	else
//		++licznikMalych;
//	if (b >= 'A' && b <= 'Z')
//		++licznikDuzych;
//	else
//		++licznikMalych;
//	if (c >= 'A' && c <= 'Z')
//		++licznikDuzych;
//	else
//		++licznikMalych;
//	if (licznikDuzych > 0 && licznikDuzych == 0)
//		zwrot = 'D';
//	if (licznikDuzych == 0 && licznikMalych > 0)
//		zwrot = 'M';
//	if (licznikDuzych > 0 && licznikMalych > 0)
//		zwrot = 'T';
//	return zwrot;
//
//}
//
//int main()
//{
//	char a, b, c, wielkosc;
//	cin >> a >> b >> c;
//	wielkosc = znak(a, b, c);
//	cout << wielkosc;
//
//}

//zad3
#include<iostream>
#include<fstream>

using namespace std;

struct Prostokat
{
	int a, b;
	int obwod();
	int pole();
};
int Prostokat::obwod()
{
	return 2*a+2*b;
}
int Prostokat::pole()
{
	return a * b;
}

int main()
{
	Prostokat cosik;
	int licznik = 0;
	double x;
	ifstream file;
	file.open("dane.txt");
	file >> licznik;
	Prostokat *t=new Prostokat[licznik];
	/*file.clear();
	file.seekg(0);
	for(int i=0;!file.eof();++i)
	{
		
		file >> t[i].a >> t[i].b;

	}
	for (int i = 0;i < licznik;i+=2)
	{
		cosik.a = atoi(t[i].c_str);
		cosik.b = t[i + 1];
		cout << "obwod:" << cosik.obwod()<<" ";
		cout << "pole:" << cosik.pole() << endl;
	}*/
	cout << licznik;
}