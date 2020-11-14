#include <iostream>

// /* */ */

int main(){
    std::cout << "/*"; // Legal
    std::cout << "*/"; // Legal
    //std::cout << /* "*/" */; // Not Legal
    std::cout << /* "*/" */"; // Fixed and legal
    std::cout << /* "*/" /* "/*" */; // Legal

    return 0;
}