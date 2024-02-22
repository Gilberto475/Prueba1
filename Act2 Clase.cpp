#include<iostream>
#include <cstdlib>
int main(){
int promedio = 0;
int filas = 6;
int columnas = 7;
int matriz[filas][columnas];

std::cout<<"Su matriz es: "<<std::endl;
for (int i=0;i < filas;i++){
int sumaTotal = 0;
int numeroMayor = 0;
int numeroMenor = 1000;
for (int j=0;j<columnas;j++){
int numeroAleatorio = rand()%101;
matriz[i][j] = numeroAleatorio;
//CONDICIONAL NUMERO MAYOR
int temporal =matriz[i][j];
if (temporal > numeroMayor){
numeroMayor = temporal;
}
//CONDICIONAL NUMERO MENOR
if (temporal < numeroMenor){
numeroMenor = temporal;
}
//PROMEDIO
sumaTotal += matriz[i][j];
promedio = sumaTotal / columnas;
std::cout<<matriz[i][j]<<" ";
}
std::cout<<"|Numero mayor-> "<<numeroMayor<<"|Numero menor-> "<<numeroMenor<<"|Promedio->"<<promedio;
std::cout<<std::endl;
}




return 0;
}
