#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;


void pedirDatos();
void ordenararreglo(int*,int);

int nElementos,*elemento;

int main(){
	pedirDatos();
	
	
	getch ();
	return 0;
	
}

void pedirDatos(){
	cout<<"Digite el numero de elementos del Arreglo";
	cin>>nElementos;
	
	elemento=new int[nElementos];
	
	
	for(int i=0;nElementos;i++){
		cout<<"Digite un numero ["<<i<<"]:";
		cin>>*(elemento+i);
	}
	 
	
}
