#pragma once
#include <iostream>
#include "macierze.h"
using namespace std;
class Mnozenie :public Macierze
{
  float  n ;
  int a ,b , c, d ;
  float **A ,**B  ,**C;
  public:
  void podaj() ; //podanie wartosci macierzy
  void inicjuj() ; // utworzenie dynamicznych tablic
  void podajcyfry() ; // podanie wartosci do macierzy
  void wyswietl() ; //wyswietlenie podanych macierzy
  void licz() ; //liczenie
  void pokaz() ; // wyswietlenie wyniku
  ~Mnozenie ();


};
