//
//  Oporomierz.cpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#include "Oporomierz.hpp"

Oporomierz::Oporomierz()
{
    this->ustawNazwe("oporomierz");
}
void Oporomierz::aktualizuj(Produkt* produkciczek)
{
    cout << "Opornosc przedmiotu: " << produkciczek->wezOpor() << " ohm." << endl;
    cout << "Ustawiona opornosc optymalna to od: " << this->wezMIN() << ", do: " << this->wezMAX() << " ohm." << endl;
    if (produkciczek->wezOpor() <= this->wezMAX() && produkciczek->wezOpor() >= this->wezMIN())
    {
        cout << "Opornosc produktu: " << produkciczek->wezNazwe() << ", ma poprawna wartosc." << endl;
    }
    else
    {
        cout << "Opornosc produktu: " << produkciczek->wezNazwe() << ", nie ma poprawnej wartosci." << endl;
        cout << "Trwa napiecianie obiektu." << endl;
        produkciczek->ustawOpor(double(rand() % (int(this->wezMAX()) - int(this->wezMIN()))) + int(this->wezMIN()));
        cout << "Nowa opornosc elementu to: " << produkciczek->wezOpor() << " ohm" << endl;
    }
}
