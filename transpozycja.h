#pragma once
#include <iostream>
#include "macierze.h"
using namespace std;
class Transpozycja :public Macierze
{
    int a , b, c ;
    float ** A , **B ;
    float n ;
public :
    Transpozycja() ;
    void podaj() ; //wymiary macierzy
    void zrob1() ; // utworzenie dynamicznych tablic
    void przypisz() ; // przypisanie  wartosci macierzy
    void dodaj()  ; //dodawanie macierzy
    void wynik() ;//wyswietlenie wyniku
    ~Transpozycja() ;


};
