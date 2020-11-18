#include <iostream>
#include <vector>
#include <string>

int main(){
    //std::vector<int> intVec;
    //int intInput;

    //while(std::cin >> intInput){
    //    intVec.push_back(intInput);
    //}
    //1
    
    std::vector<std::string> stringVec;
    std::string stringInput;

    while(std::cin >> stringInput){
        stringVec.push_back(stringInput);
    }
    //2

    return 0;
}