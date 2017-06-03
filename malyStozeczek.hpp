//
//  malyStozeczek.hpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#ifndef malyStozeczek_hpp
#define malyStozeczek_hpp

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <unistd.h>

#include "fabrykaProduktow.hpp"
#include "Stozek.hpp"
#include "Produkt.hpp"

#include "classes.h"

using namespace std;

class malyStozeczek : public fabrykaProduktow
{
public:
    virtual Produkt* utworzProdukt();
};

#endif /* malyStozeczek_hpp */
