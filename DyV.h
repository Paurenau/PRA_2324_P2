#include <vector>

using namespace std;

template <typename T>
int BusquedaBinaria(T X, vector<T>& V, int ini, int fin){
    if (ini > fin){
        return -1;
    }
    int medio = (ini + fin)/2;

    if(V[medio] == X){
        return medio;
    }

    else if(V[medio] > X){
        return BusquedaBinaria(X, V, ini, medio-1);
    }

    else return BusquedaBinaria(X, V, medio+1, fin);
}

// Función Partition: coloca el pivote en su sitio y devuelve su índice
template <typename T>
int Partition(vector<T>& V, int ini, int fin) {
    T x = V[fin];       // pivote = último elemento
    int i = ini;        // i apunta al primer elemento mayor que x

    for (int j = ini; j < fin; j++) {
        if (V[j] <= x) {
          
            T temp = V[i];
            V[i] = V[j];
            V[j] = temp;
            i++;
        }
    }

    // colocar pivote en su lugar
    T temp = V[i];
    V[i] = V[fin];
    V[fin] = temp;

    return i; // índice del pivote
}

// Función QuickSort recursiva
template <typename T>
void QuickSort(vector<T>& V, int ini, int fin) {
    if (ini < fin) {
        int pivot = Partition(V, ini, fin);
        QuickSort(V, ini, pivot - 1); // recursión izquierda
        QuickSort(V, pivot + 1, fin); // recursión derecha
    }
}
