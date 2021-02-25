#include <cstdlib>
#include "Objeto.h"
#include <string>
#include <iostream>
typedef Objeto* Lista;
using namespace std;

/*
 *
 */
int main() {
    int opcion=0;
    int numero=0;
    bool menu=true;
    Lista objeto1= new Objeto(1);
    while(menu){
      opcion=0;
      cout<<"1) Agregar Elemento"<<endl;
      cout<<"2) Eliminar Elemento"<<endl;
      cout<<"3) Imprimir Lista"<<endl;
      cout<<"4) Salir"<<endl;
      cin>>opcion;

      switch (opcion) {
        case 1:
          cout<<"Agregar numero: ";
          cin>>numero;
          objeto1 = objeto1->addElement(objeto1,numero);
          break;
        case 2:
        cout<<"Posicion a Eliminar: ";
        cin>>numero;
        objeto1->removeElement(numero,objeto1);
            break;
        case 3:
          objeto1->imprimirLista(objeto1);
          break;
        case 4:
            cout<<"Adios"<<endl;
            menu=false;
          break;
        default:
            cout<<"Opcion Invalida"<<endl;
            break;
      }
    }


    return 0;
}
