#include <iostream>
using namespace std;
 int main(){
 	int n1;
 	int n2;
 	int r;
 	int aux;
 	int mcd;
 	
 	do{
 		cout<<"ingrese su primer numero"<<endl;
 		cin>>n1;
 		cout<<"ingrese su segundo numero"<<endl;
 		cin>>n2;
	 }	
	 while(n1<0 && n2<0);
	 mcd=n1;
	 aux=n2;
	 do{
	 	r=mcd%aux;
	 	mcd=aux;
	 	aux=r;
		 }while(r!=0);
	
	return 0;
 }
