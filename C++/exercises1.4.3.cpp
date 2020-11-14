#include <iostream>

int main(){
    int sum = 0;
    
    for (int x = 0; std::cin >> x; sum += x){
    
    }
    
    std::cout << "The sum of the numbers you've just inputted is: " << sum << std::endl;
    
    return 0;
}