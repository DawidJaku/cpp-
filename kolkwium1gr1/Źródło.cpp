#include <iostream>
#include <string>

using namespace std;

//zad 1
//While(i >= j)
//{
//	i--;
//	j++;
//	k += (i + j) / 4;
//	++i;
//}
//i=7 j=8 k=18

//zad2

//void odwrotnosc(unsigned int a)
//{
//    for (int i = 0;i <32;++i)
//    {
//        cout << ((a >> i) & 1);
//    }
//}
//int main()
//{
//	unsigned int a;
//	cin >> a;
//    for (int i = 31;i >= 0; --i)
//    {
//
//        cout<<((a >> i) & 1);
//    }
//    cout << endl;
//    odwrotnosc(a);
//}

//zad3
//int main()
//{
//	unsigned int liczba;
//	int nparz = 0, parz = 0;
//	int cyfra;
//	int licznikNparz = 0, licznikParz=0;
//	cin >> liczba;
//	while (liczba)
//	{
//		cyfra = liczba % 10;
//		liczba = liczba / 10;
//		if (cyfra % 2 == 0)
//		{
//			parz += cyfra * pow(10, licznikParz);
//			++licznikParz;
//		}
//		else
//		{
//			nparz += cyfra * pow(10, licznikNparz);
//			++licznikNparz;
//		}
//
//	}
//	cout << nparz << endl;
//	cout << parz << endl;
//}