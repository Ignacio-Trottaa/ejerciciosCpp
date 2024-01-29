#include <iostream>

int main()
{

    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "\t";
        }
        std::cout << "*" << std::endl;
    }
/*
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            std::cout << "\t";
        }
        std::cout << "*" << std::endl;
    }*/

    for (int i = 0; i <= 5; i++)
    {
        std::cout << "*\t";
    }
}
