//
//  malyProstopadloscianik.hpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#ifndef malyProstopadloscianik_hpp
#define malyProstopadloscianik_hpp

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <unistd.h>

#include "Prostopadloscian.hpp"
#include "fabrykaProduktow.hpp"

#include "classes.h"

using namespace std;

class malyProstopadloscianik : public fabrykaProduktow
{
public:
    virtual Produkt* utworzProdukt();
};


#endif /* malyProstopadloscianik_hpp */
