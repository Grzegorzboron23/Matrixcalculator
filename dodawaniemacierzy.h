#pragma once
#include <iostream>
#include "macierze.h"



using namespace std;


class Dodawanie :public Macierze
{
    float r , n ;
    int a , b, c ;
    float *** A , ***B ;
    public:
        Dodawanie() ;
    void podaj() ; //podanie wartosc i ilosc macierzy utworzenie dynamicznych tablic
    void przypisz() ; // przypisanie ich wartosci
    void pokaz() ; // pokazanie macierzy dwoch
    void dodaj()  ; //dodawanie macierzy
    void wynik() ; //wyswietlenie wyniku
    ~Dodawanie() ; // usuniece wskaznikow

};
