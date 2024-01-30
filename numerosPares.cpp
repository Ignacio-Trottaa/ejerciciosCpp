#include <iostream>

int numeroPar(int numero);


int main()
{
    int numero = 0;
    numeroPar(numero);
    return 0;
}

int numeroPar(int numero)
{
    for (numero = 0; numero <= 100; numero += 2)
    {
        std::cout << numero << std::endl;
    }
}