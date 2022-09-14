#include <iostream> // para salida/entrada por terminal
#include <fstream>  // para salida/entrada por fichero
using namespace std;

int main(){
  // Solo vamos a escribir en el fichero
  ofstream ff("mifichero.txt");

  if (ff.is_open()){
    // Escribimos sólo si está abierto correctamente
    ff << "Hola fichero \n" << endl;

    // Cerramos el fichero
    ff.close();
    
  } else cout << "No se ha podido abrir el fichero" << endl;

  return 0;
}
