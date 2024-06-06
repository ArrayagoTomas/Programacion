#include <iostream>
using namespace std;
int main(){
	int i;
	int suma=0;
	int valor1;
	float promedio;
	int maximo=0;
	int minimo=0;
	
	for(i=1;i<=10;i++){
		cout<<"Ingrese un valor:";
		cin>>valor1;
		suma=suma+valor1;
		if (valor1<maximo){
			minimo=valor1;
		}
		else
		if(valor1>minimo){
			maximo=valor1;
		}
	}
	cout<<"La suma de los valores es:"<<suma<<endl;
	promedio=suma/10;
	cout<<"El promedio es:"<<promedio<<endl;
	cout<<"El valor minimo es:"<<minimo<<endl;
	cout<<"El valor maximo es:"<<maximo;
}
