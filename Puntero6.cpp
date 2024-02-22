#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;


void pedirNotas();
void mostrarNotas();
int numCalif,*calif;

int main(){
	
	pedirNotas(); 
	mostrarNotas();
	
	
	delete [] calif;
	
	
	getch();
	return 0;
}

void pedirNotas (){
	
	cout<<"Digite el numero de calificaciones :";
	cin>>numCalif;
	
	
	
	calif =new int[numCalif];
	
	
	for (int i=0;i<numCalif;i++){
		cout<<"Ingrese una nota:";
		cin>>calif[i];
		
	}
	
}

void mostrarnotas (){
	cout<<"\n\nMostrando notas del Usuario \n";
	
	for(int i=0;i<numCalif;i++){
		
		cout<<calif[i]<<endl;
	}
	
	
	
	
}
