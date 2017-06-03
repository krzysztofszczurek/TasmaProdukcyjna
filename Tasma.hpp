//
//  Tasma.hpp
//  Projekt ostateczny
//
//  Created by Jacek Stankiewicz on 02.06.2017.
//  Copyright © 2017 DziuCoilJaca. All rights reserved.
//

#ifndef Tasma_hpp
#define Tasma_hpp

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <unistd.h>

#include "Czujnik.hpp"
#include "Produkt.hpp"

#include "classes.h"

using namespace std;

class Tasma
{
    vector <Czujnik*> czujniki;
    vector <Produkt*> produkty;
    
public:
    friend class Produkt;
    ~Tasma() {};
    void wstawCzujnik(Czujnik*);
    Czujnik podajCzujnik(int);
    
    void wstawProdukt(Produkt*);
    Produkt podajProdukt(int);
    
    void czyscProdukty();
    void czyscCzujniki();
    
    void dodajCz(Czujnik *c);
    
    void dodajProdukt(Produkt* p);
    
    typedef vector<Czujnik*>::iterator iterator;
    
    iterator begin() {return czujniki.begin();}
    iterator end() {return czujniki.end();}
    
};

#endif /* Tasma_hpp */
