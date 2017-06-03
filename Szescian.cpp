//
//  Szescian.cpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#include "Szescian.hpp"

Szescian::Szescian()
{
    this->ustawTemp(losujWartosc(2, 45));
    this->ustawWage(losujWartosc(8, 17));
    this->ustawOpor(losujWartosc(2, 22));
    this->ustawNazwe("szescian");
}
