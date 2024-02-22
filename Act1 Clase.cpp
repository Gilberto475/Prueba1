#include <iostream>



int main(){

int usuario;
int sumatoria;
int numMayor;
int numMenor = 100000;
int numUsuario;
int veces;
int promedio;

while (true){
std::cout<<"Desea ingresar un numero:(1)SI / (2)NO: ";
std::cin>>usuario;
if (usuario == 1){
veces += 1;
std::cout<<"Ingrese numero: ";
std::cin>>numUsuario;
//SUMATORIA TOTAL DE LOS NUMEROS
sumatoria += numUsuario;
//NUMERO MAYOR
if (numUsuario > numMayor){
numMayor = numUsuario;
}
//NUMERO MENOR
if (numUsuario < numMenor){
numMenor =numUsuario;
}
}
else{
if(usuario == 2){
std::cout<<"la sumatoria de los numeros ingresados es de: "<<sumatoria<<std::endl;
std::cout<<"El numero mayor es: "<<numMayor<<std::endl;
std::cout<<"El numero menor es: "<<numMenor<<std::endl;
promedio = sumatoria / veces;
std::cout<<"El promedio  es: "<<promedio;
break;
}
else{
std::cout<<"Comando incorrecto. Intente nuevamente."<<std::endl;
std::cout<<"Desea ingresar un numero:(1)SI / (2)NO: ";
std::cin>>usuario;
}
}
}


return 0;
}


