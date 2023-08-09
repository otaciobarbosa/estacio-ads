#include <iostream>
using namespace std;

int main(void)
{
 int idade;

cout<<"Qual sua idade ?"<<endl;

cin>>idade;

if(idade >= 18 && idade <= 67){

 cout<<" Que bom voce pode doar sangue"<<endl;

}else{

 cout<<"Que pena voce nao pode doar sangue"<<endl;

}

 cout << "Fim do programa" << endl;

 return 0;
}