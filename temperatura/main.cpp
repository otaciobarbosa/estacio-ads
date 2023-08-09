#include <iostream>
using namespace std;

int main(void)
{
 int t;

 cout << "Qual a temperatura atual?" << endl;
 cin >> t;

 if (t > 20)
 {
  cout << "Esta quente." << endl;
  cout << "Um sorvete cairia bem." << endl;
 }else{
  cout << "Esta frio." << endl;
  cout << "Agasalhe-se." << endl;
 }

 cout << "Fim do programa" << endl;

 return 0;
}