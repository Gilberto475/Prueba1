#include <iostream>
#include <conio.h>

using namespace std;
int main (){
	int numeros[]={1,2,3,4,5};
	int*dirnumeros;
	
	dirnumeros=numeros;
	
	for(int i=0;i<5;i++){
		cout <<"Posicion de memoria :"<<numeros[i]<<"es :"<<dirnumeros++<<endl;
		
		
	}
	
	
	getch();
	return 0;
	
	 
}
