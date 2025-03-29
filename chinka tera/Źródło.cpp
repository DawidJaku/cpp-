#include <iostream>
#include <conio.h>

using namespace std;
void snow()
{
	float snieg[32][96];
}


void chrismas_tree(int a)
{
	int mid = a; 
	for (int i = 0;i < 3;++i)
	{
		if (i == 0)
		{
			for (int j = a+2;j >= 0;--j)
				cout << " ";
			cout << "*"<< endl;
		}
		for (int j = 1;j < mid; ++j)
		{
			for (int k = a - j + 2;k >= 0;--k)
				cout << " ";
			for (int k = 0;k <= j;++k)
				cout << "*";
			for (int k = 0;k < j;++k)
				cout << "*";
			cout << endl;
		}
		mid += 2;
	}
	for (int i = 0;i < 3;++i)
	{
		for (int j = a+1 ;j >= 0;--j)
			cout << " ";
		for(int j=0;j<3;++j)
			cout << "*";
		cout << endl;
		
	}
}
int main()
{
	int a = 9;
	chrismas_tree(a);
	system("pause");
	system("cls");

	
}