#include <iostream>

using namespace std;

void dimensione(int&);
void inserimento (int [], int);
void inverso (int[], int);

int main()
{
int vet[10];
int dim;
dimensione (dim);
inserimento (vet,dim);
inverso (vet,dim);
}

void dimensione (int&dim){
do{
    cout<<"Inserisci il numero di elementi: ";
    cin>> dim;

}while(dim>10 || dim<0);
}

void inserimento(int v[],int dim){
for(int i=0;i<dim;i++){
    cout<<"Inserisci il "<<i+1<<" elemento: ";
    cin>> v[i];
}
}

void inverso (int v[], int dim){
for (int i=dim-1; i>=0; i--){
    cout<<v[i]<<endl;
}
}
