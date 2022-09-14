#include <iostream>
using namespace std;

double doble(double num){
  return num*2.;
}

double mitad(double num){
  return num/2.;
}

void resultado(const double num, double (*f)(double)){
  cout << "Resultado = " << f(num) << endl;
}

int main(){
  // Pide un número
  cout << "Real:";
  double num = 0.;
  cin >> num;

  // Pide la operación
  cout << "Doble (1) o Mitad (0):";
  int op;
  cin >> op;

  // Realiza el cálculo pedido
  if (op == 0){resultado(num, &mitad);}
  else if (op == 1){resultado(num, &doble);}
  else{
    cout << "Introduce 1 o 0";
    return 1;
  }
  return 0;
}
