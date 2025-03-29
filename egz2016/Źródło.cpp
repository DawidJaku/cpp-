#include <iostream>
#include <fstream>
#include<cmath>
#include<string>

using namespace std;
//zad1
//int main()
//{
//	unsigned int liczba;
//	int a;
//	int iloscJedynek = 0;
//	cin >> liczba;
//	for (int i = 31;i >=0;--i)
//	{
//		a = ((liczba >> i) & 1);
//		cout << a;
//		if (a == 1)
//			++iloscJedynek;
//	}
//	cout << endl <<"ilosc jedynek w zapisie binarnym:"<< iloscJedynek;
//}
//zad 2

struct Daty
{
	int D=0, M=0, R=0;
};
//string* najwczesniejszaData(string* tab, int iloscDat,int liczbaWierszy)
//{
//	
//}


int main()
{
	int liczbaWierszy=0;
	string cosik;
	Daty daty;
	string data;
	int iloscDat = 0;
	ifstream file;
	file.open("elo.txt");
	while (!file.eof())
	{
		getline(file, data, '.');
		++iloscDat;
	}
	string* tab = new string[iloscDat];
	file.clear();
	file.seekg(0);
	for (int i = 0;!file.eof();++i)
	{
		getline(file, tab[i],'.');
		++liczbaWierszy;
	}
	cout <<"dlugosc tab2 "<< tab[2].length() << endl;
	cout << "tablica2 "<<tab[2]<<endl;
	cout << "dlugosc tab4 " << tab[4].length() << endl;
	cout << "tablica4 " << tab[4] << endl;

}


