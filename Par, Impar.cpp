#include <iostream>
using namespace std;
int main() {
  int num, count1=0, count2=0;
  int i=1;
  cout<< "Ingresa numeros enteros (presiona 0 para parar):";
  cin>>num;
  
  for (i=1;i<=num;i++) {
    if (num%2==0) {
    count2++;
  }
  else
  count1++;
  
  cin>>num;
  }
  cout<<"numeros pares:"<<count2<<endl;
  cout<<"numeros impares:" <<count1<<endl;
  return 0;
}
