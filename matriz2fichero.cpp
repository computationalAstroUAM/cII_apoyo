#include <iostream> // para salida/entrada por terminal
#include <fstream>  // para salida/entrada por fichero
#include <string>   // librería específica para caracteres
using namespace std;

int main(){
  // Define una matriz 2x3
  
  
  // Definimos el fichero de salida y lo abrimos
  string infile = "matriz.txt";
  ofstream ff(infile);
  if (ff.is_open()){
    ff << "# Matriz" << endl;

    // Escribimos los elementos de las filas separados por un espacio
    // y cada fila en una nueva línea
    
    // Cerramos el fichero
    cout << "Fichero generado: " << infile << endl;
    ff.close();
  } else cout << "No se ha podido abrir el fichero " << infile << endl;

  return 0;
}
