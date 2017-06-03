//
//  malyStozeczek.cpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#include "malyStozeczek.hpp"

Produkt* malyStozeczek::utworzProdukt()
{
    cout << "- stozek" << endl;
    return new Stozek;
}
