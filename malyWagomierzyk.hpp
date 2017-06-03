//
//  malyWagomierzyk.hpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#ifndef malyWagomierzyk_hpp
#define malyWagomierzyk_hpp

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <unistd.h>

#include "fabrykaCzujnikow.hpp"
#include "Wagomierz.hpp"
#include "Czujnik.hpp"

#include "classes.h"

using namespace std;

class malyWagomierzyk : public fabrykaCzujnikow
{
public:
    malyWagomierzyk();
    
    virtual Czujnik* utworzCzujnik();
};

#endif /* malyWagomierzyk_hpp */
