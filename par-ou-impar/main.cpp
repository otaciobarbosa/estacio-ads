#include <iostream>
using namespace std;

int main(void){

 int n;

 cout<<"Digite um numero. Vou te dizer se ele e par ou impar"<<endl;
 cin>>n;

 (n % 2 == 0) ? cout<<"Numero PAR":cout<<"Numero IMPAR"<<endl;

 return 0;


}