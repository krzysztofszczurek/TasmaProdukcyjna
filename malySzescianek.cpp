//
//  malySzescianek.cpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#include "malySzescianek.hpp"

Produkt* malySzescianek::utworzProdukt()
{
    cout << "- szescian" << endl;
    return new Szescian;
}
