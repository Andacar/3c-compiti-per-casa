#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int numero;
int centinaia=0;
int decine=0;
int unita=0;
int main()
{
    cout << "inserisci un numero intero (inferiore a mille) ";
    cin >> numero;

    while (numero>100) {
      numero=numero-100;
      centinaia++;
    }
    while (numero>10) {
        numero=numero-10;
        decine++;
    }
    while (numero>0) {
        numero=numero-1;
        unita++;
    }
cout << "centinaia " <<centinaia << endl;
cout << "decine " <<decine << endl;
cout << "unita " << unita<< endl;


}
