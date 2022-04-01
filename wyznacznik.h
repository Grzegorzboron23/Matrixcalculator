#pragma once
#include <iostream>
#include <math.h>
#include "macierze.h"



using namespace std;
class Wyznacznik :public Macierze
{
    int a , b  ;
    float z , n ;
    float tab[3][3] ;
    float **A  , **B  , **ary;
    public:

    void podaj() ; // podanie wymiarow macierzy
    void zrob() ; // utworzenie dynamicznych tablic
    void zrob2() ; //podanie wartosci do macierzy
    void wyswietl() ; // wyswietlanie na ekranie macierzy
    int licz1(float **A ,float  **B , int a) ; //liczenie wyznacznika
    void pokazwynik() ; // pokazanie wyniku na ekranie
    ~Wyznacznik() ; // usuniecie tablic

};
