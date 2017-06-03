//
//  malyOporomierzyk.hpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#ifndef malyOporomierzyk_hpp
#define malyOporomierzyk_hpp

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <unistd.h>

#include "Czujnik.hpp"
#include "fabrykaCzujnikow.hpp"
#include "Oporomierz.hpp"

#include "classes.h"

using namespace std;

class malyOporomierzyk : public fabrykaCzujnikow
{
public:
    malyOporomierzyk();
    
    virtual Czujnik* utworzCzujnik();
};

#endif /* malyOporomierzyk_hpp */
