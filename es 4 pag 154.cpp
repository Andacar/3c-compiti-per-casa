#include <iostream>

using namespace std;

void dimensione(int&);
void inserimento (int [], int);
void prodottopari (int [], int);
void sommadispari (int [], int);

int main()
{
	int vet[10], dim;
	dimensione (dim);
    inserimento (vet, dim);
    prodottopari (vet, dim);
    sommadispari(vet, dim);
}

void dimensione (int&dim)
{
	do{
    cout<<"Inserisci il numero di elementi: ";
    cin>> dim;

}while(dim>10 || dim<0);
}

void inserimento (int v[], int dim)
{
	for(int i=0;i<dim;i++){
    cout<<"Inserisci il "<<i+1<<" elemento: ";
    cin>> v[i];
}
}


void prodottopari (int v[], int dim)
{
	int p=1;
	for (int i=0;i<dim;i++)
	{
		if(v[i]%2==0){
			p=p*v[i];
		}

	}
	cout<<"Il prodotto dei numeri pari e': "<<p;
	cout<<endl;

}

void sommadispari(int v[], int dim)
{
	int z=0;
	for (int i=0;i<dim;i++)
	{
		if(v[i]%2!=0){
			z=z+v[i];
		}
	}

	cout<<"La somma dei numeri dispari e': "<<z;

}

