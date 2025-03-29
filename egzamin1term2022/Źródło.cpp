//zad2
#include<iostream>
#include <fstream>
#include<string>
using namespace std;

//int main()
//{
//	ifstream file;
//	file.open("siema.txt");
//	string words;
//	string longestWord;
//	for (int i = 0;!file.eof();++i)
//	{
//		file >> words;
//		if (longestWord.length() < words.length())
//		{
//			longestWord = words;
//		}
//		else
//		{
//			continue;
//		}
//	}
//	cout << longestWord << " ";
//}

//zad3

struct Godzina
{
	int g, m, s;
	void wypisz();
};

void Godzina::wypisz()
{

}
string* najwczesniejsza(string* tab, string najwczesniejszaG, string line)
{
	najwczesniejszaG = tab[0];
	string jakasGodzina;
	for (int i = 1;i < atoi(line.c_str());i++)
	{
		jakasGodzina = tab[i];
		for (int j = 0;j < 8;++j)
		{
			if (najwczesniejszaG[j] > jakasGodzina[j])
				najwczesniejszaG = jakasGodzina;
			else
				continue;
		}
	}
	return najwczesniejszaG;
}
int main()
{

	string godzina;
	string line;
	string najwczesGodzina;
	ifstream file;
	file.open("elo.txt");
	getline(file, line);
	string* tab = new string [atoi(line.c_str())];
	for(int i=0;i<3;++i)
	{
		file >> godzina;
		tab[i] = godzina;
	}
	najwczesniejsza(tab, najwczesGodzina, line);
}