//
//  Wagomierz.hpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#ifndef Wagomierz_hpp
#define Wagomierz_hpp
#pragma once

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <unistd.h>

#include "Produkt.hpp"
#include "Czujnik.hpp"

#include "classes.h"

using namespace std;

class Wagomierz : public Czujnik
{
public:
    
    Wagomierz();
    void aktualizuj(Produkt* produkciczek);
};

#endif /* Wagomierz_hpp */
