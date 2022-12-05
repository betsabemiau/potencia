// potencia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>


double potencias(int Numero, int potencia)
{
    if (potencia == 0)
        return 1;
    else
        return Numero * (potencias(Numero, potencia - 1));
}
int main()
{
    int Numero, potencia;
    std::cout << "pon un numero  ";
    std::cin >> Numero;
    do
    {

        std::cout << "escribe exponente/potencia a la que se potencia el numero \n";
        std::cin >> potencia;

    } while (potencia < 0);

    std::cout << " : " << Numero << "^" << potencia << " tu respuesta es: " << potencias(Numero, potencia) << std::endl;

}