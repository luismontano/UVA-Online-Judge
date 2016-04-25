#include<iostream>
using namespace std;

struct Nodo
{
    int valor;
    struct Nodo *siguiente = NULL;
};

void insertarFinal(Nodo * inicio, int valor);

int main()
{
    Nodo * inicio = NULL;
    insertarFinal(inicio, 1);
    return 0;
}

void insertarFinal(Nodo * inicio, int valor){
    Nodo * aux = inicio;
    while(true){
        if(aux == NULL){
            Nodo a;
            a.valor = valor;
            aux->siguiente = &a;
            break;
        }
        aux = aux->siguiente;
    }
}
