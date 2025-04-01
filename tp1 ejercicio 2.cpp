#include <iostream>
using namespace std;
int main(){
	int nota1;
	int nota2;
	int nota3;
	int promedio;
	 cout<<"ingrese su primera nota"<<endl;
	 cin>>nota1;
	 cout<<"ingrese su segunda nota"<<endl;
	 cin>>nota2;
	 cout<<"ingrese su tercera nota"<<endl;
	 cin>>nota3;
	 promedio=(nota1+nota2+nota3)/3;
	 cout<<"su nota final es: "<<promedio<<endl;
	 if(promedio>=7) {
	 	cout<<"esta promocionado"<<endl;
}
	  else if
	  (promedio>=4 && promedio<7){
	 cout<<"su nota es regular"<<endl;
	 }
	 else{
	 	cout<<"esta reprobado"<<endl;
	 	
	 }
	 
	
return 0;	 
}

