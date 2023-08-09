#include "TercerPunto.h"

// Agrega un nuevo correo electr�nico a la bandeja de entrada
void Inbox::addEmail(const Email& email) {
    emails.push_back(email); // Se agrega el correo a la lista de correos electr�nicos
}

// Elimina un correo electr�nico de la bandeja de entrada dado su �ndice
void Inbox::deleteEmail(size_t index) {
    if (index >= 0 && index < emails.size()) {
        emails.erase(emails.begin() + index); // Se elimina el correo de la lista de correos electr�nicos
    }
}

// Filtra los correos electr�nicos seg�n la opci�n de filtrado seleccionada y devuelve la lista filtrada
std::vector<Email> Inbox::filterEmails(FilterOption filterOption) {
    std::vector<Email> filteredEmails; // Vector para almacenar los correos electr�nicos filtrados
    for (const Email& email : emails) {
        switch (filterOption) {
        case FilterOption::All:
            filteredEmails.push_back(email); // Agrega todos los correos a la lista filtrada
            break;
        case FilterOption::Read:
            if (email.isRead) {
                filteredEmails.push_back(email); // Agrega los correos le�dos a la lista filtrada
            }
            break;
        case FilterOption::Unread:
            if (!email.isRead) {
                filteredEmails.push_back(email); // Agrega los correos no le�dos a la lista filtrada
            }
            break;
        case FilterOption::Starred:
            if (email.isStarred) {
                filteredEmails.push_back(email); // Agrega los correos marcados como destacados a la lista filtrada
            }
            break;
        case FilterOption::Unstarred:
            if (!email.isStarred) {
                filteredEmails.push_back(email); // Agrega los correos no marcados como destacados a la lista filtrada
            }
            break;
        }
    }
    return filteredEmails; // Devuelve la lista de correos electr�nicos filtrados
}


