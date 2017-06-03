#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <unistd.h>

#include "Czujnik.hpp"
#include "Produkt.hpp"
#include "fabrykaProduktow.hpp"
#include "fabrykaCzujnikow.hpp"
#include "Termometr.hpp"
#include "Wagomierz.hpp"
#include "Oporomierz.hpp"
#include "Prostopadloscian.hpp"
#include "Szescian.hpp"
#include "Stozek.hpp"
#include "Tasma.hpp"
#include "malyTermometrzyk.hpp"
#include "malyWagomierzyk.hpp"
#include "malyOporomierzyk.hpp"
#include "malyStozeczek.hpp"
#include "malyProstopadloscianik.hpp"
#include "malySzescianek.hpp"
#include "classes.h"
#include "System.hpp"

using namespace std;

int main()
{
    Tasma T;
    System S;
    int y=0;
    
    vector <fabrykaProduktow*> tworcyp;
    tworcyp.push_back(new malySzescianek());
    tworcyp.push_back(new malyStozeczek());
    tworcyp.push_back(new malyProstopadloscianik());
    
    vector <fabrykaCzujnikow*> tworcyc;
    tworcyc.push_back(new malyWagomierzyk());
    tworcyc.push_back(new malyTermometrzyk());
    tworcyc.push_back(new malyOporomierzyk());
    
    
    int lp, mp = 0, i = 0;
    cout<<"Symulator tasmy kontrolnej."<<endl;
    cout << "Ile produktow sprawdzic na tasmie:" << endl;
    cin >> lp;
    cout<<"Do produktow kontrolowanych dodano:"<<endl;
    T.czyscProdukty();
    while (mp<lp)
    {
        T.dodajProdukt(tworcyp.at(rand() % tworcyp.size())->utworzProdukt());
        
        /*auto a = T.czujniki.begin();
         for (a = T.czujniki.begin(); a != T.czujniki.end(); a++)
         {
         sleep(2);
         (*a)->aktualizuj(T.produkty.at(i));
         }
         
         //sleep(2);
         //T.produkty.at(i)->powiadomCzujnik();
         cout << "Element ma optymalne wartosci." << endl << endl << endl;
         */
        i++;
        mp++;

    }
    do
    {
    int wybor = 0;
    S.menu();
    
    cin >> wybor;
    
    if (wybor<=5 && wybor>0)
    {
        switch (wybor)
        {
            case 1:
            {
                string source;
                int licznik = 0;
                for (auto it = tworcyc.begin(); it != tworcyc.end(); it++)
                {
                    cout << (*it)->wezNazwe() << endl;
                    licznik++;
                }
                
                cout << "Podaj nazwe czujnika ktory chcesz wytworzyc:" << endl;
                cin >> source;
                for (int i = 0; i != licznik; i++)
                {
                    if (source == tworcyc.at(i)->wezNazwe())
                    {
                        T.dodajCz(tworcyc.at(i)->utworzCzujnik());
                    }
                    
                }
                y=1;
                break;
            }
            case 2:
            {
                cout << "Stworzone czujniki: " << endl;
                auto b = T.begin();//bylo T.czujniki.begin();
                for (b = T.begin(); b != T.end(); b++) //zamiast T.begin() bylo T.czujniki.begin()
                    //zamiast T.end() bylo T.czujniki.end()
                {
                    cout << (*b)->wezNazwe() << endl;
                }
                y=1;
                break;
            }
                
                
            case 3:
            {
                double min,max;
                auto a = T.begin();//bylo T.czujniki.begin()
                for (a = T.begin(); a != T.end(); a++) //zamiast T.begin() bylo T.czujniki.begin()
                    //zamiast T.end() bylo T.czujniki.end()
                {
                    cout << "Podaj minimalna wartosc dla " << (*a)->wezNazwe() << ": ";
                    cin >> min;
                    (*a)->ustawMIN(min);
                    cout << "Podaj maksymalna wartosc dla " << (*a)->wezNazwe() << ": ";
                    cin >> max;
                    (*a)->ustawMAX(max);
                }
                y=1;
                break;
            }
            case 4:
            {
                int i = 0, mp = 0;
                
                while (mp<lp)
                {
                   /* auto a = T.czujniki.begin();
                    for (a = T.czujniki.begin(); a != T.czujniki.end(); a++)
                    {
                        sleep(2);
                        (*a)->(T.produkty.at(i));
                    }*/
                     
                    sleep(2);
                    cout<<"Produkt: "<<T.podajProdukt(i).wezNazwe()<<endl;
                    T.podajProdukt(i).powiadomCzujnik();
                    cout << "Element ma optymalne wartosci." << endl << endl << endl;
                    
                    i++;
                    mp++;
                }
                cout << "Wykaz wytworzonych elementow:" << endl;
                for (int j = 0; j<i; j++)
                {
                    cout << j + 1 << ". " << T.podajProdukt(j).wezNazwe() << " - masa: " << T.podajProdukt(j).wezWage() << " kg - opornosc: " << T.podajProdukt(j).wezOpor() << " ohm - temperatura: " << T.podajProdukt(j).wezTemp() << " oC." << endl;
                }
                y=0;
                break;
            }
            case 5:
            {
                cout<<"Dziekujemy za skorzystanie z programu. :)"<<endl;
                y=0;
                break;
            }
        }
    }
    } while (y==1);
    return 0;
}

