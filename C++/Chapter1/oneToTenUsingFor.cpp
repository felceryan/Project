#include <iostream>

int main(){
    int sum = 0;
    
    for (int val = 1; val <= 10; ++val){
        sum += val;
    }
    std::cout << "The sum of 1 to 10 inclusive: " << sum << std::endl;

    return 0;
}