#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace std;

class Nodo
{
    public:
        int info;
        string nombre;
        Nodo *Llink; //enlace izquierdo
        Nodo *Rlink; //enlace derecho   
        Nodo(int,string);
        ~Nodo();
};

#endif 
