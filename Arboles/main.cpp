#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* der;
    Nodo* izq;
};

Nodo* Arbol = NULL;

void insertar(Nodo*& Arbol, int n) {
    if (Arbol == NULL) {
        Nodo* nuevo = new Nodo();
        nuevo->dato = n;
        Arbol = nuevo;
        Arbol->der = NULL;
        Arbol->izq = NULL;
    } else if (n == Arbol->dato) {
        return;
    } else if (n < Arbol->dato) {
        insertar(Arbol->izq, n);
    } else {
        insertar(Arbol->der, n);
    }
}



int main() {
    for (int i = 0; i < 6; i++) {
        int dato;
        cin >> dato;
        insertar(Arbol, dato);
    }
}

