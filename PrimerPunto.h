#pragma once  // Directiva para evitar inclusiones múltiples del archivo

#include <iostream>

class RawArray {
private:
    int* data;    // Puntero para almacenar los elementos del RawArray
    size_t size;  // Tamaño del RawArray

public:
    // Constructor por defecto
    RawArray() : data(nullptr), size(0) {}

    // Constructor que toma el tamaño y crea un RawArray con valores del 1 al tamaño
    RawArray(size_t size) : size(size) {
        data = new int[size];  // Asignar memoria para almacenar los elementos
        for (size_t i = 0; i < size; ++i) {
            data[i] = i + 1;  // Llenar el RawArray con valores del 1 al tamaño
        }
    }

    // Destructor para liberar la memoria asignada
    ~RawArray() {
        delete[] data;  // Liberar la memoria asignada para los elementos
    }

    // Función para acceder a los elementos utilizando índices positivos o negativos
    int& MyFunction(int index) {
        if (index >= 0) {
            return data[index];         // Si el índice es positivo, acceder directamente
        }
        else {
            return data[size + index];  // Si el índice es negativo, acceder desde el final
        }
    }
};


