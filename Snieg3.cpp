#include <iostream>
#include <random>
#include<conio.h>
#include<string>
#include<Windows.h>
#include<cstdlib>
#include <conio.h>

void wypisz_na_ekran(int** pInt, int wielkosc);

using namespace std;


void losuj_nowa_pozycje(int* platek, int wielkosc)
{
    random_device R;
    platek[0] = static_cast<int>(R() % (wielkosc));
    platek[1] = 0;
}

void odsniezaj(int** ekran, int wielkosc)
{
    for (int i = 0;i < wielkosc; ++i)
        for (int j = 0;j < wielkosc; ++j)
            ekran[i][j] = 0;
    system("cls");
    std::cout << "\x1B[2J\x1B[H";
}

void opadaj_snieg(int** snieg, int liczba_platkow, int wielkosc)
{
    random_device R;
    for (int i=0; i < liczba_platkow; ++i)
    {
        int prawdopodobienstwo_opadania = static_cast<int>(R() % (10));
        if (prawdopodobienstwo_opadania > 5)
            continue;
        snieg[i][1]++;
        if (snieg[i][1] >= wielkosc)
        {
            losuj_nowa_pozycje(snieg[i], wielkosc);
        }
    }
}

void wpisz_snieg_na_wynikowa_tablice_ekran(int** ekran, int** snieg_pozycje, int liczba_platkow, int wielkosc)
{
    for (int i = 0; i < liczba_platkow; ++i)
    {
        int x = snieg_pozycje[i][0];
        int y = snieg_pozycje[i][1];
        if (x > wielkosc || y > wielkosc)
        {
            std::cout << "Coœ zjeba³em" << std::endl;
        }
        ekran[y][x] = 1;
    }
}

void wypisz_na_ekran(int** ekran, int wielkosc)
{
    for (int i = 0; i < wielkosc; ++i)
    {
        for (int j = 0; j < wielkosc; ++j)
        {
            std::cout << (ekran[i][j] == 1 ? "*" : " ");
        }
        std::cout << std::endl;
    }

}

void snieg(int wielkosc, int liczba_platkow)
{

    random_device R;
    int** ekran = new int* [wielkosc];

    for (int i = 0;i < wielkosc; ++i)
        ekran[i] = new int[wielkosc];
    odsniezaj(ekran, wielkosc);

    int** snieg_pozycje = new int* [liczba_platkow];
    for (int i = 0;i < liczba_platkow; ++i)
    {
        snieg_pozycje[i] = new int[2];
        losuj_nowa_pozycje(snieg_pozycje[i], wielkosc);
    }

    while (true)
    {
        opadaj_snieg(snieg_pozycje, liczba_platkow, wielkosc);
        odsniezaj(ekran, wielkosc);
        wpisz_snieg_na_wynikowa_tablice_ekran(ekran, snieg_pozycje, liczba_platkow, wielkosc);
        wypisz_na_ekran(ekran, wielkosc);
        Sleep(10);
    }

}

int main()
{
    snieg(60, 20);
}