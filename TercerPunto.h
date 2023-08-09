#pragma once

#include <iostream>
#include <vector>
#include <string>


// Enumeración que define las opciones de filtrado para los correos electrónicos
enum class FilterOption {
    All,        // Todos los correos
    Read,       // Correos leídos
    Unread,     // Correos no leídos
    Starred,    // Correos marcados como destacados
    Unstarred   // Correos no marcados como destacados
};

// Estructura que representa un correo electrónico
struct Email {
    std::string subject;    // Asunto del correo
    std::string body;       // Cuerpo del correo
    bool isRead;            // Indica si el correo ha sido leído
    bool isStarred;         // Indica si el correo ha sido marcado como destacado
};

// Clase que representa una bandeja de entrada de correos electrónicos
class Inbox {
public:
    // Agrega un nuevo correo a la bandeja de entrada
    void addEmail(const Email& email);

    // Elimina un correo de la bandeja de entrada dado su índice
    void deleteEmail(size_t index);

    // Filtra y devuelve una lista de correos electrónicos según la opción de filtrado seleccionada
    std::vector<Email> filterEmails(FilterOption filterOption);

private:
    std::vector<Email> emails;  // Almacena los correos electrónicos en la bandeja de entrada
    
};



/*
1. ¿Qué complejidad tiene añadir un elemento al final de un vector(array de tamaño dinámico) en el caso promedio ?

Agregar un elemento al final de un vector(array de tamaño dinámico) en el caso promedio tiene una complejidad de tiempo amortizado constante O(1).
Esto significa que, en general, la operación de agregar un elemento al final del vector es muy eficiente y su tiempo de ejecución no depende del tamaño actual del vector.Sin embargo, 
hay momentos en que el vector puede necesitar redimensionar su capacidad interna, lo que puede llevar a una complejidad de O(n), donde n es el tamaño actual del vector.

2. ¿Cuál es el caso no promedio y cada cuánto sucedería ?

El caso no promedio en cuanto a la complejidad de agregar un elemento al final de un vector es cuando el vector necesita redimensionar su capacidad interna.
Esto sucede cuando el número de elementos agregados al vector alcanza su capacidad actual.En ese momento, el vector crea un nuevo bloque de memoria, 
copia los elementos existentes y luego agrega el nuevo elemento.Esta operación de redimensionamiento tiene una complejidad de O(n), donde n es el tamaño actual del vector.
En la mayoría de las implementaciones, el vector suele duplicar su capacidad interna cada vez que se queda sin espacio, lo que significa que el caso no promedio puede ocurrir 
cada vez que se alcanza una potencia de 2 en el número de elementos.
*/

/*
La elección de la estructura de datos en el punto 3, que consiste en utilizar un std::vector<Email> para almacenar los correos electrónicos en la clase Inbox, se basa en varias consideraciones :

Dinamismo del tamaño : Un vector es una estructura de datos de tamaño dinámico, lo que significa que puede crecer y encogerse automáticamente según se agreguen o eliminen elementos.Esto es esencial en un sistema de correo electrónico donde la cantidad de correos electrónicos puede variar significativamente.


Eficiencia en la inserción y eliminación : Los vectores ofrecen una inserción eficiente en su extremo posterior, lo cual es común en el flujo de trabajo de agregar correos electrónicos a la bandeja de entrada.Además, aunque la eliminación no es tan eficiente como la inserción debido al desplazamiento de elementos, sigue siendo aceptable para la mayoría de los casos de uso.


Acceso aleatorio : Los vectores permiten un acceso eficiente a elementos individuales mediante índices.Dado que los correos electrónicos pueden ser accedidos por índice y necesitamos filtrarlos según diferentes condiciones, esta característica es importante.


Sencillez : Los vectores son una estructura de datos simple y ampliamente utilizada en C++.Son fáciles de entender, implementar y utilizar en comparación con estructuras más complejas como listas enlazadas.


Buen rendimiento : En la mayoría de los casos, el rendimiento de los vectores es excelente debido a su uso de memoria contigua y a su eficiente gestión de caché.

Requisitos del problema : En el contexto de un sistema de correo electrónico, los correos electrónicos no tienen una relación de orden específica ni requerimientos especiales de inserción / eliminación.Por lo tanto, un vector se adapta bien a esta situación.


*/

/*
Paginas vistas para responder todo lo anterior o darse una idea 

https://www.geeksforgeeks.org/vector-in-cpp-stl/

https://cplusplus.com/reference/vector/vector/

https://www.tutorialspoint.com/cplusplus/cpp_stl_tutorial.htm

https://www.youtube.com/watch?v=PocJ5jXv8No Este video fue referencia no tiene mucho que ver con el tema 




*/

