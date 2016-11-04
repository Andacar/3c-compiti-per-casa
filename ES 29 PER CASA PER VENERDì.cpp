#include <iostream>

using namespace std;

int main()
{
int N;
int x;
int i=0;
int max=0;
int M=i;
float Somma=0;
float Media=0;
cout<<"Inserisci la quantità di numeri che immetterai ";
cin>>N;
cout<<endl;
    while (i<N)
    {
    cout<<"inserisci un numero: ";
   cin>>x;
    if(x>max)
    {
    max=x;
    }
    else
        if(x<M)
    {
    x=M;
    }
    else{
        cout<<"";
    }
    Somma=Somma+x;
 Media = (Somma)/(N);
    i=i+1;
 }

 cout<<"Il numero massimo è ";
 cout<<max;
 cout<<endl;
 cout<<"Il numero minimo è ";
 cout<<M;
 cout<<endl;
 cout<<"la media tra i numeri è ";
 cout<<Media;
 cout<<endl;
}
