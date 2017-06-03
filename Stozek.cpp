//
//  Stozek.cpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#include "Stozek.hpp"

Stozek::Stozek()
{
    this->ustawTemp(losujWartosc(0, 20));
    this->ustawWage(losujWartosc(5, 15));
    this->ustawOpor(losujWartosc(6, 24));
    this->ustawNazwe("stozek");
}
