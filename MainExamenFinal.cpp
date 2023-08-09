// MainExamenFinal.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include "PrimerPunto.h" // Incluye el archivo de encabezado para el Primer Punto
#include "TercerPunto.h" // Incluye el archivo de encabezado para el Tercer Punto

   //Punto 1
int main() {
    RawArray myArray(5);
    std::cout << myArray.MyFunction(-1) << std::endl; // Imprimirá ‘5’
    std::cout << myArray.MyFunction(-2) << std::endl; // Imprimirá ‘4’

    std::cout << std::endl; // Agregar un salto de línea para separar las secciones

   //Punto 3

    // Creación de tres correos electrónicos de ejemplo
    Email email1 = { "Hola", "Hola Como estas", true, false };
    Email email2 = { "Oferta especial", "Descuento del 20 en productos", false, true };
    Email email3 = { "Recordatorio de reunion", "La reunion es manana a las 10 AM.", false, false };

    // Creación de una instancia de la clase Inbox para almacenar los correos electrónicos
    Inbox inbox;
    // Agregando los correos electrónicos a la bandeja de entrada
    inbox.addEmail(email1);
    inbox.addEmail(email2);
    inbox.addEmail(email3);

    // Filtrando los correos electrónicos y almacenando el resultado en un vector
    std::vector<Email> filteredEmails = inbox.filterEmails(FilterOption::All);

    // Imprimiendo los detalles de cada correo electrónico en la lista filtrada
    std::cout << "Todos los correos:\n";
    for (const Email& email : filteredEmails) {
        std::cout << "Asunto: " << email.subject << "\nCuerpo: " << email.body << "\n\n";
    }

    return 0; // Indica que el programa se ha ejecutado correctamente
}

