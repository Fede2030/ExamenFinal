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






