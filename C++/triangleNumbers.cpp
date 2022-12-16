#include <iostream>

int triangle(int n)
{
    return n * (n+1)/2;
}

int main()
{
    std::cout << triangle(6) << std::endl;
    std::cin.get();
}