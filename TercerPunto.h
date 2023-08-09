#pragma once

#include <iostream>
#include <vector>
#include <string>


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

/*
La elecci�n de la estructura de datos en el punto 3, que consiste en utilizar un std::vector<Email> para almacenar los correos electr�nicos en la clase Inbox, se basa en varias consideraciones :

Dinamismo del tama�o : Un vector es una estructura de datos de tama�o din�mico, lo que significa que puede crecer y encogerse autom�ticamente seg�n se agreguen o eliminen elementos.Esto es esencial en un sistema de correo electr�nico donde la cantidad de correos electr�nicos puede variar significativamente.


Eficiencia en la inserci�n y eliminaci�n : Los vectores ofrecen una inserci�n eficiente en su extremo posterior, lo cual es com�n en el flujo de trabajo de agregar correos electr�nicos a la bandeja de entrada.Adem�s, aunque la eliminaci�n no es tan eficiente como la inserci�n debido al desplazamiento de elementos, sigue siendo aceptable para la mayor�a de los casos de uso.


Acceso aleatorio : Los vectores permiten un acceso eficiente a elementos individuales mediante �ndices.Dado que los correos electr�nicos pueden ser accedidos por �ndice y necesitamos filtrarlos seg�n diferentes condiciones, esta caracter�stica es importante.


Sencillez : Los vectores son una estructura de datos simple y ampliamente utilizada en C++.Son f�ciles de entender, implementar y utilizar en comparaci�n con estructuras m�s complejas como listas enlazadas.


Buen rendimiento : En la mayor�a de los casos, el rendimiento de los vectores es excelente debido a su uso de memoria contigua y a su eficiente gesti�n de cach�.

Requisitos del problema : En el contexto de un sistema de correo electr�nico, los correos electr�nicos no tienen una relaci�n de orden espec�fica ni requerimientos especiales de inserci�n / eliminaci�n.Por lo tanto, un vector se adapta bien a esta situaci�n.


*/

/*
Paginas vistas para responder todo lo anterior o darse una idea 

https://www.geeksforgeeks.org/vector-in-cpp-stl/

https://cplusplus.com/reference/vector/vector/

https://www.tutorialspoint.com/cplusplus/cpp_stl_tutorial.htm

https://www.youtube.com/watch?v=PocJ5jXv8No Este video fue referencia no tiene mucho que ver con el tema 




*/

