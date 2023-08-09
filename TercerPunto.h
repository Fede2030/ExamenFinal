#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <unordered_set> // Incluimos la biblioteca para usar conjuntos desordenados

// Enumeraci�n que define las opciones de filtrado para los correos electr�nicos
enum class FilterOption {
    All,        // Todos los correos
    Read,       // Correos le�dos
    Unread,     // Correos no le�dos
    Starred,    // Correos marcados como destacados
    Unstarred   // Correos no marcados como destacados
};

// Estructura que representa un correo electr�nico
struct Email {
    std::string subject;    // Asunto del correo
    std::string body;       // Cuerpo del correo
    bool isRead;            // Indica si el correo ha sido le�do
    bool isStarred;         // Indica si el correo ha sido marcado como destacado
};

// Clase que representa una bandeja de entrada de correos electr�nicos
class Inbox {
public:
    // Agrega un nuevo correo a la bandeja de entrada
    void addEmail(const Email& email);

    // Elimina un correo de la bandeja de entrada dado su �ndice
    void deleteEmail(size_t index);

    // Filtra y devuelve una lista de correos electr�nicos seg�n la opci�n de filtrado seleccionada
    std::vector<Email> filterEmails(FilterOption filterOption);

private:
    std::vector<Email> emails;  // Almacena los correos electr�nicos en la bandeja de entrada
    std::unordered_set<size_t> starredIndices; // Conjunto para almacenar �ndices de correos marcados como destacados
};



/*
1. �Qu� complejidad tiene a�adir un elemento al final de un vector(array de tama�o din�mico) en el caso promedio ?
Agregar un elemento al final de un vector(array de tama�o din�mico) en el caso promedio tiene una complejidad de tiempo amortizado constante O(1).
Esto significa que, en general, la operaci�n de agregar un elemento al final del vector es muy eficiente y su tiempo de ejecuci�n no depende del tama�o actual del vector.Sin embargo, 
hay momentos en que el vector puede necesitar redimensionar su capacidad interna, lo que puede llevar a una complejidad de O(n), donde n es el tama�o actual del vector.

2. �Cu�l es el caso no promedio y cada cu�nto suceder�a ?
El caso no promedio en cuanto a la complejidad de agregar un elemento al final de un vector es cuando el vector necesita redimensionar su capacidad interna.
Esto sucede cuando el n�mero de elementos agregados al vector alcanza su capacidad actual.En ese momento, el vector crea un nuevo bloque de memoria, 
copia los elementos existentes y luego agrega el nuevo elemento.Esta operaci�n de redimensionamiento tiene una complejidad de O(n), donde n es el tama�o actual del vector.
En la mayor�a de las implementaciones, el vector suele duplicar su capacidad interna cada vez que se queda sin espacio, lo que significa que el caso no promedio puede ocurrir 
cada vez que se alcanza una potencia de 2 en el n�mero de elementos.
*/





