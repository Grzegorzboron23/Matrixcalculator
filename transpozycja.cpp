#include <iostream>
#include "dodawaniemacierzy.h"
#include "macierze.h"
#include "odejmowaniemacierzy.h"
#include "transpozycja.h"
#include "wyznacznik.h"
#include "menu.h"

using namespace std;
Transpozycja::Transpozycja()
{
    ;
}
void Transpozycja::podaj()
{
    cout <<"Podaj wymiary macierzy do ztransponowanie:" << endl ;
    cin >>a  >> b ;
    if(a>=1 && b>=1 )
    {
        zrob1() ;

    }
    else
    {
        cout << "Wymiary macierzy transponowanej nie moga byc mniejsze od zera i musza byc liczbami calkowitymi" << endl ;
    }

}
void Transpozycja::zrob1()
{
    A= new float*[a];
    for (int i = 0; i < a; i++)
    {
        A[i] = new float[i];
    }

    B= new float*[b];
    for (int i = 0; i < b; i++)
    {
        B[i] = new float[i];
    }
przypisz() ;
}
void Transpozycja::przypisz()
{
    cout <<"Podaj warto" << char(152) << "ci swojej macierzy: " << endl ;
    for(int i=0 ; i<a ; i++)
    {
        for(int j=0 ; j<b ; j++)
        {
            cin >> n;
            A[i][j]=n ;
        }
    }
    system("cls") ;
    dodaj() ;

}
void Transpozycja::dodaj()
{
    for(int i=0 ; i<a ; i++)
    {
        for(int j=0 ; j<b ; j++)
        {

            B[j][i]=A[i][j] ;
        }
    }
  wynik() ;
}
void Transpozycja::wynik()
{
    cout << "Twoja macierz:" << endl ;
    for(int i=0 ; i<a ; i++)
    {
        for(int j=0 ; j<b ; j++)
        {

            cout <<A[i][j] << '\t' ;
        }
        cout << endl ;
    }
    cout << endl << endl ;



    cout <<"Macierz po stransponowaniu:" << endl ;
    for(int i=0 ; i<b ; i++)
    {
        for(int j=0 ; j<a ; j++)
        {

         cout << B[i][j] << '\t';
        }
        cout << endl ;
    }
}
Transpozycja::~Transpozycja()
{
    for (int i= 0; i < a; i++)
    {
        delete[] A[i];
    }
    delete[] A;

    for (int i= 0; i < b; i++)
    {
        delete[] B[i];
    }
    delete[] B;
}
