#include <iostream>
#include "utils.h"
#include <vector>

int main()
{
    std::cout << "Hello World." << std::endl;

    std::cout << "5 + 8 = " << Add(5,8) << std::endl;

    std::vector<int> v{1,2,3,4};
    std::cout << v[0] << " " << v.at(1) << std::endl;


    return 0;
}
