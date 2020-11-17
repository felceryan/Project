#include <iostream>
#include <string>

int main(){
    //std::string myString = "TEST TEST";
    //
    //for(auto &c : myString){
    //    c = 'X';
    //}
    //std::cout << myString;
    //1

    //std::string myString = "TEST TEST";
    //
    //for(char &c : myString){
    //    c = 'X';
    //}
    //std::cout << myString; // I predict it will be XXXXXXXXXX
    //2

    //std::string myString = "TEST TEST";
    //decltype (myString.size()) x = 0;
    //while(myString[x] != 'X' && x <= myString.size()){
    //    myString[x] = 'X';
    //    ++x;
    //}
    //std::cout << myString;
    // while version
    
    //std::string myString = "TEST TEST";
    //for(decltype (myString.size()) x = 0; myString[x] != 'X' && x <= myString.size(); ++x){
    //    myString[x] = 'X';
    //}
    //std::cout << myString;
    // traditional for version
    //3

    // std::string s;
    // std::cout << s[1] << std::endl;
    // NOT VALID
    // because s isn't initialised, printing s[1] is undefined and depends on compiler.
    //4

    std::string inputString;
    std::cin >> inputString;

    for(auto &p : inputString)
        if(ispunct(p)){
            p = '\0';
        }
        else{
            if(p <= inputString.size()){
                ++p;
            }
        }
    std::cout << inputString;
    //5

    // const std::string s = "Keep out!";
    // for (auto &c : s) {}
    // Invalid
    // c is a const reference to 'K' basically.
    //6
    
    return 0;
}