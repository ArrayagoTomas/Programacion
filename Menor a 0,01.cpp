#include <iostream>
using namespace std;
int main(){
	float i=0;
	cout<<"Ingrese un numero:";
		cin>>i;
	
	while(i>=0.01){
		i=i/2;
	}
	cout<<i<<endl;
}
