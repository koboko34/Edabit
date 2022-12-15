#include <string>
#include <iostream>
#include <algorithm>

bool isSafeBridge(std::string s)
{
    return std::count(s.begin(), s.end(), ' ') == 0;
}

int main()
{
    std::cout << isSafeBridge("#### ##") << std::endl;
    return 0;
}