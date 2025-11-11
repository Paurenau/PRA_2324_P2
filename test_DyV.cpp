#include <iostream>
#include <vector>
#include "DyV.h"
using namespace std;

int main() {
    // Vector de enteros ordenado
    vector<int> v = {1, 3, 5, 7, 9, 11};

    cout << "Vector: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Buscar un elemento que está
    int pos = BusquedaBinaria(7, v, 0, v.size() - 1);
    if (pos != -1)
        cout << "Elemento 7 encontrado en la posición " << pos << endl;
    else
        cout << "Elemento 7 no encontrado" << endl;

    // Buscar un elemento que no está
    pos = BusquedaBinaria(4, v, 0, v.size() - 1);
    if (pos != -1)
        cout << "Elemento 4 encontrado en la posición " << pos << endl;
    else
        cout << "Elemento 4 no encontrado" << endl;

    // Probar QuickSort
    vector<int> desordenado = {8, 2, 5, 1, 9};
    cout << "\nAntes de QuickSort: ";
    for (int x : desordenado) cout << x << " ";
    cout << endl;

    QuickSort(desordenado, 0, desordenado.size() - 1);

    cout << "Después de QuickSort: ";
    for (int x : desordenado) cout << x << " ";
    cout << endl;

    return 0;
}

