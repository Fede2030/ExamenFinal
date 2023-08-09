#pragma once  // Directiva para evitar inclusiones m�ltiples del archivo

#include <iostream>

class RawArray {
private:
    int* data;    // Puntero para almacenar los elementos del RawArray
    size_t size;  // Tama�o del RawArray
    int dummy;    // Valor a devolver en caso de �ndice inv�lido

public:
    // Constructor por defecto
    RawArray() : data(nullptr), size(0), dummy(0) {}

    // Constructor que toma el tama�o y crea un RawArray con valores del 1 al tama�o
    RawArray(size_t size) : size(size), dummy(0) {
        data = new int[size];  // Asignar memoria para almacenar los elementos
        for (size_t i = 0; i < size; ++i) {
            data[i] = i + 1;  // Llenar el RawArray con valores del 1 al tama�o
        }
    }

    // Destructor para liberar la memoria asignada
    ~RawArray() {
        delete[] data;  // Liberar la memoria asignada para los elementos
    }

    // Funci�n para acceder a los elementos utilizando �ndices positivos o negativos
    int& MyFunction(int index) {
        if (index >= 0 && static_cast<size_t>(index) < size) {
            return data[index];         // Si el �ndice es positivo y v�lido, acceder directamente
        }
        else if (index < 0 && static_cast<size_t>(-index) <= size) {
            return data[size + index];  // Si el �ndice es negativo y v�lido, acceder desde el final
        }
        else {
            return dummy;  // Devolver el valor dummy en caso de �ndice inv�lido
        }
    }
};



