#include "Objeto.h"
#include <iostream>

using namespace std;
Objeto::Objeto(int elemento) {
    this->id = elemento;
}

Objeto* Objeto::addElement(Objeto* objeto, int numero) {
      while(true){
          if(objeto==NULL){
            objeto = new Objeto(numero);
            break;
          }else{
            cout<<"Avanzando"<<endl;
            objeto = objeto->next;
          }
      }

    return objeto;
}

Objeto* Objeto::removeElement(int position, Objeto* objeto) {
    Objeto* auxiliar = objeto;
    Objeto* conexionAuxiliar;
    int auxiliarPosicion=0;
    while(auxiliar!=NULL){
        if(auxiliar!=NULL && auxiliarPosicion==position){
          if(position=0){
            conexionAuxiliar = auxiliar->next;
            delete(auxiliar);
            auxiliar= conexionAuxiliar;
          }else if(auxiliar->next==NULL){
            delete(auxiliar);
          }else{
            //Generamos la nueva conexion
              conexionAuxiliar->next = auxiliar->next;
              //Liberamos
              delete(auxiliar);
          }
            break;
        }else if(auxiliar==NULL && auxiliarPosicion==position){
            cout << "Pocision Inexistente" << '\n';
            break;
        }
        conexionAuxiliar = auxiliar;
        auxiliar = auxiliar->next;
        auxiliarPosicion++;
    }
    return objeto;
}

void Objeto::imprimirLista(Objeto* objeto){
  Objeto* auxiliar = objeto;
  if(objeto!=NULL){
    while(true){
        cout<<"Elemento: "<<auxiliar->id<<endl;
        auxiliar = auxiliar->next;
        if(auxiliar==NULL){
            break;
        }
    }
  }else{
    cout<<"Lista Vacia"<<endl;
  }
}
