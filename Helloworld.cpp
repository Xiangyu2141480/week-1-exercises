#include <iostream>

double Add(double a, double b)
{
    double c = a + b;
    return c;
}

int main()
{
    std::cout << "Hello World." << std::endl;

    std::cout << "5 + 8 = " << Add(5,8) << std::endl;

    return 0;
}
