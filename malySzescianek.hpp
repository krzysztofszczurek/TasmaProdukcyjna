//
//  malySzescianek.hpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#ifndef malySzescianek_hpp
#define malySzescianek_hpp

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <unistd.h>

#include "fabrykaProduktow.hpp"
#include "Szescian.hpp"

#include "classes.h"

using namespace std;

class malySzescianek : public fabrykaProduktow
{
public:
    virtual Produkt* utworzProdukt();
};


#endif /* malySzescianek_hpp */
