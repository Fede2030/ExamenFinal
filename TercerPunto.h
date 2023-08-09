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






