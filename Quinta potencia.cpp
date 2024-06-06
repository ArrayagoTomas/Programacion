#include <iostream>
using namespace std;
int main(){
	int x;
	int resultado=1;
	int i;
	
	cout<<"Ingrese x:";
	cin>>x;
	
	for(i=1; i<=5; i++){
		resultado=resultado*x;
	}
	cout<<"El resultado de la potencia es:"<<resultado<<endl;
}
