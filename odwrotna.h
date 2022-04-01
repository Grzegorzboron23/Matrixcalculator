#pragma once
#include <iostream>
#include "macierze.h"



using namespace std;
class   Odwrotna :public Macierze
{
    float **A , **B , n ,d ;
    int a , b ,  *c  ;
    public:
    void podaj() ;
    void podaj2() ;
    void licz2() ;
    void licz3() ;
    ~Odwrotna() ;


};
