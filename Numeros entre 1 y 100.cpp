#include <iostream>
using namespace std;
int main(){
	int i=2;
	int suma=0;
	
	for(i=2;i<=100;i++){
		if(i%2==0){
		cout<<i<<endl;
		suma=suma+i;
		}
	}
	cout<<"El resultado de la suma de estos numeros es:"<<suma;
}
