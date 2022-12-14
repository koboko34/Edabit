#include <string>
#include <iostream>

std::string longBurp(int num)
{
    return "Bu" + std::string(num, 'r') + "p";
}

int main()
{
    std::cout << longBurp(5) << std::endl;
    
    std::cin.get();
}