#include <iostream>
using namespace std;
int main(){
	float preguntas,respuestas,resultado;
	cout<<"ingrese la cantidad de preguntas que se hacen"<<endl;
	cin>>preguntas;
	cout<<"ingrese la cantidad de respuestas correctas"<<endl;
	cin>>respuestas;
	resultado=(respuestas/preguntas)*100;
	if(resultado>=90) {
		cout<<"su resultado es el nivel maximo"<<endl;
}
if (resultado>=75 && resultado<90) {
	cout<<"su nivel es medio"<<endl;
	
}
	if (resultado>=50 && resultado<75){
		cout<<"su nivel es regular"<<endl;
		
	}
	else{
	cout<<"su resultado esta fuera de nivel"<<endl;
	}


return 0;
}
