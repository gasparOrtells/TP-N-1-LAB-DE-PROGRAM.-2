#include <iostream>
using namespace std;
int main(){
	float canentrada;
	float preciototal;
	float precioentrada;
	float descuento;
	
	precioentrada=100;	
	cout<<"ingrese la cantidad de entradas: ";
	cin>>canentrada;
	preciototal=(canentrada*precioentrada);
	
	if(canentrada==1) {
		descuento=0;
}
else if(canentrada==2){
	descuento=0.10;
	}
	else if(canentrada==3){
		descuento=0.15;
	}
	else if(canentrada==4){
		descuento=0.20;
	}
	preciototal=canentrada*precioentrada;
	float preciototal2=preciototal - (preciototal*descuento);
	cout<<"el valor a pagar es de: "<<preciototal2;

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
