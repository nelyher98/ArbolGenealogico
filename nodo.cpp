#include<iostream>
#include "nodo.h"

using namespace std;

Nodo::Nodo(int info,string nom)
{
    this->info = info;
    this->nombre = nom;
    Llink = NULL;
    Rlink = NULL;    
}

Nodo::~Nodo()
{ }
