//
//  fabrykaProduktow.hpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#ifndef fabrykaProduktow_hpp
#define fabrykaProduktow_hpp

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

class fabrykaProduktow
{
public:
    fabrykaProduktow() {}
    virtual ~fabrykaProduktow() {}
    virtual Produkt* utworzProdukt() = 0;
};


#endif /* fabrykaProduktow_hpp */
