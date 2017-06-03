//
//  malyProstopadloscianik.cpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#include "malyProstopadloscianik.hpp"

Produkt* malyProstopadloscianik::utworzProdukt()
{
    cout << "- prostopadloscian" << endl;
    return new Prostopadloscian;
}
