#include <iostream>
using namespace std;
 int main(){
 int saldoinicial= 100,opc;
 float extra,saldo =0,retiro;
 cout<<"bienvenido a su cajero autamatico"<<endl;
 cout<<"1. ingrese dinero "<<endl;
 cout<<"2. retire dinero "<<endl;
 cout<<"3. salir del cajero"<<endl;
 
 switch (opc){
 
 
 case 1:
 	cout<<"digite la cantidad de dinero que va a ingresar :";
 	cin>>extra;
 	saldo = saldoinicial + extra ;
 	cout<<"su dinero en cuenta es de :"<<saldo;break;
 case 2:
 	cout<<"digite la cantidad de dinero que va a retirar :";
 	cin>>retiro;
 	if(retiro >  saldoinicial) {
 		cout<<"no puede retirar, falta de dinero";
}
else{
	saldo = saldoinicial - retiro;
	cout<<"su dinero en cuenta es de :"<<saldo;break;
	}
 	
	case 3:break;
		
 
 	
 }
 	
 	
 	
 	
 	
 	return 0;
 }
