//
//  Czujnik.hpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#ifndef Czujnik_hpp
#define Czujnik_hpp
#pragma once

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <unistd.h>

#include "Produkt.hpp"

#include "classes.h"

using namespace std;

class Czujnik
{
    string nazwa;
    double optimummin, optimummax;
public:
    string wezNazwe();
    void ustawNazwe(string);
    double wezMIN();
    void ustawMIN(double);
    double wezMAX();
    void ustawMAX(double);
    virtual ~Czujnik();
    virtual void aktualizuj(Produkt*) = 0;
};

#endif /* Czujnik_hpp */
