//
//  Prostopadloscian.cpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#include "Prostopadloscian.hpp"

Prostopadloscian::Prostopadloscian()
{
    this->ustawTemp(losujWartosc(3, 67));
    this->ustawWage(losujWartosc(5, 80));
    this->ustawOpor(losujWartosc(1, 90));
    this->ustawNazwe("prostopadloscian");
}
