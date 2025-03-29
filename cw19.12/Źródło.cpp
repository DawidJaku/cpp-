#include <iostream>
#include <cmath>

using namespace std;
const double PI = 3.14;
//zad1
class Rodzic 
{
public:
    virtual void Metoda() 
    {
        cout << "Metoda klasy Rodzic" << endl;
    }
};

class Potomek : public Rodzic 
{
public:
    void Metoda() override 
    {
        cout << "Metoda klasy Potomek" << endl;
    }
};
//zad2
class Bryla 
{
public:
    virtual double PolePowierzchni() const = 0;
    virtual double Objetosc() const = 0;
};

class Kula : public Bryla 
{
private:
    double promien;

public:
    Kula(double r) : promien(r) {}

    double PolePowierzchni() const override 
    {
        return 4.0 * PI * pow(promien, 2);
    }

    double Objetosc() const override 
    {
        return (4.0 / 3.0) * PI * pow(promien, 3);
    }
};

class Prostopadloscian : public Bryla 
{
private:
    double a, b, h;

public:
    Prostopadloscian(double sideA, double sideB, double height)
        : a(sideA), b(sideB), h(height) {}

    double PolePowierzchni() const override 
    {
        return 2.0 * (a * b + a * h + b * h);
    }

    double Objetosc() const override 
    {
        return a * b * h;
    }
};
//zad3
class Ksztalt {
public:
    virtual void ObliczPole() const = 0;
};

class Kolo : public Ksztalt {
private:
    float promien;

public:
    Kolo(float r) : promien(r) {}

    void ObliczPole() const override {
        cout << "Pole ko³a: " << 3.14 * pow(promien, 2) << endl;
    }
};

class Kwadrat : public Ksztalt {
private:
    float a;

public:
    Kwadrat(float side) : a(side) {}

    void ObliczPole() const override {
        cout << "Pole kwadratu: " << pow(a, 2) << endl;
    }
};

int main() 
{
    //zad1
    Rodzic rodzicObj;
    cout << "Zwyk³e wywo³anie metody przez obiekt:" << endl;
    rodzicObj.Metoda();

    Potomek potomekObj;
    cout << "Zwyk³e wywo³anie metody przez obiekt Potomek:" << endl;
    potomekObj.Metoda();

    Rodzic* wskRodzic = &potomekObj;
    cout << "Wywo³anie metody przez wskaŸnik klasy bazowej:" << endl;
    wskRodzic->Metoda();
    //zad2
    Kula kula1(3.0);
    Kula kula2(5.0);

    Prostopadloscian prostopad1(2.0, 4.0, 6.0);
    Prostopadloscian prostopad2(1.0, 2.0, 3.0);

    cout << "Kula 1:" << endl;
    cout << "Pole powierzchni: " << kula1.PolePowierzchni() << endl;
    cout << "Objetosc: " << kula1.Objetosc() << endl;

    cout << "Kula 2:" << endl;
    cout << "Pole powierzchni: " << kula2.PolePowierzchni() << endl;
    cout << "Objetosc: " << kula2.Objetosc() << endl;

    cout << "Prostopadloscian 1:" << endl;
    cout << "Pole powierzchni: " << prostopad1.PolePowierzchni() << endl;
    cout << "Objetosc: " << prostopad1.Objetosc() << endl;

    cout << "Prostopadloscian 2:" << endl;
    cout << "Pole powierzchni: " << prostopad2.PolePowierzchni() << endl;
    cout << "Objetosc: " << prostopad2.Objetosc() << endl;
    //zad3
    Kolo kolo1(3.0);
    Kolo kolo2(5.0);

    Kwadrat kwadrat1(2.0);
    Kwadrat kwadrat2(4.0);

    Ksztalt* wskaznik;

    wskaznik = &kolo1;
    wskaznik->ObliczPole();

    wskaznik = &kolo2;
    wskaznik->ObliczPole();

    wskaznik = &kwadrat1;
    wskaznik->ObliczPole();

    wskaznik = &kwadrat2;
    wskaznik->ObliczPole();
    return 0;
}
