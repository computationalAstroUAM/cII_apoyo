#include <iostream> // para salida/entrada por terminal
#include <fstream>  // para salida/entrada por fichero
#include <string>   // librería específica para caracteres
using namespace std;

int main(){
  // Definimos el nombre del fichero a leer
  string infile = "enteros.txt";
  ifstream ffin(infile);
  if (ffin.is_open()){
    // Leemos la línea de encabezado
    string header;
    getline(ffin,header);
    cout << "Encabezado: " << header << endl;

    // Leemos los enteros
    int num=0, ii=1;
    while (ffin >> num){
      ++ii;
      cout << "Número en línea " << ii << " = " << num << endl;
    }

    ffin.close();
  } else cout << "No se ha podido abrir el fichero " << infile << endl;

  return 0;
}
