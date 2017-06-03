//
//  Oporomierz.hpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#ifndef Oporomierz_hpp
#define Oporomierz_hpp
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

class Oporomierz : public Czujnik
{
public:
    
    Oporomierz();
    virtual void aktualizuj(Produkt* produkciczek);
};


#endif /* Oporomierz_hpp */
