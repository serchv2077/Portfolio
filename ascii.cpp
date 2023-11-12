#include <iostream>
#include <conio.h> // libreria que nos ayuda a nos presionar enter
#include <cctype>  // para los caracteres especiales

int main() {
    char tecla;

    std::cout << "Presiona una tecla. Pulsa 'q' para salir." << std::endl;

    do {                           // para mantenerse en bucle
        tecla = _getch();                //leer la tecla sin dar enter
        std::cout << "Tecla presionada: " << tecla << " (ASCII: " << int(tecla) << ") - ";

        if (isalpha(tecla)) {                // leer si la letra es mayucula
            if (isupper(tecla)) {             //leer si es minuscula
                std::cout << "Es una letra mayuscula." << std::endl;
            } else if (islower(tecla)) {
                std::cout << "Es una letra minuscula." << std::endl;
            }
        } else if (isdigit(tecla)) {  // leer si es un numero.
            std::cout << "Es un numero." << std::endl;
        } else {
            std::cout << "Es un caracter especial." << std::endl;
        }
    } while (tecla != 'q');  // para darle un fin a nuestro bucle.

    return 0;
}
