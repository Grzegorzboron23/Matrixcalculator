#include <iostream>
#include <math.h>
#include "dodawaniemacierzy.h"
#include "macierze.h"
#include "odejmowaniemacierzy.h"
#include "transpozycja.h"
#include "wyznacznik.h"
#include "menu.h"
#include "odwrotna.h"

using namespace std;
void Odwrotna::podaj()
{
    cout <<"Podaj rozmiary swojej macierzy: " << endl ;
    cin >>a >> b;
    if(a==b)
    {
        A= new float *[b] ;
        for(int i=0 ; i<b ; i++)
        {
            A[i]= new float [a] ;
        }
        B= new float *[b] ;
        for(int i=0 ; i<b ; i++)
        {
            B[i]= new float [a] ;
        }
        podaj2() ;
    }
    else
    {
        cout <<"Macierz musi by" << char(390) << " kwadratowa" << endl ;
    }

}
void Odwrotna::podaj2()
{
    cout <<"Podaj warto"<<char(152)<< char(390) << " do swojej macierzy:" << endl ;
    for(int i=0 ; i<b ; i++)
    {
        for(int j=0 ; j<a ; j++)
        {
            cin>> n ;
            A[i][j]=n ;
        }
    }
    system("cls") ;
    cout <<"Twoja macierz" << endl ;
    for(int i=0 ; i<b ; i++)
    {
        for(int j=0 ; j<a ; j++)
        {

            cout << A[i][j] << '\t';
        }
        cout << endl ;
    }
    cout << endl << endl ;


    licz2() ;

}

void Odwrotna::licz2()
{

    Wyznacznik w ;
    d=w.licz1(A,B, a );   //liczenie wyzncznika

    if(d==0)
    {
        cout << "Wyznacznik macierzy jest równy zero nie da si"<< char(169)  << " wyznaczy" << char(390)<< " macierzy odwrotnej" << endl ;
        system("pause") ;
        system("cls") ;
        podaj() ;
    }
   d=1/d ;
    licz3() ; // macierz dopelnien algebraicznych


}
void:: Odwrotna::licz3()
{


    ;
}


Odwrotna::~Odwrotna()
{
    for(int i=0 ; i<b ; i++)
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



