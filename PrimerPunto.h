#pragma once  // Directiva para evitar inclusiones múltiples del archivo

#include <iostream>

class RawArray {
private:
    int* data;    // Puntero para almacenar los elementos del RawArray
    size_t size;  // Tamaño del RawArray
    int dummy;    // Valor a devolver en caso de índice inválido

public:
    // Constructor por defecto
    RawArray() : data(nullptr), size(0), dummy(0) {}

    // Constructor que toma el tamaño y crea un RawArray con valores del 1 al tamaño
    RawArray(size_t size) : size(size), dummy(0) {
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
        if (index >= 0 && static_cast<size_t>(index) < size) {
            return data[index];         // Si el índice es positivo y válido, acceder directamente
        }
        else if (index < 0 && static_cast<size_t>(-index) <= size) {
            return data[size + index];  // Si el índice es negativo y válido, acceder desde el final
        }
        else {
            return dummy;  // Devolver el valor dummy en caso de índice inválido
        }
    }
};



