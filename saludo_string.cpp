#include <iostream>
#include <string>
using namespace std;

int main(){
  // Declaramos un saludo
  string saludo ("Buenas tardes ");

  // Pide el nombre
  cout << "Escribe tu nombre y apellidos: ";
  string nombre; // ¿Qué pasa si declaras char?
  getline(cin,nombre); //¿Qué pasa si utilizas cin >>?
  
  cout << saludo << nombre << endl;
  cout << "Tu nombre completo tiene "
       << nombre.length()
       << " caracteres, incluyendo espacios."<<endl;

  return 0;
}

