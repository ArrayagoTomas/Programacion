#include <iostream>
using namespace std;
int main(){
	int i=1;
	int suma=0;
	int suma2=0;
	
	for (i=1;i<=300;i++){
		cout<<i<< " ";
		if(i%2==0){
		suma=suma+i;
		suma2=suma2+1;
		}
	}
	cout<<"La suma de los impares es:"<<suma<<endl;
	cout<<"La cantidad de impares que hay es:"<<suma2<<endl;
}
