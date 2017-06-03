//
//  Tasma.cpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#include "Tasma.hpp"

void Tasma::dodajCz(Czujnik *c)
{
    czujniki.push_back(c);
    for (vector<Produkt*>::iterator it = produkty.begin(); it != produkty.end(); it++)
    {
        (*it)->wstawCzujnik(c);
    }
}

void Tasma::dodajProdukt(Produkt* p)
{
    produkty.push_back(p);
}

void Tasma::wstawCzujnik(Czujnik* c)
{
    this->czujniki.push_back(c);
}
/*
 void Produkt::wstawCzujnik(int c)
 {
 this->listaczujnikow.push_back(c);
 }
 */
Czujnik Tasma::podajCzujnik(int i)
{
    return *this->czujniki.at(i);
}

void Tasma::wstawProdukt(Produkt* p)
{
    this->produkty.push_back(p);
}
/*
 void Produkt::wstawCzujnik(int c)
 {
 this->listaczujnikow.push_back(c);
 }
 */
Produkt Tasma::podajProdukt(int i)
{
    return *this->produkty.at(i);
}

void Tasma::czyscCzujniki()
{
    this->czujniki.clear();
}
void Tasma::czyscProdukty()
{
    this->produkty.clear();
}
