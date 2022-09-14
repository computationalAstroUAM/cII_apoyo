#include <iostream>
using namespace std;

void elementos(const double vect[], const int len){
  // Escribe los elementos del vector
  for (int i=0; i<len; ++i){
    cout << "Elemento " << i << " = " << vect[i] << endl;
  }
}


int main(){
  // Declara un vector
  int len = 4;
  double vect[len] = {24.3, -56.2, 304, 0.1};

  // Utiliza el vector como argumento para la función
  elementos(vect, len);

  return 0;
}
