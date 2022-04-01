#include<iostream>
#include<math.h>
#include<cmath>
#include <bits/stdc++.h>
#include "dodawaniemacierzy.h"
#include "macierze.h"
#include "odejmowaniemacierzy.h"
#include "transpozycja.h"
#include "wyznacznik.h"
#include "menu.h"

using namespace std;
void Wyznacznik::podaj()
{
    cout <<"Podaj wymiary macierzy do obliczenia jej wyznacznika:" << endl ;
    cin >> a >>b ;
    if(a==b && a>=1 && b>=1 )
    {
        zrob() ;
    }
    else
    {
        cout <<"Macierz musi miec wymiary równe i musz" << char(165)<<" by" <<char(390) << " wieksze od zera" << endl ;
        exit(0) ;
    }
}
void Wyznacznik::zrob()
{
                A = new float* [b];
            for (int i = 0; i < b; ++i)
            {
                A[i] = new float[a];
            }
                    B = new float* [b];
            for (int i = 0; i < b; ++i)
            {
                B[i] = new float[a];
            }


    zrob2() ;

}
void Wyznacznik::zrob2()
{
    cout <<"Podaj wartosc do swojej macierzy:" << endl ;
    for(int i=0 ; i<a ; i++)
    {
        for(int j=0 ; j<b ; j++)
        {
            cin>> n ;
            A[i][j]=n ;

        }
    }
    system("cls") ;
wyswietl() ;

}
void Wyznacznik::wyswietl()
{
   cout <<"Twoja macierz" << endl ;
   for(int i=0 ; i<a ; i++)
    {
        for(int j=0 ; j<b ; j++)
        {

        cout <<A[i][j] << '\t' ;
        }
        cout << endl ;
    }
    cout << endl ;
    z=licz1(A ,B ,a) ;
pokazwynik() ;



}
 int Wyznacznik::licz1(float **A , float **B , int a)
{
float d = 0;

    if (a == 2)
    {
        return ((A[0][0] * A[1][1]) - (A[1][0] * A[0][1]));
    }
    else
    {
        for (int x = 0; x < a; x++)
        {
            int subi = 0;
            for (int i = 1; i < a; i++)
            {
                int subj = 0;
                for (int j = 0; j < a; j++)
                {
                    if (j == x)
                        continue;
                    B[subi][subj] = A[i][j];
                    subj++;
                }
                subi++;
            }
            d = d + (pow(-1, x) * A[0][x] * licz1(B, A , a - 1));
        }
    }
    return d ;

}



void Wyznacznik::pokazwynik()
{

    cout <<"Wyznacznik twojej macierzy jest rowny:" << z << endl ;


}
Wyznacznik::~Wyznacznik()
{
   for (int i= 0; i < b; i++)
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
