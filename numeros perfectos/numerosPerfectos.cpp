#include <iostream>

bool numeroPerfecto(int numero);
void imprimirNumeroPerfecto(int limite);

int main()
{

    int limite = 10000;
    imprimirNumeroPerfecto(limite);
    return 0;
}

bool numeroPerfecto(int numero)
{

    int contPerfecto = 0;
    for (int i = 1; i < numero; i++)
    {
        if (numero % i == 0)
        {
            contPerfecto += i;
        }
    }
    return (contPerfecto == numero);
}

void imprimirNumeroPerfecto(int limite)
{
    for (int j = 0; j < limite; j++)
    {
        if (numeroPerfecto(j))
        {
            std::cout << j << std::endl;
        }
    }
}