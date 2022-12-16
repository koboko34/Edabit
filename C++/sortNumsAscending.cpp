#include <vector>
#include <iostream>
#include <algorithm>

std::vector<int> sortNumsAscending(std::vector<int> arr)
{
	std::sort(arr.begin(), arr.end());
    return arr;
    
    // // selection sort
    // if (!arr.empty())
    // {
    //     for (int i = 0; i < arr.size(); i++)
    //     {
    //         std::cout << arr[i] << std::endl;
    //         int lowestIndex = i;
            
    //         for (int j = i; j < arr.size(); j++)
    //         {
    //             if (arr[j] < arr[lowestIndex])
    //             {
    //                 lowestIndex = j;
    //             }
    //         }
            
    //         std::iter_swap(arr.begin() + i, arr.begin() + lowestIndex);
    //     }

    //     std::cout << std::endl << std::endl;

    //     for (int i = 0; i < arr.size(); i++)
    //     {
    //         std::cout << arr[i] << std::endl;
    //     }
        
    //     return arr;
    // }
    // return arr;
}

int main()
{
    std::vector<int> a;
    a.push_back(7);
    a.push_back(14);
    a.push_back(8);
    a.push_back(12);
    a.push_back(9);
    a.push_back(23);
    a.push_back(6);
    
    sortNumsAscending(a);
    sortNumsAscending({});
}