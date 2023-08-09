#include <iostream>
using namespace std;

int main(void)
{
 int idade;

 cout<<"Qual a sua idade?"<<endl;
 cin>>idade;

 if(idade>18){
  cout << "Voce ja pode dirigir." <<endl;
  cout << "Voce e maior de idade." << endl;
  cout << "Voce pode abrir uma empresa." << endl;
 }
 cout<<"Fim do programa"<<endl;

 return 0;
}