#pragma once
#include <iostream>
#include "macierze.h"





using namespace std;
class Menu
{
int a , b ;

    public:

    void pokazmenu() ; // wyswietlenie menu
    friend class Macierze  ;
     friend class Odejmowanie  ;

};
