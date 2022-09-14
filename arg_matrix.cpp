#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include <string.h>   // Línea 1/3 para incluir matrix.h
#include "matrix.h"   // Línea 2/3 para incluir matrix.h
using namespace math; // Línea 3/3 para incluir matrix.h

void elementosM(matrix<double>& M){ 
  int nrows=0,ncols=0;
  nrows = M.RowNo(); // Función de matrix.h para contar filas
  ncols = M.ColNo(); // Función de matrix.h para contar columnas

  double ii = 0.;
  for (int i=0; i<nrows; ++i){
    for (int j=0; j<ncols; ++j){
      M(i,j) = ii;
      ++ii;
    }
  }  
}

int main(){
  // Declaramos una matriz cuadrada
  int n=2;
  matrix<double> A(n,n);
  cout << "Matriz: \n" << A << endl;
  // Llamamos a la función
  elementosM(A);
  cout << "Matriz: \n" << A << endl;
  
  return 0;
}

