//
//  Produkt.hpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#ifndef Produkt_hpp
#define Produkt_hpp
#pragma once

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <unistd.h>

#include "Czujnik.hpp"

#include "classes.h"

using namespace std;


class Produkt
{
    float temperatura;
    float waga;
    float opornosc;
    string nazwa;
    vector<Czujnik*> listaczujnikow;
public:
    ~Produkt() {}
    double wezTemp();
    void ustawTemp(double);
    double wezWage();
    void ustawWage(double);
    double wezOpor();
    void ustawOpor(double);
    string wezNazwe();
    void ustawNazwe(string);
    void wstawCzujnik(Czujnik*);
    //void wstawCzujnik(int);
    Czujnik podajCzujnik(int);
    
    float losujWartosc(float min, float max);
    
    void powiadomCzujnik();
};


#endif /* Produkt_hpp */
