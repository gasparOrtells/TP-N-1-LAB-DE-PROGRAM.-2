#include <iostream>
using namespace std;
int main(){
int num1;

cout<<"ingrese el NUMERO"<<endl;
cin>>num1;
if(num1<10)
{
cout<<"su numero es de una cifra"<<endl;
}

else if (num1<100){
cout<<"su numero es de dos cifras"<<endl;
	}
else if (num1<1000){
cout<<"su numero es de tres cifras"<<endl;	
}
else {
	cout<<"su numero tiene mas de tres cifras (ingrese uno de tres cifras)"<<endl;
}	
return 0;

}

