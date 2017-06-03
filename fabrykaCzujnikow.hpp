//
//  fabrykaCzujnikow.hpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#ifndef fabrykaCzujnikow_hpp
#define fabrykaCzujnikow_hpp
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

class fabrykaCzujnikow
{
    string nazwa;
public:
    void ustawNazwe(string);
    string wezNazwe();
    fabrykaCzujnikow() {}
    virtual ~fabrykaCzujnikow() {}
    virtual Czujnik* utworzCzujnik() = 0;
};

#endif /* fabrykaCzujnikow_hpp */
