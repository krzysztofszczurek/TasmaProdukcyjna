//
//  fabrykaCzujnikow.cpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#include "fabrykaCzujnikow.hpp"

void fabrykaCzujnikow::ustawNazwe(string strindzek)
{
    this->nazwa=strindzek;
}

string fabrykaCzujnikow::wezNazwe()
{
    return this->nazwa;
}
