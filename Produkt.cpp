//
//  Produkt.cpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#include "Produkt.hpp"

float Produkt::losujWartosc(float min, float max)
{
    float zmienna;
    
    zmienna = (rand() % int(max)) + min;
    
    return zmienna;
}

void Produkt::powiadomCzujnik()
{
    for(auto it = listaczujnikow.begin(); it != listaczujnikow.end(); it++)
    {
        (*it)->aktualizuj(this);
    }
}

double Produkt::wezTemp()
{
    return this->temperatura;
}
void Produkt::ustawTemp(double tempka)
{
    this->temperatura=tempka;
}
double Produkt::wezWage()
{
    return this->waga;
}
void Produkt::ustawWage(double wazka)
{
    this->waga=wazka;
}
double Produkt::wezOpor()
{
    return this->opornosc;
}
void Produkt::ustawOpor(double oporka)
{
    this->opornosc=oporka;
}
string Produkt::wezNazwe()
{
    return this->nazwa;
}
void Produkt::ustawNazwe(string nazwka)
{
    this->nazwa=nazwka;
}
void Produkt::wstawCzujnik(Czujnik* c)
{
    this->listaczujnikow.push_back(c);
}
/*
void Produkt::wstawCzujnik(int c)
{
    this->listaczujnikow.push_back(c);
}
 */
Czujnik Produkt::podajCzujnik(int i)
{
    return *this->listaczujnikow.at(i);
}

