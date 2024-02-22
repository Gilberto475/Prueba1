#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	
	int numeros[10],*posnumeros;
	
	for(int i=0;i<10;i++){
		
		cout<<"Ingrese un numero";cin >>numeros[i];
	}
	
	posnumeros=numeros;
	
	for(int i=0;i<10;i++){
		
		if (*posnumeros%2==0){
			cout<<"El numero : "<<*posnumeros<<"es par"<<endl;
			cout<<"La posicion es"<<posnumeros<<endl;
	        
		} posnumeros++
	}
	
	
	
	getch();
	return 0;
	
}
