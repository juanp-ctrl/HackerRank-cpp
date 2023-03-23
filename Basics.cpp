#include <iostream>

int main()
{
    int tests, p,  e;

    std::cin >> tests;      //std es el nombre del namespace, los :: es para acceder a los elementos de la clase iostream que incluimos

    for (int i = 0; i < tests; i++) {
        std::cin >> p;      //Sacar del flujo de entrada
        std::cin >> e;
        std::string result = ((p - e) >= 10) ? "YES\n" : "NO\n";
        std::cout << result;        //Ingresar al flujo de salida
    }
    return 0;
}

