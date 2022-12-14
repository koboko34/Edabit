#include <vector>
#include <cmath>
#include <iostream>

int getAbsSum(std::vector<int> arr)
{
    int total = 0;
    
    for (int& n : arr)
    {
        total += abs(n);
    }

    return total;
}

int main()
{
    int a = getAbsSum({2, -1, -3, 4, 8});
    int b = getAbsSum({-1});
    int c = getAbsSum({-1, -3, -5, -4, -10, 0});
    int d = getAbsSum({8, 9, 10, 32, 101, -10});
    int e = getAbsSum({500});

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;
}