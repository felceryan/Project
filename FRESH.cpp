#include <iostream>

int main()
{
    struct Data
    {
        int a = 100;
        int b = 900;
        double c = 15.50;
    } data;
    std::cout << "ive loaded";
    std::cout << data.a;

    return 0;
}