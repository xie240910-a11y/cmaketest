#include "sort.h"
#include "calc.h"
#include <algorithm>
#include <iostream>

// void sort(std::vector<int> & vec)
// {
//     std::sort(vec.begin(), vec.end());
//     for (auto x : vec) std::cout << x << " ";
//     std::cout << "\n";
//     int c = add(vec[0], vec[1]);
//     // for (size_t i = 0; i < vec.size(); ++i) {
//     //     std::cout << i << " = " << vec[i] << std::endl;
//     // }
//     std::cout <<"0 = " << vec[0] << std::endl;
//     std::cout <<"1 = " << vec[1] << std::endl;

// }

void sort(std::vector<int> &vec)
{
    std::sort(vec.begin(), vec.end());
    for (auto x : vec)
        std::cout << x << " ";
    std::cout << "\n";
    int c = add(vec[0], vec[1]);
    std::cout << "c = " << c << std::endl;
    std::cout << "0 = " << vec[0] << std::endl;
    std::cout << "1 = " << vec[1] << std::endl;
    std::cout << "2 = " << vec[2] << std::endl;
    std::cout << "3 = " << vec[3] << std::endl;
}