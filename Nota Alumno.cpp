#include <iostream>
using namespace std;
int main(){
	int valor1;
	int f;
	
	for(f=1;f<=1;f++){
		cout<<"Ingrese la nota del alumno:";
		cin>>valor1;
		
		if(valor1>=7){
			cout<<"El alumno tiene TEA";
		}
		else
		if(valor1<7){
			cout<<"El alumno tiene TEP";
		}
	}
}
