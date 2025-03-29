#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
	ifstream Sin("plik1.txt");
	ofstream Sniep("nieparzyste.txt"), Sparz("parzyste.txt"), slowo("slowa.txt");
	int a;
	string cos;
	while (!Sin.eof())
	{
		Sin >> a;
		if (!Sin.fail())
		{
			Sin >> a;
			if (a % 2 == 0)
				Sparz << a << endl;
			else
				Sniep << a << endl;
		}
		else if (Sin.fail())
		{
			Sin.clear();
			Sin >> cos;
			slowo << cos << endl;
		}
	}
	Sin.close();
	Sniep.close();
	Sparz.close();
	slowo.close();
	return 0;
}