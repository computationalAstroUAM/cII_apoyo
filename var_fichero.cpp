#include <iostream> // para salida/entrada por terminal
#include <fstream>  // para salida/entrada por fichero
#include <string>   // librería específica para caracteres
using namespace std;

int main(){
  // Pedimos 2 números enteros
  cout << "Escribe 2 enteros separados por un espacio: ";
  int num1=0, num2=0;
  cin >> num1 >> num2;
  
  // Definimos el fichero de salida y lo abrimos
  string infile = "enteros.txt";
  ofstream ff(infile);
  if (ff.is_open()){
    /* Normalmente se añade un encabezamiento
     indicando que contiene cada columna del fichero */
    ff << "# Enteros" << endl;

    // Escribimos los números en el fichero
    ff << num1;
    ff << num2;
    
    // Cerramos el fichero
    cout << "Fichero generado: " << infile << endl;
    ff.close();
    
  } else cout << "No se ha podido abrir el fichero " << infile << endl;

  return 0;
}