/*
 
 class Produkt;
 
 class Czujnik
 {
 public:
 string nazwa;
 float optimummin, optimummax;
 virtual void aktualizuj(Produkt*) = 0;
 };
 
 class Produkt
 {
 public:
 ~Produkt() {}
 float temperatura;
 float waga;
 float opornosc;
 string nazwa;
 
 vector<Czujnik*> listaczujnikow;
 
 virtual void powiadomCzujnik()
 {
 for (vector<Czujnik*>::iterator it = listaczujnikow.begin(); it != listaczujnikow.end(); it++)
 {
 (*it)->aktualizuj(this);
 }
 }
 };
 
 class Tasma
 {
 public:
 ~Tasma() {};
 vector <Czujnik*> czujniki;
 vector <Produkt*> produkty;
 
 void dodajCz(Czujnik *c)
 {
 czujniki.push_back(c);
 for (vector<Produkt*>::iterator it = produkty.begin(); it != produkty.end(); it++)
 {
 (*it)->listaczujnikow.push_back(c);
 }
 }
 
 void dodajProdukt(Produkt* p)
 {
 produkty.push_back(p);
 }
 };
 
 class Termometr : public Czujnik
 {
 public:
 Termometr() {
 this->nazwa = "termometr";
 
 }
 virtual void aktualizuj(Produkt* produkciczek)
 {
 cout << "Temperatura przedmiotu: " << produkciczek->temperatura << " oC." << endl;
 cout << "Ustawiona temperatura optymalna to od: " << this->optimummin << ", do: " << this->optimummax << " oC." << endl;
 if (produkciczek->temperatura <= this->optimummax && produkciczek->temperatura >= this->optimummin)
 {
 cout << "Temperatura produktu: " << produkciczek->nazwa << ", ma poprawna wartosc." << endl;
 }
 else
 {
 cout << "Temperatura produktu: " << produkciczek->nazwa << ", nie ma poprawnej wartosci." << endl;
 cout << "Trwa nastawianie poprawnej temperatury" << endl;
 produkciczek->temperatura = (rand() % (int(this->optimummax) - int(this->optimummin))) + int(this->optimummin);
 cout << "Nowa temperatura elementu to: " << produkciczek->temperatura << " oC" << endl;
 }
 }
 };
 
 class Wagomierz : public Czujnik
 {
 public:
 
 Wagomierz()
 {
 this->nazwa = "waga";
 }
 virtual void aktualizuj(Produkt* produkciczek)
 {
 cout << "Masa przedmiotu: " << produkciczek->waga << " kg." << endl;
 cout << "Ustawiona masa optymalna to od: " << this->optimummin << ", do: " << this->optimummax << " kg." << endl;
 if (produkciczek->waga <= this->optimummax && produkciczek->waga >= this->optimummin)
 {
 cout << "Masa produktu: " << produkciczek->nazwa << ", ma poprawna wartosc." << endl;
 }
 else
 {
 cout << "Masa produktu: " << produkciczek->nazwa << ", nie ma poprawnej wartosci." << endl;
 cout << "Trwa ucinanie obiektu." << endl;
 produkciczek->waga = (rand() % (int(this->optimummax) - int(this->optimummin))) + int(this->optimummin);
 cout << "Nowa masa elementu to: " << produkciczek->waga << " kg" << endl;
 }
 }
 };
 
 class Oporomierz : public Czujnik
 {
 public:
 
 Oporomierz()
 {
 this->nazwa = "oporomierz";
 }
 virtual void aktualizuj(Produkt* produkciczek)
 {
 cout << "Opornosc przedmiotu: " << produkciczek->opornosc << " ohm." << endl;
 cout << "Ustawiona opornosc optymalna to od: " << this->optimummin << ", do: " << this->optimummax << " ohm." << endl;
 if (produkciczek->opornosc <= this->optimummax && produkciczek->opornosc >= this->optimummin)
 {
 cout << "Opornosc produktu: " << produkciczek->nazwa << ", ma poprawna wartosc." << endl;
 }
 else
 {
 cout << "Opornosc produktu: " << produkciczek->nazwa << ", nie ma poprawnej wartosci." << endl;
 cout << "Trwa napiecianie obiektu." << endl;
 produkciczek->opornosc = (rand() % (int(this->optimummax) - int(this->optimummin))) + int(this->optimummin);
 cout << "Nowa opornosc elementu to: " << produkciczek->opornosc << " ohm" << endl;
 }
 }
 };
 
 class Szescian : public Produkt
 {
 public:
 Szescian()
 {
 this->temperatura = losujWartosc(2, 45);
 this->waga = losujWartosc(8, 17);
 this->opornosc = losujWartosc(2, 22);
 this->nazwa = "szescian";
 }
 float bok;
 
 };
 
 class Stozek : public Produkt
 {
 public:
 Stozek()
 {
 this->temperatura = losujWartosc(0, 20);
 this->waga = losujWartosc(5, 15);
 this->opornosc = losujWartosc(6, 24);
 this->nazwa = "stozek";
 }
 float bok;
 
 };
 
 class Prostopadloscian : public Produkt
 {
 public:
 Prostopadloscian()
 {
 this->temperatura = losujWartosc(20, 80);
 this->waga = losujWartosc(2, 34);
 this->opornosc = losujWartosc(12, 45);
 this->nazwa = "prostopadloscian";
 }
 float bok;
 
 };
 
 
 class fabrykaProduktow
 {
 public:
 fabrykaProduktow() {}
 virtual ~fabrykaProduktow() {}
 virtual Produkt* utworzProdukt() = 0;
 };
 
 class malySzescianek : public fabrykaProduktow
 {
 public:
 virtual Produkt* utworzProdukt()
 {
 cout << "Wytworzono szescian." << endl;
 return new Szescian;
 }
 };
 
 class malyStozeczek : public fabrykaProduktow
 {
 public:
 virtual Produkt* utworzProdukt()
 {
 cout << "Wytworzono stozek." << endl;
 return new Stozek;
 }
 };
 
 class malyProstopadloscianik : public fabrykaProduktow
 {
 public:
 virtual Produkt* utworzProdukt()
 {
 cout << "Wytworzono prostopadloscian." << endl;
 return new Prostopadloscian;
 }
 };
 
 class fabrykaCzujnikow
 {
 public:
 string nazwa;
 fabrykaCzujnikow() {}
 virtual ~fabrykaCzujnikow() {}
 virtual Czujnik* utworzCzujnik() = 0;
 };
 
 class malyWagomierzyk : public fabrykaCzujnikow
 {
 public:
 malyWagomierzyk()
 {
 this->nazwa = "waga";
 }
 
 virtual Czujnik* utworzCzujnik()
 {
 cout << "Dodano wagomierz." << endl;
 return new Wagomierz;
 }
 };
 
 class malyTermometrzyk : public fabrykaCzujnikow
 {
 public:
 malyTermometrzyk()
 {
 this->nazwa = "termometr";
 }
 
 virtual Czujnik* utworzCzujnik()
 {
 cout << "Dodano termometr." << endl;
 return new Termometr;
 }
 };
 
 class malyOporomierzyk : public fabrykaCzujnikow
 {
 public:
 malyOporomierzyk()
 {
 this->nazwa = "oporomierz";
 }
 
 virtual Czujnik* utworzCzujnik()
 {
 cout << "Dodano oporomierz." << endl;
 return new Oporomierz;
 }
 };
 */
