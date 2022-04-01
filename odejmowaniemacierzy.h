#pragma once
#include <iostream>
#include "macierze.h"
using namespace std;
class Odejmowanie :public Macierze
{
    float r , n ;
    int a , b, c ;
    float *** A , ***B ;
    public:
        Odejmowanie() ;
    void podaj() ; //podanie wartosc , ilosc macierzy i utworzenie dynamicznych tablic
    void przypisz() ; // podanie wartosci macierzy
    void pokaz() ; // pokazanie macierzy dwoch
    void dodaj()  ; //odejmowanie  macierzy
    void wynik() ; //wyswietlenie wyniku
    ~Odejmowanie() ;

};
