//
//  Czujnik.cpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#include "Czujnik.hpp"

Czujnik::~Czujnik() {}

string Czujnik::wezNazwe()
{
    return this->nazwa;
}
void Czujnik::ustawNazwe(string nazewka)
{
    this->nazwa=nazewka;
}
double Czujnik::wezMIN()
{
    return this->optimummin;
}
void Czujnik::ustawMIN(double minik)
{
    this->optimummin=minik;
}
double Czujnik::wezMAX()
{
    return this->optimummax;
}
void Czujnik::ustawMAX(double maksik)
{
    this->optimummax=maksik;
}
