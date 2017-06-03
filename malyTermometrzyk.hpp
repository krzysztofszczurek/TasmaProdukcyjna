//
//  malyTermometrzyk.hpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#ifndef malyTermometrzyk_hpp
#define malyTermometrzyk_hpp

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <unistd.h>

#include "Termometr.hpp"
#include "fabrykaCzujnikow.hpp"
#include "Czujnik.hpp"

#include "classes.h"

using namespace std;

class malyTermometrzyk : public fabrykaCzujnikow
{
public:
    malyTermometrzyk();
    
    virtual Czujnik* utworzCzujnik();
};

#endif /* malyTermometrzyk_hpp */
