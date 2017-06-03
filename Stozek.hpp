//
//  Stozek.hpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#ifndef Stozek_hpp
#define Stozek_hpp

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

class Stozek : public Produkt
{
public:
    Stozek();
    float bok;
    
};

#endif /* Stozek_hpp */
