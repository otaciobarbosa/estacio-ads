#include <iostream>
#include <cmath>
using namespace std;

int main(void){
 float peso, altura, imc;

 cout<<"Digite seu peso: ";
 cin>>peso;
 cout<<"Digite a altura: ";
 cin>>altura;

 imc = peso/(pow(altura,2));

 if(imc < 17)
 {
  cout<<"\n\nIMC="<<imc<<". Situacao: Muito abaixo do peso"<<endl;
 }

 if (imc >= 17 && imc <= 18.49)
 {
  cout<<"\n\nIMC="<<imc<<". Situacao: Abaixo do peso."<<endl;
 }

 if (imc >= 18.5 && imc <= 24.99)
 {
  cout<<"\n\nIMC="<<imc<<". Situacao: Peso normal"<<endl;
 }

 if (imc >= 25 && imc <= 29.99)
 {
  cout << "\n\nIMC=" << imc << ". Situacao: Acima do peso" << endl;
 }

 if (imc >= 30 && imc <= 34.99)
 {
  cout << "\n\nIMC=" << imc << ". Situacao: Obesidade I" << endl;
 }

 if (imc >= 35 && imc <= 39.99)
 {
  cout << "\n\nIMC=" << imc << ". Situacao: Obesidade II (severa) " << endl;
 }

  if (imc > 40)
 {
  cout << "\n\nIMC=" << imc << ". Situacao: Obesidade II (mórbida) " << endl;
 }

 return 0;
}