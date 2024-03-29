#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo {
	int dato;
	Nodo *siguiente ;
	
};

void insertarLista(Nodo *&,int );
void mostrarLista (Nodo*);
void calcularMayoryMenor(Nodo *);
int main (){
   
   
   Nodo *lista=NULL;
   int dato;
   char respuesta;
   
   do {
   	cout<<"Digite un numero: ";
   	cin>>dato;
   	insertarLista(lista,dato);
   	cout<<"Desear agregar otro nodo(s/n):";
   	cin>>respuesta;
   	
   }while ((respuesta =='S')||(respuesta =='s'));
    cout <<"\nElementos de la lista\n";
    mostrarLista(lista);
    calcularMayoryMenor(lista);
    
   	
	
	
	return 0;
}

void insertarLista(Nodo *&lista,int n){
	
	Nodo *nuevo_nodo =new Nodo();
	Nodo *aux ;
	
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=NULL;
	
	if (lista==NULL){
		lista=nuevo_nodo;
		
	}
	else {
		aux=lista;
		while (aux->siguiente!=NULL){
			aux=aux->siguiente;
		}
		aux->siguiente=nuevo_nodo;
		
	}
	cout <<"\nElemento "<<n<<" agregado correctamente";
}

void mostrarLista (Nodo *lista){
	while (lista!=NULL){
		cout<<lista->dato<<" -> ";
		lista =lista->siguiente;
		
	}
}

void calcularMayorMenor(Nodo*lista){
	int mayor=0,menor=99999;
	
	
	while(lista!=NULL){
		if((lista->dato)>mayor){
			mayor=lista->dato;
		}
		
		if ((lista->dato)<menor){
			menor=lista->dato;
		}
		
		lista=lista->siguiente;
		
	}
	
	cout <<"\nEL mayor elemento es :"<<mayor<<endl;
	cout <<"\nEL menor elemento es : "<<menor<<endl;
}
