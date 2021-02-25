#ifndef OBJETO_H
#define OBJETO_H
#include <string>
class Objeto {
public:
    Objeto(int);
    int id;
    Objeto* addElement(Objeto* objeto, int numero);
    Objeto* removeElement(int position, Objeto* objeto);
    void imprimirLista(Objeto* objeto);
    Objeto * next = NULL;
private:
};

#endif /* OBJETO_H */
