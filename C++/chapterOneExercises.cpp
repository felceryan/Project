#include <iostream>

int main(){
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The product of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 * v2;
    std::cout << "."; 
    std::cout << std::endl;

    // std::cout << "The sum of " << v1;
    // << " and " << v2;
    // << " is " << v1 + v2 << std::endl;
    // This is not legal because the 2nd and 3rd statement dont have std::cout as its left operand since you 
    // did ; after the 1st statement. to fix it i would remove the ; from the 1st line.



    return 0;
}