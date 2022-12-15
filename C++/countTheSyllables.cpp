#include <string>
#include <iostream>
#include <algorithm>

int numberSyllables(std::string word)
{
    return std::count(word.begin(), word.end(), '-') + 1;
}

int main()
{
    std::string str = "Te-su-ti-ngu";
    
    std::cout << numberSyllables(str) << std::endl;

    std::cin.get();
}