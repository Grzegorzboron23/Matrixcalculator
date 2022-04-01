#include <iostream>
#include "dodawaniemacierzy.h"
#include "macierze.h"
#include "odejmowaniemacierzy.h"
#include "transpozycja.h"
#include "wyznacznik.h"
#include "menu.h"
#include "mnozenie.h"

using namespace std;
void Mnozenie::podaj()
{
    cout << "Podaj wymiary pierwszej macierzy:" << endl ;
    cin >>a >> b;
    cout <<"Podaj wymiary drugiej macierzy:" << endl ;
    cin >>c>>d;
    if(b==c)
    {
        inicjuj() ;
    }
    else
    {
        cout <<"Liczba wierszy w 1 macierzy musi byc równa liczbie kolumn w drugiej" << endl ;
       system("pause") ;
        system("cls") ;
        podaj() ;
    }
}
void Mnozenie::inicjuj()
{
    A= new float *[b] ;
    for(int i=0 ; i<b ; i++)
    {
        A[i]= new float [a] ;
    }
    B= new float *[d] ;
    for(int i=0 ; i<d ; i++)
    {
        B[i]= new float [c] ;
    }
    C= new float *[b] ;
    for(int i=0 ; i<b ; i++)
    {
        C[i]= new float [c] ;
    }

    podajcyfry() ;


}
void Mnozenie::podajcyfry()
{
    cout <<"Podaj wartosci do pierwszej macierzy:" << endl ;
    for(int i=0 ; i<b ; i++)
    {
        for(int j=0 ; j<a ; j++)
        {
            cin>> n ;
            A[i][j]=n ;
        }
    }
    cout <<"Podaj wartosci do drugiej macierzy:" << endl ;
    for(int i=0 ; i<c ; i++)
    {
        for(int j=0 ; j<d ; j++)
        {
            cin>> n ;
            B[i][j]=n ;
        }
    }
    system("cls") ;
    wyswietl() ;
}
void Mnozenie::wyswietl()
{
    cout <<"Pierwsza macierz:" << endl ;
    for(int i=0 ; i<a ; i++)
    {
        for(int j=0 ; j<b ; j++)
        {
            cout<<A[i][j] << '\t' ;
        }
        cout << endl ;
    }
    cout <<"Druga macierz:" << endl ;
    for(int i=0 ; i<c ; i++)
    {
        for(int j=0 ; j<d ; j++)
        {
            cout<<B[i][j] << '\t' ;
        }
        cout << endl ;
    }
    licz() ;


}
void Mnozenie::licz()
{
 for (int i = 0; i < a; ++i)
 {
        for (int j = 0; j < d; ++j)
        {
            for (int k = 0; k < c; ++k)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
 }
   pokaz() ;

}
void Mnozenie::pokaz()
{
    cout <<"Macierz po przemno" <<char(190) << "eniu" << endl ;
    for (int j = 0; j < b; ++j)
        {
            for (int k = 0; k < c; ++k)
            {
               cout << C[j][k] <<'\t' ;
            }
            cout << endl ;
        }


}
Mnozenie::~Mnozenie()
{
    for(int i=0 ; i<c ; i++)
    {
        delete [] C[i] ;
    }
    for(int i=0 ; i<d ; i++)
    {
        delete [] B[i] ;
    }
    delete [] B ;
    for(int i=0 ; i<b ; i++)
    {
        delete [] A[i] ;
    }
    delete [] A ;
}
