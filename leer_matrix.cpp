#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include <string.h>   // Línea 1/3 para incluir matrix.h
#include "matrix.h"   // Línea 2/3 para incluir matrix.h
using namespace math; // Línea 3/3 para incluir matrix.h

int main(){
  // Nombre del fichero que contiene la matriz
  string infile = "matriz.dat";

  // Abrimos el fichero
  ifstream ff(infile);
  if (ff.is_open()){
    // Leemos el número de filas y columnas de la matriz
    // en la primera línea del directorio
    int nrows=0, ncols=0;
    ff >> nrows >> ncols;

    // Declaramos y leemos la matriz
    matrix<double> A(nrows,ncols);
    ff >> A;

    // Cerramos el fichero y despejamos la memoria
    ff.close(); ff.clear()
  }else cout <<"No se ha podido abrir el fichero " << infile << endl;

  return 0;
}
