#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int arreglo[5];
	int *posarr;
	
	
	
	for (int i=0;i<5;i++){
		
		cout<<"Ingrese un numero";cin>>arreglo[i];
		
		
	}
	
	posarr=arreglo;
	int menor =*posarr;
	
	for (int i =0;i<5;i++){
		
		if (*posarr<menor){
		   menor =*posarr;
		   
		} posarr++;
		
	}
	
	cout<<"EL numero menor es :"<<menor<<endl;
	cout<<"La posicion es :"<<&menor<<endl;
	
	
	
	getch();
	return 0;
	
}
