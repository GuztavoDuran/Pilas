#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};
Nodo *pila = NULL;	//Inicializamos pila
//Prototipos de Función
void agregarPila(int);
void sacarPila(int &);
int main(){

	int dato;
	char rpt;

	do{ //Pedimos todos los elementos de la pila
		cout<<"Digite un numero: ";
		cin>>dato;
		agregarPila(dato);
		cout<<"\nDesea agregar otro numero a pila(s/n): ";
		cin>>rpt;
	}while((rpt == 's')||(rpt=='S'));
	cout<<"\nMostrando los elementos de la pila: ";
	while(pila != NULL){
		sacarPila(dato);
		if(pila != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
		}
	}
	getch();
	return 0;
}

void agregarPila(int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	cout<<"\tElemento "<<n<<" agregado a PILA correctamente";
}

void sacarPila(int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
