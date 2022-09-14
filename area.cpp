#include <iostream>
using namespace std;

// Definimos una función
void area(){
  // Definimos pi
  float pi = 22./7.;

  // Pide que se escriba un número en la terminal
  cout << "Escribe el radio:";
  float rad=0.;
  cin >> rad;

  // Escribe el área del círculo
  cout << "Área del círculo ="<< pi*rad*rad << endl;
}

int main(){
  area();

  return 0;
}
